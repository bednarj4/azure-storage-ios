// swift-tools-version:5.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "azure-storage-ios",
    products: [
        .library(name: "AZSClient",
                 targets: ["AZSClient"]),
        .library(name: "AZSClientObjC",
                 targets: ["AZSClientObjC"]),
    ],
    dependencies: [ ],
    targets: [
        .target(name: "AZSClient",
                dependencies: ["AZSClientObjC"],
                path: "Lib/Azure Storage Client Library/SwiftSources"),
        .target(name: "AZSClientObjC",
                dependencies: [],
                path: "Lib/Azure Storage Client Library/Azure Storage Client Library",
                cSettings: [
                      .headerSearchPath("Lib/Azure Storage Client Library/Azure Storage Client Library"),
                   ])
    ]
)
