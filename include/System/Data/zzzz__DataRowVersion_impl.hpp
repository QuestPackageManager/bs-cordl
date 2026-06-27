#pragma once
// IWYU pragma private; include "System/Data/DataRowVersion.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataRowVersion::DataRowVersion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::DataRowVersion::DataRowVersion()   {
}
constexpr ::System::Data::DataRowVersion  System::Data::DataRowVersion::Original{static_cast<int32_t>(0x100)};
constexpr ::System::Data::DataRowVersion  System::Data::DataRowVersion::Current{static_cast<int32_t>(0x200)};
constexpr ::System::Data::DataRowVersion  System::Data::DataRowVersion::Proposed{static_cast<int32_t>(0x400)};
constexpr ::System::Data::DataRowVersion  System::Data::DataRowVersion::Default{static_cast<int32_t>(0x600)};
