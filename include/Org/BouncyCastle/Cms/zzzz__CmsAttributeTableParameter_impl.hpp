#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableParameter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter::CmsAttributeTableParameter(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter::CmsAttributeTableParameter() {}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter Org::BouncyCastle::Cms::CmsAttributeTableParameter::ContentType{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter Org::BouncyCastle::Cms::CmsAttributeTableParameter::Digest{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter Org::BouncyCastle::Cms::CmsAttributeTableParameter::Signature{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter Org::BouncyCastle::Cms::CmsAttributeTableParameter::DigestAlgorithmIdentifier{ static_cast<int32_t>(0x3) };
