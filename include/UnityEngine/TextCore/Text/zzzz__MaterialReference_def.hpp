#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MaterialReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReference)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MaterialReference);
// Type: UnityEngine.TextCore.Text::MaterialReference
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::MaterialReference
struct CORDL_TYPE MaterialReference {
public:
  // Declarations
  /// @brief Method AddMaterialReference, addr 0x48b3124, size 0x20c, virtual false, abstract: false, final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                             ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  /// @brief Method AddMaterialReference, addr 0x48b3330, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                             ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  /// @brief Method .ctor, addr 0x48b30a8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, ::UnityEngine::Material* material, float_t padding);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialReference();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "",
  // def_value: None }, CppParam { name: "spriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: None }, CppParam { name: "material", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFallbackMaterial",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fallbackMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "padding", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaterialReference(int32_t index, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset,
                              ::UnityW<::UnityEngine::Material> material, bool isDefaultMaterial, bool isFallbackMaterial, ::UnityW<::UnityEngine::Material> fallbackMaterial, float_t padding,
                              int32_t referenceCount) noexcept;

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Field spriteAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field isDefaultMaterial, offset: 0x20, size: 0x1, def value: None
  bool isDefaultMaterial;

  /// @brief Field isFallbackMaterial, offset: 0x21, size: 0x1, def value: None
  bool isFallbackMaterial;

  /// @brief Field fallbackMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> fallbackMaterial;

  /// @brief Field padding, offset: 0x30, size: 0x4, def value: None
  float_t padding;

  /// @brief Field referenceCount, offset: 0x34, size: 0x4, def value: None
  int32_t referenceCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15202 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialReference, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, spriteAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, isDefaultMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, isFallbackMaterial) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, fallbackMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::MaterialReference, referenceCount) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialReference, "UnityEngine.TextCore.Text", "MaterialReference");
