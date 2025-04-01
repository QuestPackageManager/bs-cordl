#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRExtendedDisplay.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40540dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(
    ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405417c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4054190;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::*)(
    ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4054288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::Invoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::BeginInvoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::EndInvoke(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds* OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay__GetWindowBounds::IVRExtendedDisplay__GetWindowBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40542b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(
    ::OVR::OpenVR::EVREye, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405433c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(::OVR::OpenVR::EVREye, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*,
                                                                ::System::Object*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4054350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::*)(
    ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4054468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth,
                                                                          ::ByRef<uint32_t> pnHeight) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth,
                                                                                                  ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::EndInvoke(::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight,
                                                                             ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport* OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRExtendedDisplay__GetEyeOutputViewport::IVRExtendedDisplay__GetEyeOutputViewport() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4054490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4054530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(::ByRef<int32_t>, ::ByRef<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4054544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::*)(
    ::ByRef<int32_t>, ::ByRef<int32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40545e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::Invoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::BeginInvoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex, callback, object);
}
inline void OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::EndInvoke(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex, result);
}
inline ::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo* OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRExtendedDisplay__GetDXGIOutputInfo*>(object, method));
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
