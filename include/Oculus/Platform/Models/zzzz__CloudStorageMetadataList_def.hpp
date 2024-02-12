#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageMetadataList)
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CloudStorageMetadataList);
// Type: Oculus.Platform.Models::CloudStorageMetadataList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13366)), TypeDefinitionIndex(TypeDefinitionIndex(13369)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13369), inst:
// 1151 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13367)) CS Name: ::Oculus.Platform.Models::CloudStorageMetadataList*
class CORDL_TYPE CloudStorageMetadataList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::CloudStorageMetadata*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::CloudStorageMetadataList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x273873c, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorageMetadataList(CloudStorageMetadataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorageMetadataList(CloudStorageMetadataList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageMetadataList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CloudStorageMetadataList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageMetadataList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageMetadataList*, "Oculus.Platform.Models", "CloudStorageMetadataList");
