#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PurchaseList)
// Forward declare root types
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PurchaseList);
// Type: Oculus.Platform.Models::PurchaseList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1182 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13475))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13476)) CS Name: ::Oculus.Platform.Models::PurchaseList*
class CORDL_TYPE PurchaseList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Purchase*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::PurchaseList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x2708874, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PurchaseList(PurchaseList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PurchaseList(PurchaseList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PurchaseList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PurchaseList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PurchaseList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PurchaseList*, "Oculus.Platform.Models", "PurchaseList");
