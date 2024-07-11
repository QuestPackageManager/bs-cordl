#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/MouseState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct MouseButton;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct MouseState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::MouseState);
// Type: UnityEngine.InputSystem.LowLevel::MouseState
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 30, calculated_native_size: 46, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::MouseState
#pragma pack(push, 0)
struct CORDL_TYPE MouseState {
public:
  // Declarations
  /// @brief Field buttons, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get_buttons, put = __cordl_internal_set_buttons)) uint16_t buttons;

  /// @brief Field clickCount, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_clickCount, put = __cordl_internal_set_clickCount)) uint16_t clickCount;

  /// @brief Field delta, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_delta, put = __cordl_internal_set_delta))::UnityEngine::Vector2 delta;

  /// @brief Field displayIndex, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_displayIndex, put = __cordl_internal_set_displayIndex)) uint16_t displayIndex;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Field position, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector2 position;

  /// @brief Field scroll, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scroll, put = __cordl_internal_set_scroll))::UnityEngine::Vector2 scroll;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method WithButton, addr 0x318ea3c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::MouseState WithButton(::UnityEngine::InputSystem::LowLevel::MouseButton button, bool state);

  constexpr uint16_t const& __cordl_internal_get_buttons() const;

  constexpr uint16_t& __cordl_internal_get_buttons();

  constexpr uint16_t const& __cordl_internal_get_clickCount() const;

  constexpr uint16_t& __cordl_internal_get_clickCount();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_delta() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_delta();

  constexpr uint16_t const& __cordl_internal_get_displayIndex() const;

  constexpr uint16_t& __cordl_internal_get_displayIndex();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_position();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scroll() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scroll();

  constexpr void __cordl_internal_set_buttons(uint16_t value);

  constexpr void __cordl_internal_set_clickCount(uint16_t value);

  constexpr void __cordl_internal_set_delta(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_displayIndex(uint16_t value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_scroll(::UnityEngine::Vector2 value);

  /// @brief Method get_Format, addr 0x318ea0c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format, addr 0x318ea68, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseState();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "displayIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "clickCount", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr MouseState(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, ::UnityEngine::Vector2 scroll, uint16_t buttons, uint16_t displayIndex, uint16_t clickCount) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___position_padding[0x0];
      /// @brief Field position, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___position;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___position_padding_forAlignment[0x0];
      /// @brief Field position, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___position_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___delta_padding[0x8];
      /// @brief Field delta, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___delta;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___delta_padding_forAlignment[0x8];
      /// @brief Field delta, offset: 0x8, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___delta_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___scroll_padding[0x10];
      /// @brief Field scroll, offset: 0x10, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___scroll;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___scroll_padding_forAlignment[0x10];
      /// @brief Field scroll, offset: 0x10, size: 0x8, def value: None
      ::UnityEngine::Vector2 ___scroll_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___buttons_padding[0x18];
      /// @brief Field buttons, offset: 0x18, size: 0x2, def value: None
      uint16_t ___buttons;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___buttons_padding_forAlignment[0x18];
      /// @brief Field buttons, offset: 0x18, size: 0x2, def value: None
      uint16_t ___buttons_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___displayIndex_padding[0x1a];
      /// @brief Field displayIndex, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___displayIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___displayIndex_padding_forAlignment[0x1a];
      /// @brief Field displayIndex, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___displayIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___clickCount_padding[0x1c];
      /// @brief Field clickCount, offset: 0x1c, size: 0x2, def value: None
      uint16_t ___clickCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___clickCount_padding_forAlignment[0x1c];
      /// @brief Field clickCount, offset: 0x1c, size: 0x2, def value: None
      uint16_t ___clickCount_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::MouseState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::MouseState, "UnityEngine.InputSystem.LowLevel", "MouseState");
