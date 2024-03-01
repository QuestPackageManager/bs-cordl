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
// CS Name: ::Oculus.Platform::MessageWithLeaderboardEntryList*
class CORDL_TYPE MessageWithLeaderboardEntryList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x27e3c24, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetDataFromMessage(void* c_message);

  /// @brief Method GetLeaderboardEntryList, addr 0x27e3be8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();

  static inline ::Oculus::Platform::MessageWithLeaderboardEntryList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27e0bf8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLeaderboardEntryList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardEntryList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardEntryList*, "Oculus.Platform", "MessageWithLeaderboardEntryList");
