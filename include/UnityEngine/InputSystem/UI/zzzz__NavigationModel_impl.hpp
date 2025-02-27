#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/NavigationModel.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::NavigationModel.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::NavigationModel::*)()>(
    &::UnityEngine::InputSystem::UI::NavigationModel::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x45ffe70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::NavigationModel>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::NavigationModel::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::NavigationModel>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastMoveTime", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::NavigationModel::NavigationModel(::UnityEngine::Vector2 move, int32_t consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection lastMoveDirection,
                                                                           float_t lastMoveTime, ::UnityEngine::EventSystems::AxisEventData* eventData) noexcept {
  this->move = move;
  this->consecutiveMoveCount = consecutiveMoveCount;
  this->lastMoveDirection = lastMoveDirection;
  this->lastMoveTime = lastMoveTime;
  this->eventData = eventData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::NavigationModel::NavigationModel() {}
