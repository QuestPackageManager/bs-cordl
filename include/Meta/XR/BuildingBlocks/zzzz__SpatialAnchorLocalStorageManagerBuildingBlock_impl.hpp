#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorLocalStorageManagerBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorLocalStorageManagerBuildingBlock_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x581ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.SaveAnchorUuidToLocalStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
        &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SaveAnchorUuidToLocalStorage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5820090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                    "SaveAnchorUuidToLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.RemoveAnchorFromLocalStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
        &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::RemoveAnchorFromLocalStorage)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x58201b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                    "RemoveAnchorFromLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.GetAnchorAnchorUuidFromLocalStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)(
    ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::GetAnchorAnchorUuidFromLocalStorage)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x581fd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                    "GetAnchorAnchorUuidFromLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Reset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5820368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58203b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58203dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spatialAnchorCore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SaveAnchorUuidToLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor,
                                                                                                                  ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                  "SaveAnchorUuidToLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, result);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::RemoveAnchorFromLocalStorage(::GlobalNamespace::OVRSpatialAnchor* anchor,
                                                                                                                  ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                  "RemoveAnchorFromLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, result);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::GetAnchorAnchorUuidFromLocalStorage(::System::Collections::Generic::List_1<::System::Guid>* uuids) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(),
                                  "GetAnchorAnchorUuidFromLocalStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorLocalStorageManagerBuildingBlock::SpatialAnchorLocalStorageManagerBuildingBlock() {}
