#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLeaderboardList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLeaderboardList)
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLeaderboardList
class CORDL_TYPE MessageWithLeaderboardList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7da40, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLeaderboardList, addr 0x3f7da04, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList();

  static inline ::Oculus::Platform::MessageWithLeaderboardList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7abfc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardList*, "Oculus.Platform", "MessageWithLeaderboardList");
