#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SubMeshUI)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Texture;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct MaterialReference;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace TMPro {
class TMP_SubMeshUI;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SubMeshUI);
// Type: TMPro::TMP_SubMeshUI
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12427))
// CS Name: ::TMPro::TMP_SubMeshUI*
class CORDL_TYPE TMP_SubMeshUI : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  /// @brief Field m_fontAsset, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_fontAsset, put = __set_m_fontAsset))::TMPro::TMP_FontAsset* m_fontAsset;

  /// @brief Field m_spriteAsset, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_spriteAsset, put = __set_m_spriteAsset))::TMPro::TMP_SpriteAsset* m_spriteAsset;

  /// @brief Field m_material, offset 0xe0, size 0x8
  __declspec(property(get = __get_m_material, put = __set_m_material))::UnityEngine::Material* m_material;

  /// @brief Field m_sharedMaterial, offset 0xe8, size 0x8
  __declspec(property(get = __get_m_sharedMaterial, put = __set_m_sharedMaterial))::UnityEngine::Material* m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset 0xf0, size 0x8
  __declspec(property(get = __get_m_fallbackMaterial, put = __set_m_fallbackMaterial))::UnityEngine::Material* m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_fallbackSourceMaterial, put = __set_m_fallbackSourceMaterial))::UnityEngine::Material* m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset 0x100, size 0x1
  __declspec(property(get = __get_m_isDefaultMaterial, put = __set_m_isDefaultMaterial)) bool m_isDefaultMaterial;

  /// @brief Field m_padding, offset 0x104, size 0x4
  __declspec(property(get = __get_m_padding, put = __set_m_padding)) float_t m_padding;

  /// @brief Field m_mesh, offset 0x108, size 0x8
  __declspec(property(get = __get_m_mesh, put = __set_m_mesh))::UnityEngine::Mesh* m_mesh;

  /// @brief Field m_TextComponent, offset 0x110, size 0x8
  __declspec(property(get = __get_m_TextComponent, put = __set_m_TextComponent))::TMPro::TextMeshProUGUI* m_TextComponent;

  /// @brief Field m_isRegisteredForEvents, offset 0x118, size 0x1
  __declspec(property(get = __get_m_isRegisteredForEvents, put = __set_m_isRegisteredForEvents)) bool m_isRegisteredForEvents;

  /// @brief Field m_materialDirty, offset 0x119, size 0x1
  __declspec(property(get = __get_m_materialDirty, put = __set_m_materialDirty)) bool m_materialDirty;

  /// @brief Field m_materialReferenceIndex, offset 0x11c, size 0x4
  __declspec(property(get = __get_m_materialReferenceIndex, put = __set_m_materialReferenceIndex)) int32_t m_materialReferenceIndex;

  /// @brief Field m_RootCanvasTransform, offset 0x120, size 0x8
  __declspec(property(get = __get_m_RootCanvasTransform, put = __set_m_RootCanvasTransform))::UnityEngine::Transform* m_RootCanvasTransform;

  __declspec(property(get = get_fontAsset, put = set_fontAsset))::TMPro::TMP_FontAsset* fontAsset;

  __declspec(property(get = get_spriteAsset, put = set_spriteAsset))::TMPro::TMP_SpriteAsset* spriteAsset;

  __declspec(property(get = get_mainTexture))::UnityEngine::Texture* mainTexture;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial))::UnityEngine::Material* sharedMaterial;

  __declspec(property(get = get_fallbackMaterial, put = set_fallbackMaterial))::UnityEngine::Material* fallbackMaterial;

  __declspec(property(get = get_fallbackSourceMaterial, put = set_fallbackSourceMaterial))::UnityEngine::Material* fallbackSourceMaterial;

  __declspec(property(get = get_materialForRendering))::UnityEngine::Material* materialForRendering;

  __declspec(property(get = get_isDefaultMaterial, put = set_isDefaultMaterial)) bool isDefaultMaterial;

  __declspec(property(get = get_padding, put = set_padding)) float_t padding;

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

  constexpr ::UnityEngine::Mesh*& __get_m_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_m_mesh() const;

  constexpr void __set_m_mesh(::UnityEngine::Mesh* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get_m_TextComponent();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get_m_TextComponent() const;

  constexpr void __set_m_TextComponent(::TMPro::TextMeshProUGUI* value);

  constexpr bool& __get_m_isRegisteredForEvents();

  constexpr bool const& __get_m_isRegisteredForEvents() const;

  constexpr void __set_m_isRegisteredForEvents(bool value);

  constexpr bool& __get_m_materialDirty();

  constexpr bool const& __get_m_materialDirty() const;

  constexpr void __set_m_materialDirty(bool value);

  constexpr int32_t& __get_m_materialReferenceIndex();

  constexpr int32_t const& __get_m_materialReferenceIndex() const;

  constexpr void __set_m_materialReferenceIndex(int32_t value);

  constexpr ::UnityEngine::Transform*& __get_m_RootCanvasTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_m_RootCanvasTransform() const;

  constexpr void __set_m_RootCanvasTransform(::UnityEngine::Transform* value);

  /// @brief Method get_fontAsset addr 0x2c466c4 size 0x8 virtual false final false
  inline ::TMPro::TMP_FontAsset* get_fontAsset();

  /// @brief Method set_fontAsset addr 0x2c466cc size 0x8 virtual false final false
  inline void set_fontAsset(::TMPro::TMP_FontAsset* value);

  /// @brief Method get_spriteAsset addr 0x2c466d4 size 0x8 virtual false final false
  inline ::TMPro::TMP_SpriteAsset* get_spriteAsset();

  /// @brief Method set_spriteAsset addr 0x2c466dc size 0x8 virtual false final false
  inline void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);

  /// @brief Method get_mainTexture addr 0x2c466e4 size 0xbc virtual true final false
  inline ::UnityEngine::Texture* get_mainTexture();

  /// @brief Method get_material addr 0x2c467a0 size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2c4689c size 0xe8 virtual true final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterial addr 0x2c469f8 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_sharedMaterial();

  /// @brief Method set_sharedMaterial addr 0x2c46a00 size 0x30 virtual false final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method get_fallbackMaterial addr 0x2c46a60 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_fallbackMaterial();

  /// @brief Method set_fallbackMaterial addr 0x2c46a68 size 0x148 virtual false final false
  inline void set_fallbackMaterial(::UnityEngine::Material* value);

  /// @brief Method get_fallbackSourceMaterial addr 0x2c46bb0 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_fallbackSourceMaterial();

  /// @brief Method set_fallbackSourceMaterial addr 0x2c46bb8 size 0x8 virtual false final false
  inline void set_fallbackSourceMaterial(::UnityEngine::Material* value);

  /// @brief Method get_materialForRendering addr 0x2c46bc0 size 0x5c virtual true final false
  inline ::UnityEngine::Material* get_materialForRendering();

  /// @brief Method get_isDefaultMaterial addr 0x2c46c1c size 0x8 virtual false final false
  inline bool get_isDefaultMaterial();

  /// @brief Method set_isDefaultMaterial addr 0x2c46c24 size 0xc virtual false final false
  inline void set_isDefaultMaterial(bool value);

  /// @brief Method get_padding addr 0x2c46c30 size 0x8 virtual false final false
  inline float_t get_padding();

  /// @brief Method set_padding addr 0x2c46c38 size 0x8 virtual false final false
  inline void set_padding(float_t value);

  /// @brief Method get_mesh addr 0x2c46c40 size 0xb0 virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  /// @brief Method set_mesh addr 0x2c46cf0 size 0x8 virtual false final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method get_textComponent addr 0x2c46cf8 size 0x94 virtual false final false
  inline ::TMPro::TMP_Text* get_textComponent();

  /// @brief Method AddSubTextObject addr 0x2c46d8c size 0x3b0 virtual false final false
  static inline ::TMPro::TMP_SubMeshUI* AddSubTextObject(::TMPro::TextMeshProUGUI* textComponent, ::TMPro::MaterialReference materialReference);

  /// @brief Method OnEnable addr 0x2c4713c size 0x70 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2c471ac size 0xa8 virtual true final false
  inline void OnDisable();

  /// @brief Method OnDestroy addr 0x2c47254 size 0x1ac virtual true final false
  inline void OnDestroy();

  /// @brief Method OnTransformParentChanged addr 0x2c47400 size 0x54 virtual true final false
  inline void OnTransformParentChanged();

  /// @brief Method GetModifiedMaterial addr 0x2c47454 size 0x100 virtual true final false
  inline ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method GetPaddingForMaterial addr 0x2c46984 size 0x74 virtual false final false
  inline float_t GetPaddingForMaterial();

  /// @brief Method GetPaddingForMaterial addr 0x2c47554 size 0x74 virtual false final false
  inline float_t GetPaddingForMaterial(::UnityEngine::Material* mat);

  /// @brief Method UpdateMeshPadding addr 0x2c475c8 size 0x74 virtual false final false
  inline void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);

  /// @brief Method SetAllDirty addr 0x2c4763c size 0x4 virtual true final false
  inline void SetAllDirty();

  /// @brief Method SetVerticesDirty addr 0x2c47640 size 0xb4 virtual true final false
  inline void SetVerticesDirty();

  /// @brief Method SetLayoutDirty addr 0x2c476f4 size 0x4 virtual true final false
  inline void SetLayoutDirty();

  /// @brief Method SetMaterialDirty addr 0x2c476f8 size 0x44 virtual true final false
  inline void SetMaterialDirty();

  /// @brief Method SetPivotDirty addr 0x2c4773c size 0x68 virtual false final false
  inline void SetPivotDirty();

  /// @brief Method GetRootCanvasTransform addr 0x2c477a4 size 0xa0 virtual false final false
  inline ::UnityEngine::Transform* GetRootCanvasTransform();

  /// @brief Method Cull addr 0x2c47844 size 0x4 virtual true final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method UpdateGeometry addr 0x2c47848 size 0x4 virtual true final false
  inline void UpdateGeometry();

  /// @brief Method Rebuild addr 0x2c4784c size 0x38 virtual true final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate update);

  /// @brief Method RefreshMaterial addr 0x2c47884 size 0x10 virtual false final false
  inline void RefreshMaterial();

  /// @brief Method UpdateMaterial addr 0x2c47894 size 0x180 virtual true final false
  inline void UpdateMaterial();

  /// @brief Method RecalculateClipping addr 0x2c47a14 size 0x8 virtual true final false
  inline void RecalculateClipping();

  /// @brief Method GetMaterial addr 0x2c47a1c size 0x8 virtual false final false
  inline ::UnityEngine::Material* GetMaterial();

  /// @brief Method GetMaterial addr 0x2c467a8 size 0xf4 virtual false final false
  inline ::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat);

  /// @brief Method CreateMaterialInstance addr 0x2c47a24 size 0xc0 virtual false final false
  inline ::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* source);

  /// @brief Method GetSharedMaterial addr 0x2c47ae4 size 0x20 virtual false final false
  inline ::UnityEngine::Material* GetSharedMaterial();

  /// @brief Method SetSharedMaterial addr 0x2c46a30 size 0x30 virtual false final false
  inline void SetSharedMaterial(::UnityEngine::Material* mat);

  static inline ::TMPro::TMP_SubMeshUI* New_ctor();

  /// @brief Method .ctor addr 0x2c47b04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SubMeshUI(TMP_SubMeshUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SubMeshUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SubMeshUI(TMP_SubMeshUI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SubMeshUI();

