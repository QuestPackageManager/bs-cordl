#pragma once
// IWYU pragma private; include "Meta\XR\BuildingBlocks\SpatialAnchorLocalStorageManagerBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorLocalStorageManagerBuildingBlock_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a35f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.SaveAnchorUuidToLocalStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
        &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SaveAnchorUuidToLocalStorage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a36040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                         { "SaveAnchorUuidToLocalStorage", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.RemoveAnchorFromLocalStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
        &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::RemoveAnchorFromLocalStorage)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a36160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                         { "RemoveAnchorFromLocalStorage", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.GetAnchorAnchorUuidFromLocalStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(::System::Collections::Generic::List_1<::System::Guid>*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::GetAnchorAnchorUuidFromLocalStorage)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a35d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                                                             { "GetAnchorAnchorUuidFromLocalStorage", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Reset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a36318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a36364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::__cordl_internal_get__spatialAnchorCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const&
Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::__cordl_internal_get__spatialAnchorCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr void
Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::__cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatialAnchorCore = value;
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SaveAnchorUuidToLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor,
                                                                                                                  ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                          { "SaveAnchorUuidToLocalStorage", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, result);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::RemoveAnchorFromLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor,
                                                                                                                  ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                          { "RemoveAnchorFromLocalStorage", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, result);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::GetAnchorAnchorUuidFromLocalStorage(::System::Collections::Generic::List_1<::System::Guid>* uuids) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(),
                                                           { "GetAnchorAnchorUuidFromLocalStorage", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SpatialAnchorLocalStorageManagerBuildingBlock() {}
