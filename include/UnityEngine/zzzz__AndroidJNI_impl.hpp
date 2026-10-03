#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJNI_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AndroidJNI_def.hpp"
#include "UnityEngine/zzzz__JNINativeMethod_def.hpp"
#include "UnityEngine/zzzz__jvalue_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJNI_JStringBinding.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AndroidJNI_JStringBinding::*)()>(&::UnityEngine::AndroidJNI_JStringBinding::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e73714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), { ::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI_JStringBinding.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AndroidJNI_JStringBinding::*)()>(&::UnityEngine::AndroidJNI_JStringBinding::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e7883c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::AndroidJNI_JStringBinding::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::AndroidJNI_JStringBinding::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI_JStringBinding>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::AndroidJNI_JStringBinding::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::AndroidJNI_JStringBinding::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding(::System::IntPtr javaString, ::System::IntPtr chars, int32_t length, bool ownsRef) noexcept {
  this->javaString = javaString;
  this->chars = chars;
  this->length = length;
  this->ownsRef = ownsRef;
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNI_JStringBinding::AndroidJNI_JStringBinding() {}
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ReleaseStringChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AndroidJNI_JStringBinding)>(&::UnityEngine::AndroidJNI::ReleaseStringChars)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ReleaseStringChars", {}, { ::i2c::type_of<::UnityEngine::AndroidJNI_JStringBinding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetJavaVM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AndroidJNI::GetJavaVM)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e71cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetJavaVM", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.AttachCurrentThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::AttachCurrentThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e71cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "AttachCurrentThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DetachCurrentThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::DetachCurrentThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e71d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DetachCurrentThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.InvokeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::AndroidJNI::InvokeAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e71d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "InvokeAction", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.InvokeAttached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::AndroidJNI::InvokeAttached)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "InvokeAttached", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AndroidJNI::GetVersion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e71da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FindClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::FindClass)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e71dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FindClass", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromReflectedMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromReflectedMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromReflectedMethod", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromReflectedField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromReflectedField)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromReflectedField", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToReflectedMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::ToReflectedMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e71fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "ToReflectedMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToReflectedField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::ToReflectedField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e72004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "ToReflectedField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSuperclass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetSuperclass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSuperclass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e72094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsAssignableFrom", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.Throw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::Throw)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e720d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "Throw", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ThrowNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::ThrowNew)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e72114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ThrowNew", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionOccurred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AndroidJNI::ExceptionOccurred)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e72294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionOccurred", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionDescribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::ExceptionDescribe)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e722bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionDescribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ExceptionClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::ExceptionClear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e722e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionClear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FatalError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::AndroidJNI::FatalError)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e7230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FatalError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PushLocalFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::AndroidJNI::PushLocalFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7246c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "PushLocalFrame", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.PopLocalFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::PopLocalFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e724a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "PopLocalFrame", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewGlobalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e724e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteGlobalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.QueueDeleteGlobalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::QueueDeleteGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7255c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "QueueDeleteGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetQueueGlobalRefsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::AndroidJNI::GetQueueGlobalRefsCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e72598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetQueueGlobalRefsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CleanQueueGlobalRefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AndroidJNI::CleanQueueGlobalRefs)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e725c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CleanQueueGlobalRefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewWeakGlobalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewWeakGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e725e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewWeakGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteWeakGlobalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteWeakGlobalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteWeakGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewLocalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewLocalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewLocalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.DeleteLocalRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::DeleteLocalRef)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7269c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteLocalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsSameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsSameObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e726d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsSameObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.EnsureLocalCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::AndroidJNI::EnsureLocalCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "EnsureLocalCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.AllocObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::AllocObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "AllocObject", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::NewObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e72794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "NewObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::NewObject)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e72804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "NewObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::NewObjectA)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e72890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "NewObjectA", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetObjectClass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e728e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectClass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.IsInstanceOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::IsInstanceOf)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e72920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsInstanceOf", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetMethodID)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e72964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetFieldID)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e72b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticMethodID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticMethodID)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e72d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "GetStaticMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFieldID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW, ::StringW)>(&::UnityEngine::AndroidJNI::GetStaticFieldID)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6e72f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "GetStaticFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e731a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringFromStr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewStringFromStr)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e731a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringFromStr", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<char16_t>)>(&::UnityEngine::AndroidJNI::NewString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e73310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringUTF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::UnityEngine::AndroidJNI::NewStringUTF)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e73410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringUTF", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringChars)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6e73578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringChars", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringCharsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringCharsInternal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e736ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringCharsInternal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e73784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringUTFLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringUTFLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e737c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringUTFLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringUTFChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringUTFChars)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e737fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringUTFChars", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e7390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStringMethod)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e7397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e739e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStringMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(
    &::UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e73b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStringMethodUnsafeInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallObjectMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e73c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(
    &::UnityEngine::AndroidJNI::CallObjectMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e73c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallObjectMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e73d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallObjectMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallIntMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e73d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallIntMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e73dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallIntMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e73e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "CallIntMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallBooleanMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e73eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallBooleanMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e73f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallBooleanMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e73fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallBooleanMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallShortMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e74000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallShortMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e74070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallShortMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e740fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallShortMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallByteMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e74150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallSByteMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e74154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallSByteMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e741c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallSByteMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallSByteMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallCharMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e742a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallCharMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e74314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallCharMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e743a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "CallCharMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallFloatMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e743f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallFloatMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e74464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallFloatMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e744f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallFloatMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallDoubleMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e74544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallDoubleMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e745b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallDoubleMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallDoubleMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallLongMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e74694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallLongMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e74704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallLongMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "CallLongMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallVoidMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e747e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallVoidMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e74854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallVoidMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallVoidMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e748e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "CallVoidMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringField)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e74934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringFieldInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStringFieldInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e74a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringFieldInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetObjectField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetBooleanField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetBooleanField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetSByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetCharField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetCharField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetShortField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetShortField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetIntField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetIntField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetLongField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetLongField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFloatField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetFloatField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDoubleField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDoubleField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStringField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::SetStringField)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e74ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetObjectField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetObjectField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "SetObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::SetBooleanField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, uint8_t)>(&::UnityEngine::AndroidJNI::SetByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetSByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int8_t)>(&::UnityEngine::AndroidJNI::SetSByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetCharField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, char16_t)>(&::UnityEngine::AndroidJNI::SetCharField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e750bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetShortField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int16_t)>(&::UnityEngine::AndroidJNI::SetShortField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetIntField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::SetIntField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetLongField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int64_t)>(&::UnityEngine::AndroidJNI::SetLongField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e751b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetFloatField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::AndroidJNI::SetFloatField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e7520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetDoubleField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, double_t)>(&::UnityEngine::AndroidJNI::SetDoubleField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e752b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(
    &::UnityEngine::AndroidJNI::CallStaticStringMethod)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e75324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e75390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticStringMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(
    &::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e754dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticStringMethodUnsafeInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e755b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(
    &::UnityEngine::AndroidJNI::CallStaticObjectMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticObjectMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e756b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticObjectMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticIntMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticIntMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticIntMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e758c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticBooleanMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticBooleanMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e759a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticShortMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticShortMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticShortMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticByteMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e75af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticSByteMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticSByteMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticCharMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticCharMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticCharMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticFloatMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticFloatMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e75eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e75f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticDoubleMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticDoubleMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e7603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticLongMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e760ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticLongMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticLongMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::ArrayW<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e7618c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Span_1<::UnityEngine::jvalue>)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethod)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e761fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                            { "CallStaticVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticVoidMethodUnsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*)>(&::UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "CallStaticVoidMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticStringField)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e762dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringFieldInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJNI_JStringBinding (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticStringFieldInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e76418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticStringFieldInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticObjectField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticObjectField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e764dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticBooleanField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticBooleanField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticSByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticSByteField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e765a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticCharField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticCharField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e765ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticShortField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticShortField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticIntField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticIntField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticLongField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticLongField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e766b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFloatField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticFloatField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e766fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticDoubleField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetStaticDoubleField)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticStringField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::StringW)>(&::UnityEngine::AndroidJNI::SetStaticStringField)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e76784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticObjectField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetStaticObjectField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "SetStaticObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticBooleanField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::AndroidJNI::SetStaticBooleanField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, uint8_t)>(&::UnityEngine::AndroidJNI::SetStaticByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e769bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticSByteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int8_t)>(&::UnityEngine::AndroidJNI::SetStaticSByteField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticCharField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, char16_t)>(&::UnityEngine::AndroidJNI::SetStaticCharField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticShortField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int16_t)>(&::UnityEngine::AndroidJNI::SetStaticShortField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticIntField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::SetStaticIntField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticLongField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int64_t)>(&::UnityEngine::AndroidJNI::SetStaticLongField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticFloatField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::AndroidJNI::SetStaticFloatField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticDoubleField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, double_t)>(&::UnityEngine::AndroidJNI::SetStaticDoubleField)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetStaticDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ConvertToBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<bool>)>(&::UnityEngine::AndroidJNI::ConvertToBooleanArray)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e76c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ConvertToBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<bool>)>(&::UnityEngine::AndroidJNI::ToBooleanArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e76d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<uint8_t>)>(&::UnityEngine::AndroidJNI::ToByteArray)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e76d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int8_t>)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToSByteArray", {}, { ::i2c::type_of<::ArrayW<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToSByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int8_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToSByteArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToSByteArray", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<char16_t>)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToCharArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToCharArray", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int16_t>)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToShortArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int16_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToShortArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e76fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToShortArray", {}, { ::i2c::type_of<int16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int32_t>)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToIntArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToIntArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToIntArray", {}, { ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<int64_t>)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e770c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToLongArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToLongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int64_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToLongArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e7711c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToLongArray", {}, { ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<float_t>)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToFloatArray", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(float_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToFloatArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e771b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToFloatArray", {}, { ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<double_t>)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e771f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToDoubleArray", {}, { ::i2c::type_of<::ArrayW<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(double_t*, int32_t)>(&::UnityEngine::AndroidJNI::ToDoubleArray)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e7724c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToDoubleArray", {}, { ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr*, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "ToObjectArray", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr>, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e772e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToObjectArray", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::System::IntPtr>)>(&::UnityEngine::AndroidJNI::ToObjectArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e77348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToObjectArray", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromBooleanArray)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e77350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromBooleanArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromByteArray)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e774b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromByteArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromSByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromSByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromSByteArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromCharArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7764c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromCharArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromShortArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromShortArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromIntArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e776c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromIntArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromLongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromLongArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromLongArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromFloatArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<double_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromDoubleArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromDoubleArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IntPtr> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::FromObjectArray)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e777b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromObjectArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetArrayLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetArrayLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewBooleanArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewBooleanArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewBooleanArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7798c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewByteArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewSByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewSByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e779c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewSByteArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewCharArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewCharArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewShortArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewShortArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewShortArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewIntArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewIntArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewLongArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewLongArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewLongArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewFloatArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewFloatArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewFloatArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDoubleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::NewDoubleArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e77b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDoubleArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewObjectArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::NewObjectArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "NewObjectArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetBooleanArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetByteArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetByteArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetSByteArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetSByteArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetCharArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetCharArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetCharArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetShortArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetShortArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetShortArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetIntArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetIntArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetIntArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetLongArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetLongArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetLongArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFloatArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetFloatArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFloatArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDoubleArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetDoubleArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDoubleArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetObjectArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::GetObjectArrayElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e77e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint8_t)>(&::UnityEngine::AndroidJNI::SetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e77e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetBooleanArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool)>(&::UnityEngine::AndroidJNI::SetBooleanArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetByteArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int8_t)>(&::UnityEngine::AndroidJNI::SetByteArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetSByteArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int8_t)>(&::UnityEngine::AndroidJNI::SetSByteArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetSByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetCharArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, char16_t)>(&::UnityEngine::AndroidJNI::SetCharArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e77fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetCharArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetShortArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int16_t)>(&::UnityEngine::AndroidJNI::SetShortArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e78010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetShortArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetIntArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::AndroidJNI::SetIntArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e78064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetIntArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetLongArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int64_t)>(&::UnityEngine::AndroidJNI::SetLongArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e780b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetLongArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetFloatArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AndroidJNI::SetFloatArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e7810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetFloatArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetDoubleArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, double_t)>(&::UnityEngine::AndroidJNI::SetDoubleArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e78160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetDoubleArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetObjectArrayElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::SetObjectArrayElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e781b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "SetObjectArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(uint8_t*, int64_t)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e78208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Collections::NativeArray_1<uint8_t>)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e7824c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewDirectByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Unity::Collections::NativeArray_1<int8_t>)>(&::UnityEngine::AndroidJNI::NewDirectByteBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e782a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectBufferAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t* (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectBufferAddress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e78304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectBufferAddress", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectBufferCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectBufferCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e78340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectBufferCapacity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectByteBuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e7837c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectByteBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetDirectSByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int8_t> (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::GetDirectSByteBuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e783c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectSByteBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNatives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::JNINativeMethod>)>(&::UnityEngine::AndroidJNI::RegisterNatives)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e78414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "RegisterNatives", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::JNINativeMethod>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AndroidJNI::RegisterNativesAllocate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e78538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "RegisterNativesAllocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::StringW, ::StringW, ::System::IntPtr)>(&::UnityEngine::AndroidJNI::RegisterNativesSet)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6e78574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "RegisterNativesSet",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                   ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesAndFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::AndroidJNI::RegisterNativesAndFree)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e78740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "RegisterNativesAndFree", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.UnregisterNatives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AndroidJNI::UnregisterNatives)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e78800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "UnregisterNatives", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ReleaseStringChars_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::ReleaseStringChars_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ReleaseStringChars_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FindClass_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::FindClass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e71efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FindClass_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ThrowNew_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::ThrowNew_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e72250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "ThrowNew_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FatalError_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::FatalError_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e72430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FatalError_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetMethodID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetMethodID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e72b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetMethodID_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetFieldID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetFieldID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e72d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFieldID_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticMethodID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetStaticMethodID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e72f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticMethodID_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticFieldID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetStaticFieldID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e73150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticFieldID_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringFromStr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::NewStringFromStr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e732d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringFromStr_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::NewString_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e733d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.NewStringUTF_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::NewStringUTF_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e7353c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringUTF_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringCharsInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(&::UnityEngine::AndroidJNI::GetStringCharsInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e73740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "GetStringCharsInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringUTFChars_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::GetStringUTFChars_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e738c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "GetStringUTFChars_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStringMethodUnsafeInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(
    &::UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e73bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CallStringMethodUnsafeInternal_Injected",
                                                                             {},
                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(),
                                                                               ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStringFieldInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(
    &::UnityEngine::AndroidJNI::GetStringFieldInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "GetStringFieldInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStringField_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::AndroidJNI::SetStringField_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
            { "SetStringField_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.CallStaticStringMethodUnsafeInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::jvalue*, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(
    &::UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e7555c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CallStaticStringMethodUnsafeInternal_Injected",
                                                                             {},
                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(),
                                                                               ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.GetStaticStringFieldInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>)>(
    &::UnityEngine::AndroidJNI::GetStaticStringFieldInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e76488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "GetStaticStringFieldInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.SetStaticStringField_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::AndroidJNI::SetStaticStringField_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e768c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetStaticStringField_Injected",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                                ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ConvertToBooleanArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::ConvertToBooleanArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e76d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ConvertToBooleanArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.ToByteArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AndroidJNI::ToByteArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e76e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToByteArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromBooleanArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AndroidJNI::FromBooleanArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e7746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "FromBooleanArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromByteArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AndroidJNI::FromByteArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e775cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                { "FromByteArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.FromObjectArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AndroidJNI::FromObjectArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e778d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                         { "FromObjectArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJNI.RegisterNativesSet_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                ::System::IntPtr)>(&::UnityEngine::AndroidJNI::RegisterNativesSet_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e78794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                             { "RegisterNativesSet_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AndroidJNI::ReleaseStringChars(::UnityEngine::AndroidJNI_JStringBinding str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ReleaseStringChars", {}, { ::i2c::type_of<::UnityEngine::AndroidJNI_JStringBinding>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetJavaVM() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetJavaVM", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::AttachCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "AttachCurrentThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AndroidJNI::DetachCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DetachCurrentThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::InvokeAction(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "InvokeAction", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void UnityEngine::AndroidJNI::InvokeAttached(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "InvokeAttached", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline int32_t UnityEngine::AndroidJNI::GetVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FindClass(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FindClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FromReflectedMethod(::System::IntPtr refMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromReflectedMethod", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, refMethod);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FromReflectedField(::System::IntPtr refField) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromReflectedField", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, refField);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToReflectedMethod(::System::IntPtr clazz, ::System::IntPtr methodID, bool isStatic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "ToReflectedMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToReflectedField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool isStatic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "ToReflectedField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, fieldID, isStatic);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetSuperclass(::System::IntPtr clazz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSuperclass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz);
}
inline bool UnityEngine::AndroidJNI::IsAssignableFrom(::System::IntPtr clazz1, ::System::IntPtr clazz2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsAssignableFrom", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz1, clazz2);
}
inline int32_t UnityEngine::AndroidJNI::Throw(::System::IntPtr obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "Throw", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj);
}
inline int32_t UnityEngine::AndroidJNI::ThrowNew(::System::IntPtr clazz, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ThrowNew", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, message);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ExceptionOccurred() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionOccurred", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::ExceptionDescribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionDescribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::ExceptionClear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ExceptionClear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::FatalError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FatalError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline int32_t UnityEngine::AndroidJNI::PushLocalFrame(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "PushLocalFrame", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::PopLocalFrame(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "PopLocalFrame", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewGlobalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteGlobalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::QueueDeleteGlobalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "QueueDeleteGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline uint32_t UnityEngine::AndroidJNI::GetQueueGlobalRefsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetQueueGlobalRefsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AndroidJNI::CleanQueueGlobalRefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CleanQueueGlobalRefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewWeakGlobalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewWeakGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteWeakGlobalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteWeakGlobalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewLocalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewLocalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::AndroidJNI::DeleteLocalRef(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "DeleteLocalRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::AndroidJNI::IsSameObject(::System::IntPtr obj1, ::System::IntPtr obj2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsSameObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj1, obj2);
}
inline int32_t UnityEngine::AndroidJNI::EnsureLocalCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "EnsureLocalCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::AllocObject(::System::IntPtr clazz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "AllocObject", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "NewObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "NewObject", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectA(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "NewObjectA", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectClass(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectClass", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::AndroidJNI::IsInstanceOf(::System::IntPtr obj, ::System::IntPtr clazz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "IsInstanceOf", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, clazz);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "GetStaticMethodID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "GetStaticFieldID", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString(::StringW chars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringFromStr(::StringW chars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringFromStr", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString(::ArrayW<char16_t> chars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringUTF(::StringW bytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringUTF", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, bytes);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringChars(::System::IntPtr str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringChars", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::GetStringCharsInternal(::System::IntPtr str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringCharsInternal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, str);
}
inline int32_t UnityEngine::AndroidJNI::GetStringLength(::System::IntPtr str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline int32_t UnityEngine::AndroidJNI::GetStringUTFLength(::System::IntPtr str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringUTFLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringUTFChars(::System::IntPtr str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringUTFChars", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStringMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallStringMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStringMethodUnsafeInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallObjectMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallObjectMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallIntMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallIntMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallBooleanMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallBooleanMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallShortMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallShortMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline uint8_t UnityEngine::AndroidJNI::CallByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallSByteMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallSByteMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallCharMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallCharMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallFloatMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallFloatMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallDoubleMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallDoubleMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallLongMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallLongMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallVoidMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "CallVoidMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::GetStringField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, fieldID);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::GetStringFieldInternal(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStringFieldInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, obj, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, fieldID);
}
inline bool UnityEngine::AndroidJNI::GetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, fieldID);
}
inline uint8_t UnityEngine::AndroidJNI::GetByteField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, obj, fieldID);
}
inline int8_t UnityEngine::AndroidJNI::GetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, obj, fieldID);
}
inline char16_t UnityEngine::AndroidJNI::GetCharField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, obj, fieldID);
}
inline int16_t UnityEngine::AndroidJNI::GetShortField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, obj, fieldID);
}
inline int32_t UnityEngine::AndroidJNI::GetIntField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, obj, fieldID);
}
inline int64_t UnityEngine::AndroidJNI::GetLongField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, obj, fieldID);
}
inline float_t UnityEngine::AndroidJNI::GetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj, fieldID);
}
inline double_t UnityEngine::AndroidJNI::GetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, obj, fieldID);
}
inline void UnityEngine::AndroidJNI::SetStringField(::System::IntPtr obj, ::System::IntPtr fieldID, ::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID, ::System::IntPtr val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID, bool val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetByteField(::System::IntPtr obj, ::System::IntPtr fieldID, uint8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID, int8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetCharField(::System::IntPtr obj, ::System::IntPtr fieldID, char16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetShortField(::System::IntPtr obj, ::System::IntPtr fieldID, int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetIntField(::System::IntPtr obj, ::System::IntPtr fieldID, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetLongField(::System::IntPtr obj, ::System::IntPtr fieldID, int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID, double_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticStringMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::CallStaticStringMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticStringMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticStringMethodUnsafeInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticObjectMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::CallStaticObjectMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticObjectMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticIntMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int32_t UnityEngine::AndroidJNI::CallStaticIntMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticIntMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticBooleanMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, methodID, args);
}
inline bool UnityEngine::AndroidJNI::CallStaticBooleanMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticBooleanMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticShortMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int16_t UnityEngine::AndroidJNI::CallStaticShortMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticShortMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline uint8_t UnityEngine::AndroidJNI::CallStaticByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticSByteMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int8_t UnityEngine::AndroidJNI::CallStaticSByteMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticSByteMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticCharMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline char16_t UnityEngine::AndroidJNI::CallStaticCharMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticCharMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticFloatMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline float_t UnityEngine::AndroidJNI::CallStaticFloatMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticFloatMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticDoubleMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline double_t UnityEngine::AndroidJNI::CallStaticDoubleMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticDoubleMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticLongMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline int64_t UnityEngine::AndroidJNI::CallStaticLongMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticLongMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                          { "CallStaticVoidMethod", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<::UnityEngine::jvalue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args);
}
inline void UnityEngine::AndroidJNI::CallStaticVoidMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "CallStaticVoidMethodUnsafe", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args);
}
inline ::StringW UnityEngine::AndroidJNI::GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::UnityEngine::AndroidJNI_JStringBinding UnityEngine::AndroidJNI::GetStaticStringFieldInternal(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticStringFieldInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJNI_JStringBinding>(nullptr, ___internal_method, clazz, fieldID);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, fieldID);
}
inline bool UnityEngine::AndroidJNI::GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clazz, fieldID);
}
inline uint8_t UnityEngine::AndroidJNI::GetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int8_t UnityEngine::AndroidJNI::GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline char16_t UnityEngine::AndroidJNI::GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int16_t UnityEngine::AndroidJNI::GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int32_t UnityEngine::AndroidJNI::GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline int64_t UnityEngine::AndroidJNI::GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline float_t UnityEngine::AndroidJNI::GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline double_t UnityEngine::AndroidJNI::GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, clazz, fieldID);
}
inline void UnityEngine::AndroidJNI::SetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticStringField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::System::IntPtr val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "SetStaticObjectField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticBooleanField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, uint8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, int8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticSByteField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID, char16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticCharField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID, int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticShortField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID, int32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticIntField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID, int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticLongField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticFloatField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline void UnityEngine::AndroidJNI::SetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID, double_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetStaticDoubleField", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ConvertToBooleanArray(::ArrayW<bool> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ConvertToBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToBooleanArray(::ArrayW<bool> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToBooleanArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToByteArray(::ArrayW<uint8_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(::ArrayW<int8_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToSByteArray", {}, { ::i2c::type_of<::ArrayW<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToSByteArray(int8_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToSByteArray", {}, { ::i2c::type_of<int8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(::ArrayW<char16_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToCharArray(char16_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToCharArray", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(::ArrayW<int16_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToShortArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToShortArray(int16_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToShortArray", {}, { ::i2c::type_of<int16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(::ArrayW<int32_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToIntArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToIntArray(int32_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToIntArray", {}, { ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(::ArrayW<int64_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToLongArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToLongArray(int64_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToLongArray", {}, { ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(::ArrayW<float_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToFloatArray", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToFloatArray(float_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToFloatArray", {}, { ::i2c::type_of<float_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(::ArrayW<double_t> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToDoubleArray", {}, { ::i2c::type_of<::ArrayW<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToDoubleArray(double_t* array, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToDoubleArray", {}, { ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::System::IntPtr* array, int32_t length, ::System::IntPtr arrayClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "ToObjectArray", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, length, arrayClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::ArrayW<::System::IntPtr> array, ::System::IntPtr arrayClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToObjectArray", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, arrayClass);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToObjectArray(::ArrayW<::System::IntPtr> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToObjectArray", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::ArrayW<bool> UnityEngine::AndroidJNI::FromBooleanArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromBooleanArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<uint8_t> UnityEngine::AndroidJNI::FromByteArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromByteArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int8_t> UnityEngine::AndroidJNI::FromSByteArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromSByteArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<char16_t> UnityEngine::AndroidJNI::FromCharArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromCharArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int16_t> UnityEngine::AndroidJNI::FromShortArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromShortArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int32_t> UnityEngine::AndroidJNI::FromIntArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromIntArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<int64_t> UnityEngine::AndroidJNI::FromLongArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromLongArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<float_t> UnityEngine::AndroidJNI::FromFloatArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromFloatArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<double_t> UnityEngine::AndroidJNI::FromDoubleArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromDoubleArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::System::IntPtr> UnityEngine::AndroidJNI::FromObjectArray(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FromObjectArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IntPtr>>(nullptr, ___internal_method, array);
}
inline int32_t UnityEngine::AndroidJNI::GetArrayLength(::System::IntPtr array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetArrayLength", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewBooleanArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewBooleanArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewByteArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewByteArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewSByteArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewSByteArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewCharArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewCharArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewShortArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewShortArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewIntArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewIntArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewLongArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewLongArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewFloatArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewFloatArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDoubleArray(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDoubleArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewObjectArray(int32_t size, ::System::IntPtr clazz, ::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "NewObjectArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, size, clazz, obj);
}
inline bool UnityEngine::AndroidJNI::GetBooleanArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, index);
}
inline uint8_t UnityEngine::AndroidJNI::GetByteArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, array, index);
}
inline int8_t UnityEngine::AndroidJNI::GetSByteArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetSByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, array, index);
}
inline char16_t UnityEngine::AndroidJNI::GetCharArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetCharArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, array, index);
}
inline int16_t UnityEngine::AndroidJNI::GetShortArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetShortArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, array, index);
}
inline int32_t UnityEngine::AndroidJNI::GetIntArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetIntArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index);
}
inline int64_t UnityEngine::AndroidJNI::GetLongArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetLongArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, array, index);
}
inline float_t UnityEngine::AndroidJNI::GetFloatArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFloatArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, array, index);
}
inline double_t UnityEngine::AndroidJNI::GetDoubleArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDoubleArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, array, index);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetObjectArrayElement(::System::IntPtr array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetObjectArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array, index);
}
inline void UnityEngine::AndroidJNI::SetBooleanArrayElement(::System::IntPtr array, int32_t index, uint8_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetBooleanArrayElement(::System::IntPtr array, int32_t index, bool val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetBooleanArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetByteArrayElement(::System::IntPtr array, int32_t index, int8_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetSByteArrayElement(::System::IntPtr array, int32_t index, int8_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetSByteArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetCharArrayElement(::System::IntPtr array, int32_t index, char16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetCharArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetShortArrayElement(::System::IntPtr array, int32_t index, int16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetShortArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetIntArrayElement(::System::IntPtr array, int32_t index, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetIntArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetLongArrayElement(::System::IntPtr array, int32_t index, int64_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetLongArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetFloatArrayElement(::System::IntPtr array, int32_t index, float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetFloatArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetDoubleArrayElement(::System::IntPtr array, int32_t index, double_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetDoubleArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, val);
}
inline void UnityEngine::AndroidJNI::SetObjectArrayElement(::System::IntPtr array, int32_t index, ::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "SetObjectArrayElement", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, obj);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(uint8_t* buffer, int64_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer, capacity);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewDirectByteBuffer", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::IntPtr UnityEngine::AndroidJNI::NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T> buffer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "NewDirectByteBufferFromNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer);
}
inline int8_t* UnityEngine::AndroidJNI::GetDirectBufferAddress(::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectBufferAddress", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t*>(nullptr, ___internal_method, buffer);
}
inline int64_t UnityEngine::AndroidJNI::GetDirectBufferCapacity(::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectBufferCapacity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, buffer);
}
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::AndroidJNI::GetDirectBuffer(::System::IntPtr buffer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectBuffer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, buffer);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::AndroidJNI::GetDirectByteBuffer(::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectByteBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, buffer);
}
inline ::Unity::Collections::NativeArray_1<int8_t> UnityEngine::AndroidJNI::GetDirectSByteBuffer(::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetDirectSByteBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int8_t>>(nullptr, ___internal_method, buffer);
}
inline int32_t UnityEngine::AndroidJNI::RegisterNatives(::System::IntPtr clazz, ::ArrayW<::UnityEngine::JNINativeMethod> methods) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "RegisterNatives", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::JNINativeMethod>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, methods);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::RegisterNativesAllocate(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "RegisterNativesAllocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, length);
}
inline void UnityEngine::AndroidJNI::RegisterNativesSet(::System::IntPtr natives, int32_t idx, ::StringW name, ::StringW signature, ::System::IntPtr fnPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "RegisterNativesSet",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, natives, idx, name, signature, fnPtr);
}
inline int32_t UnityEngine::AndroidJNI::RegisterNativesAndFree(::System::IntPtr clazz, ::System::IntPtr natives, int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "RegisterNativesAndFree", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, natives, n);
}
inline int32_t UnityEngine::AndroidJNI::UnregisterNatives(::System::IntPtr clazz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "UnregisterNatives", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz);
}
inline void UnityEngine::AndroidJNI::ReleaseStringChars_Injected(::by_ref<::UnityEngine::AndroidJNI_JStringBinding> str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ReleaseStringChars_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::FindClass_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FindClass_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline int32_t UnityEngine::AndroidJNI::ThrowNew_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "ThrowNew_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clazz, message);
}
inline void UnityEngine::AndroidJNI::FatalError_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "FatalError_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetMethodID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                      ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetMethodID_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetFieldID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetFieldID_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticMethodID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticMethodID_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::GetStaticFieldID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "GetStaticFieldID_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, clazz, name, sig);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringFromStr_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> chars) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringFromStr_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> chars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, chars);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::NewStringUTF_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "NewStringUTF_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, bytes);
}
inline void UnityEngine::AndroidJNI::GetStringCharsInternal_Injected(::System::IntPtr str, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "GetStringCharsInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, ret);
}
inline void UnityEngine::AndroidJNI::GetStringUTFChars_Injected(::System::IntPtr str, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "GetStringUTFChars_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, ret);
}
inline void UnityEngine::AndroidJNI::CallStringMethodUnsafeInternal_Injected(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args,
                                                                             ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CallStringMethodUnsafeInternal_Injected",
                                                                           {},
                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(),
                                                                             ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, methodID, args, ret);
}
inline void UnityEngine::AndroidJNI::GetStringFieldInternal_Injected(::System::IntPtr obj, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "GetStringFieldInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, ret);
}
inline void UnityEngine::AndroidJNI::SetStringField_Injected(::System::IntPtr obj, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::AndroidJNI*>(),
          { "SetStringField_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, fieldID, val);
}
inline void UnityEngine::AndroidJNI::CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args,
                                                                                   ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "CallStaticStringMethodUnsafeInternal_Injected",
                                                                           {},
                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::jvalue*>(),
                                                                             ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, methodID, args, ret);
}
inline void UnityEngine::AndroidJNI::GetStaticStringFieldInternal_Injected(::System::IntPtr clazz, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "GetStaticStringFieldInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AndroidJNI_JStringBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, ret);
}
inline void UnityEngine::AndroidJNI::SetStaticStringField_Injected(::System::IntPtr clazz, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "SetStaticStringField_Injected",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                              ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clazz, fieldID, val);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ConvertToBooleanArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ConvertToBooleanArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline ::System::IntPtr UnityEngine::AndroidJNI::ToByteArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(), { "ToByteArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, array);
}
inline void UnityEngine::AndroidJNI::FromBooleanArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                       { "FromBooleanArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ret);
}
inline void UnityEngine::AndroidJNI::FromByteArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "FromByteArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ret);
}
inline void UnityEngine::AndroidJNI::FromObjectArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                              { "FromObjectArray_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ret);
}
inline void UnityEngine::AndroidJNI::RegisterNativesSet_Injected(::System::IntPtr natives, int32_t idx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> signature, ::System::IntPtr fnPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AndroidJNI*>(),
                                                           { "RegisterNativesSet_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, natives, idx, name, signature, fnPtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJNI::AndroidJNI() {}
