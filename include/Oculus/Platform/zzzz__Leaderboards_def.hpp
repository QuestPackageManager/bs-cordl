#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboards)
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Leaderboards;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Leaderboards);
// Type: Oculus.Platform::Leaderboards
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Leaderboards*
class CORDL_TYPE Leaderboards : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x29ce810, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* Get(::StringW leaderboardName);

  /// @brief Method GetEntries, addr 0x29ce970, size 0x188, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter,
                                                                                                             ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method GetEntriesAfterRank, addr 0x29ceaf8, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank);

  /// @brief Method GetEntriesByIds, addr 0x29cec70, size 0x19c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*
  GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs);

  /// @brief Method GetNextEntries, addr 0x29ce518, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetNextEntries(::Oculus::Platform::Models::LeaderboardEntryList* list);

  /// @brief Method GetNextLeaderboardListPage, addr 0x29cf14c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* GetNextLeaderboardListPage(::Oculus::Platform::Models::LeaderboardList* list);

  /// @brief Method GetPreviousEntries, addr 0x29ce694, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::LeaderboardEntryList* list);

  /// @brief Method WriteEntry, addr 0x29cee0c, size 0x19c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<bool>* WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, bool forceUpdate);

  /// @brief Method WriteEntryWithSupplementaryMetric, addr 0x29cefa8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<bool>* WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric,
                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> extraData, bool forceUpdate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Leaderboards();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Leaderboards(Leaderboards&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Leaderboards(Leaderboards const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Leaderboards, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Leaderboards);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Leaderboards*, "Oculus.Platform", "Leaderboards");
