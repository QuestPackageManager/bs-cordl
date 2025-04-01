#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasGroupTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroupTransitionSO)
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CanvasGroupTransitionSO);
// Dependencies BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: CanvasGroupTransitionSO
class CORDL_TYPE CanvasGroupTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledAlpha, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledAlpha, put = __cordl_internal_set__disabledAlpha)) float_t _disabledAlpha;

  /// @brief Field _highlightedAlpha, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__highlightedAlpha, put = __cordl_internal_set__highlightedAlpha)) float_t _highlightedAlpha;

  /// @brief Field _normalAlpha, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__normalAlpha, put = __cordl_internal_set__normalAlpha)) float_t _normalAlpha;

  /// @brief Field _pressedAlpha, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pressedAlpha, put = __cordl_internal_set__pressedAlpha)) float_t _pressedAlpha;

  /// @brief Field _selectedAlpha, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedAlpha, put = __cordl_internal_set__selectedAlpha)) float_t _selectedAlpha;

  /// @brief Field _selectedAndHighlightedAlpha, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedAlpha, put = __cordl_internal_set__selectedAndHighlightedAlpha)) float_t _selectedAndHighlightedAlpha;

  __declspec(property(get = get_disabledAlpha)) float_t disabledAlpha;

  __declspec(property(get = get_highlightedAlpha)) float_t highlightedAlpha;

  __declspec(property(get = get_normalAlpha)) float_t normalAlpha;

  __declspec(property(get = get_pressedAlpha)) float_t pressedAlpha;

  __declspec(property(get = get_selectedAlpha)) float_t selectedAlpha;

  __declspec(property(get = get_selectedAndHighlightedAlpha)) float_t selectedAndHighlightedAlpha;

  static inline ::GlobalNamespace::CanvasGroupTransitionSO* New_ctor();

  constexpr float_t const& __cordl_internal_get__disabledAlpha() const;

  constexpr float_t& __cordl_internal_get__disabledAlpha();

  constexpr float_t const& __cordl_internal_get__highlightedAlpha() const;

  constexpr float_t& __cordl_internal_get__highlightedAlpha();

  constexpr float_t const& __cordl_internal_get__normalAlpha() const;

  constexpr float_t& __cordl_internal_get__normalAlpha();

  constexpr float_t const& __cordl_internal_get__pressedAlpha() const;

  constexpr float_t& __cordl_internal_get__pressedAlpha();

  constexpr float_t const& __cordl_internal_get__selectedAlpha() const;

  constexpr float_t& __cordl_internal_get__selectedAlpha();

  constexpr float_t const& __cordl_internal_get__selectedAndHighlightedAlpha() const;

  constexpr float_t& __cordl_internal_get__selectedAndHighlightedAlpha();

  constexpr void __cordl_internal_set__disabledAlpha(float_t value);

  constexpr void __cordl_internal_set__highlightedAlpha(float_t value);

  constexpr void __cordl_internal_set__normalAlpha(float_t value);

  constexpr void __cordl_internal_set__pressedAlpha(float_t value);

  constexpr void __cordl_internal_set__selectedAlpha(float_t value);

  constexpr void __cordl_internal_set__selectedAndHighlightedAlpha(float_t value);

  /// @brief Method .ctor, addr 0x44d4bfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledAlpha, addr 0x44d4be4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_disabledAlpha();

  /// @brief Method get_highlightedAlpha, addr 0x44d4bd4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highlightedAlpha();

  /// @brief Method get_normalAlpha, addr 0x44d4bcc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalAlpha();

  /// @brief Method get_pressedAlpha, addr 0x44d4bdc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedAlpha();

  /// @brief Method get_selectedAlpha, addr 0x44d4bec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_selectedAlpha();

  /// @brief Method get_selectedAndHighlightedAlpha, addr 0x44d4bf4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_selectedAndHighlightedAlpha();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroupTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroupTransitionSO(CanvasGroupTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroupTransitionSO(CanvasGroupTransitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18222 };

  /// @brief Field _normalAlpha, offset: 0x20, size: 0x4, def value: None
  float_t ____normalAlpha;

  /// @brief Field _highlightedAlpha, offset: 0x24, size: 0x4, def value: None
  float_t ____highlightedAlpha;

  /// @brief Field _pressedAlpha, offset: 0x28, size: 0x4, def value: None
  float_t ____pressedAlpha;

  /// @brief Field _disabledAlpha, offset: 0x2c, size: 0x4, def value: None
  float_t ____disabledAlpha;

  /// @brief Field _selectedAlpha, offset: 0x30, size: 0x4, def value: None
  float_t ____selectedAlpha;

  /// @brief Field _selectedAndHighlightedAlpha, offset: 0x34, size: 0x4, def value: None
  float_t ____selectedAndHighlightedAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____normalAlpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____highlightedAlpha) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____pressedAlpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____disabledAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____selectedAlpha) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____selectedAndHighlightedAlpha) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CanvasGroupTransitionSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CanvasGroupTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CanvasGroupTransitionSO*, "", "CanvasGroupTransitionSO");
