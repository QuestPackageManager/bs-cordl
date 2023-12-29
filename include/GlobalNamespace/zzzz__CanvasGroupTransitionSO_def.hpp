#pragma once
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
// Type: ::CanvasGroupTransitionSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5549))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5551))
// CS Name: ::CanvasGroupTransitionSO*
class CORDL_TYPE CanvasGroupTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _normalAlpha, offset 0x20, size 0x4
  __declspec(property(get = __get__normalAlpha, put = __set__normalAlpha)) float_t _normalAlpha;

  /// @brief Field _highlightedAlpha, offset 0x24, size 0x4
  __declspec(property(get = __get__highlightedAlpha, put = __set__highlightedAlpha)) float_t _highlightedAlpha;

  /// @brief Field _pressedAlpha, offset 0x28, size 0x4
  __declspec(property(get = __get__pressedAlpha, put = __set__pressedAlpha)) float_t _pressedAlpha;

  /// @brief Field _disabledAlpha, offset 0x2c, size 0x4
  __declspec(property(get = __get__disabledAlpha, put = __set__disabledAlpha)) float_t _disabledAlpha;

  /// @brief Field _selectedAlpha, offset 0x30, size 0x4
  __declspec(property(get = __get__selectedAlpha, put = __set__selectedAlpha)) float_t _selectedAlpha;

  /// @brief Field _selectedAndHighlightedAlpha, offset 0x34, size 0x4
  __declspec(property(get = __get__selectedAndHighlightedAlpha, put = __set__selectedAndHighlightedAlpha)) float_t _selectedAndHighlightedAlpha;

  __declspec(property(get = get_normalAlpha)) float_t normalAlpha;

  __declspec(property(get = get_highlightedAlpha)) float_t highlightedAlpha;

  __declspec(property(get = get_pressedAlpha)) float_t pressedAlpha;

  __declspec(property(get = get_disabledAlpha)) float_t disabledAlpha;

  __declspec(property(get = get_selectedAlpha)) float_t selectedAlpha;

  __declspec(property(get = get_selectedAndHighlightedAlpha)) float_t selectedAndHighlightedAlpha;

  constexpr float_t& __get__normalAlpha();

  constexpr float_t const& __get__normalAlpha() const;

  constexpr void __set__normalAlpha(float_t value);

  constexpr float_t& __get__highlightedAlpha();

  constexpr float_t const& __get__highlightedAlpha() const;

  constexpr void __set__highlightedAlpha(float_t value);

  constexpr float_t& __get__pressedAlpha();

  constexpr float_t const& __get__pressedAlpha() const;

  constexpr void __set__pressedAlpha(float_t value);

  constexpr float_t& __get__disabledAlpha();

  constexpr float_t const& __get__disabledAlpha() const;

  constexpr void __set__disabledAlpha(float_t value);

  constexpr float_t& __get__selectedAlpha();

  constexpr float_t const& __get__selectedAlpha() const;

  constexpr void __set__selectedAlpha(float_t value);

  constexpr float_t& __get__selectedAndHighlightedAlpha();

  constexpr float_t const& __get__selectedAndHighlightedAlpha() const;

  constexpr void __set__selectedAndHighlightedAlpha(float_t value);

  /// @brief Method get_normalAlpha addr 0x213ab94 size 0x8 virtual false final false
  inline float_t get_normalAlpha();

  /// @brief Method get_highlightedAlpha addr 0x213ab9c size 0x8 virtual false final false
  inline float_t get_highlightedAlpha();

  /// @brief Method get_pressedAlpha addr 0x213aba4 size 0x8 virtual false final false
  inline float_t get_pressedAlpha();

  /// @brief Method get_disabledAlpha addr 0x213abac size 0x8 virtual false final false
  inline float_t get_disabledAlpha();

  /// @brief Method get_selectedAlpha addr 0x213abb4 size 0x8 virtual false final false
  inline float_t get_selectedAlpha();

  /// @brief Method get_selectedAndHighlightedAlpha addr 0x213abbc size 0x8 virtual false final false
  inline float_t get_selectedAndHighlightedAlpha();

  static inline ::GlobalNamespace::CanvasGroupTransitionSO* New_ctor();

  /// @brief Method .ctor addr 0x213abc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroupTransitionSO(CanvasGroupTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroupTransitionSO(CanvasGroupTransitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroupTransitionSO();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CanvasGroupTransitionSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____normalAlpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____highlightedAlpha) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____pressedAlpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____disabledAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____selectedAlpha) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupTransitionSO, ____selectedAndHighlightedAlpha) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CanvasGroupTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CanvasGroupTransitionSO*, "", "CanvasGroupTransitionSO");
