#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRExtendedDisplay.hpp"
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRExtendedDisplay::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4072508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetWindowBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x407261c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetWindowBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetEyeOutputViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(
    ::OVR::OpenVR::EVREye, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4072650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetEyeOutputViewport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4072684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRExtendedDisplay& OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRExtendedDisplay const& OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRExtendedDisplay value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRExtendedDisplay::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds(::ByRef<int32_t> pnX, ::ByRef<int32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetWindowBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pnX, ::ByRef<uint32_t> pnY, ::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetEyeOutputViewport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo(::ByRef<int32_t> pnAdapterIndex, ::ByRef<int32_t> pnAdapterOutputIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRExtendedDisplay*>::get(), "GetDXGIOutputInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}
inline ::OVR::OpenVR::CVRExtendedDisplay* OVR::OpenVR::CVRExtendedDisplay::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRExtendedDisplay*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRExtendedDisplay::CVRExtendedDisplay() {}
