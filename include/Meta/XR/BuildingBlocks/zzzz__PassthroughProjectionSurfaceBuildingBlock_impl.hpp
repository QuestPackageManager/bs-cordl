#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/PassthroughProjectionSurfaceBuildingBlock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__PassthroughProjectionSurfaceBuildingBlock_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::Start)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a31fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a321b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>(), { ".ctor", {}, {} })));
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
  this->___projectionObject = value;
}
inline void Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock* Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::PassthroughProjectionSurfaceBuildingBlock::PassthroughProjectionSurfaceBuildingBlock() {}
