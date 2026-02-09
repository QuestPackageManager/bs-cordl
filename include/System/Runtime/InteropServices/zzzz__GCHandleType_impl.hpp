#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/GCHandleType.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::GCHandleType::GCHandleType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::GCHandleType::GCHandleType()   {
}
constexpr ::System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Weak{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::WeakTrackResurrection{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Normal{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Pinned{static_cast<int32_t>(0x3)};
