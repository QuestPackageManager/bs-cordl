#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSpawnData::*)(::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::ObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58cd0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnData>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObstacleSpawnData::_ctor(::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnData>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, moveOffset, obstacleWidth, obstacleHeight);
}
// Ctor Parameters [CppParam { name: "moveOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstacleWidth", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObstacleSpawnData::ObstacleSpawnData(::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight) noexcept {
  this->moveOffset = moveOffset;
  this->obstacleWidth = obstacleWidth;
  this->obstacleHeight = obstacleHeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSpawnData::ObstacleSpawnData() {}
