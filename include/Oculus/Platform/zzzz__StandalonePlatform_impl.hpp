#pragma once
// IWYU pragma private; include "Oculus/Platform/StandalonePlatform.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__StandalonePlatform_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__StandalonePlatform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform_UnityLogDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::StandalonePlatform_UnityLogDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Platform::StandalonePlatform_UnityLogDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5de9e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform_UnityLogDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::StandalonePlatform_UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr)>(
    &::Oculus::Platform::StandalonePlatform_UnityLogDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5de9e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform_UnityLogDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Oculus::Platform::StandalonePlatform_UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::Oculus::Platform::StandalonePlatform_UnityLogDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5de9ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform_UnityLogDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::StandalonePlatform_UnityLogDelegate::*)(::System::IAsyncResult*)>(
    &::Oculus::Platform::StandalonePlatform_UnityLogDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5de9f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::StandalonePlatform_UnityLogDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::StandalonePlatform_UnityLogDelegate::Invoke(::System::IntPtr tag, ::System::IntPtr msg) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, msg);
}
inline ::System::IAsyncResult* Oculus::Platform::StandalonePlatform_UnityLogDelegate::BeginInvoke(::System::IntPtr tag, ::System::IntPtr msg, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, tag, msg, callback, object);
}
inline void Oculus::Platform::StandalonePlatform_UnityLogDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Oculus::Platform::StandalonePlatform_UnityLogDelegate* Oculus::Platform::StandalonePlatform_UnityLogDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::StandalonePlatform_UnityLogDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::StandalonePlatform_UnityLogDelegate::StandalonePlatform_UnityLogDelegate() {}
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.InitializeInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (::Oculus::Platform::StandalonePlatform::*)()>(
    &::Oculus::Platform::StandalonePlatform::InitializeInEditor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ddc440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { "InitializeInEditor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.AsyncInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (
    ::Oculus::Platform::StandalonePlatform::*)(uint64_t, ::StringW)>(&::Oculus::Platform::StandalonePlatform::AsyncInitialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5de948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform.AsyncInitializeWithAccessTokenAndOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (
    ::Oculus::Platform::StandalonePlatform::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*)>(
    &::Oculus::Platform::StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ddc974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(),
                                                             { "AsyncInitializeWithAccessTokenAndOptions",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::StandalonePlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::StandalonePlatform::*)()>(&::Oculus::Platform::StandalonePlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddc43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::StandalonePlatform::InitializeInEditor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { "InitializeInEditor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(this, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::StandalonePlatform::AsyncInitialize(uint64_t appID, ::StringW accessToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { "AsyncInitialize", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(this, ___internal_method, appID, accessToken);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
Oculus::Platform::StandalonePlatform::AsyncInitializeWithAccessTokenAndOptions(::StringW appId, ::StringW accessToken,
                                                                               ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(),
                                                           { "AsyncInitializeWithAccessTokenAndOptions",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(this, ___internal_method, appId, accessToken, initConfigOptions);
}
inline void Oculus::Platform::StandalonePlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::StandalonePlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::StandalonePlatform* Oculus::Platform::StandalonePlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::StandalonePlatform*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::StandalonePlatform::StandalonePlatform() {}
