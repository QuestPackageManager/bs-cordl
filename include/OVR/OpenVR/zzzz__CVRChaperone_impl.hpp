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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRChaperone::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e4258c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetCalibrationState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::CVRChaperone::*)()>(&::OVR::OpenVR::CVRChaperone::GetCalibrationState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetCalibrationState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetPlayAreaSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)(::by_ref<float_t>, ::by_ref<float_t>)>(&::OVR::OpenVR::CVRChaperone::GetPlayAreaSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e426a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetPlayAreaSize", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetPlayAreaRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>)>(&::OVR::OpenVR::CVRChaperone::GetPlayAreaRect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e426d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetPlayAreaRect", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdQuad_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.ReloadInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)()>(&::OVR::OpenVR::CVRChaperone::ReloadInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e426f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "ReloadInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.SetSceneColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::OVR::OpenVR::HmdColor_t)>(&::OVR::OpenVR::CVRChaperone::SetSceneColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "SetSceneColor", {}, { ::i2c::type_of<::OVR::OpenVR::HmdColor_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.GetBoundsColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(::by_ref<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::by_ref<::OVR::OpenVR::HmdColor_t>)>(
    &::OVR::OpenVR::CVRChaperone::GetBoundsColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetBoundsColor",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.AreBoundsVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperone::*)()>(&::OVR::OpenVR::CVRChaperone::AreBoundsVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "AreBoundsVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperone.ForceBoundsVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperone::*)(bool)>(&::OVR::OpenVR::CVRChaperone::ForceBoundsVisible)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e42770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "ForceBoundsVisible", {}, { ::i2c::type_of<bool>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::CVRChaperone::GetCalibrationState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetCalibrationState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRChaperone::GetPlayAreaSize(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetPlayAreaSize", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ);
}
inline bool OVR::OpenVR::CVRChaperone::GetPlayAreaRect(::by_ref<::OVR::OpenVR::HmdQuad_t> rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetPlayAreaRect", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdQuad_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect);
}
inline void OVR::OpenVR::CVRChaperone::ReloadInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "ReloadInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRChaperone::SetSceneColor(::OVR::OpenVR::HmdColor_t color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "SetSceneColor", {}, { ::i2c::type_of<::OVR::OpenVR::HmdColor_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void OVR::OpenVR::CVRChaperone::GetBoundsColor(::by_ref<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                                                      ::by_ref<::OVR::OpenVR::HmdColor_t> pOutputCameraColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "GetBoundsColor",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdColor_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}
inline bool OVR::OpenVR::CVRChaperone::AreBoundsVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "AreBoundsVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRChaperone::ForceBoundsVisible(bool bForce) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperone*>(), { "ForceBoundsVisible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bForce);
}
inline ::OVR::OpenVR::CVRChaperone* OVR::OpenVR::CVRChaperone::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRChaperone*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRChaperone::CVRChaperone() {}
