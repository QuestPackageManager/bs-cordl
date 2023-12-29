#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPurchaseList)
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchaseList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPurchaseList);
// Type: Oculus.Platform::MessageWithPurchaseList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 964 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13532))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13336)) CS Name: ::Oculus.Platform::MessageWithPurchaseList*
class CORDL_TYPE MessageWithPurchaseList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithPurchaseList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x259381c size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetPurchaseList addr 0x2597c3c size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList();

  /// @brief Method GetDataFromMessage addr 0x2597c78 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::PurchaseList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPurchaseList(MessageWithPurchaseList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPurchaseList(MessageWithPurchaseList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPurchaseList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPurchaseList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPurchaseList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPurchaseList*, "Oculus.Platform", "MessageWithPurchaseList");
