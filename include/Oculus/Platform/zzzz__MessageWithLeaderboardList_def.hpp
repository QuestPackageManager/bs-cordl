#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardList)
namespace Oculus::Platform::Models {
class LeaderboardList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardList);
// Type: Oculus.Platform::MessageWithLeaderboardList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithLeaderboardList*
class CORDL_TYPE MessageWithLeaderboardList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x29cab48, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetDataFromMessage(void* c_message);

  /// @brief Method GetLeaderboardList, addr 0x29cab0c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();

  static inline ::Oculus::Platform::MessageWithLeaderboardList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x29c7b9c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLeaderboardList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLeaderboardList(MessageWithLeaderboardList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLeaderboardList(MessageWithLeaderboardList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardList*, "Oculus.Platform", "MessageWithLeaderboardList");
