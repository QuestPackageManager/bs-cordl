#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
CORDL_MODULE_EXPORT(Mouse)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine {
struct Vector2;
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
// CS Name: ::UnityEngine.InputSystem::Mouse*
class CORDL_TYPE Mouse : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  /// @brief Field <backButton>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__backButton_k__BackingField,
                      put = __cordl_internal_set__backButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _backButton_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__clickCount_k__BackingField,
                      put = __cordl_internal_set__clickCount_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _clickCount_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Mouse* _current_k__BackingField;

  /// @brief Field <forwardButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__forwardButton_k__BackingField,
                      put = __cordl_internal_set__forwardButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _forwardButton_k__BackingField;

  /// @brief Field <leftButton>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__leftButton_k__BackingField,
                      put = __cordl_internal_set__leftButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _leftButton_k__BackingField;

  /// @brief Field <middleButton>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__middleButton_k__BackingField,
                      put = __cordl_internal_set__middleButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _middleButton_k__BackingField;

  /// @brief Field <rightButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__rightButton_k__BackingField,
                      put = __cordl_internal_set__rightButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _rightButton_k__BackingField;

  /// @brief Field <scroll>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__scroll_k__BackingField,
                      put = __cordl_internal_set__scroll_k__BackingField))::UnityEngine::InputSystem::Controls::DeltaControl* _scroll_k__BackingField;

  __declspec(property(get = get_backButton, put = set_backButton))::UnityEngine::InputSystem::Controls::ButtonControl* backButton;

  __declspec(property(get = get_clickCount, put = set_clickCount))::UnityEngine::InputSystem::Controls::IntegerControl* clickCount;

  __declspec(property(get = get_forwardButton, put = set_forwardButton))::UnityEngine::InputSystem::Controls::ButtonControl* forwardButton;

  __declspec(property(get = get_leftButton, put = set_leftButton))::UnityEngine::InputSystem::Controls::ButtonControl* leftButton;

  __declspec(property(get = get_middleButton, put = set_middleButton))::UnityEngine::InputSystem::Controls::ButtonControl* middleButton;

  __declspec(property(get = get_rightButton, put = set_rightButton))::UnityEngine::InputSystem::Controls::ButtonControl* rightButton;

  /// @brief Field s_PlatformMouseDevice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PlatformMouseDevice, put = setStaticF_s_PlatformMouseDevice))::UnityEngine::InputSystem::Mouse* s_PlatformMouseDevice;

  __declspec(property(get = get_scroll, put = set_scroll))::UnityEngine::InputSystem::Controls::DeltaControl* scroll;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

  /// @brief Method FinishSetup, addr 0x2fa38cc, size 0x1a4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x2fa3604, size 0x80, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Mouse* New_ctor();

  /// @brief Method OnAdded, addr 0x2fa36d0, size 0x5c, virtual true, abstract: false, final false
  inline void OnAdded();

  /// @brief Method OnNextUpdate, addr 0x2fa3bd4, size 0x90, virtual false, abstract: false, final false
  inline void OnNextUpdate();

  /// @brief Method OnRemoved, addr 0x2fa372c, size 0x80, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method OnStateEvent, addr 0x2fa3cec, size 0x44, virtual false, abstract: false, final false
  inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate, addr 0x2fa3d7c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate();

  /// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent, addr 0x2fa3d80, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method WarpCursorPosition, addr 0x2fa3828, size 0xa4, virtual false, abstract: false, final false
  inline void WarpCursorPosition(::UnityEngine::Vector2 position);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__backButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__backButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__clickCount_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__clickCount_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__forwardButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__forwardButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__leftButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__leftButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__middleButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__middleButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__rightButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__rightButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& __cordl_internal_get__scroll_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DeltaControl*> const& __cordl_internal_get__scroll_k__BackingField() const;

  constexpr void __cordl_internal_set__backButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__clickCount_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__forwardButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__leftButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__middleButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__rightButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__scroll_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  /// @brief Method .ctor, addr 0x2fa3d84, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Mouse* getStaticF__current_k__BackingField();

  static inline ::UnityEngine::InputSystem::Mouse* getStaticF_s_PlatformMouseDevice();

  /// @brief Method get_backButton, addr 0x2fa3540, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_backButton();

  /// @brief Method get_clickCount, addr 0x2fa3560, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_clickCount();

  /// @brief Method get_current, addr 0x2fa3570, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Mouse* get_current();

  /// @brief Method get_forwardButton, addr 0x2fa3550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_forwardButton();

  /// @brief Method get_leftButton, addr 0x2fa3510, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_leftButton();

  /// @brief Method get_middleButton, addr 0x2fa3520, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_middleButton();

  /// @brief Method get_rightButton, addr 0x2fa3530, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_rightButton();

  /// @brief Method get_scroll, addr 0x2fa3500, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* get_scroll();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept;

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Mouse* value);

  static inline void setStaticF_s_PlatformMouseDevice(::UnityEngine::InputSystem::Mouse* value);

  /// @brief Method set_backButton, addr 0x2fa3548, size 0x8, virtual false, abstract: false, final false
  inline void set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_clickCount, addr 0x2fa3568, size 0x8, virtual false, abstract: false, final false
  inline void set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_current, addr 0x2fa35b8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Mouse* value);

  /// @brief Method set_forwardButton, addr 0x2fa3558, size 0x8, virtual false, abstract: false, final false
  inline void set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_leftButton, addr 0x2fa3518, size 0x8, virtual false, abstract: false, final false
  inline void set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_middleButton, addr 0x2fa3528, size 0x8, virtual false, abstract: false, final false
  inline void set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_rightButton, addr 0x2fa3538, size 0x8, virtual false, abstract: false, final false
  inline void set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_scroll, addr 0x2fa3508, size 0x8, virtual false, abstract: false, final false
  inline void set_scroll(::UnityEngine::InputSystem::Controls::DeltaControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mouse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mouse(Mouse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mouse(Mouse const&) = delete;

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
