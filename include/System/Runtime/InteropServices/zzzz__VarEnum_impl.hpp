#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/VarEnum.hpp"
#include "System/Runtime/InteropServices/zzzz__VarEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::VarEnum::VarEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::VarEnum::VarEnum()   {
}
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_EMPTY{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_NULL{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_I2{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_I4{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_R4{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_R8{static_cast<int32_t>(0x5)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_CY{static_cast<int32_t>(0x6)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_DATE{static_cast<int32_t>(0x7)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_BSTR{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_DISPATCH{static_cast<int32_t>(0x9)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_ERROR{static_cast<int32_t>(0xa)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_BOOL{static_cast<int32_t>(0xb)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_VARIANT{static_cast<int32_t>(0xc)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UNKNOWN{static_cast<int32_t>(0xd)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_DECIMAL{static_cast<int32_t>(0xe)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_I1{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UI1{static_cast<int32_t>(0x11)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UI2{static_cast<int32_t>(0x12)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UI4{static_cast<int32_t>(0x13)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_I8{static_cast<int32_t>(0x14)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UI8{static_cast<int32_t>(0x15)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_INT{static_cast<int32_t>(0x16)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_UINT{static_cast<int32_t>(0x17)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_VOID{static_cast<int32_t>(0x18)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_HRESULT{static_cast<int32_t>(0x19)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_PTR{static_cast<int32_t>(0x1a)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_SAFEARRAY{static_cast<int32_t>(0x1b)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_CARRAY{static_cast<int32_t>(0x1c)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_USERDEFINED{static_cast<int32_t>(0x1d)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_LPSTR{static_cast<int32_t>(0x1e)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_LPWSTR{static_cast<int32_t>(0x1f)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_RECORD{static_cast<int32_t>(0x24)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_FILETIME{static_cast<int32_t>(0x40)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_BLOB{static_cast<int32_t>(0x41)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_STREAM{static_cast<int32_t>(0x42)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_STORAGE{static_cast<int32_t>(0x43)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_STREAMED_OBJECT{static_cast<int32_t>(0x44)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_STORED_OBJECT{static_cast<int32_t>(0x45)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_BLOB_OBJECT{static_cast<int32_t>(0x46)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_CF{static_cast<int32_t>(0x47)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_CLSID{static_cast<int32_t>(0x48)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_VECTOR{static_cast<int32_t>(0x1000)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_ARRAY{static_cast<int32_t>(0x2000)};
constexpr ::System::Runtime::InteropServices::VarEnum  System::Runtime::InteropServices::VarEnum::VT_BYREF{static_cast<int32_t>(0x4000)};
