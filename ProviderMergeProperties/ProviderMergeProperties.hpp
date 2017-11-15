#include <IOKit/IOService.h>
#define ProviderMergeProperties VUProviderMergeProperties

class ProviderMergeProperties : public IOService
{
    OSDeclareDefaultStructors(ProviderMergeProperties)
public:
    virtual IOService *probe(IOService *provider, SInt32 *score) override;
    virtual bool mergeProperties(IOService *provider, OSDictionary *properties);
    virtual bool mergeDictionaries(OSDictionary *source,  OSDictionary *target);
};
