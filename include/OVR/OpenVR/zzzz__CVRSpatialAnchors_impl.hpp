#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSpatialAnchors.hpp"
#include "OVR/OpenVR/zzzz__IVRSpatialAnchors_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRSpatialAnchors_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRSpatialAnchors._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRSpatialAnchors::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRSpatialAnchors::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e457e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSpatialAnchors.CreateSpatialAnchorFromDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::CVRSpatialAnchors::*)(::StringW, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e458d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { "CreateSpatialAnchorFromDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSpatialAnchors.CreateSpatialAnchorFromPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::CVRSpatialAnchors::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>, ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e458fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { "CreateSpatialAnchorFromPose",
                                                                                    {},
                                                                                    { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(),
                                                                                      ::i2c::type_of<::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSpatialAnchors.GetSpatialAnchorPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::CVRSpatialAnchors::*)(
    uint32_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>)>(&::OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(),
            { "GetSpatialAnchorPose", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRSpatialAnchors.GetSpatialAnchorDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (::OVR::OpenVR::CVRSpatialAnchors::*)(uint32_t, ::System::Text::StringBuilder*, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(),
                            { "GetSpatialAnchorDescriptor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRSpatialAnchors& OVR::OpenVR::CVRSpatialAnchors::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRSpatialAnchors const& OVR::OpenVR::CVRSpatialAnchors::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRSpatialAnchors::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRSpatialAnchors value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRSpatialAnchors::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ::by_ref<uint32_t> pHandleOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { "CreateSpatialAnchorFromDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, pchDescriptor, pHandleOut);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                        ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ::by_ref<uint32_t> pHandleOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(), { "CreateSpatialAnchorFromPose",
                                                                                  {},
                                                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(),
                                                                                    ::i2c::type_of<::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unDeviceIndex, eOrigin, pPose, pHandleOut);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose(uint32_t unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin,
                                                                                                 ::by_ref<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(),
          { "GetSpatialAnchorPose", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::SpatialAnchorPose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unHandle, eOrigin, pPoseOut);
}
inline ::OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor(uint32_t unHandle, ::System::Text::StringBuilder* pchDescriptorOut,
                                                                                                       ::by_ref<uint32_t> punDescriptorBufferLenInOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRSpatialAnchors*>(),
                                       { "GetSpatialAnchorDescriptor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRSpatialAnchorError>(this, ___internal_method, unHandle, pchDescriptorOut, punDescriptorBufferLenInOut);
}
inline ::OVR::OpenVR::CVRSpatialAnchors* OVR::OpenVR::CVRSpatialAnchors::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRSpatialAnchors*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRSpatialAnchors::CVRSpatialAnchors() {}
