#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRChaperoneSetup.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRChaperoneSetup_def.hpp"
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRChaperoneSetup::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e449bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.CommitWorkingCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::OVR::OpenVR::EChaperoneConfigFile)>(&::OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "CommitWorkingCopy", {}, { ::i2c::type_of<::OVR::OpenVR::EChaperoneConfigFile>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.RevertWorkingCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)()>(&::OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "RevertWorkingCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<float_t>, ::by_ref<float_t>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e44afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingPlayAreaSize", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingPlayAreaRect", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdQuad_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e44b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingCollisionBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e44bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                                                           { "GetLiveCollisionBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingStandingZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                             { "GetWorkingStandingZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingPlayAreaSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(float_t, float_t)>(&::OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingPlayAreaSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e44cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingCollisionBoundsInfo", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::HmdQuad_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingStandingZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                             { "SetWorkingStandingZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ReloadFromDisk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::OVR::OpenVR::EChaperoneConfigFile)>(&::OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "ReloadFromDisk", {}, { ::i2c::type_of<::OVR::OpenVR::EChaperoneConfigFile>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetLiveSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsTagsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<uint8_t>)>(&::OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e44da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingCollisionBoundsTagsInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsTagsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::ArrayW<uint8_t>>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e44dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetLiveCollisionBoundsTagsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingPhysicalBoundsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e44e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingPhysicalBoundsInfo", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::HmdQuad_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLivePhysicalBoundsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e44eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                                                           { "GetLivePhysicalBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ExportLiveToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::System::Text::StringBuilder*, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e44f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                             { "ExportLiveToBuffer", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ImportFromBufferToWorking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::StringW, uint32_t)>(&::OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e44f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "ImportFromBufferToWorking", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRChaperoneSetup& OVR::OpenVR::CVRChaperoneSetup::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRChaperoneSetup const& OVR::OpenVR::CVRChaperoneSetup::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRChaperoneSetup::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRChaperoneSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRChaperoneSetup::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "CommitWorkingCopy", {}, { ::i2c::type_of<::OVR::OpenVR::EChaperoneConfigFile>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, configFile);
}
inline void OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "RevertWorkingCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingPlayAreaSize", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect(::by_ref<::OVR::OpenVR::HmdQuad_t> rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingPlayAreaRect", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdQuad_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                                                         { "GetWorkingCollisionBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                                                         { "GetLiveCollisionBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetWorkingStandingZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatStandingZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingPlayAreaSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeX, sizeZ);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t> pQuadsBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingCollisionBoundsInfo", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::HmdQuad_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pQuadsBuffer);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatSeatedZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingStandingZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatStandingZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "ReloadFromDisk", {}, { ::i2c::type_of<::OVR::OpenVR::EChaperoneConfigFile>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configFile);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetLiveSeatedZeroPoseToRawTrackingPose", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::HmdMatrix34_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t> pTagsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingCollisionBoundsTagsInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pTagsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo(::by_ref<::ArrayW<uint8_t>> pTagsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetLiveCollisionBoundsTagsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pTagsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "SetWorkingPhysicalBoundsInfo", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::HmdQuad_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "GetLivePhysicalBoundsInfo", {}, { ::i2c::type_of<::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ::by_ref<uint32_t> pnBufferLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(),
                                                           { "ExportLiveToBuffer", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pBuffer, pnBufferLength);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRChaperoneSetup*>(), { "ImportFromBufferToWorking", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pBuffer, nImportFlags);
}
inline ::OVR::OpenVR::CVRChaperoneSetup* OVR::OpenVR::CVRChaperoneSetup::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRChaperoneSetup*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRChaperoneSetup::CVRChaperoneSetup() {}
