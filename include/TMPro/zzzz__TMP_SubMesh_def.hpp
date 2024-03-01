#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TMP_SubMesh)
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace TMPro {
class TMP_SubMesh;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SubMesh);
// Type: TMPro::TMP_SubMesh
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_SubMesh*
class CORDL_TYPE TMP_SubMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_fallbackMaterial, put = set_fallbackMaterial))::UnityW<::UnityEngine::Material> fallbackMaterial;

  __declspec(property(get = get_fallbackSourceMaterial, put = set_fallbackSourceMaterial))::UnityW<::UnityEngine::Material> fallbackSourceMaterial;

  __declspec(property(get = get_fontAsset, put = set_fontAsset))::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  __declspec(property(get = get_isDefaultMaterial, put = set_isDefaultMaterial)) bool isDefaultMaterial;

  /// @brief Field m_TextComponent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponent, put = __cordl_internal_set_m_TextComponent))::UnityW<::TMPro::TextMeshPro> m_TextComponent;

  /// @brief Field m_fallbackMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackMaterial, put = __cordl_internal_set_m_fallbackMaterial))::UnityW<::UnityEngine::Material> m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackSourceMaterial, put = __cordl_internal_set_m_fallbackSourceMaterial))::UnityW<::UnityEngine::Material> m_fallbackSourceMaterial;

  /// @brief Field m_fontAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontAsset, put = __cordl_internal_set_m_fontAsset))::UnityW<::TMPro::TMP_FontAsset> m_fontAsset;

  /// @brief Field m_isDefaultMaterial, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isDefaultMaterial, put = __cordl_internal_set_m_isDefaultMaterial)) bool m_isDefaultMaterial;

  /// @brief Field m_isRegisteredForEvents, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRegisteredForEvents, put = __cordl_internal_set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_material, put = __cordl_internal_set_m_material))::UnityW<::UnityEngine::Material> m_material;

  /// @brief Field m_mesh, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_mesh, put = __cordl_internal_set_m_mesh))::UnityW<::UnityEngine::Mesh> m_mesh;

  /// @brief Field m_meshFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_meshFilter, put = __cordl_internal_set_m_meshFilter))::UnityW<::UnityEngine::MeshFilter> m_meshFilter;

  /// @brief Field m_padding, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_padding, put = __cordl_internal_set_m_padding)) float_t m_padding;

  /// @brief Field m_renderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_renderer, put = __cordl_internal_set_m_renderer))::UnityW<::UnityEngine::Renderer> m_renderer;

  /// @brief Field m_sharedMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sharedMaterial, put = __cordl_internal_set_m_sharedMaterial))::UnityW<::UnityEngine::Material> m_sharedMaterial;

  /// @brief Field m_spriteAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_spriteAsset, put = __cordl_internal_set_m_spriteAsset))::UnityW<::TMPro::TMP_SpriteAsset> m_spriteAsset;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshFilter))::UnityW<::UnityEngine::MeshFilter> meshFilter;

  __declspec(property(get = get_padding, put = set_padding)) float_t padding;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial))::UnityW<::UnityEngine::Material> sharedMaterial;

  __declspec(property(get = get_spriteAsset, put = set_spriteAsset))::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset;

  __declspec(property(get = get_textComponent))::UnityW<::TMPro::TMP_Text> textComponent;

  /// @brief Method AddSubTextObject, addr 0x2d2d858, size 0x3c4, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SubMesh> AddSubTextObject(::TMPro::TextMeshPro* textComponent, ::TMPro::MaterialReference materialReference);

  /// @brief Method CreateMaterialInstance, addr 0x2d2dfb4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateMaterialInstance(::UnityEngine::Material* source);

  /// @brief Method DestroySelf, addr 0x2d2df44, size 0x70, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method GetMaterial, addr 0x2d2d0fc, size 0x128, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetPaddingForMaterial, addr 0x2d2d298, size 0x74, virtual false, abstract: false, final false
  inline float_t GetPaddingForMaterial();

  /// @brief Method GetSharedMaterial, addr 0x2d2e074, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetSharedMaterial();

  static inline ::TMPro::TMP_SubMesh* New_ctor();

  /// @brief Method OnDestroy, addr 0x2d2ddfc, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2d2dd48, size 0xb4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2d2dc1c, size 0x12c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetMaterialDirty, addr 0x2d2d3bc, size 0x4, virtual false, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetSharedMaterial, addr 0x2d2d3e8, size 0x20, virtual false, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetVerticesDirty, addr 0x2d2d30c, size 0xb0, virtual false, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UpdateMaterial, addr 0x2d2e18c, size 0x170, virtual false, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x2d2e118, size 0x74, virtual false, abstract: false, final false
  inline void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_m_TextComponent() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_m_TextComponent();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_fallbackMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_fallbackMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_fallbackSourceMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_fallbackSourceMaterial();

  constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_m_fontAsset() const;

  constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_m_fontAsset();

  constexpr bool const& __cordl_internal_get_m_isDefaultMaterial() const;

  constexpr bool& __cordl_internal_get_m_isDefaultMaterial();

  constexpr bool const& __cordl_internal_get_m_isRegisteredForEvents() const;

  constexpr bool& __cordl_internal_get_m_isRegisteredForEvents();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_material();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_m_meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_m_meshFilter();

  constexpr float_t const& __cordl_internal_get_m_padding() const;

  constexpr float_t& __cordl_internal_get_m_padding();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_m_renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_m_renderer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_sharedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_sharedMaterial();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_spriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_spriteAsset();

  constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set_m_fallbackMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_fallbackSourceMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_fontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_isDefaultMaterial(bool value);

  constexpr void __cordl_internal_set_m_isRegisteredForEvents(bool value);

  constexpr void __cordl_internal_set_m_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_m_padding(float_t value);

  constexpr void __cordl_internal_set_m_renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set_m_sharedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_spriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  /// @brief Method .ctor, addr 0x2d2e2fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fallbackMaterial, addr 0x2d2d408, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fallbackMaterial();

  /// @brief Method get_fallbackSourceMaterial, addr 0x2d2d548, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fallbackSourceMaterial();

  /// @brief Method get_fontAsset, addr 0x2d2d0d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> get_fontAsset();

  /// @brief Method get_isDefaultMaterial, addr 0x2d2d558, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultMaterial();

  /// @brief Method get_material, addr 0x2d2d0f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_mesh, addr 0x2d2d70c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshFilter, addr 0x2d2d610, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_meshFilter();

  /// @brief Method get_padding, addr 0x2d2d56c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_padding();

  /// @brief Method get_renderer, addr 0x2d2d57c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

  /// @brief Method get_sharedMaterial, addr 0x2d2d3c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  /// @brief Method get_spriteAsset, addr 0x2d2d0e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_SpriteAsset> get_spriteAsset();

  /// @brief Method get_textComponent, addr 0x2d2d7c4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_textComponent();

  /// @brief Method set_fallbackMaterial, addr 0x2d2d410, size 0x138, virtual false, abstract: false, final false
  inline void set_fallbackMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fallbackSourceMaterial, addr 0x2d2d550, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackSourceMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fontAsset, addr 0x2d2d0dc, size 0x8, virtual false, abstract: false, final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_isDefaultMaterial, addr 0x2d2d560, size 0xc, virtual false, abstract: false, final false
  inline void set_isDefaultMaterial(bool value);

  /// @brief Method set_material, addr 0x2d2d224, size 0x74, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_mesh, addr 0x2d2d7bc, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_padding, addr 0x2d2d574, size 0x8, virtual false, abstract: false, final false
  inline void set_padding(float_t value);

  /// @brief Method set_sharedMaterial, addr 0x2d2d3c8, size 0x20, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method set_spriteAsset, addr 0x2d2d0ec, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SubMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SubMesh(TMP_SubMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SubMesh(TMP_SubMesh const&) = delete;

  /// @brief Field m_fontAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_fontAsset;

  /// @brief Field m_spriteAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_spriteAsset;

  /// @brief Field m_material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_material;

  /// @brief Field m_sharedMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset: 0x48, size: 0x1, def value: None
  bool ___m_isDefaultMaterial;

  /// @brief Field m_padding, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_padding;

  /// @brief Field m_renderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ___m_renderer;

  /// @brief Field m_meshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___m_meshFilter;

  /// @brief Field m_mesh, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_mesh;

  /// @brief Field m_TextComponent, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ___m_TextComponent;

  /// @brief Field m_isRegisteredForEvents, offset: 0x70, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SubMesh, 0x78>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_fontAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_spriteAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_sharedMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_fallbackMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_fallbackSourceMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_isDefaultMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_padding) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_meshFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_mesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_TextComponent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMesh, ___m_isRegisteredForEvents) == 0x70, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SubMesh);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SubMesh*, "TMPro", "TMP_SubMesh");