public:
  /// @brief Field m_fontAsset, offset: 0xd0, size: 0x8, def value: None
  ::TMPro::TMP_FontAsset* ___m_fontAsset;

  /// @brief Field m_spriteAsset, offset: 0xd8, size: 0x8, def value: None
  ::TMPro::TMP_SpriteAsset* ___m_spriteAsset;

  /// @brief Field m_material, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_material;

  /// @brief Field m_sharedMaterial, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_sharedMaterial;

  /// @brief Field m_fallbackMaterial, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_fallbackMaterial;

  /// @brief Field m_fallbackSourceMaterial, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_fallbackSourceMaterial;

  /// @brief Field m_isDefaultMaterial, offset: 0x100, size: 0x1, def value: None
  bool ___m_isDefaultMaterial;

  /// @brief Field m_padding, offset: 0x104, size: 0x4, def value: None
  float_t ___m_padding;

  /// @brief Field m_mesh, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___m_mesh;

  /// @brief Field m_TextComponent, offset: 0x110, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ___m_TextComponent;

  /// @brief Field m_isRegisteredForEvents, offset: 0x118, size: 0x1, def value: None
  bool ___m_isRegisteredForEvents;

  /// @brief Field m_materialDirty, offset: 0x119, size: 0x1, def value: None
  bool ___m_materialDirty;

  /// @brief Field m_materialReferenceIndex, offset: 0x11c, size: 0x4, def value: None
  int32_t ___m_materialReferenceIndex;

  /// @brief Field m_RootCanvasTransform, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Transform* ___m_RootCanvasTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SubMeshUI, 0x128>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SubMeshUI);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SubMeshUI*, "TMPro", "TMP_SubMeshUI");
