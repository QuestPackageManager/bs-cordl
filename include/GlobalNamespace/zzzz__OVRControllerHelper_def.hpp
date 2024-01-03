#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRControllerHelper)
namespace GlobalNamespace {
struct __OVRControllerHelper__ControllerType;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRControllerHelper__ControllerType;
}
namespace GlobalNamespace {
class OVRControllerHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRControllerHelper__ControllerType);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerHelper);
// Type: ::ControllerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8079))
// CS Name: ::OVRControllerHelper::ControllerType
struct CORDL_TYPE __OVRControllerHelper__ControllerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRControllerHelper__ControllerType_Unwrapped
  enum struct ____OVRControllerHelper__ControllerType_Unwrapped : int32_t {
    __E_QuestAndRiftS = static_cast<int32_t>(0x1),
    __E_Rift = static_cast<int32_t>(0x2),
    __E_Quest2 = static_cast<int32_t>(0x3),
    __E_TouchPro = static_cast<int32_t>(0x4),
    __E_TouchPlus = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRControllerHelper__ControllerType_Unwrapped() const noexcept {
    return static_cast<____OVRControllerHelper__ControllerType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRControllerHelper__ControllerType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRControllerHelper__ControllerType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field QuestAndRiftS value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRControllerHelper__ControllerType const QuestAndRiftS;

  /// @brief Field Rift value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRControllerHelper__ControllerType const Rift;

  /// @brief Field Quest2 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRControllerHelper__ControllerType const Quest2;

  /// @brief Field TouchPro value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRControllerHelper__ControllerType const TouchPro;

  /// @brief Field TouchPlus value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRControllerHelper__ControllerType const TouchPlus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerHelper__ControllerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerHelper__ControllerType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerHelper
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(8079)), TypeDefinitionIndex(TypeDefinitionIndex(7604)),
// TypeDefinitionIndex(TypeDefinitionIndex(7598)), TypeDefinitionIndex(TypeDefinitionIndex(7603))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8080)) CS Name: ::OVRControllerHelper*
class CORDL_TYPE OVRControllerHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ControllerType = ::GlobalNamespace::__OVRControllerHelper__ControllerType;

  /// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset 0x18, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchQuestAndRiftSLeftController,
                      put = __set_m_modelOculusTouchQuestAndRiftSLeftController))::UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSLeftController;

  /// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset 0x20, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchQuestAndRiftSRightController,
                      put = __set_m_modelOculusTouchQuestAndRiftSRightController))::UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSRightController;

  /// @brief Field m_modelOculusTouchRiftLeftController, offset 0x28, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchRiftLeftController, put = __set_m_modelOculusTouchRiftLeftController))::UnityEngine::GameObject* m_modelOculusTouchRiftLeftController;

  /// @brief Field m_modelOculusTouchRiftRightController, offset 0x30, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchRiftRightController, put = __set_m_modelOculusTouchRiftRightController))::UnityEngine::GameObject* m_modelOculusTouchRiftRightController;

  /// @brief Field m_modelOculusTouchQuest2LeftController, offset 0x38, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchQuest2LeftController, put = __set_m_modelOculusTouchQuest2LeftController))::UnityEngine::GameObject* m_modelOculusTouchQuest2LeftController;

  /// @brief Field m_modelOculusTouchQuest2RightController, offset 0x40, size 0x8
  __declspec(property(get = __get_m_modelOculusTouchQuest2RightController, put = __set_m_modelOculusTouchQuest2RightController))::UnityEngine::GameObject* m_modelOculusTouchQuest2RightController;

  /// @brief Field m_modelMetaTouchProLeftController, offset 0x48, size 0x8
  __declspec(property(get = __get_m_modelMetaTouchProLeftController, put = __set_m_modelMetaTouchProLeftController))::UnityEngine::GameObject* m_modelMetaTouchProLeftController;

  /// @brief Field m_modelMetaTouchProRightController, offset 0x50, size 0x8
  __declspec(property(get = __get_m_modelMetaTouchProRightController, put = __set_m_modelMetaTouchProRightController))::UnityEngine::GameObject* m_modelMetaTouchProRightController;

  /// @brief Field m_modelMetaTouchPlusLeftController, offset 0x58, size 0x8
  __declspec(property(get = __get_m_modelMetaTouchPlusLeftController, put = __set_m_modelMetaTouchPlusLeftController))::UnityEngine::GameObject* m_modelMetaTouchPlusLeftController;

  /// @brief Field m_modelMetaTouchPlusRightController, offset 0x60, size 0x8
  __declspec(property(get = __get_m_modelMetaTouchPlusRightController, put = __set_m_modelMetaTouchPlusRightController))::UnityEngine::GameObject* m_modelMetaTouchPlusRightController;

  /// @brief Field m_controller, offset 0x68, size 0x4
  __declspec(property(get = __get_m_controller, put = __set_m_controller))::GlobalNamespace::__OVRInput__Controller m_controller;

  /// @brief Field m_showState, offset 0x6c, size 0x4
  __declspec(property(get = __get_m_showState, put = __set_m_showState))::GlobalNamespace::__OVRInput__InputDeviceShowState m_showState;

  /// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset 0x70, size 0x1
  __declspec(property(get = __get_showWhenHandsArePoweredByNaturalControllerPoses, put = __set_showWhenHandsArePoweredByNaturalControllerPoses)) bool showWhenHandsArePoweredByNaturalControllerPoses;

  /// @brief Field m_animator, offset 0x78, size 0x8
  __declspec(property(get = __get_m_animator, put = __set_m_animator))::UnityEngine::Animator* m_animator;

  /// @brief Field m_activeController, offset 0x80, size 0x8
  __declspec(property(get = __get_m_activeController, put = __set_m_activeController))::UnityEngine::GameObject* m_activeController;

  /// @brief Field m_controllerModelsInitialized, offset 0x88, size 0x1
  __declspec(property(get = __get_m_controllerModelsInitialized, put = __set_m_controllerModelsInitialized)) bool m_controllerModelsInitialized;

  /// @brief Field m_hasInputFocus, offset 0x89, size 0x1
  __declspec(property(get = __get_m_hasInputFocus, put = __set_m_hasInputFocus)) bool m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset 0x8a, size 0x1
  __declspec(property(get = __get_m_hasInputFocusPrev, put = __set_m_hasInputFocusPrev)) bool m_hasInputFocusPrev;

  /// @brief Field activeControllerType, offset 0x8c, size 0x4
  __declspec(property(get = __get_activeControllerType, put = __set_activeControllerType))::GlobalNamespace::__OVRControllerHelper__ControllerType activeControllerType;

  /// @brief Field m_prevControllerConnected, offset 0x90, size 0x1
  __declspec(property(get = __get_m_prevControllerConnected, put = __set_m_prevControllerConnected)) bool m_prevControllerConnected;

  /// @brief Field m_prevControllerConnectedCached, offset 0x91, size 0x1
  __declspec(property(get = __get_m_prevControllerConnectedCached, put = __set_m_prevControllerConnectedCached)) bool m_prevControllerConnectedCached;

  /// @brief Field m_prevControllerInHandState, offset 0x94, size 0x4
  __declspec(property(get = __get_m_prevControllerInHandState, put = __set_m_prevControllerInHandState))::GlobalNamespace::__OVRInput__ControllerInHandState m_prevControllerInHandState;

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchQuestAndRiftSLeftController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchQuestAndRiftSLeftController() const;

  constexpr void __set_m_modelOculusTouchQuestAndRiftSLeftController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchQuestAndRiftSRightController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchQuestAndRiftSRightController() const;

  constexpr void __set_m_modelOculusTouchQuestAndRiftSRightController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchRiftLeftController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchRiftLeftController() const;

  constexpr void __set_m_modelOculusTouchRiftLeftController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchRiftRightController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchRiftRightController() const;

  constexpr void __set_m_modelOculusTouchRiftRightController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchQuest2LeftController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchQuest2LeftController() const;

  constexpr void __set_m_modelOculusTouchQuest2LeftController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelOculusTouchQuest2RightController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelOculusTouchQuest2RightController() const;

  constexpr void __set_m_modelOculusTouchQuest2RightController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelMetaTouchProLeftController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelMetaTouchProLeftController() const;

  constexpr void __set_m_modelMetaTouchProLeftController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelMetaTouchProRightController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelMetaTouchProRightController() const;

  constexpr void __set_m_modelMetaTouchProRightController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelMetaTouchPlusLeftController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelMetaTouchPlusLeftController() const;

  constexpr void __set_m_modelMetaTouchPlusLeftController(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_modelMetaTouchPlusRightController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_modelMetaTouchPlusRightController() const;

  constexpr void __set_m_modelMetaTouchPlusRightController(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::__OVRInput__Controller& __get_m_controller();

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __get_m_controller() const;

  constexpr void __set_m_controller(::GlobalNamespace::__OVRInput__Controller value);

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& __get_m_showState();

  constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& __get_m_showState() const;

  constexpr void __set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState value);

  constexpr bool& __get_showWhenHandsArePoweredByNaturalControllerPoses();

  constexpr bool const& __get_showWhenHandsArePoweredByNaturalControllerPoses() const;

  constexpr void __set_showWhenHandsArePoweredByNaturalControllerPoses(bool value);

  constexpr ::UnityEngine::Animator*& __get_m_animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get_m_animator() const;

  constexpr void __set_m_animator(::UnityEngine::Animator* value);

  constexpr ::UnityEngine::GameObject*& __get_m_activeController();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_activeController() const;

  constexpr void __set_m_activeController(::UnityEngine::GameObject* value);

  constexpr bool& __get_m_controllerModelsInitialized();

  constexpr bool const& __get_m_controllerModelsInitialized() const;

  constexpr void __set_m_controllerModelsInitialized(bool value);

  constexpr bool& __get_m_hasInputFocus();

  constexpr bool const& __get_m_hasInputFocus() const;

  constexpr void __set_m_hasInputFocus(bool value);

  constexpr bool& __get_m_hasInputFocusPrev();

  constexpr bool const& __get_m_hasInputFocusPrev() const;

  constexpr void __set_m_hasInputFocusPrev(bool value);

  constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType& __get_activeControllerType();

  constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType const& __get_activeControllerType() const;

  constexpr void __set_activeControllerType(::GlobalNamespace::__OVRControllerHelper__ControllerType value);

  constexpr bool& __get_m_prevControllerConnected();

  constexpr bool const& __get_m_prevControllerConnected() const;

  constexpr void __set_m_prevControllerConnected(bool value);

  constexpr bool& __get_m_prevControllerConnectedCached();

  constexpr bool const& __get_m_prevControllerConnectedCached() const;

  constexpr void __set_m_prevControllerConnectedCached(bool value);

  constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState& __get_m_prevControllerInHandState();

  constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState const& __get_m_prevControllerInHandState() const;

  constexpr void __set_m_prevControllerInHandState(::GlobalNamespace::__OVRInput__ControllerInHandState value);

  /// @brief Method Start, addr 0x27a232c, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method InitializeControllerModels, addr 0x27a239c, size 0x49c, virtual false, abstract: false, final false
  inline void InitializeControllerModels();

  /// @brief Method Update, addr 0x27a2838, size 0x880, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method InputFocusAquired, addr 0x27a30b8, size 0xc, virtual false, abstract: false, final false
  inline void InputFocusAquired();

  /// @brief Method InputFocusLost, addr 0x27a30c4, size 0x8, virtual false, abstract: false, final false
  inline void InputFocusLost();

  static inline ::GlobalNamespace::OVRControllerHelper* New_ctor();

  /// @brief Method .ctor, addr 0x27a30cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerHelper(OVRControllerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerHelper(OVRControllerHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerHelper();

public:
  /// @brief Field m_modelOculusTouchQuestAndRiftSLeftController, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchQuestAndRiftSLeftController;

  /// @brief Field m_modelOculusTouchQuestAndRiftSRightController, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchQuestAndRiftSRightController;

  /// @brief Field m_modelOculusTouchRiftLeftController, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchRiftLeftController;

  /// @brief Field m_modelOculusTouchRiftRightController, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchRiftRightController;

  /// @brief Field m_modelOculusTouchQuest2LeftController, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchQuest2LeftController;

  /// @brief Field m_modelOculusTouchQuest2RightController, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelOculusTouchQuest2RightController;

  /// @brief Field m_modelMetaTouchProLeftController, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelMetaTouchProLeftController;

  /// @brief Field m_modelMetaTouchProRightController, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelMetaTouchProRightController;

  /// @brief Field m_modelMetaTouchPlusLeftController, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelMetaTouchPlusLeftController;

  /// @brief Field m_modelMetaTouchPlusRightController, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_modelMetaTouchPlusRightController;

  /// @brief Field m_controller, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ___m_controller;

  /// @brief Field m_showState, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__InputDeviceShowState ___m_showState;

  /// @brief Field showWhenHandsArePoweredByNaturalControllerPoses, offset: 0x70, size: 0x1, def value: None
  bool ___showWhenHandsArePoweredByNaturalControllerPoses;

  /// @brief Field m_animator, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Animator* ___m_animator;

  /// @brief Field m_activeController, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_activeController;

  /// @brief Field m_controllerModelsInitialized, offset: 0x88, size: 0x1, def value: None
  bool ___m_controllerModelsInitialized;

  /// @brief Field m_hasInputFocus, offset: 0x89, size: 0x1, def value: None
  bool ___m_hasInputFocus;

  /// @brief Field m_hasInputFocusPrev, offset: 0x8a, size: 0x1, def value: None
  bool ___m_hasInputFocusPrev;

  /// @brief Field activeControllerType, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRControllerHelper__ControllerType ___activeControllerType;

  /// @brief Field m_prevControllerConnected, offset: 0x90, size: 0x1, def value: None
  bool ___m_prevControllerConnected;

  /// @brief Field m_prevControllerConnectedCached, offset: 0x91, size: 0x1, def value: None
  bool ___m_prevControllerConnectedCached;

  /// @brief Field m_prevControllerInHandState, offset: 0x94, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__ControllerInHandState ___m_prevControllerInHandState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerHelper, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSLeftController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuestAndRiftSRightController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftLeftController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchRiftRightController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2LeftController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelOculusTouchQuest2RightController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProLeftController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchProRightController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusLeftController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_modelMetaTouchPlusRightController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controller) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_showState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___showWhenHandsArePoweredByNaturalControllerPoses) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_animator) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_activeController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_controllerModelsInitialized) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocus) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_hasInputFocusPrev) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___activeControllerType) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnected) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerConnectedCached) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerHelper, ___m_prevControllerInHandState) == 0x94, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerHelper__ControllerType, "", "OVRControllerHelper/ControllerType");
NEED_NO_BOX(::GlobalNamespace::OVRControllerHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerHelper*, "", "OVRControllerHelper");
