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
class TextMeshPro;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace TMPro {
class TMP_Text;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12354))
// CS Name: ::TMPro::TMP_SubMesh*
class CORDL_TYPE TMP_SubMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_fontAsset, offset 0x18, size 0x8
  __declspec(property(get = __get_m_fontAsset, put = __set_m_fontAsset))::TMPro::TMP_FontAsset* m_fontAsset;

  /// @brief Field m_spriteAsset, offset 0x20, size 0x8
  __declspec(property(get = __get_m_spriteAsset, put = __set_m_spriteAsset))::TMPro::TMP_SpriteAsset* m_spriteAsset;

  /// @brief Field m_material, offset 0x28, size 0x8
  __declspec(property(get = __get_m_material, put = __set_m_material))::UnityEngine::Material* m_material;

  /// @brief Field m_sharedMaterial, offset 0x30, size 0x8
  __declspec(property(get = __get_m_sharedMaterial, put = __set_m_sharedMaterial))::UnityEngine::Material* m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset 0x38, size 0x8
  __declspec(property(get = __get_m_fallbackMaterial, put = __set_m_fallbackMaterial))::UnityEngine::Material* m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset 0x40, size 0x8
  __declspec(property(get = __get_m_fallbackSourceMaterial, put = __set_m_fallbackSourceMaterial))::UnityEngine::Material* m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset 0x48, size 0x1
  __declspec(property(get = __get_m_isDefaultMaterial, put = __set_m_isDefaultMaterial)) bool m_isDefaultMaterial;

  /// @brief Field m_padding, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_padding, put = __set_m_padding)) float_t m_padding;

  /// @brief Field m_renderer, offset 0x50, size 0x8
  __declspec(property(get = __get_m_renderer, put = __set_m_renderer))::UnityEngine::Renderer* m_renderer;

  /// @brief Field m_meshFilter, offset 0x58, size 0x8
  __declspec(property(get = __get_m_meshFilter, put = __set_m_meshFilter))::UnityEngine::MeshFilter* m_meshFilter;

  /// @brief Field m_mesh, offset 0x60, size 0x8
  __declspec(property(get = __get_m_mesh, put = __set_m_mesh))::UnityEngine::Mesh* m_mesh;

  /// @brief Field m_TextComponent, offset 0x68, size 0x8
  __declspec(property(get = __get_m_TextComponent, put = __set_m_TextComponent))::TMPro::TextMeshPro* m_TextComponent;

  /// @brief Field m_isRegisteredForEvents, offset 0x70, size 0x1
  __declspec(property(get = __get_m_isRegisteredForEvents, put = __set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  __declspec(property(get = get_fontAsset, put = set_fontAsset))::TMPro::TMP_FontAsset* fontAsset;

  __declspec(property(get = get_spriteAsset, put = set_spriteAsset))::TMPro::TMP_SpriteAsset* spriteAsset;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial))::UnityEngine::Material* sharedMaterial;

  __declspec(property(get = get_fallbackMaterial, put = set_fallbackMaterial))::UnityEngine::Material* fallbackMaterial;

  __declspec(property(get = get_fallbackSourceMaterial, put = set_fallbackSourceMaterial))::UnityEngine::Material* fallbackSourceMaterial;

  __declspec(property(get = get_isDefaultMaterial, put = set_isDefaultMaterial)) bool isDefaultMaterial;

  __declspec(property(get = get_padding, put = set_padding)) float_t padding;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  __declspec(property(get = get_meshFilter))::UnityEngine::MeshFilter* meshFilter;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityEngine::Mesh* mesh;

  __declspec(property(get = get_textComponent))::TMPro::TMP_Text* textComponent;

  constexpr ::TMPro::TMP_FontAsset*& __get_m_fontAsset();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> const& __get_m_fontAsset() const;

  constexpr void __set_m_fontAsset(::TMPro::TMP_FontAsset* value);

  constexpr ::TMPro::TMP_SpriteAsset*& __get_m_spriteAsset();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> const& __get_m_spriteAsset() const;

  constexpr void __set_m_spriteAsset(::TMPro::TMP_SpriteAsset* value);

  constexpr ::UnityEngine::Material*& __get_m_material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_material() const;

  constexpr void __set_m_material(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get_m_sharedMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_sharedMaterial() const;

  constexpr void __set_m_sharedMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get_m_fallbackMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_fallbackMaterial() const;

  constexpr void __set_m_fallbackMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get_m_fallbackSourceMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_fallbackSourceMaterial() const;

  constexpr void __set_m_fallbackSourceMaterial(::UnityEngine::Material* value);

  constexpr bool& __get_m_isDefaultMaterial();

  constexpr bool const& __get_m_isDefaultMaterial() const;

  constexpr void __set_m_isDefaultMaterial(bool value);

  constexpr float_t& __get_m_padding();

  constexpr float_t const& __get_m_padding() const;

  constexpr void __set_m_padding(float_t value);

  constexpr ::UnityEngine::Renderer*& __get_m_renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get_m_renderer() const;

  constexpr void __set_m_renderer(::UnityEngine::Renderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get_m_meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get_m_meshFilter() const;

  constexpr void __set_m_meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::Mesh*& __get_m_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_mesh() const;

  constexpr void __set_m_mesh(::UnityEngine::Mesh* value);

  constexpr ::TMPro::TextMeshPro*& __get_m_TextComponent();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get_m_TextComponent() const;

  constexpr void __set_m_TextComponent(::TMPro::TextMeshPro* value);

  constexpr bool& __get_m_isRegisteredForEvents();

  constexpr bool const& __get_m_isRegisteredForEvents() const;

  constexpr void __set_m_isRegisteredForEvents(bool value);

  /// @brief Method get_fontAsset addr 0x2ac1740 size 0x8 virtual false final false
  inline ::TMPro::TMP_FontAsset* get_fontAsset();

  /// @brief Method set_fontAsset addr 0x2ac1748 size 0x8 virtual false final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method get_spriteAsset addr 0x2ac1750 size 0x8 virtual false final false
  inline ::TMPro::TMP_SpriteAsset* get_spriteAsset();

  /// @brief Method set_spriteAsset addr 0x2ac1758 size 0x8 virtual false final false
  inline void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);

  /// @brief Method get_material addr 0x2ac1760 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2ac1890 size 0x74 virtual false final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterial addr 0x2ac1a2c size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_sharedMaterial();

  /// @brief Method set_sharedMaterial addr 0x2ac1a34 size 0x20 virtual false final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method get_fallbackMaterial addr 0x2ac1a74 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_fallbackMaterial();

  /// @brief Method set_fallbackMaterial addr 0x2ac1a7c size 0x138 virtual false final false
  inline void set_fallbackMaterial(::UnityEngine::Material* value);

  /// @brief Method get_fallbackSourceMaterial addr 0x2ac1bb4 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_fallbackSourceMaterial();

  /// @brief Method set_fallbackSourceMaterial addr 0x2ac1bbc size 0x8 virtual false final false
  inline void set_fallbackSourceMaterial(::UnityEngine::Material* value);

  /// @brief Method get_isDefaultMaterial addr 0x2ac1bc4 size 0x8 virtual false final false
  inline bool get_isDefaultMaterial();

  /// @brief Method set_isDefaultMaterial addr 0x2ac1bcc size 0xc virtual false final false
  inline void set_isDefaultMaterial(bool value);

  /// @brief Method get_padding addr 0x2ac1bd8 size 0x8 virtual false final false
  inline float_t get_padding();

  /// @brief Method set_padding addr 0x2ac1be0 size 0x8 virtual false final false
  inline void set_padding(float_t value);

  /// @brief Method get_renderer addr 0x2ac1be8 size 0x94 virtual false final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method get_meshFilter addr 0x2ac1c7c size 0xfc virtual false final false
  inline ::UnityEngine::MeshFilter* get_meshFilter();

  /// @brief Method get_mesh addr 0x2ac1d78 size 0xb0 virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method set_mesh addr 0x2ac1e28 size 0x8 virtual false final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method get_textComponent addr 0x2ac1e30 size 0x94 virtual false final false
  inline ::TMPro::TMP_Text* get_textComponent();

  /// @brief Method AddSubTextObject addr 0x2ac1ec4 size 0x3c4 virtual false final false
  static inline ::TMPro::TMP_SubMesh* AddSubTextObject(::TMPro::TextMeshPro* textComponent, ::TMPro::MaterialReference materialReference);

  /// @brief Method OnEnable addr 0x2ac2288 size 0x12c virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2ac23b4 size 0xb4 virtual false final false
  inline void OnDisable();

  /// @brief Method OnDestroy addr 0x2ac2468 size 0x148 virtual false final false
  inline void OnDestroy();

  /// @brief Method DestroySelf addr 0x2ac25b0 size 0x70 virtual false final false
  inline void DestroySelf();

  /// @brief Method GetMaterial addr 0x2ac1768 size 0x128 virtual false final false
  inline ::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method CreateMaterialInstance addr 0x2ac2620 size 0xc0 virtual false final false
  inline ::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* source);

  /// @brief Method GetSharedMaterial addr 0x2ac26e0 size 0xa4 virtual false final false
  inline ::UnityEngine::Material* GetSharedMaterial();

  /// @brief Method SetSharedMaterial addr 0x2ac1a54 size 0x20 virtual false final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetPaddingForMaterial addr 0x2ac1904 size 0x74 virtual false final false
  inline float_t GetPaddingForMaterial();

  /// @brief Method UpdateMeshPadding addr 0x2ac2784 size 0x74 virtual false final false
  inline void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);

  /// @brief Method SetVerticesDirty addr 0x2ac1978 size 0xb0 virtual false final false
  inline void SetVerticesDirty();

  /// @brief Method SetMaterialDirty addr 0x2ac1a28 size 0x4 virtual false final false
  inline void SetMaterialDirty();

  /// @brief Method UpdateMaterial addr 0x2ac27f8 size 0x170 virtual false final false
  inline void UpdateMaterial();

  static inline ::TMPro::TMP_SubMesh* New_ctor();

  /// @brief Method .ctor addr 0x2ac2968 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SubMesh(TMP_SubMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SubMesh(TMP_SubMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SubMesh();

public:
  /// @brief Field m_fontAsset, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TMP_FontAsset* ___m_fontAsset;

  /// @brief Field m_spriteAsset, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TMP_SpriteAsset* ___m_spriteAsset;

  /// @brief Field m_material, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_material;

  /// @brief Field m_sharedMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset: 0x48, size: 0x1, def value: None
  bool ___m_isDefaultMaterial;

  /// @brief Field m_padding, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_padding;

  /// @brief Field m_renderer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Renderer* ___m_renderer;

  /// @brief Field m_meshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ___m_meshFilter;

  /// @brief Field m_mesh, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___m_mesh;

  /// @brief Field m_TextComponent, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ___m_TextComponent;

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
