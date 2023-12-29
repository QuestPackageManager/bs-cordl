#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithChallengeEntryList)
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallengeEntryList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallengeEntryList);
// Type: Oculus.Platform::MessageWithChallengeEntryList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), TypeDefinitionIndex(TypeDefinitionIndex(13470)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst:
// 4480 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13293)) CS Name: ::Oculus.Platform::MessageWithChallengeEntryList*
class CORDL_TYPE MessageWithChallengeEntryList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeEntryList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithChallengeEntryList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592c6c size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetChallengeEntryList addr 0x25954ac size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList();

  /// @brief Method GetDataFromMessage addr 0x25954e8 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::ChallengeEntryList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithChallengeEntryList(MessageWithChallengeEntryList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithChallengeEntryList(MessageWithChallengeEntryList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithChallengeEntryList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallengeEntryList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeEntryList*, "Oculus.Platform", "MessageWithChallengeEntryList");
