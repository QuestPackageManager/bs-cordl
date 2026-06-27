#pragma once
// IWYU pragma private; include "UnityEngine/EnumData.hpp"
#include "UnityEngine/zzzz__EnumData_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<::System::Enum*,::Array<::System::Enum*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flagValues", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayNames", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "names", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tooltip", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlyingType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cordl_unsigned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "serializable", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EnumData::EnumData(::ArrayW<::System::Enum*,::Array<::System::Enum*>*>  values, ::ArrayW<int32_t,::Array<int32_t>*>  flagValues, ::ArrayW<::StringW,::Array<::StringW>*>  displayNames, ::ArrayW<::StringW,::Array<::StringW>*>  names, ::ArrayW<::StringW,::Array<::StringW>*>  tooltip, bool  flags, ::System::Type*  underlyingType, bool  _cordl_unsigned, bool  serializable) noexcept  {
this->values = values;
this->flagValues = flagValues;
this->displayNames = displayNames;
this->names = names;
this->tooltip = tooltip;
this->flags = flags;
this->underlyingType = underlyingType;
this->_cordl_unsigned = _cordl_unsigned;
this->serializable = serializable;
}
// Ctor Parameters []
constexpr ::UnityEngine::EnumData::EnumData()   {
}
