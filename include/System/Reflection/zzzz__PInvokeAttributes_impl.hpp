#pragma once
// IWYU pragma private; include "System/Reflection/PInvokeAttributes.hpp"
#include "System/Reflection/zzzz__PInvokeAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PInvokeAttributes::PInvokeAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::PInvokeAttributes::PInvokeAttributes()   {
}
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::NoMangle{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CharSetMask{static_cast<int32_t>(0x6)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CharSetNotSpec{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CharSetAnsi{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CharSetUnicode{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CharSetAuto{static_cast<int32_t>(0x6)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::BestFitUseAssem{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::BestFitEnabled{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::BestFitDisabled{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::BestFitMask{static_cast<int32_t>(0x30)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharUseAssem{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharEnabled{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharDisabled{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::ThrowOnUnmappableCharMask{static_cast<int32_t>(0x3000)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::SupportsLastError{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvMask{static_cast<int32_t>(0x700)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvWinapi{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvCdecl{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvStdcall{static_cast<int32_t>(0x300)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvThiscall{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::CallConvFastcall{static_cast<int32_t>(0x500)};
constexpr ::System::Reflection::PInvokeAttributes  System::Reflection::PInvokeAttributes::MaxValue{static_cast<int32_t>(0xffff)};
