load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "hello",
    hdrs = ["hello.h"],
    srcs = ["hello.cc"],
)
cc_test(
    name = "hello_test",
    srcs = ["hello_test.cc"],
    deps = [
	":hello",
	"@gtest//:gtest",
        "@gtest//:gtest_main"	    
    ],
)
