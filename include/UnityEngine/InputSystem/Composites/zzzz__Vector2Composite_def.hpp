#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Composite)
namespace UnityEngine::InputSystem::Composites {
struct __Vector2Composite__Mode;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct __Vector2Composite__Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector2Composite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::Vector2Composite);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6719))
// CS Name: ::Vector2Composite::Mode
struct CORDL_TYPE __Vector2Composite__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Vector2Composite__Mode_Unwrapped
  enum struct ____Vector2Composite__Mode_Unwrapped : int32_t {
    __E_Analog = static_cast<int32_t>(0x2),
    __E_DigitalNormalized = static_cast<int32_t>(0x0),
    __E_Digital = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Vector2Composite__Mode_Unwrapped() const noexcept {
    return static_cast<____Vector2Composite__Mode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Vector2Composite__Mode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2Composite__Mode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Analog value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode const Analog;

  /// @brief Field DigitalNormalized value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode const DigitalNormalized;

  /// @brief Field Digital value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode const Digital;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::Vector2Composite
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 411 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6190)), TypeDefinitionIndex(TypeDefinitionIndex(6719))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6720)) CS Name:
// ::UnityEngine.InputSystem.Composites::Vector2Composite*
class CORDL_TYPE Vector2Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using Mode = ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode;

  /// @brief Field up, offset 0x10, size 0x4
  __declspec(property(get = __get_up, put = __set_up)) int32_t up;

  /// @brief Field down, offset 0x14, size 0x4
  __declspec(property(get = __get_down, put = __set_down)) int32_t down;

  /// @brief Field left, offset 0x18, size 0x4
  __declspec(property(get = __get_left, put = __set_left)) int32_t left;

  /// @brief Field right, offset 0x1c, size 0x4
  __declspec(property(get = __get_right, put = __set_right)) int32_t right;

  /// @brief Field normalize, offset 0x20, size 0x1
  __declspec(property(get = __get_normalize, put = __set_normalize)) bool normalize;

  /// @brief Field mode, offset 0x24, size 0x4
  __declspec(property(get = __get_mode, put = __set_mode))::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode mode;

  constexpr int32_t& __get_up();

  constexpr int32_t const& __get_up() const;

  constexpr void __set_up(int32_t value);

  constexpr int32_t& __get_down();

  constexpr int32_t const& __get_down() const;

  constexpr void __set_down(int32_t value);

  constexpr int32_t& __get_left();

  constexpr int32_t const& __get_left() const;

  constexpr void __set_left(int32_t value);

  constexpr int32_t& __get_right();

  constexpr int32_t const& __get_right() const;

  constexpr void __set_right(int32_t value);

  constexpr bool& __get_normalize();

  constexpr bool const& __get_normalize() const;

  constexpr void __set_normalize(bool value);

  constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode& __get_mode();

  constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode const& __get_mode() const;

  constexpr void __set_mode(::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode value);

  /// @brief Method ReadValue addr 0x2a5ba08 size 0x164 virtual true final false
  inline ::UnityEngine::Vector2 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method EvaluateMagnitude addr 0x2a5bb6c size 0x70 virtual true final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::Vector2Composite* New_ctor();

  /// @brief Method .ctor addr 0x2a5bbdc size 0x50 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Composite(Vector2Composite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Composite(Vector2Composite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Composite();

public:
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
  ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode ___mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::Vector2Composite, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode, "UnityEngine.InputSystem.Composites", "Vector2Composite/Mode");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector2Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector2Composite*, "UnityEngine.InputSystem.Composites", "Vector2Composite");
