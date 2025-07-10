#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAction)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct InputActionState_TriggerState;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct InputActionType;
}
namespace UnityEngine::InputSystem {
struct InputAction_ActionFlags;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputAction_ActionFlags;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputAction_ActionFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputAction);
MARK_VAL_T(::UnityEngine::InputSystem::InputAction_CallbackContext);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAction/ActionFlags
struct CORDL_TYPE InputAction_ActionFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputAction_ActionFlags_Unwrapped
  enum struct __InputAction_ActionFlags_Unwrapped : int32_t {
    __E_WantsInitialStateCheck = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputAction_ActionFlags_Unwrapped() const noexcept {
    return static_cast<__InputAction_ActionFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputAction_ActionFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputAction_ActionFlags(int32_t value__) noexcept;

  /// @brief Field WantsInitialStateCheck value: I32(1)
  static ::UnityEngine::InputSystem::InputAction_ActionFlags const WantsInitialStateCheck;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6538 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAction_ActionFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAction_ActionFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAction/CallbackContext
struct CORDL_TYPE InputAction_CallbackContext {
public:
  // Declarations
  __declspec(property(get = get_action)) ::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_actionIndex)) int32_t actionIndex;

  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_canceled)) bool canceled;

  __declspec(property(get = get_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_controlIndex)) int32_t controlIndex;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_interaction)) ::cordl_internals::InterfaceW interaction;

  __declspec(property(get = get_interactionIndex)) int32_t interactionIndex;

  __declspec(property(get = get_performed)) bool performed;

  __declspec(property(get = get_phase)) ::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_started)) bool started;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method ReadValue, addr 0x453f0e8, size 0x1c0, virtual false, abstract: false, final false
  inline void ReadValue(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsButton, addr 0x453f2a8, size 0x84, virtual false, abstract: false, final false
  inline bool ReadValueAsButton();

  /// @brief Method ReadValueAsObject, addr 0x453f32c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject();

  /// @brief Method ToString, addr 0x453f3b4, size 0x250, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_action, addr 0x453eea4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_actionIndex, addr 0x453ed28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_actionIndex();

  /// @brief Method get_bindingIndex, addr 0x453ed30, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_canceled, addr 0x453ee6c, size 0x38, virtual false, abstract: false, final false
  inline bool get_canceled();

  /// @brief Method get_control, addr 0x453eed4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_controlIndex, addr 0x453ed64, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_controlIndex();

  /// @brief Method get_duration, addr 0x453efe0, size 0x68, virtual false, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_interaction, addr 0x453ef18, size 0x58, virtual false, abstract: false, final false
  inline ::cordl_internals::InterfaceW get_interaction();

  /// @brief Method get_interactionIndex, addr 0x453ed98, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_interactionIndex();

  /// @brief Method get_performed, addr 0x453ee34, size 0x38, virtual false, abstract: false, final false
  inline bool get_performed();

  /// @brief Method get_phase, addr 0x453edcc, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_startTime, addr 0x453efa8, size 0x38, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_started, addr 0x453edfc, size 0x38, virtual false, abstract: false, final false
  inline bool get_started();

  /// @brief Method get_time, addr 0x453ef70, size 0x38, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_valueSizeInBytes, addr 0x453f098, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x453f048, size 0x50, virtual false, abstract: false, final false
  inline ::System::Type* get_valueType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputAction_CallbackContext();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_ActionIndex", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr InputAction_CallbackContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_ActionIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_ActionIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_ActionIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAction_CallbackContext, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction_CallbackContext, m_ActionIndex) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAction_CallbackContext, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.ICloneable, System.IDisposable, System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.InputAction::ActionFlags, UnityEngine.InputSystem.InputActionType,
// UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputAction
class CORDL_TYPE InputAction : public ::System::Object {
public:
  // Declarations
  using ActionFlags = ::UnityEngine::InputSystem::InputAction_ActionFlags;

  using CallbackContext = ::UnityEngine::InputSystem::InputAction_CallbackContext;

  __declspec(property(get = get_actionMap)) ::UnityEngine::InputSystem::InputActionMap* actionMap;

  __declspec(property(get = get_activeControl)) ::UnityEngine::InputSystem::InputControl* activeControl;

  __declspec(property(get = get_bindingMask, put = set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> bindings;

  __declspec(property(get = get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> controls;

  __declspec(property(get = get_currentState)) ::UnityEngine::InputSystem::InputActionState_TriggerState currentState;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_expectedControlType, put = set_expectedControlType)) ::StringW expectedControlType;

  __declspec(property(get = get_id)) ::System::Guid id;

  __declspec(property(get = get_idDontGenerate)) ::System::Guid idDontGenerate;

  __declspec(property(get = get_inProgress)) bool inProgress;

  __declspec(property(get = get_interactions)) ::StringW interactions;

  __declspec(property(get = get_isSingletonAction)) bool isSingletonAction;

  /// @brief Field m_ActionIndexInState, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActionIndexInState, put = __cordl_internal_set_m_ActionIndexInState)) int32_t m_ActionIndexInState;

  /// @brief Field m_ActionMap, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionMap, put = __cordl_internal_set_m_ActionMap)) ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;

  /// @brief Field m_BindingMask, offset 0x50, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_BindingsCount, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingsCount, put = __cordl_internal_set_m_BindingsCount)) int32_t m_BindingsCount;

  /// @brief Field m_BindingsStartIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingsStartIndex, put = __cordl_internal_set_m_BindingsStartIndex)) int32_t m_BindingsStartIndex;

  /// @brief Field m_ControlCount, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlCount, put = __cordl_internal_set_m_ControlCount)) int32_t m_ControlCount;

  /// @brief Field m_ControlStartIndex, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlStartIndex, put = __cordl_internal_set_m_ControlStartIndex)) int32_t m_ControlStartIndex;

  /// @brief Field m_ExpectedControlType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpectedControlType, put = __cordl_internal_set_m_ExpectedControlType)) ::StringW m_ExpectedControlType;

  /// @brief Field m_Flags, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::InputAction_ActionFlags m_Flags;

  /// @brief Field m_Id, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) ::StringW m_Id;

  /// @brief Field m_Interactions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactions, put = __cordl_internal_set_m_Interactions)) ::StringW m_Interactions;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_OnCanceled, offset 0x120, size 0x50
  __declspec(property(get = __cordl_internal_get_m_OnCanceled,
                      put = __cordl_internal_set_m_OnCanceled)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>
      m_OnCanceled;

  /// @brief Field m_OnPerformed, offset 0x170, size 0x50
  __declspec(property(get = __cordl_internal_get_m_OnPerformed,
                      put = __cordl_internal_set_m_OnPerformed)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>
      m_OnPerformed;

  /// @brief Field m_OnStarted, offset 0xd0, size 0x50
  __declspec(property(get = __cordl_internal_get_m_OnStarted,
                      put = __cordl_internal_set_m_OnStarted)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>
      m_OnStarted;

  /// @brief Field m_Processors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Processors, put = __cordl_internal_set_m_Processors)) ::StringW m_Processors;

  /// @brief Field m_SingletonActionBindings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SingletonActionBindings,
                      put = __cordl_internal_set_m_SingletonActionBindings)) ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>
      m_SingletonActionBindings;

  /// @brief Field m_Type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::UnityEngine::InputSystem::InputActionType m_Type;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_phase)) ::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_processors)) ::StringW processors;

  __declspec(property(get = get_triggered)) bool triggered;

  __declspec(property(get = get_type)) ::UnityEngine::InputSystem::InputActionType type;

  __declspec(property(get = get_wantsInitialStateCheck, put = set_wantsInitialStateCheck)) bool wantsInitialStateCheck;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ActiveControlIsValid, addr 0x453e874, size 0xf4, virtual false, abstract: false, final false
  inline bool ActiveControlIsValid(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method BindingIndexOnActionToBindingIndexOnMap, addr 0x453ead0, size 0x19c, virtual false, abstract: false, final false
  inline int32_t BindingIndexOnActionToBindingIndexOnMap(int32_t indexOfBindingOnAction);

  /// @brief Method BindingIndexOnMapToBindingIndexOnAction, addr 0x453ec6c, size 0xbc, virtual false, abstract: false, final false
  inline int32_t BindingIndexOnMapToBindingIndexOnAction(int32_t indexOfBindingOnMap);

  /// @brief Method Clone, addr 0x453e208, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* Clone();

  /// @brief Method CreateInternalActionMapForSingletonAction, addr 0x453e774, size 0xb0, virtual false, abstract: false, final false
  inline void CreateInternalActionMapForSingletonAction();

  /// @brief Method Disable, addr 0x453e198, size 0x70, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Dispose, addr 0x453de2c, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x453e110, size 0x88, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method FindEffectiveBindingMask, addr 0x453ea40, size 0x90, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> FindEffectiveBindingMask();

  /// @brief Method GenerateId, addr 0x453e740, size 0x34, virtual false, abstract: false, final false
  inline void GenerateId();

  /// @brief Method GetOrCreateActionMap, addr 0x453d544, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* GetOrCreateActionMap();

  /// @brief Method GetTimeoutCompletionPercentage, addr 0x453e610, size 0x130, virtual false, abstract: false, final false
  inline float_t GetTimeoutCompletionPercentage();

  /// @brief Method IsInProgress, addr 0x453e478, size 0x58, virtual false, abstract: false, final false
  inline bool IsInProgress();

  /// @brief Method IsPressed, addr 0x453e424, size 0x54, virtual false, abstract: false, final false
  inline bool IsPressed();

  /// @brief Method MakeSureIdIsInPlace, addr 0x453d26c, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW MakeSureIdIsInPlace();

  static inline ::UnityEngine::InputSystem::InputAction* New_ctor();

  static inline ::UnityEngine::InputSystem::InputAction* New_ctor(::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors,
                                                                  ::StringW expectedControlType);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method ReadValueAsObject, addr 0x453e2ec, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject();

  /// @brief Method RequestInitialStateCheckOnEnabledAction, addr 0x453e834, size 0x40, virtual false, abstract: false, final false
  inline void RequestInitialStateCheckOnEnabledAction();

  /// @brief Method Reset, addr 0x453e388, size 0x9c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method System.ICloneable.Clone, addr 0x453e2e8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x453de48, size 0x2c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WasPerformedThisFrame, addr 0x453db00, size 0xa0, virtual false, abstract: false, final false
  inline bool WasPerformedThisFrame();

  /// @brief Method WasPressedThisFrame, addr 0x453e4d0, size 0xa0, virtual false, abstract: false, final false
  inline bool WasPressedThisFrame();

  /// @brief Method WasReleasedThisFrame, addr 0x453e570, size 0xa0, virtual false, abstract: false, final false
  inline bool WasReleasedThisFrame();

  constexpr int32_t const& __cordl_internal_get_m_ActionIndexInState() const;

  constexpr int32_t& __cordl_internal_get_m_ActionIndexInState();

  constexpr ::UnityEngine::InputSystem::InputActionMap* const& __cordl_internal_get_m_ActionMap() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_m_ActionMap();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr int32_t const& __cordl_internal_get_m_BindingsCount() const;

  constexpr int32_t& __cordl_internal_get_m_BindingsCount();

  constexpr int32_t const& __cordl_internal_get_m_BindingsStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BindingsStartIndex();

  constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

  constexpr int32_t& __cordl_internal_get_m_ControlCount();

  constexpr int32_t const& __cordl_internal_get_m_ControlStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ControlStartIndex();

  constexpr ::StringW const& __cordl_internal_get_m_ExpectedControlType() const;

  constexpr ::StringW& __cordl_internal_get_m_ExpectedControlType();

  constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::InputAction_ActionFlags& __cordl_internal_get_m_Flags();

  constexpr ::StringW const& __cordl_internal_get_m_Id() const;

  constexpr ::StringW& __cordl_internal_get_m_Id();

  constexpr ::StringW const& __cordl_internal_get_m_Interactions() const;

  constexpr ::StringW& __cordl_internal_get_m_Interactions();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const& __cordl_internal_get_m_OnCanceled() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>& __cordl_internal_get_m_OnCanceled();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const& __cordl_internal_get_m_OnPerformed() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>& __cordl_internal_get_m_OnPerformed();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const& __cordl_internal_get_m_OnStarted() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>& __cordl_internal_get_m_OnStarted();

  constexpr ::StringW const& __cordl_internal_get_m_Processors() const;

  constexpr ::StringW& __cordl_internal_get_m_Processors();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const& __cordl_internal_get_m_SingletonActionBindings() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& __cordl_internal_get_m_SingletonActionBindings();

  constexpr ::UnityEngine::InputSystem::InputActionType const& __cordl_internal_get_m_Type() const;

  constexpr ::UnityEngine::InputSystem::InputActionType& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set_m_ActionIndexInState(int32_t value);

  constexpr void __cordl_internal_set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_BindingsCount(int32_t value);

  constexpr void __cordl_internal_set_m_BindingsStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ControlCount(int32_t value);

  constexpr void __cordl_internal_set_m_ControlStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ExpectedControlType(::StringW value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::InputAction_ActionFlags value);

  constexpr void __cordl_internal_set_m_Id(::StringW value);

  constexpr void __cordl_internal_set_m_Interactions(::StringW value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_OnCanceled(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value);

  constexpr void __cordl_internal_set_m_OnPerformed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value);

  constexpr void __cordl_internal_set_m_OnStarted(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value);

  constexpr void __cordl_internal_set_m_Processors(::StringW value);

  constexpr void __cordl_internal_set_m_SingletonActionBindings(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set_m_Type(::UnityEngine::InputSystem::InputActionType value);

  /// @brief Method .ctor, addr 0x453dc58, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x453dc9c, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding, ::StringW interactions, ::StringW processors, ::StringW expectedControlType);

  /// @brief Method add_canceled, addr 0x453d99c, size 0x58, virtual false, abstract: false, final false
  inline void add_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method add_performed, addr 0x453da4c, size 0x58, virtual false, abstract: false, final false
  inline void add_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method add_started, addr 0x453d8ec, size 0x58, virtual false, abstract: false, final false
  inline void add_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method get_actionMap, addr 0x453d320, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* get_actionMap();

  /// @brief Method get_activeControl, addr 0x453dba0, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_activeControl();

  /// @brief Method get_bindingMask, addr 0x453d360, size 0x10, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_bindings, addr 0x453d614, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings();

  /// @brief Method get_controls, addr 0x453d6c4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls();

  /// @brief Method get_currentState, addr 0x453d7fc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionState_TriggerState get_currentState();

  /// @brief Method get_enabled, addr 0x453d8a4, size 0x48, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_expectedControlType, addr 0x453d300, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_expectedControlType();

  /// @brief Method get_id, addr 0x453d238, size 0x34, virtual false, abstract: false, final false
  inline ::System::Guid get_id();

  /// @brief Method get_idDontGenerate, addr 0x453d2b8, size 0x48, virtual false, abstract: false, final false
  inline ::System::Guid get_idDontGenerate();

  /// @brief Method get_inProgress, addr 0x453d858, size 0x4c, virtual false, abstract: false, final false
  inline bool get_inProgress();

  /// @brief Method get_interactions, addr 0x453d318, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_interactions();

  /// @brief Method get_isSingletonAction, addr 0x453d340, size 0x20, virtual false, abstract: false, final false
  inline bool get_isSingletonAction();

  /// @brief Method get_name, addr 0x453d228, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_phase, addr 0x453d7bc, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_processors, addr 0x453d310, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_processors();

  /// @brief Method get_triggered, addr 0x453dafc, size 0x4, virtual false, abstract: false, final false
  inline bool get_triggered();

  /// @brief Method get_type, addr 0x453d230, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionType get_type();

  /// @brief Method get_wantsInitialStateCheck, addr 0x453dc2c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_wantsInitialStateCheck();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_canceled, addr 0x453d9f4, size 0x58, virtual false, abstract: false, final false
  inline void remove_canceled(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method remove_performed, addr 0x453daa4, size 0x58, virtual false, abstract: false, final false
  inline void remove_performed(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method remove_started, addr 0x453d944, size 0x58, virtual false, abstract: false, final false
  inline void remove_started(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  /// @brief Method set_bindingMask, addr 0x453d370, size 0x1d4, virtual false, abstract: false, final false
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_expectedControlType, addr 0x453d308, size 0x8, virtual false, abstract: false, final false
  inline void set_expectedControlType(::StringW value);

  /// @brief Method set_wantsInitialStateCheck, addr 0x453dc48, size 0x10, virtual false, abstract: false, final false
  inline void set_wantsInitialStateCheck(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputAction(InputAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputAction(InputAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6540 };

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Type, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputActionType ___m_Type;

  /// @brief Field m_ExpectedControlType, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_ExpectedControlType;

  /// @brief Field m_Id, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_Id;

  /// @brief Field m_Processors, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Processors;

  /// @brief Field m_Interactions, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_Interactions;

  /// @brief Field m_SingletonActionBindings, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> ___m_SingletonActionBindings;

  /// @brief Field m_Flags, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputAction_ActionFlags ___m_Flags;

  /// @brief Field m_BindingMask, offset: 0x50, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ___m_BindingMask;

  /// @brief Field m_BindingsStartIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_BindingsStartIndex;

  /// @brief Field m_BindingsCount, offset: 0xb4, size: 0x4, def value: None
  int32_t ___m_BindingsCount;

  /// @brief Field m_ControlStartIndex, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_ControlStartIndex;

  /// @brief Field m_ControlCount, offset: 0xbc, size: 0x4, def value: None
  int32_t ___m_ControlCount;

  /// @brief Field m_ActionIndexInState, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_ActionIndexInState;

  /// @brief Field m_ActionMap, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_ActionMap;

  /// @brief Field m_OnStarted, offset: 0xd0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> ___m_OnStarted;

  /// @brief Field m_OnCanceled, offset: 0x120, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> ___m_OnCanceled;

  /// @brief Field m_OnPerformed, offset: 0x170, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> ___m_OnPerformed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_ExpectedControlType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Processors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Interactions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_SingletonActionBindings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_Flags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_BindingMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_BindingsStartIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_BindingsCount) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_ControlStartIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_ControlCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_ActionIndexInState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_ActionMap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_OnStarted) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_OnCanceled) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAction, ___m_OnPerformed) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAction, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAction_ActionFlags, "UnityEngine.InputSystem", "InputAction/ActionFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAction*, "UnityEngine.InputSystem", "InputAction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAction_CallbackContext, "UnityEngine.InputSystem", "InputAction/CallbackContext");
