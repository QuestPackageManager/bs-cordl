#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ClassInterfaceType.hpp"
#include "System/Runtime/InteropServices/zzzz__ClassInterfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::ClassInterfaceType::ClassInterfaceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ClassInterfaceType::ClassInterfaceType()   {
}
constexpr ::System::Runtime::InteropServices::ClassInterfaceType  System::Runtime::InteropServices::ClassInterfaceType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::ClassInterfaceType  System::Runtime::InteropServices::ClassInterfaceType::AutoDispatch{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::ClassInterfaceType  System::Runtime::InteropServices::ClassInterfaceType::AutoDual{static_cast<int32_t>(0x2)};
