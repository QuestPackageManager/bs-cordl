#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnData::*)(::UnityEngine::Vector3, float_t, float_t)>(
    &::GlobalNamespace::ObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ae4f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObstacleSpawnData::_ctor(::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moveOffset, obstacleWidth, obstacleHeight);
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
