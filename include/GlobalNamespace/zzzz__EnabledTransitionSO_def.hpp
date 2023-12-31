#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5449))
// CS Name: ::EnabledTransitionSO*
class CORDL_TYPE EnabledTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _normalState, offset 0x20, size 0x1
  __declspec(property(get = __get__normalState, put = __set__normalState)) bool _normalState;

  /// @brief Field _highlightedState, offset 0x21, size 0x1
  __declspec(property(get = __get__highlightedState, put = __set__highlightedState)) bool _highlightedState;

  /// @brief Field _pressedState, offset 0x22, size 0x1
  __declspec(property(get = __get__pressedState, put = __set__pressedState)) bool _pressedState;

  /// @brief Field _disabledState, offset 0x23, size 0x1
  __declspec(property(get = __get__disabledState, put = __set__disabledState)) bool _disabledState;

  /// @brief Field _selectedState, offset 0x24, size 0x1
  __declspec(property(get = __get__selectedState, put = __set__selectedState)) bool _selectedState;

  /// @brief Field _selectedAndHighlightedState, offset 0x25, size 0x1
  __declspec(property(get = __get__selectedAndHighlightedState, put = __set__selectedAndHighlightedState)) bool _selectedAndHighlightedState;

  __declspec(property(get = get_normalState)) bool normalState;

  __declspec(property(get = get_highlightedState)) bool highlightedState;

  __declspec(property(get = get_pressedState)) bool pressedState;

  __declspec(property(get = get_disabledState)) bool disabledState;

  __declspec(property(get = get_selectedState)) bool selectedState;

  __declspec(property(get = get_selectedAndHighlightedState)) bool selectedAndHighlightedState;

  constexpr bool& __get__normalState();

  constexpr bool const& __get__normalState() const;

  constexpr void __set__normalState(bool value);

  constexpr bool& __get__highlightedState();

  constexpr bool const& __get__highlightedState() const;

  constexpr void __set__highlightedState(bool value);

  constexpr bool& __get__pressedState();

  constexpr bool const& __get__pressedState() const;

  constexpr void __set__pressedState(bool value);

  constexpr bool& __get__disabledState();

  constexpr bool const& __get__disabledState() const;

  constexpr void __set__disabledState(bool value);

  constexpr bool& __get__selectedState();

  constexpr bool const& __get__selectedState() const;

  constexpr void __set__selectedState(bool value);

  constexpr bool& __get__selectedAndHighlightedState();

  constexpr bool const& __get__selectedAndHighlightedState() const;

  constexpr void __set__selectedAndHighlightedState(bool value);

  /// @brief Method get_normalState, addr 0x227de54, size 0x8, virtual false, abstract: false, final false
  inline bool get_normalState();

  /// @brief Method get_highlightedState, addr 0x227de5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlightedState();

  /// @brief Method get_pressedState, addr 0x227de64, size 0x8, virtual false, abstract: false, final false
  inline bool get_pressedState();

  /// @brief Method get_disabledState, addr 0x227de6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disabledState();

  /// @brief Method get_selectedState, addr 0x227de74, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectedState();

  /// @brief Method get_selectedAndHighlightedState, addr 0x227de7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectedAndHighlightedState();

  static inline ::GlobalNamespace::EnabledTransitionSO* New_ctor();

  /// @brief Method .ctor, addr 0x227de84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnabledTransitionSO(EnabledTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnabledTransitionSO(EnabledTransitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnabledTransitionSO();

public:
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
