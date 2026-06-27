#pragma once
// IWYU pragma private; include "System/Xml/Schema/RestrictionFlags.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::RestrictionFlags::RestrictionFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RestrictionFlags::RestrictionFlags()   {
}
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::Length{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MinLength{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MaxLength{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::Pattern{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::Enumeration{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::WhiteSpace{static_cast<int32_t>(0x20)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MaxInclusive{static_cast<int32_t>(0x40)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MaxExclusive{static_cast<int32_t>(0x80)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MinInclusive{static_cast<int32_t>(0x100)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::MinExclusive{static_cast<int32_t>(0x200)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::TotalDigits{static_cast<int32_t>(0x400)};
constexpr ::System::Xml::Schema::RestrictionFlags  System::Xml::Schema::RestrictionFlags::FractionDigits{static_cast<int32_t>(0x800)};
