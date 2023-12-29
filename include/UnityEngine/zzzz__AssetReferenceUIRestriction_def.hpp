#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceUIRestriction)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUIRestriction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetReferenceUIRestriction);
// Type: UnityEngine::AssetReferenceUIRestriction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14316))
// CS Name: ::UnityEngine::AssetReferenceUIRestriction*
class CORDL_TYPE AssetReferenceUIRestriction : public ::System::Attribute {
public:
  // Declarations
  /// @brief Method ValidateAsset addr 0x28912bc size 0x8 virtual true final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset addr 0x28912c4 size 0x8 virtual true final false
  inline bool ValidateAsset(::StringW path);

  static inline ::UnityEngine::AssetReferenceUIRestriction* New_ctor();

  /// @brief Method .ctor addr 0x28912cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceUIRestriction(AssetReferenceUIRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceUIRestriction(AssetReferenceUIRestriction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceUIRestriction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetReferenceUIRestriction, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetReferenceUIRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUIRestriction*, "UnityEngine", "AssetReferenceUIRestriction");
