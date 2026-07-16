#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/NavigationModel.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::NavigationModel.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::NavigationModel::*)()>(&::UnityEngine::InputSystem::UI::NavigationModel::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6591c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::NavigationModel>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::NavigationModel::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::NavigationModel>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastMoveTime", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty:
// "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::NavigationModel::NavigationModel(::UnityEngine::Vector2 move, int32_t consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection lastMoveDirection,
                                                                           float_t lastMoveTime, ::UnityEngine::EventSystems::AxisEventData* eventData,
                                                                           ::UnityEngine::InputSystem::InputDevice* device) noexcept {
  this->move = move;
  this->consecutiveMoveCount = consecutiveMoveCount;
  this->lastMoveDirection = lastMoveDirection;
  this->lastMoveTime = lastMoveTime;
  this->eventData = eventData;
  this->device = device;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::NavigationModel::NavigationModel() {}
