#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRControllerHelper)
namespace GlobalNamespace {
struct OVRControllerHelper_ControllerType;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRControllerHelper_ControllerType;
}
namespace GlobalNamespace {
class OVRControllerHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRControllerHelper_ControllerType);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerHelper);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRControllerHelper/ControllerType
struct CORDL_TYPE OVRControllerHelper_ControllerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRControllerHelper_ControllerType_Unwrapped
  enum struct __OVRControllerHelper_ControllerType_Unwrapped : int32_t {
    __E_QuestAndRiftS = static_cast<int32_t>(0x1),
    __E_Rift = static_cast<int32_t>(0x2),
    __E_Quest2 = static_cast<int32_t>(0x3),
    __E_TouchPro = static_cast<int32_t>(0x4),
    __E_TouchPlus = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRControllerHelper_ControllerType_Unwrapped() const noexcept {
    return static_cast<__OVRControllerHelper_ControllerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerHelper_ControllerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRControllerHelper_ControllerType(int32_t value__) noexcept;

  /// @brief Field Quest2 value: I32(3)
  static ::GlobalNamespace::OVRControllerHelper_ControllerType const Quest2;

  /// @brief Field QuestAndRiftS value: I32(1)
  static ::GlobalNamespace::OVRControllerHelper_ControllerType const QuestAndRiftS;

  /// @brief Field Rift value: I32(2)
  static ::GlobalNamespace::OVRControllerHelper_ControllerType const Rift;

  /// @brief Field TouchPlus value: I32(5)
  static ::GlobalNamespace::OVRControllerHelper_ControllerType const TouchPlus;

  /// @brief Field TouchPro value: I32(4)
  static ::GlobalNamespace::OVRControllerHelper_ControllerType const TouchPro;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerHelper_ControllerType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerHelper_ControllerType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRControllerHelper::ControllerType, OVRInput::Controller, OVRInput::ControllerInHandState, OVRInput::InputDeviceShowState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerHelper
class CORDL_TYPE OVRControllerHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ControllerType = ::GlobalNamespace::OVRControllerHelper_ControllerType;

  /// @brief Field activeControllerType, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_activeControllerType, put = __cordl_internal_set_activeControllerType)) ::GlobalNamespace::OVRControllerHelper_ControllerType activeControllerType;

  /// @brief Field m_activeController, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_activeController, put = __cordl_internal_set_m_activeController)) ::UnityW<::UnityEngine::GameObject> m_activeController;

  /// @brief Field m_animator, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_animator, put = __cordl_internal_set_m_animator)) ::UnityW<::UnityEngine::Animator> m_animator;

  /// @brief Field m_controller, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_controller, put = __cordl_internal_set_m_controller)) ::GlobalNamespace::OVRInput_Controller m_controller;

  /// @brief Field m_controllerModelsInitialized, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_controllerModelsInitialized, put = __cordl_internal_set_m_controllerModelsInitialized)) bool m_controllerModelsInitialized;

  /// @brief Field m_hasInputFocus, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInputFocus, put = __cordl_internal_set_m_hasInputFocus)) bool m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInputFocusPrev, put = __cordl_internal_set_m_hasInputFocusPrev)) bool m_hasInputFocusPrev;

  /// @brief Field m_modelMetaTouchPlusLeftController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelMetaTouchPlusLeftController, put = __cordl_internal_set_m_modelMetaTouchPlusLeftController)) ::UnityW<::UnityEngine::GameObject>
      m_modelMetaTouchPlusLeftController;

  /// @brief Field m_modelMetaTouchPlusRightController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelMetaTouchPlusRightController, put = __cordl_internal_set_m_modelMetaTouchPlusRightController)) ::UnityW<::UnityEngine::GameObject>
      m_modelMetaTouchPlusRightController;

  /// @brief Field m_modelMetaTouchProLeftController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelMetaTouchProLeftController, put = __cordl_internal_set_m_modelMetaTouchProLeftController)) ::UnityW<::UnityEngine::GameObject>
      m_modelMetaTouchProLeftController;

  /// @brief Field m_modelMetaTouchProRightController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelMetaTouchProRightController, put = __cordl_internal_set_m_modelMetaTouchProRightController)) ::UnityW<::UnityEngine::GameObject>
      m_modelMetaTouchProRightController;

  /// @brief Field m_modelOculusTouchQuest2LeftController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchQuest2LeftController, put = __cordl_internal_set_m_modelOculusTouchQuest2LeftController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchQuest2LeftController;

  /// @brief Field m_modelOculusTouchQuest2RightController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchQuest2RightController, put = __cordl_internal_set_m_modelOculusTouchQuest2RightController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchQuest2RightController;

  /// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController,
                      put = __cordl_internal_set_m_modelOculusTouchQuestAndRiftSLeftController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchQuestAndRiftSLeftController;

  /// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController,
                      put = __cordl_internal_set_m_modelOculusTouchQuestAndRiftSRightController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchQuestAndRiftSRightController;

  /// @brief Field m_modelOculusTouchRiftLeftController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchRiftLeftController, put = __cordl_internal_set_m_modelOculusTouchRiftLeftController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchRiftLeftController;

  /// @brief Field m_modelOculusTouchRiftRightController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_modelOculusTouchRiftRightController, put = __cordl_internal_set_m_modelOculusTouchRiftRightController)) ::UnityW<::UnityEngine::GameObject>
      m_modelOculusTouchRiftRightController;

  /// @brief Field m_prevControllerConnected, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_m_prevControllerConnected, put = __cordl_internal_set_m_prevControllerConnected)) bool m_prevControllerConnected;

  /// @brief Field m_prevControllerConnectedCached, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_m_prevControllerConnectedCached, put = __cordl_internal_set_m_prevControllerConnectedCached)) bool m_prevControllerConnectedCached;

  /// @brief Field m_prevControllerInHandState, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevControllerInHandState,
                      put = __cordl_internal_set_m_prevControllerInHandState)) ::GlobalNamespace::OVRInput_ControllerInHandState m_prevControllerInHandState;

  /// @brief Field m_showState, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_showState, put = __cordl_internal_set_m_showState)) ::GlobalNamespace::OVRInput_InputDeviceShowState m_showState;

  /// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses,
                      put = __cordl_internal_set_showWhenHandsArePoweredByNaturalControllerPoses)) bool showWhenHandsArePoweredByNaturalControllerPoses;

  /// @brief Method InitializeControllerModels, addr 0x402874c, size 0x494, virtual false, abstract: false, final false
  inline void InitializeControllerModels();

  /// @brief Method InputFocusAquired, addr 0x4029448, size 0xc, virtual false, abstract: false, final false
  inline void InputFocusAquired();

  /// @brief Method InputFocusLost, addr 0x4029454, size 0x8, virtual false, abstract: false, final false
  inline void InputFocusLost();

  static inline ::GlobalNamespace::OVRControllerHelper* New_ctor();

  /// @brief Method Start, addr 0x40286dc, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x4028be0, size 0x868, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::OVRControllerHelper_ControllerType const& __cordl_internal_get_activeControllerType() const;

  constexpr ::GlobalNamespace::OVRControllerHelper_ControllerType& __cordl_internal_get_activeControllerType();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_activeController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_activeController();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_animator();

  constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get_m_controller() const;

  constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get_m_controller();

  constexpr bool const& __cordl_internal_get_m_controllerModelsInitialized() const;

  constexpr bool& __cordl_internal_get_m_controllerModelsInitialized();

  constexpr bool const& __cordl_internal_get_m_hasInputFocus() const;

  constexpr bool& __cordl_internal_get_m_hasInputFocus();

  constexpr bool const& __cordl_internal_get_m_hasInputFocusPrev() const;

  constexpr bool& __cordl_internal_get_m_hasInputFocusPrev();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchPlusLeftController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchPlusLeftController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchPlusRightController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchPlusRightController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchProLeftController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchProLeftController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelMetaTouchProRightController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelMetaTouchProRightController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuest2LeftController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuest2LeftController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuest2RightController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuest2RightController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchRiftLeftController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchRiftLeftController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_modelOculusTouchRiftRightController() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_modelOculusTouchRiftRightController();

  constexpr bool const& __cordl_internal_get_m_prevControllerConnected() const;

  constexpr bool& __cordl_internal_get_m_prevControllerConnected();

  constexpr bool const& __cordl_internal_get_m_prevControllerConnectedCached() const;

  constexpr bool& __cordl_internal_get_m_prevControllerConnectedCached();

  constexpr ::GlobalNamespace::OVRInput_ControllerInHandState const& __cordl_internal_get_m_prevControllerInHandState() const;

  constexpr ::GlobalNamespace::OVRInput_ControllerInHandState& __cordl_internal_get_m_prevControllerInHandState();

  constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& __cordl_internal_get_m_showState() const;

  constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& __cordl_internal_get_m_showState();

  constexpr bool const& __cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses() const;

  constexpr bool& __cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses();

  constexpr void __cordl_internal_set_activeControllerType(::GlobalNamespace::OVRControllerHelper_ControllerType value);

  constexpr void __cordl_internal_set_m_activeController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_m_controller(::GlobalNamespace::OVRInput_Controller value);

  constexpr void __cordl_internal_set_m_controllerModelsInitialized(bool value);

  constexpr void __cordl_internal_set_m_hasInputFocus(bool value);

  constexpr void __cordl_internal_set_m_hasInputFocusPrev(bool value);

  constexpr void __cordl_internal_set_m_modelMetaTouchPlusLeftController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelMetaTouchPlusRightController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelMetaTouchProLeftController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelMetaTouchProRightController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchQuest2LeftController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchQuest2RightController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchQuestAndRiftSLeftController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchQuestAndRiftSRightController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchRiftLeftController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_modelOculusTouchRiftRightController(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_prevControllerConnected(bool value);

  constexpr void __cordl_internal_set_m_prevControllerConnectedCached(bool value);

  constexpr void __cordl_internal_set_m_prevControllerInHandState(::GlobalNamespace::OVRInput_ControllerInHandState value);

  constexpr void __cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState value);

  constexpr void __cordl_internal_set_showWhenHandsArePoweredByNaturalControllerPoses(bool value);

  /// @brief Method .ctor, addr 0x402945c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerHelper(OVRControllerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerHelper(OVRControllerHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8391 };

  /// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchQuestAndRiftSLeftController;

  /// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchQuestAndRiftSRightController;

  /// @brief Field m_modelOculusTouchRiftLeftController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchRiftLeftController;

  /// @brief Field m_modelOculusTouchRiftRightController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchRiftRightController;

  /// @brief Field m_modelOculusTouchQuest2LeftController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchQuest2LeftController;

  /// @brief Field m_modelOculusTouchQuest2RightController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelOculusTouchQuest2RightController;

  /// @brief Field m_modelMetaTouchProLeftController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelMetaTouchProLeftController;

  /// @brief Field m_modelMetaTouchProRightController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelMetaTouchProRightController;

  /// @brief Field m_modelMetaTouchPlusLeftController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelMetaTouchPlusLeftController;

  /// @brief Field m_modelMetaTouchPlusRightController, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_modelMetaTouchPlusRightController;

  /// @brief Field m_controller, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Controller ___m_controller;

  /// @brief Field m_showState, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_InputDeviceShowState ___m_showState;

  /// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset: 0x78, size: 0x1, def value: None
  bool ___showWhenHandsArePoweredByNaturalControllerPoses;

  /// @brief Field m_animator, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___m_animator;

  /// @brief Field m_activeController, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_activeController;

  /// @brief Field m_controllerModelsInitialized, offset: 0x90, size: 0x1, def value: None
  bool ___m_controllerModelsInitialized;

  /// @brief Field m_hasInputFocus, offset: 0x91, size: 0x1, def value: None
  bool ___m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset: 0x92, size: 0x1, def value: None
  bool ___m_hasInputFocusPrev;

  /// @brief Field activeControllerType, offset: 0x94, size: 0x4, def value: None
  ::GlobalNamespace::OVRControllerHelper_ControllerType ___activeControllerType;

  /// @brief Field m_prevControllerConnected, offset: 0x98, size: 0x1, def value: None
  bool ___m_prevControllerConnected;

  /// @brief Field m_prevControllerConnectedCached, offset: 0x99, size: 0x1, def value: None
  bool ___m_prevControllerConnectedCached;

  /// @brief Field m_prevControllerInHandState, offset: 0x9c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_ControllerInHandState ___m_prevControllerInHandState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSLeftController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSRightController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftLeftController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftRightController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2LeftController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2RightController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProLeftController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProRightController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusLeftController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusRightController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controller) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_showState) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___showWhenHandsArePoweredByNaturalControllerPoses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_animator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_activeController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controllerModelsInitialized) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocus) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocusPrev) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___activeControllerType) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnected) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnectedCached) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerInHandState) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerHelper, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerHelper_ControllerType, "", "OVRControllerHelper/ControllerType");
NEED_NO_BOX(::GlobalNamespace::OVRControllerHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerHelper*, "", "OVRControllerHelper");
