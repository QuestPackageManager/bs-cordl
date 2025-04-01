#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRChaperone.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRChaperone_def.hpp"
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRChaperone::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x406e4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetCalibrationState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::CVRChaperone::*)()>(
    &::OVR::OpenVR::CVRChaperone::GetCalibrationState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetCalibrationState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetPlayAreaSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)(::ByRef<float_t>, ::ByRef<float_t>)>(
    &::OVR::OpenVR::CVRChaperone::GetPlayAreaSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x406e5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetPlayAreaSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetPlayAreaRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)(::ByRef<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::CVRChaperone::GetPlayAreaRect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetPlayAreaRect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdQuad_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.ReloadInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)()>(&::OVR::OpenVR::CVRChaperone::ReloadInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "ReloadInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.SetSceneColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::OVR::OpenVR::HmdColor_t)>(&::OVR::OpenVR::CVRChaperone::SetSceneColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "SetSceneColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdColor_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetBoundsColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::ByRef<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::CVRChaperone::GetBoundsColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetBoundsColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.AreBoundsVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)()>(&::OVR::OpenVR::CVRChaperone::AreBoundsVisible)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x406e694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "AreBoundsVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.ForceBoundsVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(bool)>(&::OVR::OpenVR::CVRChaperone::ForceBoundsVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406e6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "ForceBoundsVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRChaperone& OVR::OpenVR::CVRChaperone::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRChaperone const& OVR::OpenVR::CVRChaperone::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRChaperone::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRChaperone value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRChaperone::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::CVRChaperone::GetCalibrationState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetCalibrationState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRChaperone::GetPlayAreaSize(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetPlayAreaSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pSizeX, pSizeZ);
}
inline bool OVR::OpenVR::CVRChaperone::GetPlayAreaRect(::ByRef<::OVR::OpenVR::HmdQuad_t> rect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetPlayAreaRect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdQuad_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rect);
}
inline void OVR::OpenVR::CVRChaperone::ReloadInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "ReloadInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRChaperone::SetSceneColor(::OVR::OpenVR::HmdColor_t color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "SetSceneColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::HmdColor_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void OVR::OpenVR::CVRChaperone::GetBoundsColor(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                                                      ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "GetBoundsColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::HmdColor_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}
inline bool OVR::OpenVR::CVRChaperone::AreBoundsVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "AreBoundsVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRChaperone::ForceBoundsVisible(bool bForce) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperone*>::get(), "ForceBoundsVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bForce);
}
inline ::OVR::OpenVR::CVRChaperone* OVR::OpenVR::CVRChaperone::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRChaperone*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRChaperone::CVRChaperone() {}
