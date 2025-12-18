#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/UIFoldout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(UIFoldout)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class UIFoldout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::UIFoldout);
// Dependencies UnityEngine.UI.Toggle
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.UIFoldout
class CORDL_TYPE UIFoldout : public ::UnityEngine::UI::Toggle {
public:
  // Declarations
  /// @brief Field arrowClosed, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_arrowClosed, put = __cordl_internal_set_arrowClosed)) ::UnityW<::UnityEngine::GameObject> arrowClosed;

  /// @brief Field arrowOpened, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_arrowOpened, put = __cordl_internal_set_arrowOpened)) ::UnityW<::UnityEngine::GameObject> arrowOpened;

  /// @brief Field content, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::UnityW<::UnityEngine::GameObject> content;

  static inline ::UnityEngine::Rendering::UI::UIFoldout* New_ctor();

  /// @brief Method OnValidate, addr 0x6652adc, size 0xc, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetState, addr 0x6652ad4, size 0x8, virtual false, abstract: false, final false
  inline void SetState(bool state);

  /// @brief Method SetState, addr 0x6652ae8, size 0x1f8, virtual false, abstract: false, final false
  inline void SetState(bool state, bool rebuildLayout);

  /// @brief Method Start, addr 0x6652a10, size 0xc4, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_arrowClosed() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_arrowClosed();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_arrowOpened() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_arrowOpened();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_content() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_arrowClosed(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_arrowOpened(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_content(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x6652ce0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIFoldout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIFoldout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIFoldout(UIFoldout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIFoldout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIFoldout(UIFoldout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12523 };

  /// @brief Field content, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___content;

  /// @brief Field arrowOpened, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___arrowOpened;

  /// @brief Field arrowClosed, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___arrowClosed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::UIFoldout, ___content) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::UIFoldout, ___arrowOpened) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::UIFoldout, ___arrowClosed) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::UIFoldout, 0x140>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::UIFoldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::UIFoldout*, "UnityEngine.Rendering.UI", "UIFoldout");
