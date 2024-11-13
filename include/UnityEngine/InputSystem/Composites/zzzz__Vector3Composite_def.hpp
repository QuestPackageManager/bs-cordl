#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/Vector3Composite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Composite)
namespace UnityEngine::InputSystem::Composites {
struct __Vector3Composite__Mode;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct __Vector3Composite__Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector3Composite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::Vector3Composite);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: ::Vector3Composite::Mode
struct CORDL_TYPE __Vector3Composite__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Vector3Composite__Mode_Unwrapped
  enum struct ____Vector3Composite__Mode_Unwrapped : int32_t {
    __E_Analog = static_cast<int32_t>(0x0),
    __E_DigitalNormalized = static_cast<int32_t>(0x1),
    __E_Digital = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Vector3Composite__Mode_Unwrapped() const noexcept {
    return static_cast<____Vector3Composite__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3Composite__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Vector3Composite__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Analog value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const Analog;

  /// @brief Field Digital value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const Digital;

  /// @brief Field DigitalNormalized value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const DigitalNormalized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::Vector3Composite
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Composites::Vector3Composite*
class CORDL_TYPE Vector3Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3> {
public:
  // Declarations
  using Mode = ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode;

  /// @brief Field backward, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_backward, put = __cordl_internal_set_backward)) int32_t backward;

  /// @brief Field down, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_down, put = __cordl_internal_set_down)) int32_t down;

  /// @brief Field forward, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_forward, put = __cordl_internal_set_forward)) int32_t forward;

  /// @brief Field left, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) int32_t left;

  /// @brief Field mode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode mode;

  /// @brief Field right, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) int32_t right;

  /// @brief Field up, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_up, put = __cordl_internal_set_up)) int32_t up;

  static inline ::UnityEngine::InputSystem::Composites::Vector3Composite* New_ctor();

  /// @brief Method ReadValue, addr 0x4511634, size 0x254, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_backward() const;

  constexpr int32_t& __cordl_internal_get_backward();

  constexpr int32_t const& __cordl_internal_get_down() const;

  constexpr int32_t& __cordl_internal_get_down();

  constexpr int32_t const& __cordl_internal_get_forward() const;

  constexpr int32_t& __cordl_internal_get_forward();

  constexpr int32_t const& __cordl_internal_get_left() const;

  constexpr int32_t& __cordl_internal_get_left();

  constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode& __cordl_internal_get_mode();

  constexpr int32_t const& __cordl_internal_get_right() const;

  constexpr int32_t& __cordl_internal_get_right();

  constexpr int32_t const& __cordl_internal_get_up() const;

  constexpr int32_t& __cordl_internal_get_up();

  constexpr void __cordl_internal_set_backward(int32_t value);

  constexpr void __cordl_internal_set_down(int32_t value);

  constexpr void __cordl_internal_set_forward(int32_t value);

  constexpr void __cordl_internal_set_left(int32_t value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode value);

  constexpr void __cordl_internal_set_right(int32_t value);

  constexpr void __cordl_internal_set_up(int32_t value);

  /// @brief Method .ctor, addr 0x4511888, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Composite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Composite(Vector3Composite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Composite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Composite(Vector3Composite const&) = delete;

  /// @brief Field up, offset: 0x10, size: 0x4, def value: None
  int32_t ___up;

  /// @brief Field down, offset: 0x14, size: 0x4, def value: None
  int32_t ___down;

  /// @brief Field left, offset: 0x18, size: 0x4, def value: None
  int32_t ___left;

  /// @brief Field right, offset: 0x1c, size: 0x4, def value: None
  int32_t ___right;

  /// @brief Field forward, offset: 0x20, size: 0x4, def value: None
  int32_t ___forward;

  /// @brief Field backward, offset: 0x24, size: 0x4, def value: None
  int32_t ___backward;

  /// @brief Field mode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode ___mode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7103 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::Vector3Composite, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___up) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___down) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___left) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___right) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___forward) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___backward) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::Vector3Composite, ___mode) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, "UnityEngine.InputSystem.Composites", "Vector3Composite/Mode");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector3Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector3Composite*, "UnityEngine.InputSystem.Composites", "Vector3Composite");
