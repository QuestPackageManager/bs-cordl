#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatTransitionSO)
// Forward declare root types
namespace GlobalNamespace {
class FloatTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatTransitionSO);
// Dependencies BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatTransitionSO
class CORDL_TYPE FloatTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledState, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledState, put = __cordl_internal_set__disabledState)) float_t _disabledState;

  /// @brief Field _highlightedState, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightedState, put = __cordl_internal_set__highlightedState)) float_t _highlightedState;

  /// @brief Field _normalState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__normalState, put = __cordl_internal_set__normalState)) float_t _normalState;

  /// @brief Field _pressedState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pressedState, put = __cordl_internal_set__pressedState)) float_t _pressedState;

  /// @brief Field _selectedAndHighlightedState, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedState, put = __cordl_internal_set__selectedAndHighlightedState)) float_t _selectedAndHighlightedState;

  /// @brief Field _selectedState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedState, put = __cordl_internal_set__selectedState)) float_t _selectedState;

  __declspec(property(get = get_disabledState)) float_t disabledState;

  __declspec(property(get = get_highlightedState)) float_t highlightedState;

  __declspec(property(get = get_normalState)) float_t normalState;

  __declspec(property(get = get_pressedState)) float_t pressedState;

  __declspec(property(get = get_selectedAndHighlightedState)) float_t selectedAndHighlightedState;

  __declspec(property(get = get_selectedState)) float_t selectedState;

  static inline ::GlobalNamespace::FloatTransitionSO* New_ctor();

  constexpr float_t const& __cordl_internal_get__disabledState() const;

  constexpr float_t& __cordl_internal_get__disabledState();

  constexpr float_t const& __cordl_internal_get__highlightedState() const;

  constexpr float_t& __cordl_internal_get__highlightedState();

  constexpr float_t const& __cordl_internal_get__normalState() const;

  constexpr float_t& __cordl_internal_get__normalState();

  constexpr float_t const& __cordl_internal_get__pressedState() const;

  constexpr float_t& __cordl_internal_get__pressedState();

  constexpr float_t const& __cordl_internal_get__selectedAndHighlightedState() const;

  constexpr float_t& __cordl_internal_get__selectedAndHighlightedState();

  constexpr float_t const& __cordl_internal_get__selectedState() const;

  constexpr float_t& __cordl_internal_get__selectedState();

  constexpr void __cordl_internal_set__disabledState(float_t value);

  constexpr void __cordl_internal_set__highlightedState(float_t value);

  constexpr void __cordl_internal_set__normalState(float_t value);

  constexpr void __cordl_internal_set__pressedState(float_t value);

  constexpr void __cordl_internal_set__selectedAndHighlightedState(float_t value);

  constexpr void __cordl_internal_set__selectedState(float_t value);

  /// @brief Method .ctor, addr 0x44d81f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledState, addr 0x44d81d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_disabledState();

  /// @brief Method get_highlightedState, addr 0x44d81c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highlightedState();

  /// @brief Method get_normalState, addr 0x44d81c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalState();

  /// @brief Method get_pressedState, addr 0x44d81d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedState();

  /// @brief Method get_selectedAndHighlightedState, addr 0x44d81e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_selectedAndHighlightedState();

  /// @brief Method get_selectedState, addr 0x44d81e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_selectedState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTransitionSO(FloatTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTransitionSO(FloatTransitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18214 };

  /// @brief Field _normalState, offset: 0x20, size: 0x4, def value: None
  float_t ____normalState;

  /// @brief Field _highlightedState, offset: 0x24, size: 0x4, def value: None
  float_t ____highlightedState;

  /// @brief Field _pressedState, offset: 0x28, size: 0x4, def value: None
  float_t ____pressedState;

  /// @brief Field _disabledState, offset: 0x2c, size: 0x4, def value: None
  float_t ____disabledState;

  /// @brief Field _selectedState, offset: 0x30, size: 0x4, def value: None
  float_t ____selectedState;

  /// @brief Field _selectedAndHighlightedState, offset: 0x34, size: 0x4, def value: None
  float_t ____selectedAndHighlightedState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____normalState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____highlightedState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____pressedState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____disabledState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____selectedState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTransitionSO, ____selectedAndHighlightedState) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTransitionSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTransitionSO*, "", "FloatTransitionSO");
