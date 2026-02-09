#pragma once
// IWYU pragma private; include "System/Data/MappingType.hpp"
#include "System/Data/zzzz__MappingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::MappingType::MappingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::MappingType::MappingType()   {
}
constexpr ::System::Data::MappingType  System::Data::MappingType::Element{static_cast<int32_t>(0x1)};
constexpr ::System::Data::MappingType  System::Data::MappingType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Data::MappingType  System::Data::MappingType::SimpleContent{static_cast<int32_t>(0x3)};
constexpr ::System::Data::MappingType  System::Data::MappingType::Hidden{static_cast<int32_t>(0x4)};
