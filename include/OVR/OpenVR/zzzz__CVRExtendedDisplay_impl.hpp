#pragma once
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(void*)>(&::OVR::OpenVR::CVRExtendedDisplay::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27f1dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetWindowBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int32_t>, ByRef<int32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27f1eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetWindowBounds", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetEyeOutputViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(
    ::OVR::OpenVR::EVREye, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27f1f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetEyeOutputViewport", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f1f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetDXGIOutputInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRExtendedDisplay& OVR::OpenVR::CVRExtendedDisplay::__get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRExtendedDisplay const& OVR::OpenVR::CVRExtendedDisplay::__get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRExtendedDisplay::__set_FnTable(::OVR::OpenVR::IVRExtendedDisplay value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___FnTable = value;
}
inline ::OVR::OpenVR::CVRExtendedDisplay* OVR::OpenVR::CVRExtendedDisplay::New_ctor(void* pInterface) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::CVRExtendedDisplay*>(pInterface));
}
inline void OVR::OpenVR::CVRExtendedDisplay::_ctor(void* pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetWindowBounds", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetEyeOutputViewport", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetDXGIOutputInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRExtendedDisplay::CVRExtendedDisplay() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
