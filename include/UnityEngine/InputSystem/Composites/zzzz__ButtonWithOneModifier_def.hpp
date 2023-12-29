#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithOneModifier)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class ButtonWithOneModifier;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier);
// Type: UnityEngine.InputSystem.Composites::ButtonWithOneModifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6276), inst: 387 }), TypeDefinitionIndex(TypeDefinitionIndex(6276))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6801))
// CS Name: ::UnityEngine.InputSystem.Composites::ButtonWithOneModifier*
class CORDL_TYPE ButtonWithOneModifier : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  /// @brief Field modifier, offset 0x10, size 0x4
  __declspec(property(get = __get_modifier, put = __set_modifier)) int32_t modifier;

  /// @brief Field button, offset 0x14, size 0x4
  __declspec(property(get = __get_button, put = __set_button)) int32_t button;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x18, size 0x1
  __declspec(property(get = __get_overrideModifiersNeedToBePressedFirst, put = __set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  constexpr int32_t& __get_modifier();

  constexpr int32_t const& __get_modifier() const;

  constexpr void __set_modifier(int32_t value);

  constexpr int32_t& __get_button();

  constexpr int32_t const& __get_button() const;

  constexpr void __set_button(int32_t value);

  constexpr bool& __get_overrideModifiersNeedToBePressedFirst();

  constexpr bool const& __get_overrideModifiersNeedToBePressedFirst() const;

  constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method ReadValue addr 0x28daf48 size 0x70 virtual true final false
  inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifierIsPressed addr 0x28dafb8 size 0x80 virtual false final false
  inline bool ModifierIsPressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method EvaluateMagnitude addr 0x28db038 size 0xc virtual true final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup addr 0x28db044 size 0x90 virtual true final false
  inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier* New_ctor();

  /// @brief Method .ctor addr 0x28db0d4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonWithOneModifier(ButtonWithOneModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonWithOneModifier(ButtonWithOneModifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonWithOneModifier();

public:
  /// @brief Field modifier, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier;

  /// @brief Field button, offset: 0x14, size: 0x4, def value: None
  int32_t ___button;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x18, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___modifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___button) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier, ___overrideModifiersNeedToBePressedFirst) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*, "UnityEngine.InputSystem.Composites", "ButtonWithOneModifier");
