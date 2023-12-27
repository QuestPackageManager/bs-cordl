#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SdkAccountList)
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SdkAccountList);
// Type: Oculus.Platform.Models::SdkAccountList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1183 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13478))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13479)) CS Name: ::Oculus.Platform.Models::SdkAccountList*
class CORDL_TYPE SdkAccountList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::SdkAccountList* New_ctor(void* a);

  /// @brief Method .ctor addr 0x2708bd4 size 0x23c virtual false final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SdkAccountList(SdkAccountList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SdkAccountList(SdkAccountList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SdkAccountList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SdkAccountList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccountList*, "Oculus.Platform.Models", "SdkAccountList");
