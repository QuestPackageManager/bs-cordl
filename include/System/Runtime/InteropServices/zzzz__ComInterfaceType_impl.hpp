#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComInterfaceType.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::ComInterfaceType::ComInterfaceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComInterfaceType::ComInterfaceType()   {
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsDual{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIUnknown{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIDispatch{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIInspectable{static_cast<int32_t>(0x3)};
