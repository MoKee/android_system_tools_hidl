#include "NamedType.h"

namespace android {

NamedType::NamedType() {}

void NamedType::setLocalName(const std::string &localName) {
    mLocalName = localName;
}

void NamedType::setFullName(const FQName &fullName) {
    mFullName = fullName;
}

std::string NamedType::name() const {
    return mLocalName;
}

std::string NamedType::fullName() const {
    return mLocalName; // XXX mFullName.string();
}

}  // namespace android
