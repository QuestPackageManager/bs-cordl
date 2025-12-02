#pragma once
// IWYU pragma private; include "TMPro/MaterialReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReference)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
struct MaterialReference;
}
// Write type traits
MARK_VAL_T(::TMPro::MaterialReference);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MaterialReference
struct CORDL_TYPE MaterialReference {
public:
  // Declarations
  /// @brief Method AddMaterialReference, addr 0x6718670, size 0x218, virtual false, abstract: false, final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_FontAsset* fontAsset,
                                             ::ByRef<::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  /// @brief Method AddMaterialReference, addr 0x6718888, size 0x1e8, virtual false, abstract: false, final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_SpriteAsset* spriteAsset,
                                             ::ByRef<::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  /// @brief Method Contains, addr 0x6718570, size 0x100, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> materialReferences, ::TMPro::TMP_FontAsset* fontAsset);

  /// @brief Method .ctor, addr 0x67184f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_SpriteAsset* spriteAsset, ::UnityEngine::Material* material, float_t padding);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialReference();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None },
  // CppParam { name: "spriteAsset", ty: "::UnityW<::TMPro::TMP_SpriteAsset>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
  // def_value: None }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "fallbackMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaterialReference(int32_t index, ::UnityW<::TMPro::TMP_FontAsset> fontAsset, ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset, ::UnityW<::UnityEngine::Material> material,
                              bool isDefaultMaterial, bool isFallbackMaterial, ::UnityW<::UnityEngine::Material> fallbackMaterial, float_t padding, int32_t referenceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> fontAsset;

  /// @brief Field spriteAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MaterialReference, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, spriteAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, isDefaultMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, isFallbackMaterial) == 0x21, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, fallbackMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::MaterialReference, referenceCount) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MaterialReference, 0x38>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReference, "TMPro", "MaterialReference");
