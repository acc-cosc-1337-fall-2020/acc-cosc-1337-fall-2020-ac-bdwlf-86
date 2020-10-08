#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get GC Content") {

    std::string dna = "AGCTATAG";
    REQUIRE(get_gc_content(dna) == 37.50);

    std::string dna2 = "CGCTATAG";
    REQUIRE(get_gc_content(dna2) == 50.00);
}

TEST_CASE("Test Get Reverse String"){
    std::string dna = "AGCTATAG";
    REQUIRE(get_reverse_string(dna) == "GATATCGA");

    std::string dna2 = "CGCTATAG";
    REQUIRE(get_reverse_string(dna2) == "GATATCGC");
}

TEST_CASE("Test Get DNA Complement"){
    std::string dna = "AAAACCCGGT";
    REQUIRE(get_dna_complement(dna) == "ACCGGGTTTT");

    std::string dna2 = "CCCGGAAAAT";
    REQUIRE(get_dna_complement(dna2) == "ATTTTCCGGG");
}
