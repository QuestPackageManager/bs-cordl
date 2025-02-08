#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LeaderboardList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(LeaderboardList)
namespace Oculus::Platform::Models {
class Leaderboard;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LeaderboardList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LeaderboardList
class CORDL_TYPE LeaderboardList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Leaderboard*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::LeaderboardList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f96140, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardList(LeaderboardList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardList(LeaderboardList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LeaderboardList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardList*, "Oculus.Platform.Models", "LeaderboardList");
