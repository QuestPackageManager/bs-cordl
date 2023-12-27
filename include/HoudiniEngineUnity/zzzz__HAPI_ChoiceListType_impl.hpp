#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ChoiceListType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_ChoiceListType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_ChoiceListType() {}
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_NORMAL{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_MINI{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_REPLACE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_ChoiceListType HoudiniEngineUnity::HAPI_ChoiceListType::HAPI_CHOICELISTTYPE_TOGGLE{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
