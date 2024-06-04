#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputController)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__Capabilities;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceFlags;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceSubType;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceFlags;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceSubType;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__DeviceType;
}
namespace UnityEngine::InputSystem::XInput {
class XInputController;
}
namespace UnityEngine::InputSystem::XInput {
struct __XInputController__Capabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::__XInputController__DeviceType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XInput::XInputController);
MARK_VAL_T(::UnityEngine::InputSystem::XInput::__XInputController__Capabilities);
// Type: ::DeviceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: ::XInputController::DeviceType
struct CORDL_TYPE __XInputController__DeviceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XInputController__DeviceType_Unwrapped
  enum struct ____XInputController__DeviceType_Unwrapped : int32_t {
    __E_Gamepad = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XInputController__DeviceType_Unwrapped() const noexcept {
    return static_cast<____XInputController__DeviceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XInputController__DeviceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XInputController__DeviceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType const Gamepad;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::__XInputController__DeviceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__DeviceType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Type: ::DeviceSubType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: ::XInputController::DeviceSubType
struct CORDL_TYPE __XInputController__DeviceSubType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XInputController__DeviceSubType_Unwrapped
  enum struct ____XInputController__DeviceSubType_Unwrapped : int32_t {
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
  constexpr operator ____XInputController__DeviceSubType_Unwrapped() const noexcept {
    return static_cast<____XInputController__DeviceSubType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XInputController__DeviceSubType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XInputController__DeviceSubType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ArcadePad value: static_cast<int32_t>(0x13)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const ArcadePad;

  /// @brief Field ArcadeStick value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const ArcadeStick;

  /// @brief Field DancePad value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const DancePad;

  /// @brief Field DrumKit value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const DrumKit;

  /// @brief Field FlightStick value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const FlightStick;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const Gamepad;

  /// @brief Field Guitar value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const Guitar;

  /// @brief Field GuitarAlternate value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const GuitarAlternate;

  /// @brief Field GuitarBass value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const GuitarBass;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const Unknown;

  /// @brief Field Wheel value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const Wheel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Type: ::DeviceFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: ::XInputController::DeviceFlags
struct CORDL_TYPE __XInputController__DeviceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XInputController__DeviceFlags_Unwrapped
  enum struct ____XInputController__DeviceFlags_Unwrapped : int32_t {
    __E_ForceFeedbackSupported = static_cast<int32_t>(0x1),
    __E_Wireless = static_cast<int32_t>(0x2),
    __E_VoiceSupported = static_cast<int32_t>(0x4),
    __E_PluginModulesSupported = static_cast<int32_t>(0x8),
    __E_NoNavigation = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XInputController__DeviceFlags_Unwrapped() const noexcept {
    return static_cast<____XInputController__DeviceFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XInputController__DeviceFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XInputController__DeviceFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ForceFeedbackSupported value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const ForceFeedbackSupported;

  /// @brief Field NoNavigation value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const NoNavigation;

  /// @brief Field PluginModulesSupported value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const PluginModulesSupported;

  /// @brief Field VoiceSupported value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const VoiceSupported;

  /// @brief Field Wireless value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const Wireless;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Type: ::Capabilities
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: true
// CS Name: ::XInputController::Capabilities
struct CORDL_TYPE __XInputController__Capabilities {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XInputController__Capabilities();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::XInput::__XInputController__DeviceType", modifiers: "", def_value: None }, CppParam { name: "subType", ty:
  // "::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags", modifiers: "", def_value: None }]
  constexpr __XInputController__Capabilities(::UnityEngine::InputSystem::XInput::__XInputController__DeviceType type, ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType subType,
                                             ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags flags) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType type;

  /// @brief Field subType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType subType;

  /// @brief Field flags, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::__XInputController__Capabilities, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__Capabilities, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__Capabilities, subType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::__XInputController__Capabilities, flags) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XInput
// Type: UnityEngine.InputSystem.XInput::XInputController
// SizeInfo { instance_size: 528, native_size: -1, calculated_instance_size: 528, calculated_native_size: 524, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XInput {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XInput::XInputController*
class CORDL_TYPE XInputController : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  using Capabilities = ::UnityEngine::InputSystem::XInput::__XInputController__Capabilities;

  using DeviceFlags = ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags;

  using DeviceSubType = ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType;

  using DeviceType = ::UnityEngine::InputSystem::XInput::__XInputController__DeviceType;

  /// @brief Field <menu>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <view>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__view_k__BackingField, put = __cordl_internal_set__view_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _view_k__BackingField;

  __declspec(property(get = get_flags))::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags flags;

  /// @brief Field m_Flags, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags m_Flags;

  /// @brief Field m_HaveParsedCapabilities, offset 0x200, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HaveParsedCapabilities, put = __cordl_internal_set_m_HaveParsedCapabilities)) bool m_HaveParsedCapabilities;

  /// @brief Field m_SubType, offset 0x204, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubType, put = __cordl_internal_set_m_SubType))::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType m_SubType;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_subType))::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType subType;

  __declspec(property(get = get_view, put = set_view))::UnityEngine::InputSystem::Controls::ButtonControl* view;

  /// @brief Method FinishSetup, addr 0x315c628, size 0x20, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XInput::XInputController* New_ctor();

  /// @brief Method ParseCapabilities, addr 0x315c594, size 0x70, virtual false, abstract: false, final false
  inline void ParseCapabilities();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__view_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__view_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags& __cordl_internal_get_m_Flags();

  constexpr bool const& __cordl_internal_get_m_HaveParsedCapabilities() const;

  constexpr bool& __cordl_internal_get_m_HaveParsedCapabilities();

  constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType const& __cordl_internal_get_m_SubType() const;

  constexpr ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType& __cordl_internal_get_m_SubType();

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags value);

  constexpr void __cordl_internal_set_m_HaveParsedCapabilities(bool value);

  constexpr void __cordl_internal_set_m_SubType(::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType value);

  /// @brief Method .ctor, addr 0x315c648, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_flags, addr 0x315c604, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags get_flags();

  /// @brief Method get_menu, addr 0x315c550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_subType, addr 0x315c570, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType get_subType();

  /// @brief Method get_view, addr 0x315c560, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_view();

  /// @brief Method set_menu, addr 0x315c558, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_view, addr 0x315c568, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <menu>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <view>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____view_k__BackingField;

  /// @brief Field m_HaveParsedCapabilities, offset: 0x200, size: 0x1, def value: None
  bool ___m_HaveParsedCapabilities;

  /// @brief Field m_SubType, offset: 0x204, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType ___m_SubType;

  /// @brief Field m_Flags, offset: 0x208, size: 0x4, def value: None
  ::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags ___m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XInput::XInputController, 0x210>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____menu_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ____view_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_HaveParsedCapabilities) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_SubType) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XInput::XInputController, ___m_Flags) == 0x208, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XInput
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::__XInputController__DeviceFlags, "UnityEngine.InputSystem.XInput", "XInputController/DeviceFlags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::__XInputController__DeviceSubType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceSubType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::__XInputController__DeviceType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceType");
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::XInputController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputController*, "UnityEngine.InputSystem.XInput", "XInputController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::__XInputController__Capabilities, "UnityEngine.InputSystem.XInput", "XInputController/Capabilities");
