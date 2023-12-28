#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceTexture3D)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture3D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceTexture3D);
// Type: UnityEngine.AddressableAssets::AssetReferenceTexture3D
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14082), inst: 778 }), TypeDefinitionIndex(TypeDefinitionIndex(10075)),
// TypeDefinitionIndex(TypeDefinitionIndex(14082))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14086)) CS Name: ::UnityEngine.AddressableAssets::AssetReferenceTexture3D*
class CORDL_TYPE AssetReferenceTexture3D : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture3D*> {
public:
  // Declarations
  static inline ::UnityEngine::AddressableAssets::AssetReferenceTexture3D* New_ctor(::StringW guid);

  /// @brief Method .ctor addr 0x2a23bcc size 0x58 virtual false final false
  inline void _ctor(::StringW guid);

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceTexture3D(AssetReferenceTexture3D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceTexture3D(AssetReferenceTexture3D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceTexture3D();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceTexture3D, 0x40>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceTexture3D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceTexture3D*, "UnityEngine.AddressableAssets", "AssetReferenceTexture3D");
