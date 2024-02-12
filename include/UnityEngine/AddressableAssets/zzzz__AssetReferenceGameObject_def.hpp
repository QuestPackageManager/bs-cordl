#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceGameObject)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceGameObject);
// Type: UnityEngine.AddressableAssets::AssetReferenceGameObject
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8940)), TypeDefinitionIndex(TypeDefinitionIndex(14095)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14095), inst:
// 313 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(14096)) CS Name: ::UnityEngine.AddressableAssets::AssetReferenceGameObject*
class CORDL_TYPE AssetReferenceGameObject : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  static inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* New_ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x2a26630, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceGameObject(AssetReferenceGameObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceGameObject(AssetReferenceGameObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceGameObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceGameObject, 0x40>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceGameObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceGameObject*, "UnityEngine.AddressableAssets", "AssetReferenceGameObject");
