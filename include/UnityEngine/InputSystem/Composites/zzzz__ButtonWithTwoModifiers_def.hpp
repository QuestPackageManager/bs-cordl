#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithTwoModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithTwoModifiers)
namespace UnityEngine::InputSystem::Composites {
struct ButtonWithTwoModifiers_ModifiersOrder;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct ButtonWithTwoModifiers_ModifiersOrder;
}
namespace UnityEngine::InputSystem::Composites {
class ButtonWithTwoModifiers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
// Dependencies
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers/ModifiersOrder
struct CORDL_TYPE ButtonWithTwoModifiers_ModifiersOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped
  enum struct __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Ordered = static_cast<int32_t>(0x1),
    __E_Unordered = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ButtonWithTwoModifiers_ModifiersOrder_Unwrapped() const noexcept {
    return static_cast<__ButtonWithTwoModifiers_ModifiersOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithTwoModifiers_ModifiersOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ButtonWithTwoModifiers_ModifiersOrder(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder const Default;

  /// @brief Field Ordered value: I32(1)
  static ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder const Ordered;

  /// @brief Field Unordered value: I32(2)
  static ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder const Unordered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Dependencies UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ModifiersOrder, UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
class CORDL_TYPE ButtonWithTwoModifiers : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  using ModifiersOrder = ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder;

  /// @brief Field button, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button)) int32_t button;

  /// @brief Field modifier1, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier1, put = __cordl_internal_set_modifier1)) int32_t modifier1;

  /// @brief Field modifier2, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier2, put = __cordl_internal_set_modifier2)) int32_t modifier2;

  /// @brief Field modifiersOrder, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_modifiersOrder,
                      put = __cordl_internal_set_modifiersOrder)) ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder modifiersOrder;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideModifiersNeedToBePressedFirst, put = __cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  /// @brief Method EvaluateMagnitude, addr 0x6355960, size 0xc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x635596c, size 0x90, virtual true, abstract: false, final false
  inline void FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifiersArePressed, addr 0x63558ac, size 0xb4, virtual false, abstract: false, final false
  inline bool ModifiersArePressed(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers* New_ctor();

  /// @brief Method ReadValue, addr 0x635582c, size 0x80, virtual true, abstract: false, final false
  inline float_t ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_button() const;

  constexpr int32_t& __cordl_internal_get_button();

  constexpr int32_t const& __cordl_internal_get_modifier1() const;

  constexpr int32_t& __cordl_internal_get_modifier1();

  constexpr int32_t const& __cordl_internal_get_modifier2() const;

  constexpr int32_t& __cordl_internal_get_modifier2();

  constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder const& __cordl_internal_get_modifiersOrder() const;

  constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder& __cordl_internal_get_modifiersOrder();

  constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

  constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst();

  constexpr void __cordl_internal_set_button(int32_t value);

  constexpr void __cordl_internal_set_modifier1(int32_t value);

  constexpr void __cordl_internal_set_modifier2(int32_t value);

  constexpr void __cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder value);

  constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method .ctor, addr 0x63559fc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithTwoModifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonWithTwoModifiers(ButtonWithTwoModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonWithTwoModifiers(ButtonWithTwoModifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9191 };

  /// @brief Field modifier1, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier1;

  /// @brief Field modifier2, offset: 0x14, size: 0x4, def value: None
  int32_t ___modifier2;

  /// @brief Field button, offset: 0x18, size: 0x4, def value: None
  int32_t ___button;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x1c, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  /// @brief Field modifiersOrder, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder ___modifiersOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___modifier1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___modifier2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___overrideModifiersNeedToBePressedFirst) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___modifiersOrder) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers/ModifiersOrder");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers");
