#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteSwapTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(SpriteSwapTransitionSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteSwapTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpriteSwapTransitionSO);
// Type: ::SpriteSwapTransitionSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpriteSwapTransitionSO*
class CORDL_TYPE SpriteSwapTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledSprite, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledSprite, put = __cordl_internal_set__disabledSprite)) ::UnityW<::UnityEngine::Sprite> _disabledSprite;

  /// @brief Field _highlightedSprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedSprite, put = __cordl_internal_set__highlightedSprite)) ::UnityW<::UnityEngine::Sprite> _highlightedSprite;

  /// @brief Field _normalSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalSprite, put = __cordl_internal_set__normalSprite)) ::UnityW<::UnityEngine::Sprite> _normalSprite;

  /// @brief Field _pressedSprite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedSprite, put = __cordl_internal_set__pressedSprite)) ::UnityW<::UnityEngine::Sprite> _pressedSprite;

  /// @brief Field _selectedAndHighlightedSprite, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedSprite, put = __cordl_internal_set__selectedAndHighlightedSprite)) ::UnityW<::UnityEngine::Sprite>
      _selectedAndHighlightedSprite;

  /// @brief Field _selectedSprite, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedSprite, put = __cordl_internal_set__selectedSprite)) ::UnityW<::UnityEngine::Sprite> _selectedSprite;

  __declspec(property(get = get_disabledSprite)) ::UnityW<::UnityEngine::Sprite> disabledSprite;

  __declspec(property(get = get_highlightedSprite)) ::UnityW<::UnityEngine::Sprite> highlightedSprite;

  __declspec(property(get = get_normalSprite)) ::UnityW<::UnityEngine::Sprite> normalSprite;

  __declspec(property(get = get_pressedSprite)) ::UnityW<::UnityEngine::Sprite> pressedSprite;

  __declspec(property(get = get_selectedAndHighlightedSprite)) ::UnityW<::UnityEngine::Sprite> selectedAndHighlightedSprite;

  __declspec(property(get = get_selectedSprite)) ::UnityW<::UnityEngine::Sprite> selectedSprite;

  static inline ::GlobalNamespace::SpriteSwapTransitionSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__disabledSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__disabledSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__highlightedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__highlightedSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__normalSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__normalSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__pressedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__pressedSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__selectedAndHighlightedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__selectedAndHighlightedSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__selectedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__selectedSprite();

  constexpr void __cordl_internal_set__disabledSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__highlightedSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__normalSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__pressedSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__selectedSprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x446283c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledSprite, addr 0x4462824, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_disabledSprite();

  /// @brief Method get_highlightedSprite, addr 0x4462814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_highlightedSprite();

  /// @brief Method get_normalSprite, addr 0x446280c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_normalSprite();

  /// @brief Method get_pressedSprite, addr 0x446281c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_pressedSprite();

  /// @brief Method get_selectedAndHighlightedSprite, addr 0x4462834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_selectedAndHighlightedSprite();

  /// @brief Method get_selectedSprite, addr 0x446282c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_selectedSprite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteSwapTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteSwapTransitionSO(SpriteSwapTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteSwapTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteSwapTransitionSO(SpriteSwapTransitionSO const&) = delete;

  /// @brief Field _normalSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____normalSprite;

  /// @brief Field _highlightedSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____highlightedSprite;

  /// @brief Field _pressedSprite, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____pressedSprite;

  /// @brief Field _disabledSprite, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____disabledSprite;

  /// @brief Field _selectedSprite, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____selectedSprite;

  /// @brief Field _selectedAndHighlightedSprite, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____selectedAndHighlightedSprite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteSwapTransitionSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____normalSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____highlightedSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____pressedSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____disabledSprite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____selectedSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapTransitionSO, ____selectedAndHighlightedSprite) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteSwapTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteSwapTransitionSO*, "", "SpriteSwapTransitionSO");
