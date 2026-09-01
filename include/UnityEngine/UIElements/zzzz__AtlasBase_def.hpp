#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\AtlasBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::UIElements::AtlasBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::AtlasBase*, "UnityEngine.UIElements", "AtlasBase");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AtlasBase
class CORDL_TYPE AtlasBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field textureRegistry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textureRegistry, put = __cordl_internal_set_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry* textureRegistry;

  /// @brief Method InvokeAssignedToPanel, addr 0x6c2e288, size 0xc, virtual false, abstract: false, final false
  inline void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeRemovedFromPanel, addr 0x6c2e294, size 0xc, virtual false, abstract: false, final false
  inline void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeUpdateDynamicTextures, addr 0x6c2e2a0, size 0xc, virtual false, abstract: false, final false
  inline void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::AtlasBase* New_ctor();

  /// @brief Method OnAssignedToPanel, addr 0x6c2e27c, size 0x4, virtual true, abstract: false, final false
  inline void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnRemovedFromPanel, addr 0x6c2e280, size 0x4, virtual true, abstract: false, final false
  inline void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnUpdateDynamicTextures, addr 0x6c2e284, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RepaintTexturedElements, addr 0x6c2e2ac, size 0xe8, virtual false, abstract: false, final false
  static inline void RepaintTexturedElements(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method Reset, addr 0x6c2e278, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnAtlas, addr 0x6c2e274, size 0x4, virtual true, abstract: false, final false
  inline void ReturnAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas);

  /// @brief Method SetDynamicTexture, addr 0x6c2e394, size 0x1c, virtual false, abstract: false, final false
  inline void SetDynamicTexture(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);

  /// @brief Method TryGetAtlas, addr 0x6c2e1f8, size 0x7c, virtual true, abstract: false, final false
  inline bool TryGetAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::by_ref<::UnityEngine::UIElements::TextureId> atlas,
                          ::by_ref<::UnityEngine::RectInt> atlasRect);

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_textureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_textureRegistry();

  constexpr void __cordl_internal_set_textureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  /// @brief Method .ctor, addr 0x6c2e3b0, size 0xa4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3998 };

  /// @brief Field textureRegistry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___textureRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AtlasBase, ___textureRegistry) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::AtlasBase) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
