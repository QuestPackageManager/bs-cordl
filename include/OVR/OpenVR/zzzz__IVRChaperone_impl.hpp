#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRChaperone.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405e978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)()>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405ea00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__GetCalibrationState::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x405ea14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__GetCalibrationState::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x405ea34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetCalibrationState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone__GetCalibrationState::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetCalibrationState::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone__GetCalibrationState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetCalibrationState* OVR::OpenVR::IVRChaperone__GetCalibrationState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetCalibrationState::IVRChaperone__GetCalibrationState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x405ea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::ByRef<float_t>, ::ByRef<float_t>)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405eafc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::ByRef<float_t>, ::ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x405eb10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::ByRef<float_t>, ::ByRef<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x405ebb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetPlayAreaSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaSize::Invoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pSizeX, pSizeZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetPlayAreaSize::BeginInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pSizeX, pSizeZ, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaSize::EndInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pSizeX, pSizeZ, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* OVR::OpenVR::IVRChaperone__GetPlayAreaSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::IVRChaperone__GetPlayAreaSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x405ebe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::ByRef<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405ec84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::ByRef<::OVR::OpenVR::HmdQuad_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405ec98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::ByRef<::OVR::OpenVR::HmdQuad_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x405ed24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetPlayAreaRect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaRect::Invoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetPlayAreaRect::BeginInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, rect, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaRect::EndInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rect, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* OVR::OpenVR::IVRChaperone__GetPlayAreaRect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::IVRChaperone__GetPlayAreaRect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__ReloadInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405ed50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)()>(&::OVR::OpenVR::IVRChaperone__ReloadInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405edd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__ReloadInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x405edec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__ReloadInfo::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x405ee0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__ReloadInfo::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ReloadInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__ReloadInfo* OVR::OpenVR::IVRChaperone__ReloadInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__ReloadInfo::IVRChaperone__ReloadInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__SetSceneColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405ee18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::OVR::OpenVR::HmdColor_t)>(
    &::OVR::OpenVR::IVRChaperone__SetSceneColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405eea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::OVR::OpenVR::HmdColor_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__SetSceneColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405eeb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__SetSceneColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x405ef40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::Invoke(::OVR::OpenVR::HmdColor_t color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__SetSceneColor::BeginInvoke(::OVR::OpenVR::HmdColor_t color, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, color, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__SetSceneColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__SetSceneColor* OVR::OpenVR::IVRChaperone__SetSceneColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__SetSceneColor::IVRChaperone__SetSceneColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetBoundsColor::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x405ef4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(
    ::ByRef<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::IVRChaperone__GetBoundsColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405efec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(::ByRef<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__GetBoundsColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x405f000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(
    ::ByRef<::OVR::OpenVR::HmdColor_t>, ::ByRef<::OVR::OpenVR::HmdColor_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__GetBoundsColor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x405f10c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::Invoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                                                              ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetBoundsColor::BeginInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors,
                                                                                      float_t flCollisionBoundsFadeDistance, ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor, callback,
                                                                             object);
}
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::EndInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor,
                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputColorArray, pOutputCameraColor, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetBoundsColor* OVR::OpenVR::IVRChaperone__GetBoundsColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetBoundsColor::IVRChaperone__GetBoundsColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__AreBoundsVisible::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405f130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)()>(&::OVR::OpenVR::IVRChaperone__AreBoundsVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x405f1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__AreBoundsVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x405f1cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__AreBoundsVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x405f1ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__AreBoundsVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__AreBoundsVisible::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__AreBoundsVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__AreBoundsVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* OVR::OpenVR::IVRChaperone__AreBoundsVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__AreBoundsVisible::IVRChaperone__AreBoundsVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x405f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(bool)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x405f2a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x405f2b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x405f340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::Invoke(bool bForce) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bForce);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__ForceBoundsVisible::BeginInvoke(bool bForce, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, bForce, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* OVR::OpenVR::IVRChaperone__ForceBoundsVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::IVRChaperone__ForceBoundsVisible() {}
// Ctor Parameters [CppParam { name: "GetCalibrationState", ty: "::OVR::OpenVR::IVRChaperone__GetCalibrationState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetPlayAreaSize", ty:
// "::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetPlayAreaRect", ty: "::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "ReloadInfo", ty: "::OVR::OpenVR::IVRChaperone__ReloadInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetSceneColor", ty:
// "::OVR::OpenVR::IVRChaperone__SetSceneColor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetBoundsColor", ty: "::OVR::OpenVR::IVRChaperone__GetBoundsColor*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "AreBoundsVisible", ty: "::OVR::OpenVR::IVRChaperone__AreBoundsVisible*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ForceBoundsVisible",
// ty: "::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRChaperone::IVRChaperone(::OVR::OpenVR::IVRChaperone__GetCalibrationState* GetCalibrationState, ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* GetPlayAreaSize,
                                                    ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* GetPlayAreaRect, ::OVR::OpenVR::IVRChaperone__ReloadInfo* ReloadInfo,
                                                    ::OVR::OpenVR::IVRChaperone__SetSceneColor* SetSceneColor, ::OVR::OpenVR::IVRChaperone__GetBoundsColor* GetBoundsColor,
                                                    ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* AreBoundsVisible, ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* ForceBoundsVisible) noexcept {
  this->GetCalibrationState = GetCalibrationState;
  this->GetPlayAreaSize = GetPlayAreaSize;
  this->GetPlayAreaRect = GetPlayAreaRect;
  this->ReloadInfo = ReloadInfo;
  this->SetSceneColor = SetSceneColor;
  this->GetBoundsColor = GetBoundsColor;
  this->AreBoundsVisible = AreBoundsVisible;
  this->ForceBoundsVisible = ForceBoundsVisible;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone::IVRChaperone() {}
