#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/PassthroughProjectionSurfaceBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__PassthroughProjectionSurfaceBuildingBlock_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::Start)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x581e314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::__cordl_internal_get_projectionObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionObject;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::__cordl_internal_get_projectionObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionObject;
}
constexpr void Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::__cordl_internal_set_projectionObject(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectionObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock* Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::PassthroughProjectionSurfaceBuildingBlock() {}
