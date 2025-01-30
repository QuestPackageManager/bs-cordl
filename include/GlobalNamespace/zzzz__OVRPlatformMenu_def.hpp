#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlatformMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlatformMenu)
namespace GlobalNamespace {
struct OVRPlatformMenu_eBackButtonAction;
}
namespace GlobalNamespace {
struct OVRPlatformMenu_eHandler;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlatformMenu_eBackButtonAction;
}
namespace GlobalNamespace {
struct OVRPlatformMenu_eHandler;
}
namespace GlobalNamespace {
class OVRPlatformMenu;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction);
MARK_VAL_T(::GlobalNamespace::OVRPlatformMenu_eHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPlatformMenu);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlatformMenu/eHandler
struct CORDL_TYPE OVRPlatformMenu_eHandler {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPlatformMenu_eHandler_Unwrapped
  enum struct __OVRPlatformMenu_eHandler_Unwrapped : int32_t {
    __E_ShowConfirmQuit = static_cast<int32_t>(0x0),
    __E_RetreatOneLevel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPlatformMenu_eHandler_Unwrapped() const noexcept {
    return static_cast<__OVRPlatformMenu_eHandler_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlatformMenu_eHandler();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPlatformMenu_eHandler(int32_t value__) noexcept;

  /// @brief Field RetreatOneLevel value: I32(1)
  static ::GlobalNamespace::OVRPlatformMenu_eHandler const RetreatOneLevel;

  /// @brief Field ShowConfirmQuit value: I32(0)
  static ::GlobalNamespace::OVRPlatformMenu_eHandler const ShowConfirmQuit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7996 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu_eHandler, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlatformMenu_eHandler, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlatformMenu/eBackButtonAction
struct CORDL_TYPE OVRPlatformMenu_eBackButtonAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPlatformMenu_eBackButtonAction_Unwrapped
  enum struct __OVRPlatformMenu_eBackButtonAction_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SHORT_PRESS = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPlatformMenu_eBackButtonAction_Unwrapped() const noexcept {
    return static_cast<__OVRPlatformMenu_eBackButtonAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlatformMenu_eBackButtonAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPlatformMenu_eBackButtonAction(int32_t value__) noexcept;

  /// @brief Field NONE value: I32(0)
  static ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction const NONE;

  /// @brief Field SHORT_PRESS value: I32(1)
  static ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction const SHORT_PRESS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7997 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawButton, OVRPlatformMenu::eHandler, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlatformMenu
class CORDL_TYPE OVRPlatformMenu : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using eBackButtonAction = ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction;

  using eHandler = ::GlobalNamespace::OVRPlatformMenu_eHandler;

  /// @brief Field OnShortPress, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnShortPress, put = __cordl_internal_set_OnShortPress)) ::System::Func_1<bool>* OnShortPress;

  /// @brief Field inputCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_inputCode, put = __cordl_internal_set_inputCode)) ::GlobalNamespace::OVRInput_RawButton inputCode;

  /// @brief Field sceneStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sceneStack, put = setStaticF_sceneStack)) ::System::Collections::Generic::Stack_1<::StringW>* sceneStack;

  /// @brief Field shortPressHandler, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_shortPressHandler, put = __cordl_internal_set_shortPressHandler)) ::GlobalNamespace::OVRPlatformMenu_eHandler shortPressHandler;

  /// @brief Method Awake, addr 0x3fde918, size 0x170, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBackButtonState, addr 0x3fde8b0, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction HandleBackButtonState();

  static inline ::GlobalNamespace::OVRPlatformMenu* New_ctor();

  /// @brief Method RetreatOneLevel, addr 0x3fdeb5c, size 0xf4, virtual false, abstract: false, final false
  static inline bool RetreatOneLevel();

  /// @brief Method ShowConfirmQuitMenu, addr 0x3fdea88, size 0xd4, virtual false, abstract: false, final false
  inline void ShowConfirmQuitMenu();

  /// @brief Method Update, addr 0x3fdec50, size 0x40, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_OnShortPress() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_OnShortPress();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_inputCode() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_inputCode();

  constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler const& __cordl_internal_get_shortPressHandler() const;

  constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler& __cordl_internal_get_shortPressHandler();

  constexpr void __cordl_internal_set_OnShortPress(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_inputCode(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_shortPressHandler(::GlobalNamespace::OVRPlatformMenu_eHandler value);

  /// @brief Method .ctor, addr 0x3fdec90, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Stack_1<::StringW>* getStaticF_sceneStack();

  static inline void setStaticF_sceneStack(::System::Collections::Generic::Stack_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlatformMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPlatformMenu(OVRPlatformMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPlatformMenu(OVRPlatformMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7998 };

  /// @brief Field inputCode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___inputCode;

  /// @brief Field shortPressHandler, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlatformMenu_eHandler ___shortPressHandler;

  /// @brief Field OnShortPress, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<bool>* ___OnShortPress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___inputCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___shortPressHandler) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___OnShortPress) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlatformMenu, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, "", "OVRPlatformMenu/eBackButtonAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlatformMenu_eHandler, "", "OVRPlatformMenu/eHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPlatformMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlatformMenu*, "", "OVRPlatformMenu");
