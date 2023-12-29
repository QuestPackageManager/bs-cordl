#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
CORDL_MODULE_EXPORT(Mouse)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Mouse;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Mouse);
// Type: UnityEngine.InputSystem::Mouse
// SizeInfo { instance_size: 440, native_size: -1, calculated_instance_size: 440, calculated_native_size: 440, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6330))
// CS Name: ::UnityEngine.InputSystem::Mouse*
class CORDL_TYPE Mouse : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  /// @brief Field <scroll>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__scroll_k__BackingField, put = __set__scroll_k__BackingField))::UnityEngine::InputSystem::Controls::DeltaControl* _scroll_k__BackingField;

  /// @brief Field <leftButton>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__leftButton_k__BackingField, put = __set__leftButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _leftButton_k__BackingField;

  /// @brief Field <middleButton>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__middleButton_k__BackingField, put = __set__middleButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _middleButton_k__BackingField;

  /// @brief Field <rightButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__rightButton_k__BackingField, put = __set__rightButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _rightButton_k__BackingField;

  /// @brief Field <backButton>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__backButton_k__BackingField, put = __set__backButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _backButton_k__BackingField;

  /// @brief Field <forwardButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__forwardButton_k__BackingField, put = __set__forwardButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _forwardButton_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__clickCount_k__BackingField, put = __set__clickCount_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _clickCount_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Mouse* _current_k__BackingField;

  /// @brief Field s_PlatformMouseDevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PlatformMouseDevice, put = setStaticF_s_PlatformMouseDevice))::UnityEngine::InputSystem::Mouse* s_PlatformMouseDevice;

  __declspec(property(get = get_scroll, put = set_scroll))::UnityEngine::InputSystem::Controls::DeltaControl* scroll;

  __declspec(property(get = get_leftButton, put = set_leftButton))::UnityEngine::InputSystem::Controls::ButtonControl* leftButton;

  __declspec(property(get = get_middleButton, put = set_middleButton))::UnityEngine::InputSystem::Controls::ButtonControl* middleButton;

  __declspec(property(get = get_rightButton, put = set_rightButton))::UnityEngine::InputSystem::Controls::ButtonControl* rightButton;

  __declspec(property(get = get_backButton, put = set_backButton))::UnityEngine::InputSystem::Controls::ButtonControl* backButton;

  __declspec(property(get = get_forwardButton, put = set_forwardButton))::UnityEngine::InputSystem::Controls::ButtonControl* forwardButton;

  __declspec(property(get = get_clickCount, put = set_clickCount))::UnityEngine::InputSystem::Controls::IntegerControl* clickCount;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& __get__scroll_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DeltaControl*> const& __get__scroll_k__BackingField() const;

  constexpr void __set__scroll_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__leftButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__leftButton_k__BackingField() const;

  constexpr void __set__leftButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__middleButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__middleButton_k__BackingField() const;

  constexpr void __set__middleButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__rightButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__rightButton_k__BackingField() const;

  constexpr void __set__rightButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__backButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__backButton_k__BackingField() const;

  constexpr void __set__backButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__forwardButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__forwardButton_k__BackingField() const;

  constexpr void __set__forwardButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__clickCount_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__clickCount_k__BackingField() const;

  constexpr void __set__clickCount_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Mouse* value);

  static inline ::UnityEngine::InputSystem::Mouse* getStaticF__current_k__BackingField();

  static inline void setStaticF_s_PlatformMouseDevice(::UnityEngine::InputSystem::Mouse* value);

  static inline ::UnityEngine::InputSystem::Mouse* getStaticF_s_PlatformMouseDevice();

  /// @brief Method get_scroll addr 0x28eee94 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* get_scroll();

  /// @brief Method set_scroll addr 0x28eee9c size 0x8 virtual false final false
  inline void set_scroll(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  /// @brief Method get_leftButton addr 0x28eeea4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftButton();

  /// @brief Method set_leftButton addr 0x28eeeac size 0x8 virtual false final false
  inline void set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_middleButton addr 0x28eeeb4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_middleButton();

  /// @brief Method set_middleButton addr 0x28eeebc size 0x8 virtual false final false
  inline void set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_rightButton addr 0x28eeec4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightButton();

  /// @brief Method set_rightButton addr 0x28eeecc size 0x8 virtual false final false
  inline void set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_backButton addr 0x28eeed4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_backButton();

  /// @brief Method set_backButton addr 0x28eeedc size 0x8 virtual false final false
  inline void set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_forwardButton addr 0x28eeee4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_forwardButton();

  /// @brief Method set_forwardButton addr 0x28eeeec size 0x8 virtual false final false
  inline void set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_clickCount addr 0x28eeef4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_clickCount();

  /// @brief Method set_clickCount addr 0x28eeefc size 0x8 virtual false final false
  inline void set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_current addr 0x28eef04 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::Mouse* get_current();

  /// @brief Method set_current addr 0x28eef4c size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::Mouse* value);

  /// @brief Method MakeCurrent addr 0x28eef98 size 0x80 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnAdded addr 0x28ef064 size 0x5c virtual true final false
  inline void OnAdded();

  /// @brief Method OnRemoved addr 0x28ef0c0 size 0x80 virtual true final false
  inline void OnRemoved();

  /// @brief Method WarpCursorPosition addr 0x28ef1bc size 0xa4 virtual false final false
  inline void WarpCursorPosition(::UnityEngine::Vector2 position);

  /// @brief Method FinishSetup addr 0x28ef260 size 0x1a4 virtual true final false
  inline void FinishSetup();

  /// @brief Method OnNextUpdate addr 0x28ef568 size 0x90 virtual false final false
  inline void OnNextUpdate();

  /// @brief Method OnStateEvent addr 0x28ef680 size 0x44 virtual false final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x28ef710 size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x28ef714 size 0x4 virtual true final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  static inline ::UnityEngine::InputSystem::Mouse* New_ctor();

  /// @brief Method .ctor addr 0x28ef718 size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mouse(Mouse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mouse(Mouse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mouse();

public:
  /// @brief Field <scroll>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DeltaControl* ____scroll_k__BackingField;

  /// @brief Field <leftButton>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____leftButton_k__BackingField;

  /// @brief Field <middleButton>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____middleButton_k__BackingField;

  /// @brief Field <rightButton>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____rightButton_k__BackingField;

  /// @brief Field <backButton>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____backButton_k__BackingField;

  /// @brief Field <forwardButton>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____forwardButton_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____clickCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Mouse, 0x1b8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____scroll_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____leftButton_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____middleButton_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____rightButton_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____backButton_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____forwardButton_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Mouse, ____clickCount_k__BackingField) == 0x1b0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Mouse);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Mouse*, "UnityEngine.InputSystem", "Mouse");
