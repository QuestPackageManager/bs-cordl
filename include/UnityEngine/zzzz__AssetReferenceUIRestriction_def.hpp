#pragma once
// IWYU pragma private; include "UnityEngine/AssetReferenceUIRestriction.hpp"
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AssetReferenceUIRestriction*
class CORDL_TYPE AssetReferenceUIRestriction : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::AssetReferenceUIRestriction* New_ctor();

  /// @brief Method ValidateAsset, addr 0x447a874, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x447a87c, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  /// @brief Method .ctor, addr 0x447a884, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceUIRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceUIRestriction(AssetReferenceUIRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceUIRestriction(AssetReferenceUIRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetReferenceUIRestriction, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetReferenceUIRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUIRestriction*, "UnityEngine", "AssetReferenceUIRestriction");
