#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithTwoModifiers)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class ButtonWithTwoModifiers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
// Type: UnityEngine.InputSystem.Composites::ButtonWithTwoModifiers
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Composites::ButtonWithTwoModifiers*
class CORDL_TYPE ButtonWithTwoModifiers : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  /// @brief Field button, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button)) int32_t button;

  /// @brief Field modifier1, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier1, put = __cordl_internal_set_modifier1)) int32_t modifier1;

  /// @brief Field modifier2, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier2, put = __cordl_internal_set_modifier2)) int32_t modifier2;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideModifiersNeedToBePressedFirst, put = __cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  /// @brief Method EvaluateMagnitude, addr 0x2f908ac, size 0xc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x2f908b8, size 0x90, virtual true, abstract: false, final false
  inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifiersArePressed, addr 0x2f907f8, size 0xb4, virtual false, abstract: false, final false
  inline bool ModifiersArePressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers* New_ctor();

  /// @brief Method ReadValue, addr 0x2f90788, size 0x70, virtual true, abstract: false, final false
  inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_button() const;

  constexpr int32_t& __cordl_internal_get_button();

  constexpr int32_t const& __cordl_internal_get_modifier1() const;

  constexpr int32_t& __cordl_internal_get_modifier1();

  constexpr int32_t const& __cordl_internal_get_modifier2() const;

  constexpr int32_t& __cordl_internal_get_modifier2();

  constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

  constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst();

  constexpr void __cordl_internal_set_button(int32_t value);

  constexpr void __cordl_internal_set_modifier1(int32_t value);

  constexpr void __cordl_internal_set_modifier2(int32_t value);

  constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method .ctor, addr 0x2f90948, size 0x48, virtual false, abstract: false, final false
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

  /// @brief Field modifier1, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier1;

  /// @brief Field modifier2, offset: 0x14, size: 0x4, def value: None
  int32_t ___modifier2;

  /// @brief Field button, offset: 0x18, size: 0x4, def value: None
  int32_t ___button;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x1c, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___modifier1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___modifier2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, ___overrideModifiersNeedToBePressedFirst) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers");
