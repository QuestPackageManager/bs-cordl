#pragma once
// IWYU pragma private; include "UnityEngine/UI/SpriteState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SpriteState)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
struct SpriteState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::SpriteState);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.SpriteState
struct CORDL_TYPE SpriteState {
public:
  // Declarations
  __declspec(property(get = get_disabledSprite, put = set_disabledSprite)) ::UnityW<::UnityEngine::Sprite> disabledSprite;

  __declspec(property(get = get_highlightedSprite, put = set_highlightedSprite)) ::UnityW<::UnityEngine::Sprite> highlightedSprite;

  __declspec(property(get = get_pressedSprite, put = set_pressedSprite)) ::UnityW<::UnityEngine::Sprite> pressedSprite;

  __declspec(property(get = get_selectedSprite, put = set_selectedSprite)) ::UnityW<::UnityEngine::Sprite> selectedSprite;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::SpriteState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UI::SpriteState>*();

  /// @brief Method Equals, addr 0x4acc214, size 0x108, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UI::SpriteState other);

  /// @brief Method get_disabledSprite, addr 0x4acc204, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_disabledSprite();

  /// @brief Method get_highlightedSprite, addr 0x4acc1d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_highlightedSprite();

  /// @brief Method get_pressedSprite, addr 0x4acc1e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_pressedSprite();

  /// @brief Method get_selectedSprite, addr 0x4acc1f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_selectedSprite();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UI::SpriteState>"
  constexpr ::System::IEquatable_1<::UnityEngine::UI::SpriteState>* i___System__IEquatable_1___UnityEngine__UI__SpriteState_();

  /// @brief Method set_disabledSprite, addr 0x4acc20c, size 0x8, virtual false, abstract: false, final false
  inline void set_disabledSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_highlightedSprite, addr 0x4acc1dc, size 0x8, virtual false, abstract: false, final false
  inline void set_highlightedSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_pressedSprite, addr 0x4acc1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_selectedSprite, addr 0x4acc1fc, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedSprite(::UnityEngine::Sprite* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteState();

  // Ctor Parameters [CppParam { name: "m_HighlightedSprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "m_PressedSprite", ty:
  // "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "m_SelectedSprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name:
  // "m_DisabledSprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }]
  constexpr SpriteState(::UnityW<::UnityEngine::Sprite> m_HighlightedSprite, ::UnityW<::UnityEngine::Sprite> m_PressedSprite, ::UnityW<::UnityEngine::Sprite> m_SelectedSprite,
                        ::UnityW<::UnityEngine::Sprite> m_DisabledSprite) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15141 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_HighlightedSprite, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_HighlightedSprite;

  /// @brief Field m_PressedSprite, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_PressedSprite;

  /// @brief Field m_SelectedSprite, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_SelectedSprite;

  /// @brief Field m_DisabledSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_DisabledSprite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::SpriteState, m_HighlightedSprite) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::SpriteState, m_PressedSprite) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::SpriteState, m_SelectedSprite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::SpriteState, m_DisabledSprite) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::SpriteState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
