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
constexpr ::Oculus::Haptics::__Ffi__Result::__Ffi__Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__Result::__Ffi__Result() {}
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::Success{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::Error{ static_cast<int32_t>(0xffffffff) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::InstanceInitializationFailed{ static_cast<int32_t>(0xfffffffe) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::InstanceAlreadyInitialized{ static_cast<int32_t>(0xfffffffd) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::InstanceAlreadyUninitialized{ static_cast<int32_t>(0xfffffffc) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::InstanceNotInitialized{ static_cast<int32_t>(0xfffffffb) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::InvalidUtf8{ static_cast<int32_t>(0xfffffffa) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::LoadClipFailed{ static_cast<int32_t>(0xfffffff9) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::CreatePlayerFailed{ static_cast<int32_t>(0xfffffff8) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::ClipIdInvalid{ static_cast<int32_t>(0xfffffff7) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::PlayerIdInvalid{ static_cast<int32_t>(0xfffffff6) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::PlayerInvalidAmplitude{ static_cast<int32_t>(0xfffffff5) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::PlayerInvalidFrequencyShift{ static_cast<int32_t>(0xfffffff4) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::PlayerInvalidPriority{ static_cast<int32_t>(0xfffffff3) };
constexpr ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::__Ffi__Result::NoClipLoaded{ static_cast<int32_t>(0xfffffff2) };
// Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "patch", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::__Ffi__SdkVersion::__Ffi__SdkVersion(uint16_t major, uint16_t minor, uint16_t patch) noexcept {
  this->major = major;
  this->minor = minor;
  this->patch = patch;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__SdkVersion::__Ffi__SdkVersion() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::__Ffi__Controller::__Ffi__Controller(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__Controller::__Ffi__Controller() {}
constexpr ::Oculus::Haptics::__Ffi__Controller Oculus::Haptics::__Ffi__Controller::Left{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::__Ffi__Controller Oculus::Haptics::__Ffi__Controller::Right{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Haptics::__Ffi__Controller Oculus::Haptics::__Ffi__Controller::Both{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::__Ffi__LogLevel::__Ffi__LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__LogLevel::__Ffi__LogLevel() {}
constexpr ::Oculus::Haptics::__Ffi__LogLevel Oculus::Haptics::__Ffi__LogLevel::Trace{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Haptics::__Ffi__LogLevel Oculus::Haptics::__Ffi__LogLevel::Debug{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Haptics::__Ffi__LogLevel Oculus::Haptics::__Ffi__LogLevel::Info{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Haptics::__Ffi__LogLevel Oculus::Haptics::__Ffi__LogLevel::Warn{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Haptics::__Ffi__LogLevel Oculus::Haptics::__Ffi__LogLevel::Error{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::Oculus::Haptics::__Ffi__LogCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::__Ffi__LogCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::Oculus::Haptics::__Ffi__LogCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ef5a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::__Ffi__LogCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::__Ffi__LogCallback::*)(::Oculus::Haptics::__Ffi__LogLevel, ::StringW)>(
    &::Oculus::Haptics::__Ffi__LogCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ef5abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::__Ffi__LogCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Oculus::Haptics::__Ffi__LogCallback::*)(::Oculus::Haptics::__Ffi__LogLevel, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Haptics::__Ffi__LogCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ef5ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::__Ffi__LogCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::__Ffi__LogCallback::*)(::System::IAsyncResult*)>(
    &::Oculus::Haptics::__Ffi__LogCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ef5b64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Oculus::Haptics::__Ffi__LogCallback* Oculus::Haptics::__Ffi__LogCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::__Ffi__LogCallback*>(object, method));
}
inline void Oculus::Haptics::__Ffi__LogCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Oculus::Haptics::__Ffi__LogCallback::Invoke(::Oculus::Haptics::__Ffi__LogLevel level, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message);
}
inline ::System::IAsyncResult* Oculus::Haptics::__Ffi__LogCallback::BeginInvoke(::Oculus::Haptics::__Ffi__LogLevel level, ::StringW message, ::System::AsyncCallback* callback,
                                                                                ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, level, message, callback, object);
}
inline void Oculus::Haptics::__Ffi__LogCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::__Ffi__LogCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__LogCallback::__Ffi__LogCallback() {}
// Ctor Parameters [CppParam { name: "play_call_count", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stop_call_count", ty: "int64_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "samples_played", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Haptics::__Ffi__NullBackendStatistics::__Ffi__NullBackendStatistics(int64_t play_call_count, int64_t stop_call_count, int64_t samples_played) noexcept {
  this->play_call_count = play_call_count;
  this->stop_call_count = stop_call_count;
  this->samples_played = samples_played;
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::__Ffi__NullBackendStatistics::__Ffi__NullBackendStatistics() {}
//  Writing Method size for method: ::Oculus::Haptics::Ffi.Succeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Oculus::Haptics::__Ffi__Result)>(&::Oculus::Haptics::Ffi::Succeeded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ef4808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Succeeded", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.Failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Oculus::Haptics::__Ffi__Result)>(&::Oculus::Haptics::Ffi::Failed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ef49cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Failed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__SdkVersion (*)()>(&::Oculus::Haptics::Ffi::version)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3ef5618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_ovr_plugin_bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(
    ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::Oculus::Haptics::__Ffi__LogCallback*)>(
    &::Oculus::Haptics::Ffi::initialize_with_ovr_plugin_bytes)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3ef5684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin_bytes", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_ovr_plugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(::StringW, ::StringW, ::StringW, ::Oculus::Haptics::__Ffi__LogCallback*)>(
    &::Oculus::Haptics::Ffi::initialize_with_ovr_plugin)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3ef46e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialize_with_null_backend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(::Oculus::Haptics::__Ffi__LogCallback*)>(
    &::Oculus::Haptics::Ffi::initialize_with_null_backend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3ef574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_null_backend", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.uninitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)()>(&::Oculus::Haptics::Ffi::uninitialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ef55b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "uninitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.initialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(ByRef<bool>)>(&::Oculus::Haptics::Ffi::initialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ef493c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialized", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.haptics_sdk_error_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Oculus::Haptics::Ffi::haptics_sdk_error_message)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ef57cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "haptics_sdk_error_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.haptics_sdk_error_message_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Oculus::Haptics::Ffi::haptics_sdk_error_message_length)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ef5834;

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
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3ef4814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "error_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.set_suspended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(bool)>(&::Oculus::Haptics::Ffi::set_suspended)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3ef589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "set_suspended", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.load_clip_bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, uint32_t, ByRef<int32_t>)>(
    &::Oculus::Haptics::Ffi::load_clip_bytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3ef5918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip_bytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.load_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(::StringW, ByRef<int32_t>)>(&::Oculus::Haptics::Ffi::load_clip)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3ef49d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.clip_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ByRef<float_t>)>(&::Oculus::Haptics::Ffi::clip_duration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef4d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "clip_duration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.release_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::release_clip)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3ef4a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_clip", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.create_player
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(ByRef<int32_t>)>(&::Oculus::Haptics::Ffi::create_player)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3ef4a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "create_player", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.release_player
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::release_player)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3ef5470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_player", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_clip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, int32_t)>(&::Oculus::Haptics::Ffi::player_set_clip)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef4b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_clip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ::Oculus::Haptics::__Ffi__Controller)>(
    &::Oculus::Haptics::Ffi::player_play)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef4c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_play", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t)>(&::Oculus::Haptics::Ffi::player_stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3ef4ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_stop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_amplitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, float_t)>(&::Oculus::Haptics::Ffi::player_set_amplitude)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ef4ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_amplitude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_amplitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ByRef<float_t>)>(&::Oculus::Haptics::Ffi::player_amplitude)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef4f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_amplitude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_frequency_shift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, float_t)>(&::Oculus::Haptics::Ffi::player_set_frequency_shift)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ef4fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_frequency_shift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_frequency_shift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ByRef<float_t>)>(&::Oculus::Haptics::Ffi::player_frequency_shift)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef505c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_frequency_shift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_looping_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, bool)>(&::Oculus::Haptics::Ffi::player_set_looping_enabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef4da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_looping_enabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_looping_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ByRef<bool>)>(&::Oculus::Haptics::Ffi::player_looping_enabled)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3ef4e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_looping_enabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_set_priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, uint32_t)>(&::Oculus::Haptics::Ffi::player_set_priority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef5368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_priority", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.player_priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Result (*)(int32_t, ByRef<uint32_t>)>(&::Oculus::Haptics::Ffi::player_priority)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ef53ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_priority", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi.get_null_backend_statistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__NullBackendStatistics (*)()>(&::Oculus::Haptics::Ffi::get_null_backend_statistics)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3ef59b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "get_null_backend_statistics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Ffi._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::Ffi::*)()>(&::Oculus::Haptics::Ffi::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ef5a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Oculus::Haptics::Ffi::Succeeded(::Oculus::Haptics::__Ffi__Result result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Succeeded", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
inline bool Oculus::Haptics::Ffi::Failed(::Oculus::Haptics::__Ffi__Result result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "Failed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
inline ::Oculus::Haptics::__Ffi__SdkVersion Oculus::Haptics::Ffi::version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__SdkVersion, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::initialize_with_ovr_plugin_bytes(ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_name,
                                                                                               ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_version,
                                                                                               ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_haptics_sdk_version,
                                                                                               ::Oculus::Haptics::__Ffi__LogCallback* logCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin_bytes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, game_engine_name, game_engine_version, game_engine_haptics_sdk_version, logCallback);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::initialize_with_ovr_plugin(::StringW game_engine_name, ::StringW game_engine_version, ::StringW game_engine_haptics_sdk_version,
                                                                                         ::Oculus::Haptics::__Ffi__LogCallback* logCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_ovr_plugin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, game_engine_name, game_engine_version, game_engine_haptics_sdk_version, logCallback);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::initialize_with_null_backend(::Oculus::Haptics::__Ffi__LogCallback* logCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialize_with_null_backend", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__LogCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, logCallback);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::uninitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "uninitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::initialized(ByRef<bool> initialized) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "initialized", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, initialized);
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
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::set_suspended(bool suspended) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "set_suspended", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, suspended);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::load_clip_bytes(ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, uint32_t data_length, ByRef<int32_t> clip_id_out) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip_bytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, data, data_length, clip_id_out);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::load_clip(::StringW data, ByRef<int32_t> clip_id_out) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "load_clip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, data, clip_id_out);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::clip_duration(int32_t clipId, ByRef<float_t> clip_duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "clip_duration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, clipId, clip_duration);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::release_clip(int32_t clipId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_clip", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, clipId);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::create_player(ByRef<int32_t> player_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "create_player", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, player_id);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::release_player(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "release_player", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_set_clip(int32_t playerId, int32_t clipId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_clip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, clipId);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_play(int32_t playerId, ::Oculus::Haptics::__Ffi__Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_play", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::__Ffi__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, controller);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_stop(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_stop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_set_amplitude(int32_t playerId, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_amplitude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, amplitude);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_amplitude(int32_t playerId, ByRef<float_t> amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_amplitude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, amplitude);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_set_frequency_shift(int32_t playerId, float_t amount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_frequency_shift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, amount);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_frequency_shift(int32_t playerId, ByRef<float_t> frequency_shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_frequency_shift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, frequency_shift);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_set_looping_enabled(int32_t playerId, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_looping_enabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, enabled);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_looping_enabled(int32_t playerId, ByRef<bool> looping_enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_looping_enabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, looping_enabled);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_set_priority(int32_t playerId, uint32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_set_priority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, priority);
}
inline ::Oculus::Haptics::__Ffi__Result Oculus::Haptics::Ffi::player_priority(int32_t playerId, ByRef<uint32_t> priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "player_priority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Result, false>(nullptr, ___internal_method, playerId, priority);
}
inline ::Oculus::Haptics::__Ffi__NullBackendStatistics Oculus::Haptics::Ffi::get_null_backend_statistics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), "get_null_backend_statistics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__NullBackendStatistics, false>(nullptr, ___internal_method);
}
inline ::Oculus::Haptics::Ffi* Oculus::Haptics::Ffi::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::Ffi*>());
}
inline void Oculus::Haptics::Ffi::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Ffi*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Ffi::Ffi() {}
