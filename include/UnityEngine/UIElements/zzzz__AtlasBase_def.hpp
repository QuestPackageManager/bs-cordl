#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(AtlasBase)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
class IPanel;
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
// Type: UnityEngine.UIElements::AtlasBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6758))
// CS Name: ::UnityEngine.UIElements::AtlasBase*
class CORDL_TYPE AtlasBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field textureRegistry, offset 0x10, size 0x8
  __declspec(property(get = __get_textureRegistry, put = __set_textureRegistry))::UnityEngine::UIElements::TextureRegistry* textureRegistry;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __get_textureRegistry();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextureRegistry*> const& __get_textureRegistry() const;

  constexpr void __set_textureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  /// @brief Method TryGetAtlas, addr 0x2db3fb0, size 0x74, virtual true, abstract: false, final false
  inline bool TryGetAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ByRef<::UnityEngine::UIElements::TextureId> atlas, ByRef<::UnityEngine::RectInt> atlasRect);

  /// @brief Method ReturnAtlas, addr 0x2db4024, size 0x4, virtual true, abstract: false, final false
  inline void ReturnAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas);

  /// @brief Method Reset, addr 0x2db4028, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method OnAssignedToPanel, addr 0x2db402c, size 0x4, virtual true, abstract: false, final false
  inline void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnRemovedFromPanel, addr 0x2db4030, size 0x4, virtual true, abstract: false, final false
  inline void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnUpdateDynamicTextures, addr 0x2db4034, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeAssignedToPanel, addr 0x2db4038, size 0xc, virtual false, abstract: false, final false
  inline void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeRemovedFromPanel, addr 0x2db4044, size 0xc, virtual false, abstract: false, final false
  inline void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method InvokeUpdateDynamicTextures, addr 0x2db4050, size 0xc, virtual false, abstract: false, final false
  inline void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method RepaintTexturedElements, addr 0x2db405c, size 0xec, virtual false, abstract: false, final false
  static inline void RepaintTexturedElements(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method SetDynamicTexture, addr 0x2db4148, size 0x20, virtual false, abstract: false, final false
  inline void SetDynamicTexture(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);

  static inline ::UnityEngine::UIElements::AtlasBase* New_ctor();

  /// @brief Method .ctor, addr 0x2db4168, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasBase(AtlasBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasBase(AtlasBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasBase();

public:
  /// @brief Field textureRegistry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___textureRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AtlasBase, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AtlasBase, ___textureRegistry) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AtlasBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AtlasBase*, "UnityEngine.UIElements", "AtlasBase");
