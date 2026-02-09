#pragma once
// IWYU pragma private; include "System/Data/TreeAccessMethod.hpp"
#include "System/Data/zzzz__TreeAccessMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::TreeAccessMethod::TreeAccessMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::TreeAccessMethod::TreeAccessMethod()   {
}
constexpr ::System::Data::TreeAccessMethod  System::Data::TreeAccessMethod::KEY_SEARCH_AND_INDEX{static_cast<int32_t>(0x1)};
constexpr ::System::Data::TreeAccessMethod  System::Data::TreeAccessMethod::INDEX_ONLY{static_cast<int32_t>(0x2)};
