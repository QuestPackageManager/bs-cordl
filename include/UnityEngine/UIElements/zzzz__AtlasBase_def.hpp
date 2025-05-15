#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AtlasBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AtlasBase)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AtlasBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AtlasBase);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AtlasBase
class CORDL_TYPE AtlasBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field textureRegistry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textureRegistry, put = __cordl_internal_set_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry* textureRegistry;

  /// @brief Method InvokeAssignedToPanel, addr 0x496f770, size 0xc, virtual false, abstract: false, final false
  inline void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeRemovedFromPanel, addr 0x496f77c, size 0xc, virtual false, abstract: false, final false
  inline void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeUpdateDynamicTextures, addr 0x496f788, size 0xc, virtual false, abstract: false, final false
  inline void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::AtlasBase* New_ctor();

  /// @brief Method OnAssignedToPanel, addr 0x496f764, size 0x4, virtual true, abstract: false, final false
  inline void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnRemovedFromPanel, addr 0x496f768, size 0x4, virtual true, abstract: false, final false
  inline void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnUpdateDynamicTextures, addr 0x496f76c, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RepaintTexturedElements, addr 0x496f794, size 0xec, virtual false, abstract: false, final false
  static inline void RepaintTexturedElements(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method Reset, addr 0x496f760, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnAtlas, addr 0x496f75c, size 0x4, virtual true, abstract: false, final false
  inline void ReturnAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas);

  /// @brief Method SetDynamicTexture, addr 0x496f880, size 0x20, virtual false, abstract: false, final false
  inline void SetDynamicTexture(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);

  /// @brief Method TryGetAtlas, addr 0x496f6e8, size 0x74, virtual true, abstract: false, final false
  inline bool TryGetAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::ByRef<::UnityEngine::UIElements::TextureId> atlas, ::ByRef<::UnityEngine::RectInt> atlasRect);

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_textureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_textureRegistry();

  constexpr void __cordl_internal_set_textureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  /// @brief Method .ctor, addr 0x496f8a0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasBase(AtlasBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasBase(AtlasBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5449 };

  /// @brief Field textureRegistry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___textureRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AtlasBase, ___textureRegistry) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AtlasBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AtlasBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AtlasBase*, "UnityEngine.UIElements", "AtlasBase");
