#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionKind.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::CollectionKind::CollectionKind(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CollectionKind::CollectionKind() {}
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::None{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::GenericDictionary{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::Dictionary{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::GenericList{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::GenericCollection{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::List{ static_cast<uint8_t>(0x5u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::GenericEnumerable{ static_cast<uint8_t>(0x6u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::Collection{ static_cast<uint8_t>(0x7u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::Enumerable{ static_cast<uint8_t>(0x8u) };
constexpr ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionKind::Array{ static_cast<uint8_t>(0x9u) };
