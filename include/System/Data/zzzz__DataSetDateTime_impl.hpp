#pragma once
// IWYU pragma private; include "System/Data/DataSetDateTime.hpp"
#include "System/Data/zzzz__DataSetDateTime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataSetDateTime::DataSetDateTime(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::DataSetDateTime::DataSetDateTime()   {
}
constexpr ::System::Data::DataSetDateTime  System::Data::DataSetDateTime::Local{static_cast<int32_t>(0x1)};
constexpr ::System::Data::DataSetDateTime  System::Data::DataSetDateTime::Unspecified{static_cast<int32_t>(0x2)};
constexpr ::System::Data::DataSetDateTime  System::Data::DataSetDateTime::UnspecifiedLocal{static_cast<int32_t>(0x3)};
constexpr ::System::Data::DataSetDateTime  System::Data::DataSetDateTime::Utc{static_cast<int32_t>(0x4)};
