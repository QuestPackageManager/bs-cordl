#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlatformMenu)
namespace GlobalNamespace {
struct __OVRPlatformMenu__eBackButtonAction;
}
namespace GlobalNamespace {
struct __OVRPlatformMenu__eHandler;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRPlatformMenu__eBackButtonAction;
}
namespace GlobalNamespace {
struct __OVRPlatformMenu__eHandler;
}
namespace GlobalNamespace {
class OVRPlatformMenu;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction);
MARK_VAL_T(::GlobalNamespace::__OVRPlatformMenu__eHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPlatformMenu);
// Type: ::eHandler
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPlatformMenu::eHandler
struct CORDL_TYPE __OVRPlatformMenu__eHandler {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlatformMenu__eHandler_Unwrapped
  enum struct ____OVRPlatformMenu__eHandler_Unwrapped : int32_t {
    __E_ShowConfirmQuit = static_cast<int32_t>(0x0),
    __E_RetreatOneLevel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlatformMenu__eHandler_Unwrapped() const noexcept {
    return static_cast<____OVRPlatformMenu__eHandler_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlatformMenu__eHandler();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlatformMenu__eHandler(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field RetreatOneLevel value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlatformMenu__eHandler const RetreatOneLevel;

  /// @brief Field ShowConfirmQuit value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlatformMenu__eHandler const ShowConfirmQuit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlatformMenu__eHandler, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPlatformMenu__eHandler, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::eBackButtonAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPlatformMenu::eBackButtonAction
struct CORDL_TYPE __OVRPlatformMenu__eBackButtonAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlatformMenu__eBackButtonAction_Unwrapped
  enum struct ____OVRPlatformMenu__eBackButtonAction_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SHORT_PRESS = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlatformMenu__eBackButtonAction_Unwrapped() const noexcept {
    return static_cast<____OVRPlatformMenu__eBackButtonAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlatformMenu__eBackButtonAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlatformMenu__eBackButtonAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction const NONE;

  /// @brief Field SHORT_PRESS value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction const SHORT_PRESS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPlatformMenu
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPlatformMenu*
class CORDL_TYPE OVRPlatformMenu : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using eBackButtonAction = ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction;

  using eHandler = ::GlobalNamespace::__OVRPlatformMenu__eHandler;

  /// @brief Field OnShortPress, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnShortPress, put = __cordl_internal_set_OnShortPress))::System::Func_1<bool>* OnShortPress;

  /// @brief Field inputCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_inputCode, put = __cordl_internal_set_inputCode))::GlobalNamespace::__OVRInput__RawButton inputCode;

  /// @brief Field sceneStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneStack, put = setStaticF_sceneStack))::System::Collections::Generic::Stack_1<::StringW>* sceneStack;

  /// @brief Field shortPressHandler, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_shortPressHandler, put = __cordl_internal_set_shortPressHandler))::GlobalNamespace::__OVRPlatformMenu__eHandler shortPressHandler;

  /// @brief Method Awake, addr 0x2b27eac, size 0x170, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBackButtonState, addr 0x2b27e44, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction HandleBackButtonState();

  static inline ::GlobalNamespace::OVRPlatformMenu* New_ctor();

  /// @brief Method RetreatOneLevel, addr 0x2b280f0, size 0xf8, virtual false, abstract: false, final false
  static inline bool RetreatOneLevel();

  /// @brief Method ShowConfirmQuitMenu, addr 0x2b2801c, size 0xd4, virtual false, abstract: false, final false
  inline void ShowConfirmQuitMenu();

  /// @brief Method Update, addr 0x2b281e8, size 0x40, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_OnShortPress();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_OnShortPress() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_inputCode() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_inputCode();

  constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler const& __cordl_internal_get_shortPressHandler() const;

  constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler& __cordl_internal_get_shortPressHandler();

  constexpr void __cordl_internal_set_OnShortPress(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_inputCode(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_shortPressHandler(::GlobalNamespace::__OVRPlatformMenu__eHandler value);

  /// @brief Method .ctor, addr 0x2b28228, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field inputCode, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___inputCode;

  /// @brief Field shortPressHandler, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlatformMenu__eHandler ___shortPressHandler;

  /// @brief Field OnShortPress, offset: 0x20, size: 0x8, def value: None
  ::System::Func_1<bool>* ___OnShortPress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlatformMenu, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___inputCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___shortPressHandler) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___OnShortPress) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, "", "OVRPlatformMenu/eBackButtonAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlatformMenu__eHandler, "", "OVRPlatformMenu/eHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPlatformMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlatformMenu*, "", "OVRPlatformMenu");
