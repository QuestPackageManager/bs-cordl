#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceTexture3D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceTexture3D)
namespace UnityEngine {
class Texture3D;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture3D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceTexture3D);
// Dependencies UnityEngine.AddressableAssets.AssetReferenceT`1<TObject>
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.AssetReferenceTexture3D
class CORDL_TYPE AssetReferenceTexture3D : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::UnityEngine::Texture3D>> {
public:
  // Declarations
  static inline ::UnityEngine::AddressableAssets::AssetReferenceTexture3D* New_ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x44ff91c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceTexture3D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceTexture3D(AssetReferenceTexture3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceTexture3D(AssetReferenceTexture3D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceTexture3D, 0x40>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceTexture3D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceTexture3D*, "UnityEngine.AddressableAssets", "AssetReferenceTexture3D");
