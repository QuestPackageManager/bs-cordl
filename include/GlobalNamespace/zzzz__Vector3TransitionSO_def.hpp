#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3TransitionSO)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector3TransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector3TransitionSO);
// Type: ::Vector3TransitionSO
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5443)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5464))
// CS Name: ::Vector3TransitionSO*
class CORDL_TYPE Vector3TransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _normalState, offset 0x20, size 0xc
  __declspec(property(get = __get__normalState, put = __set__normalState))::UnityEngine::Vector3 _normalState;

  /// @brief Field _highlightedState, offset 0x2c, size 0xc
  __declspec(property(get = __get__highlightedState, put = __set__highlightedState))::UnityEngine::Vector3 _highlightedState;

  /// @brief Field _pressedState, offset 0x38, size 0xc
  __declspec(property(get = __get__pressedState, put = __set__pressedState))::UnityEngine::Vector3 _pressedState;

  /// @brief Field _disabledState, offset 0x44, size 0xc
  __declspec(property(get = __get__disabledState, put = __set__disabledState))::UnityEngine::Vector3 _disabledState;

  /// @brief Field _selectedState, offset 0x50, size 0xc
  __declspec(property(get = __get__selectedState, put = __set__selectedState))::UnityEngine::Vector3 _selectedState;

  /// @brief Field _selectedAndHighlightedState, offset 0x5c, size 0xc
  __declspec(property(get = __get__selectedAndHighlightedState, put = __set__selectedAndHighlightedState))::UnityEngine::Vector3 _selectedAndHighlightedState;

  __declspec(property(get = get_normalState))::UnityEngine::Vector3 normalState;

  __declspec(property(get = get_highlightedState))::UnityEngine::Vector3 highlightedState;

  __declspec(property(get = get_pressedState))::UnityEngine::Vector3 pressedState;

  __declspec(property(get = get_disabledState))::UnityEngine::Vector3 disabledState;

  __declspec(property(get = get_selectedState))::UnityEngine::Vector3 selectedState;

  __declspec(property(get = get_selectedAndHighlightedState))::UnityEngine::Vector3 selectedAndHighlightedState;

  constexpr ::UnityEngine::Vector3& __get__normalState();

  constexpr ::UnityEngine::Vector3 const& __get__normalState() const;

  constexpr void __set__normalState(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__highlightedState();

  constexpr ::UnityEngine::Vector3 const& __get__highlightedState() const;

  constexpr void __set__highlightedState(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__pressedState();

  constexpr ::UnityEngine::Vector3 const& __get__pressedState() const;

  constexpr void __set__pressedState(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__disabledState();

  constexpr ::UnityEngine::Vector3 const& __get__disabledState() const;

  constexpr void __set__disabledState(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__selectedState();

  constexpr ::UnityEngine::Vector3 const& __get__selectedState() const;

  constexpr void __set__selectedState(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__selectedAndHighlightedState();

  constexpr ::UnityEngine::Vector3 const& __get__selectedAndHighlightedState() const;

  constexpr void __set__selectedAndHighlightedState(::UnityEngine::Vector3 value);

  /// @brief Method get_normalState, addr 0x2280094, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalState();

  /// @brief Method get_highlightedState, addr 0x22800a0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_highlightedState();

  /// @brief Method get_pressedState, addr 0x22800ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pressedState();

  /// @brief Method get_disabledState, addr 0x22800b8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_disabledState();

  /// @brief Method get_selectedState, addr 0x22800c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_selectedState();

  /// @brief Method get_selectedAndHighlightedState, addr 0x22800d0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_selectedAndHighlightedState();

  static inline ::GlobalNamespace::Vector3TransitionSO* New_ctor();

  /// @brief Method .ctor, addr 0x22800dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Vector3TransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3TransitionSO(Vector3TransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3TransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3TransitionSO(Vector3TransitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3TransitionSO();

public:
  /// @brief Field _normalState, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____normalState;

  /// @brief Field _highlightedState, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____highlightedState;

  /// @brief Field _pressedState, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____pressedState;

  /// @brief Field _disabledState, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____disabledState;

  /// @brief Field _selectedState, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____selectedState;

  /// @brief Field _selectedAndHighlightedState, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____selectedAndHighlightedState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3TransitionSO, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____normalState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____highlightedState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____pressedState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____disabledState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____selectedState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Vector3TransitionSO, ____selectedAndHighlightedState) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector3TransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3TransitionSO*, "", "Vector3TransitionSO");
