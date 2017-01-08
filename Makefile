
PROJECT=XcodeCITest.xcodeproj
SCHEME=XcodeCITest
CONFIGURATION_DEBUG=Debug

test:
	xcodebuild \
		-project $(PROJECT) \
		-scheme $(SCHEME) \
		-configuration $(CONFIGURATION_DEBUG) \
		clean build test
