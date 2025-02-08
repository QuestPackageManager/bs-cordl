#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/Vector2Composite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Composite)
namespace UnityEngine::InputSystem::Composites {
struct Vector2Composite_Mode;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct Vector2Composite_Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector2Composite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::Vector2Composite_Mode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::Vector2Composite);
// Dependencies
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.Vector2Composite/Mode
struct CORDL_TYPE Vector2Composite_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Vector2Composite_Mode_Unwrapped
  enum struct __Vector2Composite_Mode_Unwrapped : int32_t {
    __E_Analog = static_cast<int32_t>(0x2),
    __E_DigitalNormalized = static_cast<int32_t>(0x0),
    __E_Digital = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Vector2Composite_Mode_Unwrapped() const noexcept {
    return static_cast<__Vector2Composite_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Composite_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Vector2Composite_Mode(int32_t value__) noexcept;

  /// @brief Field Analog value: I32(2)
  static ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode const Analog;

  /// @brief Field Digital value: I32(1)
  static ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode const Digital;

  /// @brief Field DigitalNormalized value: I32(0)
  static ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode const DigitalNormalized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7129 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::Vector2Composite_Mode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Dependencies UnityEngine.InputSystem.Composites.Vector2Composite::Mode, UnityEngine.InputSystem.InputBindingComposite`1<TValue>, UnityEngine.Vector2
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.Vector2Composite
class CORDL_TYPE Vector2Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using Mode = ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode;

  /// @brief Field down, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_down, put = __cordl_internal_set_down)) int32_t down;

  /// @brief Field left, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) int32_t left;

  /// @brief Field mode, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode mode;

  /// @brief Field normalize, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_normalize, put = __cordl_internal_set_normalize)) bool normalize;

  /// @brief Field right, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) int32_t right;

  /// @brief Field up, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_up, put = __cordl_internal_set_up)) int32_t up;

  /// @brief Method EvaluateMagnitude, addr 0x4578744, size 0x70, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::Vector2Composite* New_ctor();

  /// @brief Method ReadValue, addr 0x45785e0, size 0x164, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_down() const;

  constexpr int32_t& __cordl_internal_get_down();

  constexpr int32_t const& __cordl_internal_get_left() const;

  constexpr int32_t& __cordl_internal_get_left();

  constexpr ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode& __cordl_internal_get_mode();

  constexpr bool const& __cordl_internal_get_normalize() const;

  constexpr bool& __cordl_internal_get_normalize();

  constexpr int32_t const& __cordl_internal_get_right() const;

  constexpr int32_t& __cordl_internal_get_right();

  constexpr int32_t const& __cordl_internal_get_up() const;

  constexpr int32_t& __cordl_internal_get_up();

  constexpr void __cordl_internal_set_down(int32_t value);

  constexpr void __cordl_internal_set_left(int32_t value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::InputSystem::Composites::Vector2Composite_Mode value);

  constexpr void __cordl_internal_set_normalize(bool value);

  constexpr void __cordl_internal_set_right(int32_t value);

  constexpr void __cordl_internal_set_up(int32_t value);

  /// @brief Method .ctor, addr 0x45787b4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Composite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Composite(Vector2Composite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Composite(Vector2Composite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7130 };

  /// @brief Field up, offset: 0x10, size: 0x4, def value: None
  int32_t ___up;

  /// @brief Field down, offset: 0x14, size: 0x4, def value: None
  int32_t ___down;

  /// @brief Field left, offset: 0x18, size: 0x4, def value: None
  int32_t ___left;

  /// @brief Field right, offset: 0x1c, size: 0x4, def value: None
  int32_t ___right;

  /// @brief Field normalize, offset: 0x20, size: 0x1, def value: None
  bool ___normalize;

  /// @brief Field mode, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::Vector2Composite_Mode ___mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___up) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___down) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___left) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___right) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___normalize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector2Composite, ___mode) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::Vector2Composite, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector2Composite_Mode, "UnityEngine.InputSystem.Composites", "Vector2Composite/Mode");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector2Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector2Composite*, "UnityEngine.InputSystem.Composites", "Vector2Composite");
