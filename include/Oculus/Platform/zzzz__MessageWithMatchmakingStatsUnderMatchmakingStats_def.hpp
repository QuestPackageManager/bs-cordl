#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithMatchmakingStatsUnderMatchmakingStats)
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingStatsUnderMatchmakingStats;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats);
// Type: Oculus.Platform::MessageWithMatchmakingStatsUnderMatchmakingStats
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13404)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4575 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13214)) CS Name: ::Oculus.Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*
class CORDL_TYPE MessageWithMatchmakingStatsUnderMatchmakingStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingStats*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2718d34, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetMatchmakingStats, addr 0x271c664, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingStats* GetMatchmakingStats();

  /// @brief Method GetDataFromMessage, addr 0x271c6a0, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MatchmakingStats* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingStatsUnderMatchmakingStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithMatchmakingStatsUnderMatchmakingStats(MessageWithMatchmakingStatsUnderMatchmakingStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingStatsUnderMatchmakingStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithMatchmakingStatsUnderMatchmakingStats(MessageWithMatchmakingStatsUnderMatchmakingStats const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithMatchmakingStatsUnderMatchmakingStats();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*, "Oculus.Platform", "MessageWithMatchmakingStatsUnderMatchmakingStats");
