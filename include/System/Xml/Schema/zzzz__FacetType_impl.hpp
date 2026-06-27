#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetType.hpp"
#include "System/Xml/Schema/zzzz__FacetType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::FacetType::FacetType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::FacetType::FacetType()   {
}
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::Length{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MinLength{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MaxLength{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::Pattern{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::Whitespace{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::Enumeration{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MinExclusive{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MinInclusive{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MaxExclusive{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::MaxInclusive{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::TotalDigits{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::Schema::FacetType  System::Xml::Schema::FacetType::FractionDigits{static_cast<int32_t>(0xc)};
