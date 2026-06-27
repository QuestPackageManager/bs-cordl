#pragma once
// IWYU pragma private; include "UnityEngine/JNINativeMethod.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__JNINativeMethod_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "signature", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fnPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JNINativeMethod::JNINativeMethod(::StringW  name, ::StringW  signature, ::System::IntPtr  fnPtr) noexcept  {
this->name = name;
this->signature = signature;
this->fnPtr = fnPtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::JNINativeMethod::JNINativeMethod()   {
}
