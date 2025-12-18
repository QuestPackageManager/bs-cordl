#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputEventPartialProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/zzzz__OperatingSystemFamily_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputEventPartialProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct CommandEvent_Command;
}
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
namespace UnityEngine::InputForUI {
struct Event_Type;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
namespace UnityEngine::InputForUI {
struct TextInputEvent;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class InputEventPartialProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::InputEventPartialProvider);
// Dependencies System.Object, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.KeyEvent::ButtonsState, UnityEngine.OperatingSystemFamily
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.InputEventPartialProvider
class CORDL_TYPE InputEventPartialProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _IMGUICommandToInputForUICommandType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__IMGUICommandToInputForUICommandType,
                      put = __cordl_internal_set__IMGUICommandToInputForUICommandType)) ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>*
      _IMGUICommandToInputForUICommandType;

  /// @brief Field _ev, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ev, put = __cordl_internal_set__ev)) ::UnityEngine::Event* _ev;

  /// @brief Field _eventModifiers, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__eventModifiers, put = __cordl_internal_set__eventModifiers)) ::UnityEngine::InputForUI::EventModifiers _eventModifiers;

  /// @brief Field _keyboardButtonsState, offset 0x1c, size 0x28
  __declspec(property(get = __cordl_internal_get__keyboardButtonsState, put = __cordl_internal_set__keyboardButtonsState)) ::UnityEngine::InputForUI::KeyEvent_ButtonsState _keyboardButtonsState;

  /// @brief Field _operatingSystemFamily, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__operatingSystemFamily, put = __cordl_internal_set__operatingSystemFamily)) ::UnityEngine::OperatingSystemFamily _operatingSystemFamily;

  /// @brief Field _sendNavigationEventOnTabKey, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__sendNavigationEventOnTabKey, put = __cordl_internal_set__sendNavigationEventOnTabKey)) bool _sendNavigationEventOnTabKey;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr operator ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept;

  /// @brief Method GetTimestamp, addr 0x6991e6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::IntegerTime::DiscreteTime GetTimestamp(::ByRef<::UnityEngine::Event*> ev);

  /// @brief Method Initialize, addr 0x6990f2c, size 0x1b0, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::UnityEngine::InputForUI::InputEventPartialProvider* New_ctor();

  /// @brief Method OnFocusChanged, addr 0x6991bac, size 0x178, virtual true, abstract: false, final true
  inline void OnFocusChanged(bool focus);

  /// @brief Method RequestCurrentState, addr 0x6991d24, size 0x148, virtual true, abstract: false, final true
  inline bool RequestCurrentState(::UnityEngine::InputForUI::Event_Type type);

  /// @brief Method SendNextOrPreviousNavigationEventOnTabKeyDownEvent, addr 0x6991820, size 0x168, virtual false, abstract: false, final false
  inline void SendNextOrPreviousNavigationEventOnTabKeyDownEvent(::ByRef<::UnityEngine::Event*> ev);

  /// @brief Method Shutdown, addr 0x69910dc, size 0x4, virtual true, abstract: false, final true
  inline void Shutdown();

  /// @brief Method ToCommandEvent, addr 0x69919f0, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::CommandEvent ToCommandEvent(::ByRef<::UnityEngine::Event*> ev);

  /// @brief Method ToKeyEvent, addr 0x69916b0, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::KeyEvent ToKeyEvent(::ByRef<::UnityEngine::Event*> ev);

  /// @brief Method ToTextInputEvent, addr 0x6991988, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::TextInputEvent ToTextInputEvent(::ByRef<::UnityEngine::Event*> ev);

  /// @brief Method Update, addr 0x69910e0, size 0x2e0, virtual true, abstract: false, final true
  inline void Update();

  /// @brief Method UpdateEventModifiers, addr 0x69913c0, size 0x2f0, virtual false, abstract: false, final false
  inline void UpdateEventModifiers(::ByRef<::UnityEngine::Event*> ev);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* const& __cordl_internal_get__IMGUICommandToInputForUICommandType() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>*& __cordl_internal_get__IMGUICommandToInputForUICommandType();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get__ev() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get__ev();

  constexpr ::UnityEngine::InputForUI::EventModifiers const& __cordl_internal_get__eventModifiers() const;

  constexpr ::UnityEngine::InputForUI::EventModifiers& __cordl_internal_get__eventModifiers();

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState const& __cordl_internal_get__keyboardButtonsState() const;

  constexpr ::UnityEngine::InputForUI::KeyEvent_ButtonsState& __cordl_internal_get__keyboardButtonsState();

  constexpr ::UnityEngine::OperatingSystemFamily const& __cordl_internal_get__operatingSystemFamily() const;

  constexpr ::UnityEngine::OperatingSystemFamily& __cordl_internal_get__operatingSystemFamily();

  constexpr bool const& __cordl_internal_get__sendNavigationEventOnTabKey() const;

  constexpr bool& __cordl_internal_get__sendNavigationEventOnTabKey();

  constexpr void __cordl_internal_set__IMGUICommandToInputForUICommandType(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* value);

  constexpr void __cordl_internal_set__ev(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set__eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  constexpr void __cordl_internal_set__keyboardButtonsState(::UnityEngine::InputForUI::KeyEvent_ButtonsState value);

  constexpr void __cordl_internal_set__operatingSystemFamily(::UnityEngine::OperatingSystemFamily value);

  constexpr void __cordl_internal_set__sendNavigationEventOnTabKey(bool value);

  /// @brief Method .ctor, addr 0x6991e84, size 0x674, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
  constexpr ::UnityEngine::InputForUI::IEventProviderImpl* i___UnityEngine__InputForUI__IEventProviderImpl() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventPartialProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEventPartialProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEventPartialProvider(InputEventPartialProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEventPartialProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEventPartialProvider(InputEventPartialProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21636 };

  /// @brief Field _ev, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Event* ____ev;

  /// @brief Field _operatingSystemFamily, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::OperatingSystemFamily ____operatingSystemFamily;

  /// @brief Field _keyboardButtonsState, offset: 0x1c, size: 0x28, def value: None
  ::UnityEngine::InputForUI::KeyEvent_ButtonsState ____keyboardButtonsState;

  /// @brief Field _eventModifiers, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers ____eventModifiers;

  /// @brief Field _sendNavigationEventOnTabKey, offset: 0x48, size: 0x1, def value: None
  bool ____sendNavigationEventOnTabKey;

  /// @brief Field _IMGUICommandToInputForUICommandType, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::InputForUI::CommandEvent_Command>* ____IMGUICommandToInputForUICommandType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____ev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____operatingSystemFamily) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____keyboardButtonsState) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____eventModifiers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____sendNavigationEventOnTabKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::InputEventPartialProvider, ____IMGUICommandToInputForUICommandType) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::InputEventPartialProvider, 0x58>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::InputEventPartialProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::InputEventPartialProvider*, "UnityEngine.InputForUI", "InputEventPartialProvider");
