#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceAtlasedSprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceAtlasedSprite)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceAtlasedSprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite);
// Dependencies UnityEngine.AddressableAssets.AssetReferenceT`1<TObject>
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.AssetReferenceAtlasedSprite
class CORDL_TYPE AssetReferenceAtlasedSprite : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite*> {
public:
  // Declarations
  static inline ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite* New_ctor(::StringW guid);

  /// @brief Method ValidateAsset, addr 0x44f0b40, size 0x78, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x44f0bb8, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  /// @brief Method .ctor, addr 0x44f0ae8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceAtlasedSprite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceAtlasedSprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceAtlasedSprite(AssetReferenceAtlasedSprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceAtlasedSprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceAtlasedSprite(AssetReferenceAtlasedSprite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite, 0x40>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*, "UnityEngine.AddressableAssets", "AssetReferenceAtlasedSprite");
