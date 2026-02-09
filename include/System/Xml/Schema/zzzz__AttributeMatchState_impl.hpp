#pragma once
// IWYU pragma private; include "System/Xml/Schema/AttributeMatchState.hpp"
#include "System/Xml/Schema/zzzz__AttributeMatchState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::AttributeMatchState::AttributeMatchState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AttributeMatchState::AttributeMatchState()   {
}
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::AttributeFound{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::AnyIdAttributeFound{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::UndeclaredElementAndAttribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::UndeclaredAttribute{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::AnyAttributeLax{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::AnyAttributeSkip{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::ProhibitedAnyAttribute{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::ProhibitedAttribute{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::AttributeNameMismatch{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::AttributeMatchState  System::Xml::Schema::AttributeMatchState::ValidateAttributeInvalidCall{static_cast<int32_t>(0x9)};
