#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/AssetReferenceUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceUtilities)
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class AssetReferenceUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities);
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Utility.AssetReferenceUtilities
class CORDL_TYPE AssetReferenceUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FormatName, addr 0x62ae948, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW FormatName(::StringW name);

  static inline ::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x62ae9e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceUtilities(AssetReferenceUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceUtilities(AssetReferenceUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19553 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*, "UnityEngine.AddressableAssets.Utility", "AssetReferenceUtilities");
