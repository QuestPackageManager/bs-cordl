#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserAttributeSubpacketTag.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag::UserAttributeSubpacketTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag::UserAttributeSubpacketTag() {}
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag::ImageAttribute{ static_cast<int32_t>(0x1) };
