#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::GamepadState);
// Type: UnityEngine.InputSystem.LowLevel::GamepadState
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6492))
// CS Name: ::UnityEngine.InputSystem.LowLevel::GamepadState
#pragma pack(push, 0)
struct CORDL_TYPE GamepadState {
public:
  // Declarations
  /// @brief Field buttons, offset 0x0, size 0x4
  __declspec(property(get = __get_buttons, put = __set_buttons)) uint32_t buttons;

  /// @brief Field leftStick, offset 0x4, size 0x8
  __declspec(property(get = __get_leftStick, put = __set_leftStick))::UnityEngine::Vector2 leftStick;

  /// @brief Field rightStick, offset 0xc, size 0x8
  __declspec(property(get = __get_rightStick, put = __set_rightStick))::UnityEngine::Vector2 rightStick;

  /// @brief Field leftTrigger, offset 0x14, size 0x4
  __declspec(property(get = __get_leftTrigger, put = __set_leftTrigger)) float_t leftTrigger;

  /// @brief Field rightTrigger, offset 0x18, size 0x4
  __declspec(property(get = __get_rightTrigger, put = __set_rightTrigger)) float_t rightTrigger;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  constexpr uint32_t& __get_buttons();

  constexpr uint32_t const& __get_buttons() const;

  constexpr void __set_buttons(uint32_t value);

  constexpr ::UnityEngine::Vector2& __get_leftStick();

  constexpr ::UnityEngine::Vector2 const& __get_leftStick() const;

  constexpr void __set_leftStick(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_rightStick();

  constexpr ::UnityEngine::Vector2 const& __get_rightStick() const;

  constexpr void __set_rightStick(::UnityEngine::Vector2 value);

  constexpr float_t& __get_leftTrigger();

  constexpr float_t const& __get_leftTrigger() const;

  constexpr void __set_leftTrigger(float_t value);

  constexpr float_t& __get_rightTrigger();

  constexpr float_t const& __get_rightTrigger() const;

  constexpr void __set_rightTrigger(float_t value);

  /// @brief Method get_Format addr 0x2ae86a8 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format addr 0x2ae86d8 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method .ctor addr 0x2ae8708 size 0xb4 virtual false final false
  inline void _ctor(::ArrayW<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Array<::UnityEngine::InputSystem::LowLevel::GamepadButton>*> buttons);

  /// @brief Method WithButton addr 0x2ae87bc size 0x34 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::GamepadState WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value);

  // Ctor Parameters [CppParam { name: "buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "leftStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "rightStick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "rightTrigger", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GamepadState(uint32_t buttons, ::UnityEngine::Vector2 leftStick, ::UnityEngine::Vector2 rightStick, float_t leftTrigger, float_t rightTrigger) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GamepadState();

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field ButtonSouthShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonSouthShortDisplayName{ u"A" };

  /// @brief Field ButtonNorthShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonNorthShortDisplayName{ u"Y" };

  /// @brief Field ButtonWestShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonWestShortDisplayName{ u"X" };

  /// @brief Field ButtonEastShortDisplayName offset 0xffffffff size 0x8
  static constexpr ::ConstString ButtonEastShortDisplayName{ u"B" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::GamepadState, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadState, "UnityEngine.InputSystem.LowLevel", "GamepadState");
