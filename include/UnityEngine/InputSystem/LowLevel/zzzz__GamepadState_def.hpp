#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/GamepadState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadState)
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::GamepadState);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo, UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.GamepadState
#pragma pack(push, 0)
struct CORDL_TYPE GamepadState {
public:
  // Declarations
  /// @brief Field buttons, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_buttons, put = __cordl_internal_set_buttons)) uint32_t buttons;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Field leftStick, offset 0x4, size 0x8
  __declspec(property(get = __cordl_internal_get_leftStick, put = __cordl_internal_set_leftStick)) ::UnityEngine::Vector2 leftStick;

  /// @brief Field leftTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_leftTrigger, put = __cordl_internal_set_leftTrigger)) float_t leftTrigger;

  /// @brief Field rightStick, offset 0xc, size 0x8
  __declspec(property(get = __cordl_internal_get_rightStick, put = __cordl_internal_set_rightStick)) ::UnityEngine::Vector2 rightStick;

  /// @brief Field rightTrigger, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rightTrigger, put = __cordl_internal_set_rightTrigger)) float_t rightTrigger;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method WithButton, addr 0x4603c58, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::GamepadState WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value);

  constexpr uint32_t const& __cordl_internal_get_buttons() const;

  constexpr uint32_t& __cordl_internal_get_buttons();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_leftStick() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_leftStick();

  constexpr float_t const& __cordl_internal_get_leftTrigger() const;

  constexpr float_t& __cordl_internal_get_leftTrigger();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rightStick() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_rightStick();

  constexpr float_t const& __cordl_internal_get_rightTrigger() const;

  constexpr float_t& __cordl_internal_get_rightTrigger();

  constexpr void __cordl_internal_set_buttons(uint32_t value);

  constexpr void __cordl_internal_set_leftStick(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_leftTrigger(float_t value);

  constexpr void __cordl_internal_set_rightStick(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_rightTrigger(float_t value);

  /// @brief Method .ctor, addr 0x4603ba8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*> buttons);

  /// @brief Method get_Format, addr 0x4603b48, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format, addr 0x4603b78, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GamepadState();

  // Ctor Parameters [CppParam { name: "buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "leftStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "rightStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "rightTrigger", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GamepadState(uint32_t buttons, ::UnityEngine::Vector2 leftStick, ::UnityEngine::Vector2 rightStick, float_t leftTrigger, float_t rightTrigger) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___buttons_padding[0x0];
      /// @brief Field buttons, offset: 0x0, size: 0x4, def value: None
      uint32_t ___buttons;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___buttons_padding_forAlignment[0x0];
      /// @brief Field buttons, offset: 0x0, size: 0x4, def value: None
      uint32_t ___buttons_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___leftStick_padding[0x4];
      /// @brief Field leftStick, offset: 0x4, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___leftStick;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___leftStick_padding_forAlignment[0x4];
      /// @brief Field leftStick, offset: 0x4, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___leftStick_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___rightStick_padding[0xc];
      /// @brief Field rightStick, offset: 0xc, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___rightStick;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___rightStick_padding_forAlignment[0xc];
      /// @brief Field rightStick, offset: 0xc, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___rightStick_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___leftTrigger_padding[0x14];
      /// @brief Field leftTrigger, offset: 0x14, size: 0x4, def value: None
      float_t ___leftTrigger;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___leftTrigger_padding_forAlignment[0x14];
      /// @brief Field leftTrigger, offset: 0x14, size: 0x4, def value: None
      float_t ___leftTrigger_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___rightTrigger_padding[0x18];
      /// @brief Field rightTrigger, offset: 0x18, size: 0x4, def value: None
      float_t ___rightTrigger;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___rightTrigger_padding_forAlignment[0x18];
      /// @brief Field rightTrigger, offset: 0x18, size: 0x4, def value: None
      float_t ___rightTrigger_forAlignment;
    };
  };

public:
  /// @brief Field ButtonEastShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonEastShortDisplayName{ u"B" };

  /// @brief Field ButtonNorthShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonNorthShortDisplayName{ u"Y" };

  /// @brief Field ButtonSouthShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonSouthShortDisplayName{ u"A" };

  /// @brief Field ButtonWestShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonWestShortDisplayName{ u"X" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6902 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::GamepadState, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadState, "UnityEngine.InputSystem.LowLevel", "GamepadState");
