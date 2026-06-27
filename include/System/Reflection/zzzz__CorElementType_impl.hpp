#pragma once
// IWYU pragma private; include "System/Reflection/CorElementType.hpp"
#include "System/Reflection/zzzz__CorElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::CorElementType::CorElementType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::CorElementType::CorElementType()   {
}
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::End{static_cast<uint8_t>(0x0u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Void{static_cast<uint8_t>(0x1u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Boolean{static_cast<uint8_t>(0x2u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Char{static_cast<uint8_t>(0x3u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::I1{static_cast<uint8_t>(0x4u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::U1{static_cast<uint8_t>(0x5u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::I2{static_cast<uint8_t>(0x6u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::U2{static_cast<uint8_t>(0x7u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::I4{static_cast<uint8_t>(0x8u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::U4{static_cast<uint8_t>(0x9u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::I8{static_cast<uint8_t>(0xau)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::U8{static_cast<uint8_t>(0xbu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::R4{static_cast<uint8_t>(0xcu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::R8{static_cast<uint8_t>(0xdu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::String{static_cast<uint8_t>(0xeu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Ptr{static_cast<uint8_t>(0xfu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ByRef{static_cast<uint8_t>(0x10u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ValueType{static_cast<uint8_t>(0x11u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Class{static_cast<uint8_t>(0x12u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Var{static_cast<uint8_t>(0x13u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Array{static_cast<uint8_t>(0x14u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::GenericInst{static_cast<uint8_t>(0x15u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::TypedByRef{static_cast<uint8_t>(0x16u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::I{static_cast<uint8_t>(0x18u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::U{static_cast<uint8_t>(0x19u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::FnPtr{static_cast<uint8_t>(0x1bu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Object{static_cast<uint8_t>(0x1cu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::SzArray{static_cast<uint8_t>(0x1du)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::MVar{static_cast<uint8_t>(0x1eu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::CModReqd{static_cast<uint8_t>(0x1fu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::CModOpt{static_cast<uint8_t>(0x20u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Internal{static_cast<uint8_t>(0x21u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Max{static_cast<uint8_t>(0x22u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Modifier{static_cast<uint8_t>(0x40u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Sentinel{static_cast<uint8_t>(0x41u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::Pinned{static_cast<uint8_t>(0x45u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_END{static_cast<uint8_t>(0x0u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VOID{static_cast<uint8_t>(0x1u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_BOOLEAN{static_cast<uint8_t>(0x2u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CHAR{static_cast<uint8_t>(0x3u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I1{static_cast<uint8_t>(0x4u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U1{static_cast<uint8_t>(0x5u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I2{static_cast<uint8_t>(0x6u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U2{static_cast<uint8_t>(0x7u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I4{static_cast<uint8_t>(0x8u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U4{static_cast<uint8_t>(0x9u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I8{static_cast<uint8_t>(0xau)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U8{static_cast<uint8_t>(0xbu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_R4{static_cast<uint8_t>(0xcu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_R8{static_cast<uint8_t>(0xdu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_STRING{static_cast<uint8_t>(0xeu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_PTR{static_cast<uint8_t>(0xfu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_BYREF{static_cast<uint8_t>(0x10u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VALUETYPE{static_cast<uint8_t>(0x11u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CLASS{static_cast<uint8_t>(0x12u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VAR{static_cast<uint8_t>(0x13u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_ARRAY{static_cast<uint8_t>(0x14u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_GENERICINST{static_cast<uint8_t>(0x15u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_TYPEDBYREF{static_cast<uint8_t>(0x16u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I{static_cast<uint8_t>(0x18u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U{static_cast<uint8_t>(0x19u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_FNPTR{static_cast<uint8_t>(0x1bu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_OBJECT{static_cast<uint8_t>(0x1cu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_SZARRAY{static_cast<uint8_t>(0x1du)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MVAR{static_cast<uint8_t>(0x1eu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CMOD_REQD{static_cast<uint8_t>(0x1fu)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CMOD_OPT{static_cast<uint8_t>(0x20u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_INTERNAL{static_cast<uint8_t>(0x21u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MAX{static_cast<uint8_t>(0x22u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MODIFIER{static_cast<uint8_t>(0x40u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_SENTINEL{static_cast<uint8_t>(0x41u)};
constexpr ::System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_PINNED{static_cast<uint8_t>(0x45u)};
