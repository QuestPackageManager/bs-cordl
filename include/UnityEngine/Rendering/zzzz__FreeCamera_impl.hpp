#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FreeCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FreeCamera_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FreeCamera.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeCamera::*)()>(&::UnityEngine::Rendering::FreeCamera::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6747ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FreeCamera.RegisterInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeCamera::*)()>(&::UnityEngine::Rendering::FreeCamera::RegisterInputs)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x6747ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "RegisterInputs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FreeCamera.UpdateInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeCamera::*)()>(&::UnityEngine::Rendering::FreeCamera::UpdateInputs)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67486c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "UpdateInputs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FreeCamera.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeCamera::*)()>(&::UnityEngine::Rendering::FreeCamera::Update)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x67488dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FreeCamera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FreeCamera::*)()>(&::UnityEngine::Rendering::FreeCamera::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6748c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_LookSpeedController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LookSpeedController;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_LookSpeedController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LookSpeedController;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_m_LookSpeedController(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LookSpeedController = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_LookSpeedMouse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LookSpeedMouse;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_LookSpeedMouse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LookSpeedMouse;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_m_LookSpeedMouse(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LookSpeedMouse = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_MoveSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeed;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_MoveSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeed;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_m_MoveSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveSpeed = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_MoveSpeedIncrement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeedIncrement;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_MoveSpeedIncrement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeedIncrement;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_m_MoveSpeedIncrement(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveSpeedIncrement = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_Turbo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Turbo;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_m_Turbo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Turbo;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_m_Turbo(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Turbo = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_lookAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_lookAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAction;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_lookAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_moveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_moveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveAction;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_moveAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_speedAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_speedAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speedAction;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_speedAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speedAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_yMoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMoveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_yMoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMoveAction;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_yMoveAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yMoveAction = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputRotateAxisX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputRotateAxisX;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputRotateAxisX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputRotateAxisX;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputRotateAxisX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputRotateAxisX = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputRotateAxisY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputRotateAxisY;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputRotateAxisY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputRotateAxisY;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputRotateAxisY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputRotateAxisY = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputChangeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputChangeSpeed;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputChangeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputChangeSpeed;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputChangeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputChangeSpeed = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputVertical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputVertical;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputVertical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputVertical;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputVertical(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputVertical = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputHorizontal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHorizontal;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputHorizontal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHorizontal;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputHorizontal(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputHorizontal = value;
}
constexpr float_t& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputYAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputYAxis;
}
constexpr float_t const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_inputYAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputYAxis;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_inputYAxis(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputYAxis = value;
}
constexpr bool& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_leftShiftBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShiftBoost;
}
constexpr bool const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_leftShiftBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShiftBoost;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_leftShiftBoost(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftShiftBoost = value;
}
constexpr bool& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_leftShift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShift;
}
constexpr bool const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_leftShift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShift;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_leftShift(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftShift = value;
}
constexpr bool& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_fire1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fire1;
}
constexpr bool const& UnityEngine::Rendering::FreeCamera::__cordl_internal_get_fire1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fire1;
}
constexpr void UnityEngine::Rendering::FreeCamera::__cordl_internal_set_fire1(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fire1 = value;
}
inline void UnityEngine::Rendering::FreeCamera::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::FreeCamera::RegisterInputs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "RegisterInputs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::FreeCamera::UpdateInputs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "UpdateInputs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::FreeCamera::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::FreeCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FreeCamera*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::FreeCamera* UnityEngine::Rendering::FreeCamera::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::FreeCamera*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FreeCamera::FreeCamera() {}
