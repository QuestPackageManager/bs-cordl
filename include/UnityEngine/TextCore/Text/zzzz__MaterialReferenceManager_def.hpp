#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MaterialReferenceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReferenceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class MaterialReferenceManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::MaterialReferenceManager);
// Type: UnityEngine.TextCore.Text::MaterialReferenceManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::MaterialReferenceManager*
class CORDL_TYPE MaterialReferenceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ColorGradientReferenceLookup, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorGradientReferenceLookup, put = __cordl_internal_set_m_ColorGradientReferenceLookup))::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>* m_ColorGradientReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_FontAssetReferenceLookup,
      put = __cordl_internal_set_m_FontAssetReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* m_FontAssetReferenceLookup;

  /// @brief Field m_FontMaterialReferenceLookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontMaterialReferenceLookup,
                      put = __cordl_internal_set_m_FontMaterialReferenceLookup))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* m_FontMaterialReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteAssetReferenceLookup, put = __cordl_internal_set_m_SpriteAssetReferenceLookup))::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* m_SpriteAssetReferenceLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::TextCore::Text::MaterialReferenceManager* s_Instance;

  /// @brief Method AddColorGradientPreset, addr 0x34969b8, size 0x30, virtual false, abstract: false, final false
  static inline void AddColorGradientPreset(int32_t hashCode, ::UnityEngine::TextCore::Text::TextColorGradient* spriteAsset);

  /// @brief Method AddColorGradientPreset_Internal, addr 0x34969e8, size 0xa4, virtual false, abstract: false, final false
  inline void AddColorGradientPreset_Internal(int32_t hashCode, ::UnityEngine::TextCore::Text::TextColorGradient* spriteAsset);

  /// @brief Method AddFontAsset, addr 0x3496708, size 0x20, virtual false, abstract: false, final false
  static inline void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method AddFontAssetInternal, addr 0x3496728, size 0xf4, virtual false, abstract: false, final false
  inline void AddFontAssetInternal(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method AddFontMaterial, addr 0x3496920, size 0x30, virtual false, abstract: false, final false
  static inline void AddFontMaterial(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddFontMaterialInternal, addr 0x3496950, size 0x68, virtual false, abstract: false, final false
  inline void AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material* material);

  /// @brief Method AddSpriteAsset, addr 0x349681c, size 0x30, virtual false, abstract: false, final false
  static inline void AddSpriteAsset(int32_t hashCode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset);

  /// @brief Method AddSpriteAssetInternal, addr 0x349684c, size 0xd4, virtual false, abstract: false, final false
  inline void AddSpriteAssetInternal(int32_t hashCode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset);

  static inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* New_ctor();

  /// @brief Method TryGetColorGradientPreset, addr 0x3496bc4, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetColorGradientPreset(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::TextColorGradient*> gradientPreset);

  /// @brief Method TryGetColorGradientPresetInternal, addr 0x3496bf4, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetColorGradientPresetInternal(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::TextColorGradient*> gradientPreset);

  /// @brief Method TryGetFontAsset, addr 0x3496a8c, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetFontAsset(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::FontAsset*> fontAsset);

  /// @brief Method TryGetFontAssetInternal, addr 0x3496abc, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetFontAssetInternal(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::FontAsset*> fontAsset);

  /// @brief Method TryGetMaterial, addr 0x3496c60, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetMaterial(int32_t hashCode, ByRef<::UnityEngine::Material*> material);

  /// @brief Method TryGetMaterialInternal, addr 0x3496c90, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetMaterialInternal(int32_t hashCode, ByRef<::UnityEngine::Material*> material);

  /// @brief Method TryGetSpriteAsset, addr 0x3496b28, size 0x30, virtual false, abstract: false, final false
  static inline bool TryGetSpriteAsset(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::SpriteAsset*> spriteAsset);

  /// @brief Method TryGetSpriteAssetInternal, addr 0x3496b58, size 0x6c, virtual false, abstract: false, final false
  inline bool TryGetSpriteAssetInternal(int32_t hashCode, ByRef<::UnityEngine::TextCore::Text::SpriteAsset*> spriteAsset);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>*& __cordl_internal_get_m_ColorGradientReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>*> const&
  __cordl_internal_get_m_ColorGradientReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& __cordl_internal_get_m_FontAssetReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*> const&
  __cordl_internal_get_m_FontAssetReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_m_FontMaterialReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*> const&
  __cordl_internal_get_m_FontMaterialReferenceLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*& __cordl_internal_get_m_SpriteAssetReferenceLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*> const&
  __cordl_internal_get_m_SpriteAssetReferenceLookup() const;

  constexpr void __cordl_internal_set_m_ColorGradientReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>* value);

  constexpr void __cordl_internal_set_m_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

  constexpr void __cordl_internal_set_m_FontMaterialReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_m_SpriteAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value);

  /// @brief Method .ctor, addr 0x34965c0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x3496548, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::TextCore::Text::MaterialReferenceManager* value);

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

  /// @brief Field m_FontMaterialReferenceLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* ___m_FontMaterialReferenceLookup;

  /// @brief Field m_FontAssetReferenceLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* ___m_FontAssetReferenceLookup;

  /// @brief Field m_SpriteAssetReferenceLookup, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* ___m_SpriteAssetReferenceLookup;

  /// @brief Field m_ColorGradientReferenceLookup, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>* ___m_ColorGradientReferenceLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialReferenceManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReferenceManager, ___m_FontMaterialReferenceLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReferenceManager, ___m_FontAssetReferenceLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReferenceManager, ___m_SpriteAssetReferenceLookup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReferenceManager, ___m_ColorGradientReferenceLookup) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::MaterialReferenceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialReferenceManager*, "UnityEngine.TextCore.Text", "MaterialReferenceManager");
