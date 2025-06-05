#pragma once
// IWYU pragma private; include "TMPro/TMP_SubMeshUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SubMeshUI)
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
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace TMPro {
class TMP_SubMeshUI;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SubMeshUI);
// Dependencies UnityEngine.UI.MaskableGraphic
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SubMeshUI
class CORDL_TYPE TMP_SubMeshUI : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  __declspec(property(get = get_fallbackMaterial, put = set_fallbackMaterial)) ::UnityW<::UnityEngine::Material> fallbackMaterial;

  __declspec(property(get = get_fallbackSourceMaterial, put = set_fallbackSourceMaterial)) ::UnityW<::UnityEngine::Material> fallbackSourceMaterial;

  __declspec(property(get = get_fontAsset, put = set_fontAsset)) ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  __declspec(property(get = get_isDefaultMaterial, put = set_isDefaultMaterial)) bool isDefaultMaterial;

  /// @brief Field m_RootCanvasTransform, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootCanvasTransform, put = __cordl_internal_set_m_RootCanvasTransform)) ::UnityW<::UnityEngine::Transform> m_RootCanvasTransform;

  /// @brief Field m_TextComponent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponent, put = __cordl_internal_set_m_TextComponent)) ::UnityW<::TMPro::TextMeshProUGUI> m_TextComponent;

  /// @brief Field m_fallbackMaterial, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackMaterial, put = __cordl_internal_set_m_fallbackMaterial)) ::UnityW<::UnityEngine::Material> m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fallbackSourceMaterial, put = __cordl_internal_set_m_fallbackSourceMaterial)) ::UnityW<::UnityEngine::Material> m_fallbackSourceMaterial;

  /// @brief Field m_fontAsset, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fontAsset, put = __cordl_internal_set_m_fontAsset)) ::UnityW<::TMPro::TMP_FontAsset> m_fontAsset;

  /// @brief Field m_isDefaultMaterial, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isDefaultMaterial, put = __cordl_internal_set_m_isDefaultMaterial)) bool m_isDefaultMaterial;

  /// @brief Field m_isRegisteredForEvents, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isRegisteredForEvents, put = __cordl_internal_set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_material, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_material, put = __cordl_internal_set_m_material)) ::UnityW<::UnityEngine::Material> m_material;

  /// @brief Field m_materialDirty, offset 0x121, size 0x1
  __declspec(property(get = __cordl_internal_get_m_materialDirty, put = __cordl_internal_set_m_materialDirty)) bool m_materialDirty;

  /// @brief Field m_materialReferenceIndex, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_m_materialReferenceIndex, put = __cordl_internal_set_m_materialReferenceIndex)) int32_t m_materialReferenceIndex;

  /// @brief Field m_mesh, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_mesh, put = __cordl_internal_set_m_mesh)) ::UnityW<::UnityEngine::Mesh> m_mesh;

  /// @brief Field m_padding, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_padding, put = __cordl_internal_set_m_padding)) float_t m_padding;

  /// @brief Field m_sharedMaterial, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sharedMaterial, put = __cordl_internal_set_m_sharedMaterial)) ::UnityW<::UnityEngine::Material> m_sharedMaterial;

  /// @brief Field m_spriteAsset, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_spriteAsset, put = __cordl_internal_set_m_spriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> m_spriteAsset;

  __declspec(property(get = get_mainTexture)) ::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_materialForRendering)) ::UnityW<::UnityEngine::Material> materialForRendering;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_padding, put = set_padding)) float_t padding;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial)) ::UnityW<::UnityEngine::Material> sharedMaterial;

  __declspec(property(get = get_spriteAsset, put = set_spriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset;

  __declspec(property(get = get_textComponent)) ::UnityW<::TMPro::TMP_Text> textComponent;

  /// @brief Method AddSubTextObject, addr 0x4805414, size 0x3b0, virtual false, abstract: false, final false
  static inline ::UnityW<::TMPro::TMP_SubMeshUI> AddSubTextObject(::TMPro::TextMeshProUGUI* textComponent, ::TMPro::MaterialReference materialReference);

  /// @brief Method CreateMaterialInstance, addr 0x48060ac, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateMaterialInstance(::UnityEngine::Material* source);

  /// @brief Method Cull, addr 0x4805ecc, size 0x4, virtual true, abstract: false, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method GetMaterial, addr 0x48060a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial();

  /// @brief Method GetMaterial, addr 0x4804e30, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetModifiedMaterial, addr 0x4805adc, size 0x100, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method GetPaddingForMaterial, addr 0x480500c, size 0x74, virtual false, abstract: false, final false
  inline float_t GetPaddingForMaterial();

  /// @brief Method GetPaddingForMaterial, addr 0x4805bdc, size 0x74, virtual false, abstract: false, final false
  inline float_t GetPaddingForMaterial(::UnityEngine::Material* mat);

  /// @brief Method GetRootCanvasTransform, addr 0x4805e2c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetRootCanvasTransform();

  /// @brief Method GetSharedMaterial, addr 0x480616c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetSharedMaterial();

  static inline ::TMPro::TMP_SubMeshUI* New_ctor();

  /// @brief Method OnDestroy, addr 0x48058dc, size 0x1ac, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x4805834, size 0xa8, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x48057c4, size 0x70, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x4805a88, size 0x54, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Rebuild, addr 0x4805ed4, size 0x38, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method RecalculateClipping, addr 0x480609c, size 0x8, virtual true, abstract: false, final false
  inline void RecalculateClipping();

  /// @brief Method RefreshMaterial, addr 0x4805f0c, size 0x10, virtual false, abstract: false, final false
  inline void RefreshMaterial();

  /// @brief Method SetAllDirty, addr 0x4805cc4, size 0x4, virtual true, abstract: false, final false
  inline void SetAllDirty();

  /// @brief Method SetLayoutDirty, addr 0x4805d7c, size 0x4, virtual true, abstract: false, final false
  inline void SetLayoutDirty();

  /// @brief Method SetMaterialDirty, addr 0x4805d80, size 0x44, virtual true, abstract: false, final false
  inline void SetMaterialDirty();

  /// @brief Method SetPivotDirty, addr 0x4805dc4, size 0x68, virtual false, abstract: false, final false
  inline void SetPivotDirty();

  /// @brief Method SetSharedMaterial, addr 0x48050b8, size 0x30, virtual false, abstract: false, final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  /// @brief Method SetVerticesDirty, addr 0x4805cc8, size 0xb4, virtual true, abstract: false, final false
  inline void SetVerticesDirty();

  /// @brief Method UpdateGeometry, addr 0x4805ed0, size 0x4, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method UpdateMaterial, addr 0x4805f1c, size 0x180, virtual true, abstract: false, final false
  inline void UpdateMaterial();

  /// @brief Method UpdateMeshPadding, addr 0x4805c50, size 0x74, virtual false, abstract: false, final false
  inline void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RootCanvasTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RootCanvasTransform();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_m_TextComponent() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_m_TextComponent();

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

  constexpr bool const& __cordl_internal_get_m_materialDirty() const;

  constexpr bool& __cordl_internal_get_m_materialDirty();

  constexpr int32_t const& __cordl_internal_get_m_materialReferenceIndex() const;

  constexpr int32_t& __cordl_internal_get_m_materialReferenceIndex();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_mesh();

  constexpr float_t const& __cordl_internal_get_m_padding() const;

  constexpr float_t& __cordl_internal_get_m_padding();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_sharedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_sharedMaterial();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_m_spriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_m_spriteAsset();

  constexpr void __cordl_internal_set_m_RootCanvasTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_m_fallbackMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_fallbackSourceMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_fontAsset(::UnityW<::TMPro::TMP_FontAsset> value);

  constexpr void __cordl_internal_set_m_isDefaultMaterial(bool value);

  constexpr void __cordl_internal_set_m_isRegisteredForEvents(bool value);

  constexpr void __cordl_internal_set_m_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_materialDirty(bool value);

  constexpr void __cordl_internal_set_m_materialReferenceIndex(int32_t value);

  constexpr void __cordl_internal_set_m_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_padding(float_t value);

  constexpr void __cordl_internal_set_m_sharedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_spriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  /// @brief Method .ctor, addr 0x480618c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fallbackMaterial, addr 0x48050e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fallbackMaterial();

  /// @brief Method get_fallbackSourceMaterial, addr 0x4805238, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_fallbackSourceMaterial();

  /// @brief Method get_fontAsset, addr 0x4804d4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_FontAsset> get_fontAsset();

  /// @brief Method get_isDefaultMaterial, addr 0x48052a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDefaultMaterial();

  /// @brief Method get_mainTexture, addr 0x4804d6c, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_material, addr 0x4804e28, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_materialForRendering, addr 0x4805248, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_materialForRendering();

  /// @brief Method get_mesh, addr 0x48052c8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_padding, addr 0x48052b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_padding();

  /// @brief Method get_sharedMaterial, addr 0x4805080, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  /// @brief Method get_spriteAsset, addr 0x4804d5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_SpriteAsset> get_spriteAsset();

  /// @brief Method get_textComponent, addr 0x4805380, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_textComponent();

  /// @brief Method set_fallbackMaterial, addr 0x48050f0, size 0x148, virtual false, abstract: false, final false
  inline void set_fallbackMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fallbackSourceMaterial, addr 0x4805240, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackSourceMaterial(::UnityEngine::Material* value);

  /// @brief Method set_fontAsset, addr 0x4804d54, size 0x8, virtual false, abstract: false, final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method set_isDefaultMaterial, addr 0x48052ac, size 0xc, virtual false, abstract: false, final false
  inline void set_isDefaultMaterial(bool value);

  /// @brief Method set_material, addr 0x4804f24, size 0xe8, virtual true, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_mesh, addr 0x4805378, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_padding, addr 0x48052c0, size 0x8, virtual false, abstract: false, final false
  inline void set_padding(float_t value);

  /// @brief Method set_sharedMaterial, addr 0x4805088, size 0x30, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method set_spriteAsset, addr 0x4804d64, size 0x8, virtual false, abstract: false, final false
  inline void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SubMeshUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SubMeshUI(TMP_SubMeshUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SubMeshUI(TMP_SubMeshUI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14549 };

  /// @brief Field m_fontAsset, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> ___m_fontAsset;

  /// @brief Field m_spriteAsset, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___m_spriteAsset;

  /// @brief Field m_material, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_material;

  /// @brief Field m_sharedMaterial, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset: 0x108, size: 0x1, def value: None
  bool ___m_isDefaultMaterial;

  /// @brief Field m_padding, offset: 0x10c, size: 0x4, def value: None
  float_t ___m_padding;

  /// @brief Field m_mesh, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_mesh;

  /// @brief Field m_TextComponent, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ___m_TextComponent;

  /// @brief Field m_isRegisteredForEvents, offset: 0x120, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  /// @brief Field m_materialDirty, offset: 0x121, size: 0x1, def value: None
  bool ___m_materialDirty;

  /// @brief Field m_materialReferenceIndex, offset: 0x124, size: 0x4, def value: None
  int32_t ___m_materialReferenceIndex;

  /// @brief Field m_RootCanvasTransform, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_RootCanvasTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_fontAsset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_spriteAsset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_material) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_sharedMaterial) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_fallbackMaterial) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_fallbackSourceMaterial) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_isDefaultMaterial) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_padding) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_mesh) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_TextComponent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_isRegisteredForEvents) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_materialDirty) == 0x121, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_materialReferenceIndex) == 0x124, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SubMeshUI, ___m_RootCanvasTransform) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SubMeshUI, 0x130>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SubMeshUI);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SubMeshUI*, "TMPro", "TMP_SubMeshUI");
