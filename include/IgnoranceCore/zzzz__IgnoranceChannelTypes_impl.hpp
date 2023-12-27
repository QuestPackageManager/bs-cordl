#pragma once
#include "IgnoranceCore/zzzz__IgnoranceChannelTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceChannelTypes::IgnoranceChannelTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceChannelTypes::IgnoranceChannelTypes() {}
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::Reliable{ static_cast<int32_t>(0x1) };
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::ReliableUnsequenced{ static_cast<int32_t>(0x3) };
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::Unreliable{ static_cast<int32_t>(0x2) };
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::UnreliableFragmented{ static_cast<int32_t>(0x8) };
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::UnreliableSequenced{ static_cast<int32_t>(0x0) };
constexpr ::IgnoranceCore::IgnoranceChannelTypes IgnoranceCore::IgnoranceChannelTypes::Unthrottled{ static_cast<int32_t>(0x20) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
