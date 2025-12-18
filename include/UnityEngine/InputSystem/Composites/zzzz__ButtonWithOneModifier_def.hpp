#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithOneModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithOneModifier)
namespace UnityEngine::InputSystem::Composites {
struct ButtonWithOneModifier_ModifiersOrder;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct ButtonWithOneModifier_ModifiersOrder;
}
namespace UnityEngine::InputSystem::Composites {
class ButtonWithOneModifier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier);
// Dependencies
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithOneModifier/ModifiersOrder
struct CORDL_TYPE ButtonWithOneModifier_ModifiersOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ButtonWithOneModifier_ModifiersOrder_Unwrapped
  enum struct __ButtonWithOneModifier_ModifiersOrder_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Ordered = static_cast<int32_t>(0x1),
    __E_Unordered = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ButtonWithOneModifier_ModifiersOrder_Unwrapped() const noexcept {
    return static_cast<__ButtonWithOneModifier_ModifiersOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithOneModifier_ModifiersOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ButtonWithOneModifier_ModifiersOrder(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder const Default;

  /// @brief Field Ordered value: I32(1)
  static ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder const Ordered;

  /// @brief Field Unordered value: I32(2)
  static ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder const Unordered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9188 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Dependencies UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ModifiersOrder, UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithOneModifier
class CORDL_TYPE ButtonWithOneModifier : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  using ModifiersOrder = ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder;

  /// @brief Field button, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button)) int32_t button;

  /// @brief Field modifier, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier, put = __cordl_internal_set_modifier)) int32_t modifier;

  /// @brief Field modifiersOrder, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_modifiersOrder,
                      put = __cordl_internal_set_modifiersOrder)) ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder modifiersOrder;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideModifiersNeedToBePressedFirst, put = __cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  /// @brief Method EvaluateMagnitude, addr 0x6355754, size 0xc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x6355760, size 0x90, virtual true, abstract: false, final false
  inline void FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifierIsPressed, addr 0x63556d0, size 0x84, virtual false, abstract: false, final false
  inline bool ModifierIsPressed(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier* New_ctor();

  /// @brief Method ReadValue, addr 0x6355650, size 0x80, virtual true, abstract: false, final false
  inline float_t ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_button() const;

  constexpr int32_t& __cordl_internal_get_button();

  constexpr int32_t const& __cordl_internal_get_modifier() const;

  constexpr int32_t& __cordl_internal_get_modifier();

  constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder const& __cordl_internal_get_modifiersOrder() const;

  constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder& __cordl_internal_get_modifiersOrder();

  constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

  constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst();

  constexpr void __cordl_internal_set_button(int32_t value);

  constexpr void __cordl_internal_set_modifier(int32_t value);

  constexpr void __cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder value);

  constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method .ctor, addr 0x63557f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithOneModifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonWithOneModifier(ButtonWithOneModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonWithOneModifier(ButtonWithOneModifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9189 };

  /// @brief Field modifier, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier;

  /// @brief Field button, offset: 0x14, size: 0x4, def value: None
  int32_t ___button;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x18, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  /// @brief Field modifiersOrder, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder ___modifiersOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___modifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___button) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___overrideModifiersNeedToBePressedFirst) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___modifiersOrder) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder, "UnityEngine.InputSystem.Composites", "ButtonWithOneModifier/ModifiersOrder");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*, "UnityEngine.InputSystem.Composites", "ButtonWithOneModifier");
