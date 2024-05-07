#pragma once
// IWYU pragma private; include "GlobalNamespace/EnabledTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(EnabledTransitionSO)
// Forward declare root types
namespace GlobalNamespace {
class EnabledTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnabledTransitionSO);
// Type: ::EnabledTransitionSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 38, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnabledTransitionSO*
class CORDL_TYPE EnabledTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledState, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__disabledState, put = __cordl_internal_set__disabledState)) bool _disabledState;

  /// @brief Field _highlightedState, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__highlightedState, put = __cordl_internal_set__highlightedState)) bool _highlightedState;

  /// @brief Field _normalState, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__normalState, put = __cordl_internal_set__normalState)) bool _normalState;

  /// @brief Field _pressedState, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__pressedState, put = __cordl_internal_set__pressedState)) bool _pressedState;

  /// @brief Field _selectedAndHighlightedState, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedState, put = __cordl_internal_set__selectedAndHighlightedState)) bool _selectedAndHighlightedState;

  /// @brief Field _selectedState, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__selectedState, put = __cordl_internal_set__selectedState)) bool _selectedState;

  __declspec(property(get = get_disabledState)) bool disabledState;

  __declspec(property(get = get_highlightedState)) bool highlightedState;

  __declspec(property(get = get_normalState)) bool normalState;

  __declspec(property(get = get_pressedState)) bool pressedState;

  __declspec(property(get = get_selectedAndHighlightedState)) bool selectedAndHighlightedState;

  __declspec(property(get = get_selectedState)) bool selectedState;

  static inline ::GlobalNamespace::EnabledTransitionSO* New_ctor();

  constexpr bool const& __cordl_internal_get__disabledState() const;

  constexpr bool& __cordl_internal_get__disabledState();

  constexpr bool const& __cordl_internal_get__highlightedState() const;

  constexpr bool& __cordl_internal_get__highlightedState();

  constexpr bool const& __cordl_internal_get__normalState() const;

  constexpr bool& __cordl_internal_get__normalState();

  constexpr bool const& __cordl_internal_get__pressedState() const;

  constexpr bool& __cordl_internal_get__pressedState();

  constexpr bool const& __cordl_internal_get__selectedAndHighlightedState() const;

  constexpr bool& __cordl_internal_get__selectedAndHighlightedState();

  constexpr bool const& __cordl_internal_get__selectedState() const;

  constexpr bool& __cordl_internal_get__selectedState();

  constexpr void __cordl_internal_set__disabledState(bool value);

  constexpr void __cordl_internal_set__highlightedState(bool value);

  constexpr void __cordl_internal_set__normalState(bool value);

  constexpr void __cordl_internal_set__pressedState(bool value);

  constexpr void __cordl_internal_set__selectedAndHighlightedState(bool value);

  constexpr void __cordl_internal_set__selectedState(bool value);

  /// @brief Method .ctor, addr 0x273b93c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledState, addr 0x273b924, size 0x8, virtual false, abstract: false, final false
  inline bool get_disabledState();

  /// @brief Method get_highlightedState, addr 0x273b914, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlightedState();

  /// @brief Method get_normalState, addr 0x273b90c, size 0x8, virtual false, abstract: false, final false
  inline bool get_normalState();

  /// @brief Method get_pressedState, addr 0x273b91c, size 0x8, virtual false, abstract: false, final false
  inline bool get_pressedState();

  /// @brief Method get_selectedAndHighlightedState, addr 0x273b934, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectedAndHighlightedState();

  /// @brief Method get_selectedState, addr 0x273b92c, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectedState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnabledTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnabledTransitionSO(EnabledTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnabledTransitionSO(EnabledTransitionSO const&) = delete;

  /// @brief Field _normalState, offset: 0x20, size: 0x1, def value: None
  bool ____normalState;

  /// @brief Field _highlightedState, offset: 0x21, size: 0x1, def value: None
  bool ____highlightedState;

  /// @brief Field _pressedState, offset: 0x22, size: 0x1, def value: None
  bool ____pressedState;

  /// @brief Field _disabledState, offset: 0x23, size: 0x1, def value: None
  bool ____disabledState;

  /// @brief Field _selectedState, offset: 0x24, size: 0x1, def value: None
  bool ____selectedState;

  /// @brief Field _selectedAndHighlightedState, offset: 0x25, size: 0x1, def value: None
  bool ____selectedAndHighlightedState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnabledTransitionSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____normalState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____highlightedState) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____pressedState) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____disabledState) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____selectedState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnabledTransitionSO, ____selectedAndHighlightedState) == 0x25, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnabledTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnabledTransitionSO*, "", "EnabledTransitionSO");
