#pragma once
// IWYU pragma private; include "TMPro/MaterialReferenceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReferenceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class MaterialReferenceManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::MaterialReferenceManager);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.MaterialReferenceManager
class CORDL_TYPE MaterialReferenceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ColorGradientReferenceLookup, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ColorGradientReferenceLookup,
      put = __cordl_internal_set_m_ColorGradientReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* m_ColorGradientReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontAssetReferenceLookup,
                      put = __cordl_internal_set_m_FontAssetReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* m_FontAssetReferenceLookup;

  /// @brief Field m_FontMaterialReferenceLookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontMaterialReferenceLookup,
                      put =
                          __cordl_internal_set_m_FontMaterialReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* m_FontMaterialReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteAssetReferenceLookup,
                      put = __cordl_internal_set_m_SpriteAssetReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* m_SpriteAssetReferenceLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::TMPro::MaterialReferenceManager* s_Instance;

  /// @brief Method AddColorGradientPreset, addr 0x47b0854, size 0x30, virtual false, abstract: false, final false
  static inline void AddColorGradientPreset(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);

  /// @brief Method AddColorGradientPreset_Internal, addr 0x47b0884, size 0xa4, virtual false, abstract: false, final false
  inline void AddColorGradientPreset_Internal(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset);

  /// @brief Method AddFontAsset, addr 0x47b04f0, size 0x20, virtual false, abstract: false, final false
  static inline void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method AddFontAssetInternal, addr 0x47b0510, size 0xc4, virtual false, abstract: false, final false
  inline void AddFontAssetInternal(::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method AddFontMaterial, addr 0x47b07bc, size 0x30, virtual false, abstract: false, final false
  static inline void AddFontMaterial(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddFontMaterialInternal, addr 0x47b07ec, size 0x68, virtual false, abstract: false, final false
  inline void AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddSpriteAsset, addr 0x47b06b8, size 0x30, virtual false, abstract: false, final false
  static inline void AddSpriteAsset(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAsset, addr 0x47b05d4, size 0x20, virtual false, abstract: false, final false
  static inline void AddSpriteAsset(::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAssetInternal, addr 0x47b06e8, size 0xd4, virtual false, abstract: false, final false
  inline void AddSpriteAssetInternal(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAssetInternal, addr 0x47b05f4, size 0xc4, virtual false, abstract: false, final false
  inline void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* spriteAsset);

  /// @brief Method Contains, addr 0x47b0928, size 0x5c, virtual false, abstract: false, final false
  inline bool Contains(::TMPro::TMP_FontAsset* font);

  /// @brief Method Contains, addr 0x47b0984, size 0x5c, virtual false, abstract: false, final false
  inline bool Contains(::TMPro::TMP_SpriteAsset* sprite);

  static inline ::TMPro::MaterialReferenceManager* New_ctor();

  /// @brief Method TryGetColorGradientPreset, addr 0x47b0b18, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetColorGradientPreset(int32_t hashCode, ::ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);

  /// @brief Method TryGetColorGradientPresetInternal, addr 0x47b0b48, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetColorGradientPresetInternal(int32_t hashCode, ::ByRef<::TMPro::TMP_ColorGradient*> gradientPreset);

  /// @brief Method TryGetFontAsset, addr 0x47b09e0, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetFontAsset(int32_t hashCode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method TryGetFontAssetInternal, addr 0x47b0a10, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetFontAssetInternal(int32_t hashCode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset);

  /// @brief Method TryGetMaterial, addr 0x47b0bb4, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetMaterial(int32_t hashCode, ::ByRef<::UnityEngine::Material*> material);

  /// @brief Method TryGetMaterialInternal, addr 0x47b0be4, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetMaterialInternal(int32_t hashCode, ::ByRef<::UnityEngine::Material*> material);

  /// @brief Method TryGetSpriteAsset, addr 0x47b0a7c, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetSpriteAsset(int32_t hashCode, ::ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);

  /// @brief Method TryGetSpriteAssetInternal, addr 0x47b0aac, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetSpriteAssetInternal(int32_t hashCode, ::ByRef<::TMPro::TMP_SpriteAsset*> spriteAsset);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* const& __cordl_internal_get_m_ColorGradientReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>*& __cordl_internal_get_m_ColorGradientReferenceLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* const& __cordl_internal_get_m_FontAssetReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*& __cordl_internal_get_m_FontAssetReferenceLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_m_FontMaterialReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_m_FontMaterialReferenceLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* const& __cordl_internal_get_m_SpriteAssetReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>*& __cordl_internal_get_m_SpriteAssetReferenceLookup();

  constexpr void __cordl_internal_set_m_ColorGradientReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* value);

  constexpr void __cordl_internal_set_m_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FontMaterialReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_m_SpriteAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* value);

  /// @brief Method .ctor, addr 0x47b039c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::MaterialReferenceManager* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x47b0328, size 0x74, virtual false, abstract: false, final false
  static inline ::TMPro::MaterialReferenceManager* get_instance();

  static inline void setStaticF_s_Instance(::TMPro::MaterialReferenceManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialReferenceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialReferenceManager(MaterialReferenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialReferenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialReferenceManager(MaterialReferenceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14422 };

  /// @brief Field m_FontMaterialReferenceLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* ___m_FontMaterialReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* ___m_FontAssetReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* ___m_SpriteAssetReferenceLookup;

  /// @brief Field m_ColorGradientReferenceLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* ___m_ColorGradientReferenceLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MaterialReferenceManager, ___m_FontMaterialReferenceLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReferenceManager, ___m_FontAssetReferenceLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReferenceManager, ___m_SpriteAssetReferenceLookup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReferenceManager, ___m_ColorGradientReferenceLookup) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MaterialReferenceManager, 0x30>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReferenceManager*, "TMPro", "MaterialReferenceManager");
