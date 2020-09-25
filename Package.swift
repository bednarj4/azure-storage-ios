// swift-tools-version:5.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "azure-storage-ios",
    products: [
        .library(name: "AZSClient",
                 targets: ["AZSClient"]),
    ],
    dependencies: [ ],
    targets: [
        .target(name: "AZSClient",
                dependencies: [],
                path: "Lib/Azure Storage Client Library/Azure Storage Client Library")
    ]
)
