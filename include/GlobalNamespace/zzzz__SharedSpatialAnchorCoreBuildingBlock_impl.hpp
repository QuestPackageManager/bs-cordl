#pragma once
// IWYU pragma private; include "GlobalNamespace\SharedSpatialAnchorCoreBuildingBlock.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__BuildingBlock_impl.hpp"
#include "GlobalNamespace/zzzz__SharedSpatialAnchorCoreBuildingBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock::*)()>(&::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a33080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock* GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedSpatialAnchorCoreBuildingBlock::SharedSpatialAnchorCoreBuildingBlock() {}
