#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\AssetReferenceTexture2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetReferenceTexture2D)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::AssetReferenceTexture2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::AssetReferenceTexture2D*, "UnityEngine.AddressableAssets", "AssetReferenceTexture2D");
// Dependencies UnityEngine.AddressableAssets.AssetReferenceT`1<TObject>
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.AssetReferenceTexture2D
class CORDL_TYPE AssetReferenceTexture2D : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::UnityEngine::Texture2D>> {
public:
  // Declarations
  static inline ::UnityEngine::AddressableAssets::AssetReferenceTexture2D* New_ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x6460240, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceTexture2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceTexture2D(AssetReferenceTexture2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceTexture2D(AssetReferenceTexture2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AddressableAssets::AssetReferenceTexture2D) == 0x40, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
