#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRExtendedDisplay.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e2f1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(
    ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2f254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::Invoke(::by_ref<int32_t> pnX, ::by_ref<int32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::BeginInvoke(::by_ref<int32_t> pnX, ::by_ref<int32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::EndInvoke(::by_ref<int32_t> pnX, ::by_ref<int32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight,
                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::IVRExtendedDisplay__GetWindowBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e2f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(
    ::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::BeginInvoke)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e2f2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(
    ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e2f3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::Invoke(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pnX, ::by_ref<uint32_t> pnY, ::by_ref<uint32_t> pnWidth,
                                                                          ::by_ref<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pnX, ::by_ref<uint32_t> pnY,
                                                                                                  ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::EndInvoke(::by_ref<uint32_t> pnX, ::by_ref<uint32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight,
                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::IVRExtendedDisplay__GetEyeOutputViewport() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2f420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2f4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e2f4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::Invoke(::by_ref<int32_t> pnAdapterIndex, ::by_ref<int32_t> pnAdapterOutputIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::BeginInvoke(::by_ref<int32_t> pnAdapterIndex, ::by_ref<int32_t> pnAdapterOutputIndex,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::EndInvoke(::by_ref<int32_t> pnAdapterIndex, ::by_ref<int32_t> pnAdapterOutputIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::IVRExtendedDisplay__GetDXGIOutputInfo() {}
// Ctor Parameters [CppParam { name: "GetWindowBounds", ty: "::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetEyeOutputViewport", ty:
// "::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDXGIOutputInfo", ty:
// "::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRExtendedDisplay::IVRExtendedDisplay(::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* GetWindowBounds,
                                                                ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* GetEyeOutputViewport,
                                                                ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* GetDXGIOutputInfo) noexcept {
  this->GetWindowBounds = GetWindowBounds;
  this->GetEyeOutputViewport = GetEyeOutputViewport;
  this->GetDXGIOutputInfo = GetDXGIOutputInfo;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay::IVRExtendedDisplay() {}
