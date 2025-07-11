#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LeaderboardEntryList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntryList)
namespace Oculus::Platform::Models {
class LeaderboardEntry;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LeaderboardEntryList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LeaderboardEntryList
class CORDL_TYPE LeaderboardEntryList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::LeaderboardEntry*> {
public:
  // Declarations
  /// @brief Field TotalCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_TotalCount, put = __cordl_internal_set_TotalCount)) uint64_t TotalCount;

  static inline ::Oculus::Platform::Models::LeaderboardEntryList* New_ctor(::System::IntPtr a);

  constexpr uint64_t const& __cordl_internal_get_TotalCount() const;

  constexpr uint64_t& __cordl_internal_get_TotalCount();

  constexpr void __cordl_internal_set_TotalCount(uint64_t value);

  /// @brief Method .ctor, addr 0x3f91c9c, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntryList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntryList(LeaderboardEntryList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntryList(LeaderboardEntryList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15541 };

  /// @brief Field TotalCount, offset: 0x28, size: 0x8, def value: None
  uint64_t ___TotalCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntryList, ___TotalCount) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LeaderboardEntryList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardEntryList*, "Oculus.Platform.Models", "LeaderboardEntryList");
