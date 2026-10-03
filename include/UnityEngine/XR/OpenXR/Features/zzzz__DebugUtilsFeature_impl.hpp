#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/DebugUtilsFeature.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__DebugUtilsFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__DebugUtilsFeature_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__DebugUtilsFeature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::DebugUtilsFeature_MessageSeverity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::DebugUtilsFeature_MessageSeverity() {}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::Verbose{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::Info{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::Warning{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity::Error{ static_cast<int32_t>(0x1000) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::DebugUtilsFeature_MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::DebugUtilsFeature_MessageType() {}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::General{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::Validation{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::Performance{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType::Conformance{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e4a55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::*)(::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4a72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e4a740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e4a760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::Invoke(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::BeginInvoke(::StringW message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate::DebugUtilsFeature_DebugCallbackDelegate() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.get_messageSeverity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::get_messageSeverity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4a48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "get_messageSeverity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.set_messageSeverity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::set_messageSeverity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4a494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                             { "set_messageSeverity", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.get_messageType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::get_messageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4a4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "get_messageType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.set_messageType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::set_messageType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4a4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                             { "set_messageType", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e4a4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.SetCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::SetCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e4a5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                             { "SetCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.SetConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity,
                                                                                                                        ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::SetConfig)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e4a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                           { "SetConfig",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity>(),
                                                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4a700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e4a708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.DebugCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e4a400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "DebugCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.DebugUtilsSetCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*)>(
    &::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugUtilsSetCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e4a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                             { "DebugUtilsSetCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature.DebugUtilsSetConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint64_t)>(&::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugUtilsSetConfig)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e4a674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                           { "DebugUtilsSetConfig", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4a718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* const& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_set_callback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_m_MessageSeverity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageSeverity;
}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity const& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_m_MessageSeverity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageSeverity;
}
constexpr void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_set_m_MessageSeverity(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MessageSeverity = value;
}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_m_MessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType const& UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_get_m_MessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::__cordl_internal_set_m_MessageType(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MessageType = value;
}
inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::get_messageSeverity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "get_messageSeverity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::set_messageSeverity(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                           { "set_messageSeverity", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::get_messageType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "get_messageType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::set_messageType(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                           { "set_messageType", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::HookGetInstanceProcAddr(::System::IntPtr hookGetInstanceProcAddr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, hookGetInstanceProcAddr);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::SetCallback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* callbackDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                           { "SetCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackDelegate);
}
inline bool UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::SetConfig(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity messageSeverity,
                                                                            ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                         { "SetConfig",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity>(),
                                                                                             ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, messageSeverity, messageType);
}
inline bool UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::OnInstanceDestroy(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugCallback(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { "DebugCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugUtilsSetCallback(::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                           { "DebugUtilsSetCallback", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_DebugCallbackDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline bool UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugUtilsSetConfig(uint64_t messageSeverity, uint64_t messageType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(),
                                                                                         { "DebugUtilsSetConfig", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, messageSeverity, messageType);
}
inline void UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature* UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::DebugUtilsFeature() {}
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageSeverity UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::k_AllMessageSeverities{ static_cast<int32_t>(0x1111) };
constexpr ::UnityEngine::XR::OpenXR::Features::DebugUtilsFeature_MessageType UnityEngine::XR::OpenXR::Features::DebugUtilsFeature::k_AllMessageTypes{ static_cast<int32_t>(0xf) };
