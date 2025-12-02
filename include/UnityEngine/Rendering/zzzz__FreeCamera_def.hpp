#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FreeCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FreeCamera)
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class FreeCamera;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FreeCamera);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FreeCamera
class CORDL_TYPE FreeCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field fire1, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_fire1, put = __cordl_internal_set_fire1)) bool fire1;

  /// @brief Field inputChangeSpeed, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_inputChangeSpeed, put = __cordl_internal_set_inputChangeSpeed)) float_t inputChangeSpeed;

  /// @brief Field inputHorizontal, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_inputHorizontal, put = __cordl_internal_set_inputHorizontal)) float_t inputHorizontal;

  /// @brief Field inputRotateAxisX, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_inputRotateAxisX, put = __cordl_internal_set_inputRotateAxisX)) float_t inputRotateAxisX;

  /// @brief Field inputRotateAxisY, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputRotateAxisY, put = __cordl_internal_set_inputRotateAxisY)) float_t inputRotateAxisY;

  /// @brief Field inputVertical, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_inputVertical, put = __cordl_internal_set_inputVertical)) float_t inputVertical;

  /// @brief Field inputYAxis, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputYAxis, put = __cordl_internal_set_inputYAxis)) float_t inputYAxis;

  /// @brief Field leftShift, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_leftShift, put = __cordl_internal_set_leftShift)) bool leftShift;

  /// @brief Field leftShiftBoost, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_leftShiftBoost, put = __cordl_internal_set_leftShiftBoost)) bool leftShiftBoost;

  /// @brief Field lookAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lookAction, put = __cordl_internal_set_lookAction)) ::UnityEngine::InputSystem::InputAction* lookAction;

  /// @brief Field m_LookSpeedController, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LookSpeedController, put = __cordl_internal_set_m_LookSpeedController)) float_t m_LookSpeedController;

  /// @brief Field m_LookSpeedMouse, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LookSpeedMouse, put = __cordl_internal_set_m_LookSpeedMouse)) float_t m_LookSpeedMouse;

  /// @brief Field m_MoveSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveSpeed, put = __cordl_internal_set_m_MoveSpeed)) float_t m_MoveSpeed;

  /// @brief Field m_MoveSpeedIncrement, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveSpeedIncrement, put = __cordl_internal_set_m_MoveSpeedIncrement)) float_t m_MoveSpeedIncrement;

  /// @brief Field m_Turbo, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Turbo, put = __cordl_internal_set_m_Turbo)) float_t m_Turbo;

  /// @brief Field moveAction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_moveAction, put = __cordl_internal_set_moveAction)) ::UnityEngine::InputSystem::InputAction* moveAction;

  /// @brief Field speedAction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_speedAction, put = __cordl_internal_set_speedAction)) ::UnityEngine::InputSystem::InputAction* speedAction;

  /// @brief Field yMoveAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_yMoveAction, put = __cordl_internal_set_yMoveAction)) ::UnityEngine::InputSystem::InputAction* yMoveAction;

  static inline ::UnityEngine::Rendering::FreeCamera* New_ctor();

  /// @brief Method OnEnable, addr 0x652e9f0, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterInputs, addr 0x652e9f4, size 0x7f8, virtual false, abstract: false, final false
  inline void RegisterInputs();

  /// @brief Method Update, addr 0x652f400, size 0x3b8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateInputs, addr 0x652f1ec, size 0x214, virtual false, abstract: false, final false
  inline void UpdateInputs();

  constexpr bool const& __cordl_internal_get_fire1() const;

  constexpr bool& __cordl_internal_get_fire1();

  constexpr float_t const& __cordl_internal_get_inputChangeSpeed() const;

  constexpr float_t& __cordl_internal_get_inputChangeSpeed();

  constexpr float_t const& __cordl_internal_get_inputHorizontal() const;

  constexpr float_t& __cordl_internal_get_inputHorizontal();

  constexpr float_t const& __cordl_internal_get_inputRotateAxisX() const;

  constexpr float_t& __cordl_internal_get_inputRotateAxisX();

  constexpr float_t const& __cordl_internal_get_inputRotateAxisY() const;

  constexpr float_t& __cordl_internal_get_inputRotateAxisY();

  constexpr float_t const& __cordl_internal_get_inputVertical() const;

  constexpr float_t& __cordl_internal_get_inputVertical();

  constexpr float_t const& __cordl_internal_get_inputYAxis() const;

  constexpr float_t& __cordl_internal_get_inputYAxis();

  constexpr bool const& __cordl_internal_get_leftShift() const;

  constexpr bool& __cordl_internal_get_leftShift();

  constexpr bool const& __cordl_internal_get_leftShiftBoost() const;

  constexpr bool& __cordl_internal_get_leftShiftBoost();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_lookAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_lookAction();

  constexpr float_t const& __cordl_internal_get_m_LookSpeedController() const;

  constexpr float_t& __cordl_internal_get_m_LookSpeedController();

  constexpr float_t const& __cordl_internal_get_m_LookSpeedMouse() const;

  constexpr float_t& __cordl_internal_get_m_LookSpeedMouse();

  constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

  constexpr float_t& __cordl_internal_get_m_MoveSpeed();

  constexpr float_t const& __cordl_internal_get_m_MoveSpeedIncrement() const;

  constexpr float_t& __cordl_internal_get_m_MoveSpeedIncrement();

  constexpr float_t const& __cordl_internal_get_m_Turbo() const;

  constexpr float_t& __cordl_internal_get_m_Turbo();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_moveAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_moveAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_speedAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_speedAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_yMoveAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_yMoveAction();

  constexpr void __cordl_internal_set_fire1(bool value);

  constexpr void __cordl_internal_set_inputChangeSpeed(float_t value);

  constexpr void __cordl_internal_set_inputHorizontal(float_t value);

  constexpr void __cordl_internal_set_inputRotateAxisX(float_t value);

  constexpr void __cordl_internal_set_inputRotateAxisY(float_t value);

  constexpr void __cordl_internal_set_inputVertical(float_t value);

  constexpr void __cordl_internal_set_inputYAxis(float_t value);

  constexpr void __cordl_internal_set_leftShift(bool value);

  constexpr void __cordl_internal_set_leftShiftBoost(bool value);

  constexpr void __cordl_internal_set_lookAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_LookSpeedController(float_t value);

  constexpr void __cordl_internal_set_m_LookSpeedMouse(float_t value);

  constexpr void __cordl_internal_set_m_MoveSpeed(float_t value);

  constexpr void __cordl_internal_set_m_MoveSpeedIncrement(float_t value);

  constexpr void __cordl_internal_set_m_Turbo(float_t value);

  constexpr void __cordl_internal_set_moveAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_speedAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_yMoveAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method .ctor, addr 0x652f7b8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FreeCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeCamera(FreeCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeCamera(FreeCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11840 };

  /// @brief Field k_MouseSensitivityMultiplier offset 0xffffffff size 0x4
  static constexpr float_t k_MouseSensitivityMultiplier{ static_cast<float_t>(0.01f) };

  /// @brief Field m_LookSpeedController, offset: 0x20, size: 0x4, def value: None
  float_t ___m_LookSpeedController;

  /// @brief Field m_LookSpeedMouse, offset: 0x24, size: 0x4, def value: None
  float_t ___m_LookSpeedMouse;

  /// @brief Field m_MoveSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___m_MoveSpeed;

  /// @brief Field m_MoveSpeedIncrement, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_MoveSpeedIncrement;

  /// @brief Field m_Turbo, offset: 0x30, size: 0x4, def value: None
  float_t ___m_Turbo;

  /// @brief Field lookAction, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___lookAction;

  /// @brief Field moveAction, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___moveAction;

  /// @brief Field speedAction, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___speedAction;

  /// @brief Field yMoveAction, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___yMoveAction;

  /// @brief Field inputRotateAxisX, offset: 0x58, size: 0x4, def value: None
  float_t ___inputRotateAxisX;

  /// @brief Field inputRotateAxisY, offset: 0x5c, size: 0x4, def value: None
  float_t ___inputRotateAxisY;

  /// @brief Field inputChangeSpeed, offset: 0x60, size: 0x4, def value: None
  float_t ___inputChangeSpeed;

  /// @brief Field inputVertical, offset: 0x64, size: 0x4, def value: None
  float_t ___inputVertical;

  /// @brief Field inputHorizontal, offset: 0x68, size: 0x4, def value: None
  float_t ___inputHorizontal;

  /// @brief Field inputYAxis, offset: 0x6c, size: 0x4, def value: None
  float_t ___inputYAxis;

  /// @brief Field leftShiftBoost, offset: 0x70, size: 0x1, def value: None
  bool ___leftShiftBoost;

  /// @brief Field leftShift, offset: 0x71, size: 0x1, def value: None
  bool ___leftShift;

  /// @brief Field fire1, offset: 0x72, size: 0x1, def value: None
  bool ___fire1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_LookSpeedController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_LookSpeedMouse) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_MoveSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_MoveSpeedIncrement) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___m_Turbo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___lookAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___moveAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___speedAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___yMoveAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputRotateAxisX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputRotateAxisY) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputChangeSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputVertical) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputHorizontal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___inputYAxis) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___leftShiftBoost) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___leftShift) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeCamera, ___fire1) == 0x72, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FreeCamera, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FreeCamera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FreeCamera*, "UnityEngine.Rendering", "FreeCamera");
