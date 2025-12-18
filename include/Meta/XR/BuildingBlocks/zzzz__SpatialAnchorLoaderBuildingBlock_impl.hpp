#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorLoaderBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorLoaderBuildingBlock_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorSpawnerBuildingBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58860f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock.LoadAndInstantiateAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::*)(
    ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::LoadAndInstantiateAnchors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58862a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock.LoadAnchorsFromDefaultLocalStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::LoadAnchorsFromDefaultLocalStorage)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x58862d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58866e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>& Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_get__spatialAnchorCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> const& Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_get__spatialAnchorCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorCore;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_set__spatialAnchorCore(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spatialAnchorCore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock>& Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_get__spatialAnchorSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorSpawner;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock> const&
Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_get__spatialAnchorSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialAnchorSpawner;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::__cordl_internal_set__spatialAnchorSpawner(::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorSpawnerBuildingBlock> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spatialAnchorSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::LoadAndInstantiateAnchors(::System::Collections::Generic::List_1<::System::Guid>* uuids) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::LoadAnchorsFromDefaultLocalStorage() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorLoaderBuildingBlock::SpatialAnchorLoaderBuildingBlock() {}
