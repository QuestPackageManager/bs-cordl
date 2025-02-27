#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputController)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_Capabilities;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceFlags;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceSubType;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceFlags;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceSubType;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_DeviceType;
}
namespace UnityEngine::InputSystem::XInput {
class XInputController;
}
namespace UnityEngine::InputSystem::XInput {
struct XInputController_Capabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::XInputController_DeviceType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XInput::XInputController);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::XInputController_Capabilities);
// Dependencies
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceType
struct CORDL_TYPE XInputController_DeviceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XInputController_DeviceType_Unwrapped
  enum struct __XInputController_DeviceType_Unwrapped : int32_t {
    __E_Gamepad = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XInputController_DeviceType_Unwrapped() const noexcept {
    return static_cast<__XInputController_DeviceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputController_DeviceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XInputController_DeviceType(int32_t value__) noexcept;

  /// @brief Field Gamepad value: I32(0)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceType const Gamepad;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_DeviceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController_DeviceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Dependencies
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceSubType
struct CORDL_TYPE XInputController_DeviceSubType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XInputController_DeviceSubType_Unwrapped
  enum struct __XInputController_DeviceSubType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Gamepad = static_cast<int32_t>(0x1),
    __E_Wheel = static_cast<int32_t>(0x2),
    __E_ArcadeStick = static_cast<int32_t>(0x3),
    __E_FlightStick = static_cast<int32_t>(0x4),
    __E_DancePad = static_cast<int32_t>(0x5),
    __E_Guitar = static_cast<int32_t>(0x6),
    __E_GuitarAlternate = static_cast<int32_t>(0x7),
    __E_DrumKit = static_cast<int32_t>(0x8),
    __E_GuitarBass = static_cast<int32_t>(0xb),
    __E_ArcadePad = static_cast<int32_t>(0x13),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XInputController_DeviceSubType_Unwrapped() const noexcept {
    return static_cast<__XInputController_DeviceSubType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputController_DeviceSubType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XInputController_DeviceSubType(int32_t value__) noexcept;

  /// @brief Field ArcadePad value: I32(19)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const ArcadePad;

  /// @brief Field ArcadeStick value: I32(3)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const ArcadeStick;

  /// @brief Field DancePad value: I32(5)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const DancePad;

  /// @brief Field DrumKit value: I32(8)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const DrumKit;

  /// @brief Field FlightStick value: I32(4)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const FlightStick;

  /// @brief Field Gamepad value: I32(1)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const Gamepad;

  /// @brief Field Guitar value: I32(6)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const Guitar;

  /// @brief Field GuitarAlternate value: I32(7)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const GuitarAlternate;

  /// @brief Field GuitarBass value: I32(11)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const GuitarBass;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const Unknown;

  /// @brief Field Wheel value: I32(2)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const Wheel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6761 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Dependencies
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceFlags
struct CORDL_TYPE XInputController_DeviceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XInputController_DeviceFlags_Unwrapped
  enum struct __XInputController_DeviceFlags_Unwrapped : int32_t {
    __E_ForceFeedbackSupported = static_cast<int32_t>(0x1),
    __E_Wireless = static_cast<int32_t>(0x2),
    __E_VoiceSupported = static_cast<int32_t>(0x4),
    __E_PluginModulesSupported = static_cast<int32_t>(0x8),
    __E_NoNavigation = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XInputController_DeviceFlags_Unwrapped() const noexcept {
    return static_cast<__XInputController_DeviceFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputController_DeviceFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XInputController_DeviceFlags(int32_t value__) noexcept;

  /// @brief Field ForceFeedbackSupported value: I32(1)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const ForceFeedbackSupported;

  /// @brief Field NoNavigation value: I32(16)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const NoNavigation;

  /// @brief Field PluginModulesSupported value: I32(8)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const PluginModulesSupported;

  /// @brief Field VoiceSupported value: I32(4)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const VoiceSupported;

  /// @brief Field Wireless value: I32(2)
  static ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const Wireless;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Dependencies UnityEngine.InputSystem.XInput.XInputController::DeviceFlags, UnityEngine.InputSystem.XInput.XInputController::DeviceSubType,
// UnityEngine.InputSystem.XInput.XInputController::DeviceType
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/Capabilities
struct CORDL_TYPE XInputController_Capabilities {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputController_Capabilities();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::XInput::XInputController_DeviceType", modifiers: "", def_value: None }, CppParam { name: "subType", ty:
  // "::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags", modifiers: "", def_value: None }]
  constexpr XInputController_Capabilities(::UnityEngine::InputSystem::XInput::XInputController_DeviceType type, ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType subType,
                                          ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::XInputController_DeviceType type;

  /// @brief Field subType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType subType;

  /// @brief Field flags, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_Capabilities, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_Capabilities, subType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController_Capabilities, flags) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController_Capabilities, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Dependencies UnityEngine.InputSystem.Gamepad, UnityEngine.InputSystem.XInput.XInputController::DeviceFlags, UnityEngine.InputSystem.XInput.XInputController::DeviceSubType
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XInput.XInputController
class CORDL_TYPE XInputController : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  using Capabilities = ::UnityEngine::InputSystem::XInput::XInputController_Capabilities;

  using DeviceFlags = ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags;

  using DeviceSubType = ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType;

  using DeviceType = ::UnityEngine::InputSystem::XInput::XInputController_DeviceType;

  /// @brief Field <menu>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <view>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__view_k__BackingField, put = __cordl_internal_set__view_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _view_k__BackingField;

  __declspec(property(get = get_flags)) ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags flags;

  /// @brief Field m_Flags, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags m_Flags;

  /// @brief Field m_HaveParsedCapabilities, offset 0x200, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HaveParsedCapabilities, put = __cordl_internal_set_m_HaveParsedCapabilities)) bool m_HaveParsedCapabilities;

  /// @brief Field m_SubType, offset 0x204, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubType, put = __cordl_internal_set_m_SubType)) ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType m_SubType;

  __declspec(property(get = get_menu, put = set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_subType)) ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType subType;

  __declspec(property(get = get_view, put = set_view)) ::UnityEngine::InputSystem::Controls::ButtonControl* view;

  /// @brief Method FinishSetup, addr 0x45f6758, size 0x20, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XInput::XInputController* New_ctor();

  /// @brief Method ParseCapabilities, addr 0x45f66c4, size 0x70, virtual false, abstract: false, final false
  inline void ParseCapabilities();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__view_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__view_k__BackingField();

  constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags& __cordl_internal_get_m_Flags();

  constexpr bool const& __cordl_internal_get_m_HaveParsedCapabilities() const;

  constexpr bool& __cordl_internal_get_m_HaveParsedCapabilities();

  constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType const& __cordl_internal_get_m_SubType() const;

  constexpr ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType& __cordl_internal_get_m_SubType();

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags value);

  constexpr void __cordl_internal_set_m_HaveParsedCapabilities(bool value);

  constexpr void __cordl_internal_set_m_SubType(::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType value);

  /// @brief Method .ctor, addr 0x45f6778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_flags, addr 0x45f6734, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags get_flags();

  /// @brief Method get_menu, addr 0x45f6680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_subType, addr 0x45f66a0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType get_subType();

  /// @brief Method get_view, addr 0x45f6690, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_view();

  /// @brief Method set_menu, addr 0x45f6688, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_view, addr 0x45f6698, size 0x8, virtual false, abstract: false, final false
  inline void set_view(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XInputController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XInputController(XInputController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XInputController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XInputController(XInputController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6764 };

  /// @brief Field <menu>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <view>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____view_k__BackingField;

  /// @brief Field m_HaveParsedCapabilities, offset: 0x200, size: 0x1, def value: None
  bool ___m_HaveParsedCapabilities;

  /// @brief Field m_SubType, offset: 0x204, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType ___m_SubType;

  /// @brief Field m_Flags, offset: 0x208, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags ___m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____menu_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____view_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_HaveParsedCapabilities) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_SubType) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_Flags) == 0x208, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController, 0x210>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XInput
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController_DeviceFlags, "UnityEngine.InputSystem.XInput", "XInputController/DeviceFlags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController_DeviceSubType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceSubType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController_DeviceType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceType");
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::XInputController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController*, "UnityEngine.InputSystem.XInput", "XInputController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController_Capabilities, "UnityEngine.InputSystem.XInput", "XInputController/Capabilities");
