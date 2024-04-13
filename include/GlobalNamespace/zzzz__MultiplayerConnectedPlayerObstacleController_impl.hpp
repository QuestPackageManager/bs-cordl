#pragma once
#include "GlobalNamespace/zzzz__ObstacleController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::*)()>(
    &::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25f4a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>());
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool::__MultiplayerConnectedPlayerObstacleController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)(
    ::GlobalNamespace::ObstacleData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25f4880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25f4a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>&
GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerConnectedPlayerObstacleClippingController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> const&
GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerConnectedPlayerObstacleClippingController;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerConnectedPlayerObstacleClippingController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init(::GlobalNamespace::ObstacleData* obstacleData, float_t worldRotation, ::UnityEngine::Vector3 startPos,
                                                                                ::UnityEngine::Vector3 midPos, ::UnityEngine::Vector3 endPos, float_t move1Duration, float_t move2Duration,
                                                                                float_t singleLineWidth, float_t height) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* GlobalNamespace::MultiplayerConnectedPlayerObstacleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::MultiplayerConnectedPlayerObstacleController() {}
