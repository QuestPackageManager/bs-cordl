#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardEntryList)
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardEntryList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardEntryList);
// Type: Oculus.Platform::MessageWithLeaderboardEntryList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 976 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)),
// TypeDefinitionIndex(TypeDefinitionIndex(13450))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13299)) CS Name: ::Oculus.Platform::MessageWithLeaderboardEntryList*
class CORDL_TYPE MessageWithLeaderboardEntryList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLeaderboardEntryList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26ef2f0 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLeaderboardEntryList addr 0x26f22e0 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();

  /// @brief Method GetDataFromMessage addr 0x26f231c size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLeaderboardEntryList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardEntryList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardEntryList*, "Oculus.Platform", "MessageWithLeaderboardEntryList");
