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
struct __OVRPlatformMenu__eHandler;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace GlobalNamespace {
struct __OVRPlatformMenu__eBackButtonAction;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7682))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlatformMenu__eHandler(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlatformMenu__eHandler();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ShowConfirmQuit value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlatformMenu__eHandler const ShowConfirmQuit;

  /// @brief Field RetreatOneLevel value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlatformMenu__eHandler const RetreatOneLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlatformMenu__eHandler, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::eBackButtonAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7683))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlatformMenu__eBackButtonAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlatformMenu__eBackButtonAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction const NONE;

  /// @brief Field SHORT_PRESS value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction const SHORT_PRESS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPlatformMenu
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7588)), TypeDefinitionIndex(TypeDefinitionIndex(7682)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7684))
// CS Name: ::OVRPlatformMenu*
class CORDL_TYPE OVRPlatformMenu : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using eBackButtonAction = ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction;

  using eHandler = ::GlobalNamespace::__OVRPlatformMenu__eHandler;

  /// @brief Field inputCode, offset 0x18, size 0x4
  __declspec(property(get = __get_inputCode, put = __set_inputCode))::GlobalNamespace::__OVRInput__RawButton inputCode;

  /// @brief Field shortPressHandler, offset 0x1c, size 0x4
  __declspec(property(get = __get_shortPressHandler, put = __set_shortPressHandler))::GlobalNamespace::__OVRPlatformMenu__eHandler shortPressHandler;

  /// @brief Field OnShortPress, offset 0x20, size 0x8
  __declspec(property(get = __get_OnShortPress, put = __set_OnShortPress))::System::Func_1<bool>* OnShortPress;

  /// @brief Field sceneStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneStack, put = setStaticF_sceneStack))::System::Collections::Generic::Stack_1<::StringW>* sceneStack;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_inputCode();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_inputCode() const;

  constexpr void __set_inputCode(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler& __get_shortPressHandler();

  constexpr ::GlobalNamespace::__OVRPlatformMenu__eHandler const& __get_shortPressHandler() const;

  constexpr void __set_shortPressHandler(::GlobalNamespace::__OVRPlatformMenu__eHandler value);

  constexpr ::System::Func_1<bool>*& __get_OnShortPress();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __get_OnShortPress() const;

  constexpr void __set_OnShortPress(::System::Func_1<bool>* value);

  static inline void setStaticF_sceneStack(::System::Collections::Generic::Stack_1<::StringW>* value);

  static inline ::System::Collections::Generic::Stack_1<::StringW>* getStaticF_sceneStack();

  /// @brief Method HandleBackButtonState addr 0x2753e74 size 0x68 virtual false final false
  inline ::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction HandleBackButtonState();

  /// @brief Method Awake addr 0x2753edc size 0x170 virtual false final false
  inline void Awake();

  /// @brief Method ShowConfirmQuitMenu addr 0x275404c size 0xd4 virtual false final false
  inline void ShowConfirmQuitMenu();

  /// @brief Method RetreatOneLevel addr 0x2754120 size 0xf8 virtual false final false
  static inline bool RetreatOneLevel();

  /// @brief Method Update addr 0x2754218 size 0x40 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRPlatformMenu* New_ctor();

  /// @brief Method .ctor addr 0x2754258 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPlatformMenu(OVRPlatformMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPlatformMenu(OVRPlatformMenu const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlatformMenu();

public:
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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlatformMenu__eBackButtonAction, "", "OVRPlatformMenu/eBackButtonAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlatformMenu__eHandler, "", "OVRPlatformMenu/eHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPlatformMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlatformMenu*, "", "OVRPlatformMenu");
