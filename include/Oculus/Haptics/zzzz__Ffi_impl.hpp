#pragma once
// IWYU pragma private; include "Oculus/Haptics/Ffi.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Haptics/zzzz__Ffi_def.hpp"
#include "Oculus/Haptics/zzzz__Ffi_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Ffi_Result::Ffi_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_Result::Ffi_Result() {}
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::Success{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::Error{ static_cast<int32_t>(0xffffffff) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InstanceInitializationFailed{ static_cast<int32_t>(0xfffffffe) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InstanceAlreadyInitialized{ static_cast<int32_t>(0xfffffffd) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InstanceAlreadyUninitialized{ static_cast<int32_t>(0xfffffffc) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InstanceNotInitialized{ static_cast<int32_t>(0xfffffffb) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InvalidUtf8{ static_cast<int32_t>(0xfffffffa) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::LoadClipFailed{ static_cast<int32_t>(0xfffffff9) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::CreatePlayerFailed{ static_cast<int32_t>(0xfffffff8) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::ClipIdInvalid{ static_cast<int32_t>(0xfffffff7) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::PlayerIdInvalid{ static_cast<int32_t>(0xfffffff6) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::PlayerInvalidAmplitude{ static_cast<int32_t>(0xfffffff5) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::PlayerInvalidFrequencyShift{ static_cast<int32_t>(0xfffffff4) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::PlayerInvalidPriority{ static_cast<int32_t>(0xfffffff3) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::NoClipLoaded{ static_cast<int32_t>(0xfffffff2) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::InvalidPlayCallbackPointer{ static_cast<int32_t>(0xfffffff1) };
constexpr ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi_Result::PlayerInvalidSeekPosition{ static_cast<int32_t>(0xfffffff0) };
// Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "patch", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Ffi_SdkVersion::Ffi_SdkVersion(uint16_t major, uint16_t minor, uint16_t patch) noexcept {
  this->major = major;
  this->minor = minor;
  this->patch = patch;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_SdkVersion::Ffi_SdkVersion() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Ffi_Controller::Ffi_Controller(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_Controller::Ffi_Controller() {}
constexpr ::Oculus::Haptics::Ffi_Controller Oculus::Haptics::Ffi_Controller::Left{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::Ffi_Controller Oculus::Haptics::Ffi_Controller::Right{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Haptics::Ffi_Controller Oculus::Haptics::Ffi_Controller::Both{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Ffi_LogLevel::Ffi_LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_LogLevel::Ffi_LogLevel() {}
constexpr ::Oculus::Haptics::Ffi_LogLevel Oculus::Haptics::Ffi_LogLevel::Trace{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::Ffi_LogLevel Oculus::Haptics::Ffi_LogLevel::Debug{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Haptics::Ffi_LogLevel Oculus::Haptics::Ffi_LogLevel::Info{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Haptics::Ffi_LogLevel Oculus::Haptics::Ffi_LogLevel::Warn{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Haptics::Ffi_LogLevel Oculus::Haptics::Ffi_LogLevel::Error{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::Oculus::Haptics::Ffi_LogCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_LogCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Haptics::Ffi_LogCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b9e2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_LogCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_LogCallback::*)(::Oculus::Haptics::Ffi_LogLevel, ::StringW)>(
    &::Oculus::Haptics::Ffi_LogCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b9e354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_LogCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Haptics::Ffi_LogCallback::*)(::Oculus::Haptics::Ffi_LogLevel, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Haptics::Ffi_LogCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b9e368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_LogCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_LogCallback::*)(::System::IAsyncResult*)>(
    &::Oculus::Haptics::Ffi_LogCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b9e3fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void Oculus::Haptics::Ffi_LogCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Haptics::Ffi_LogCallback::Invoke(::Oculus::Haptics::Ffi_LogLevel level, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message);
}
inline ::System::IAsyncResult* Oculus::Haptics::Ffi_LogCallback::BeginInvoke(::Oculus::Haptics::Ffi_LogLevel level, ::StringW message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, level, message, callback, object);
}
inline void Oculus::Haptics::Ffi_LogCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_LogCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Oculus::Haptics::Ffi_LogCallback* Oculus::Haptics::Ffi_LogCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::Ffi_LogCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_LogCallback::Ffi_LogCallback() {}
//  Writing Method size for method: ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b9cad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::*)(
    ::System::IntPtr, ::Oculus::Haptics::Ffi_Controller, float_t, float_t)>(&::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b9e408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::*)(::System::IntPtr, ::Oculus::Haptics::Ffi_Controller, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b9e41c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::*)(::System::IAsyncResult*)>(
    &::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b9e4f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline void Oculus::Haptics::Ffi_HapticsSdkPlayCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Haptics::Ffi_HapticsSdkPlayCallback::Invoke(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, controller, duration, amplitude);
}
inline ::System::IAsyncResult* Oculus::Haptics::Ffi_HapticsSdkPlayCallback::BeginInvoke(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude,
                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, context, controller, duration, amplitude, callback, object);
}
inline void Oculus::Haptics::Ffi_HapticsSdkPlayCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback* Oculus::Haptics::Ffi_HapticsSdkPlayCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback::Ffi_HapticsSdkPlayCallback() {}
// Ctor Parameters [CppParam { name: "stream_count", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "play_call_count", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::Ffi_NullBackendStatistics::Ffi_NullBackendStatistics(int64_t stream_count, int64_t play_call_count) noexcept {
  this->stream_count = stream_count;
  this->play_call_count = play_call_count;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi_NullBackendStatistics::Ffi_NullBackendStatistics() {}
//  Writing Method size for method: ::Oculus::Haptics::Ffi.Succeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Oculus::Haptics::Ffi_Result)>(&::Oculus::Haptics::Ffi::Succeeded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b9cac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Succeeded", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.Failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Oculus::Haptics::Ffi_Result)>(&::Oculus::Haptics::Ffi::Failed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9cd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Failed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_SdkVersion (*)()>(&::Oculus::Haptics::Ffi::version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9deac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_logging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::Oculus::Haptics::Ffi_LogCallback*)>(
    &::Oculus::Haptics::Ffi::initialize_logging)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b9df10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_logging", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_LogCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_callback_backend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::System::IntPtr, ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*)>(
    &::Oculus::Haptics::Ffi::initialize_with_callback_backend)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b9cb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_callback_backend", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_ovr_plugin_bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(
    ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(
    &::Oculus::Haptics::Ffi::initialize_with_ovr_plugin_bytes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b9df90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin_bytes", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_ovr_plugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::StringW, ::StringW, ::StringW)>(
    &::Oculus::Haptics::Ffi::initialize_with_ovr_plugin)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b9c9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_null_backend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)()>(&::Oculus::Haptics::Ffi::initialize_with_null_backend)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9e03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_null_backend",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.uninitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)()>(&::Oculus::Haptics::Ffi::uninitialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9db9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "uninitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::ByRef<bool>)>(&::Oculus::Haptics::Ffi::initialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b9ccdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialized", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.haptics_sdk_error_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Oculus::Haptics::Ffi::haptics_sdk_error_message)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9e0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "haptics_sdk_error_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.haptics_sdk_error_message_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Oculus::Haptics::Ffi::haptics_sdk_error_message_length)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9e104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "haptics_sdk_error_message_length",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.error_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Oculus::Haptics::Ffi::error_message)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b9cbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "error_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.set_suspended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(bool)>(&::Oculus::Haptics::Ffi::set_suspended)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "set_suspended", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.load_clip_bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, uint32_t, ::ByRef<int32_t>)>(
    &::Oculus::Haptics::Ffi::load_clip_bytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b9e1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip_bytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.load_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::StringW, ::ByRef<int32_t>)>(&::Oculus::Haptics::Ffi::load_clip)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b9cd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.clip_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::ByRef<float_t>)>(&::Oculus::Haptics::Ffi::clip_duration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "clip_duration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.release_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::release_clip)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9cdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_clip", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.create_player
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(::ByRef<int32_t>)>(&::Oculus::Haptics::Ffi::create_player)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9ce3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "create_player", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.release_player
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::release_player)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9d9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_player", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, int32_t)>(&::Oculus::Haptics::Ffi::player_set_clip)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9ceb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_clip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::Oculus::Haptics::Ffi_Controller)>(
    &::Oculus::Haptics::Ffi::player_play)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9cfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_play", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::player_pause)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9d044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_pause", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_resume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::player_resume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9d0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_resume", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::player_stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b9d13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_stop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, float_t)>(&::Oculus::Haptics::Ffi::player_seek)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b9d1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_seek", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_amplitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, float_t)>(&::Oculus::Haptics::Ffi::player_set_amplitude)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b9d3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_amplitude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_amplitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::ByRef<float_t>)>(&::Oculus::Haptics::Ffi::player_amplitude)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_amplitude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_frequency_shift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, float_t)>(&::Oculus::Haptics::Ffi::player_set_frequency_shift)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b9d4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_frequency_shift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_frequency_shift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::ByRef<float_t>)>(&::Oculus::Haptics::Ffi::player_frequency_shift)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_frequency_shift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_looping_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, bool)>(&::Oculus::Haptics::Ffi::player_set_looping_enabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_looping_enabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_looping_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::ByRef<bool>)>(&::Oculus::Haptics::Ffi::player_looping_enabled)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b9d34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_looping_enabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, uint32_t)>(&::Oculus::Haptics::Ffi::player_set_priority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_priority", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_Result (*)(int32_t, ::ByRef<uint32_t>)>(&::Oculus::Haptics::Ffi::player_priority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9d954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_priority", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.get_null_backend_statistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::Ffi_NullBackendStatistics (*)()>(&::Oculus::Haptics::Ffi::get_null_backend_statistics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9e280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "get_null_backend_statistics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi::*)()>(&::Oculus::Haptics::Ffi::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b9e2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Oculus::Haptics::Ffi::Succeeded(::Oculus::Haptics::Ffi_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Succeeded", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
inline bool Oculus::Haptics::Ffi::Failed(::Oculus::Haptics::Ffi_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Failed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
inline ::Oculus::Haptics::Ffi_SdkVersion Oculus::Haptics::Ffi::version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_SdkVersion, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialize_logging(::Oculus::Haptics::Ffi_LogCallback* logCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_logging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_LogCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, logCallback);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialize_with_callback_backend(::System::IntPtr context, ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback* playCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_callback_backend", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, context, playCallback);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialize_with_ovr_plugin_bytes(::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_name,
                                                                                            ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_version,
                                                                                            ::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_haptics_sdk_version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin_bytes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, game_engine_name, game_engine_version, game_engine_haptics_sdk_version);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialize_with_ovr_plugin(::StringW game_engine_name, ::StringW game_engine_version, ::StringW game_engine_haptics_sdk_version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, game_engine_name, game_engine_version, game_engine_haptics_sdk_version);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialize_with_null_backend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_null_backend",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::uninitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "uninitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::initialized(::ByRef<bool> initialized) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialized", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, initialized);
}
inline ::System::IntPtr Oculus::Haptics::Ffi::haptics_sdk_error_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "haptics_sdk_error_message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline int32_t Oculus::Haptics::Ffi::haptics_sdk_error_message_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "haptics_sdk_error_message_length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::StringW Oculus::Haptics::Ffi::error_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "error_message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::set_suspended(bool suspended) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "set_suspended", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, suspended);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::load_clip_bytes(::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, uint32_t data_length, ::ByRef<int32_t> clip_id_out) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip_bytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, data, data_length, clip_id_out);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::load_clip(::StringW data, ::ByRef<int32_t> clip_id_out) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, data, clip_id_out);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::clip_duration(int32_t clipId, ::ByRef<float_t> clip_duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "clip_duration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, clipId, clip_duration);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::release_clip(int32_t clipId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_clip", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, clipId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::create_player(::ByRef<int32_t> player_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "create_player", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, player_id);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::release_player(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_player", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_set_clip(int32_t playerId, int32_t clipId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_clip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, clipId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_play(int32_t playerId, ::Oculus::Haptics::Ffi_Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_play", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Ffi_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, controller);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_pause(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_pause", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_resume(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_resume", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_stop(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_stop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_seek(int32_t playerId, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_seek", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, time);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_set_amplitude(int32_t playerId, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_amplitude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, amplitude);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_amplitude(int32_t playerId, ::ByRef<float_t> amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_amplitude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, amplitude);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_set_frequency_shift(int32_t playerId, float_t amount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_frequency_shift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, amount);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_frequency_shift(int32_t playerId, ::ByRef<float_t> frequency_shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_frequency_shift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, frequency_shift);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_set_looping_enabled(int32_t playerId, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_looping_enabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, enabled);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_looping_enabled(int32_t playerId, ::ByRef<bool> looping_enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_looping_enabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, looping_enabled);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_set_priority(int32_t playerId, uint32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_priority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, priority);
}
inline ::Oculus::Haptics::Ffi_Result Oculus::Haptics::Ffi::player_priority(int32_t playerId, ::ByRef<uint32_t> priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_priority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Result, false>(nullptr, ___internal_method, playerId, priority);
}
inline ::Oculus::Haptics::Ffi_NullBackendStatistics Oculus::Haptics::Ffi::get_null_backend_statistics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "get_null_backend_statistics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_NullBackendStatistics, false>(nullptr, ___internal_method);
}
inline void Oculus::Haptics::Ffi::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Haptics::Ffi* Oculus::Haptics::Ffi::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::Ffi*>());
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi::Ffi() {}
