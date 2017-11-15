# ProviderMergeProperties

ProviderMergeProperties is a macOS kernel extension derived from the open source AppleUSBMergeNub, with similar functionality. Its only function is to merge device properties into the I/O Registry, the driver will never probe successfully.

### Configuration

Modify Info.plist to include the required IOKitPersonalities. The ```IOProviderMergeProperties``` key takes a dictionary that is merged into the matched providers.

The following personality adds the ```non-removable``` and ```built-in``` properties to a USB device.

    <key>Internal Bluetooth</key>
    <dict>
        <key>CFBundleIdentifier</key>
        <string>com.apple.driver.ProviderMergeProperties</string>
        <key>IOClass</key>
        <string>VUProviderMergeProperties</string>
        <key>IOProviderClass</key>
        <string>IOUSBDevice</string>
        <key>IOProviderMergeProperties</key>
        <dict>
            <key>non-removable</key>
            <true/>
            <key>built-in</key>
            <true/>
        </dict>
        <key>idProduct</key>
        <integer>1</integer>
        <key>idVendor</key>
        <integer>2578</integer>
    </dict>

Sample configurations are located in the [Info.plist.samples](./Info.plist.samples) directory.

### Installing

ProviderMergeProperties.kext can be installed to /Library/Extensions - or alternatively loaded by appropriate software.

## Authors

* Apple Inc. - *AppleUSBMergeNub* [Source](https://opensource.apple.com/source/IOUSBFamily/IOUSBFamily-630.4.5/AppleUSBMergeNub/)

## License

[Apple Public Source License Version 2.0](https://tldrlegal.com/license/apple-public-source-license-2.0-(apsl))

