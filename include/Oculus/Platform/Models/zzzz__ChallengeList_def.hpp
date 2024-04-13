#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeList)
namespace Oculus::Platform::Models {
class Challenge;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ChallengeList);
// Type: Oculus.Platform.Models::ChallengeList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::ChallengeList*
class CORDL_TYPE ChallengeList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Challenge*> {
public:
  // Declarations
  /// @brief Field TotalCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_TotalCount, put = __cordl_internal_set_TotalCount)) uint64_t TotalCount;

  static inline ::Oculus::Platform::Models::ChallengeList* New_ctor(void* a);

  constexpr uint64_t const& __cordl_internal_get_TotalCount() const;

  constexpr uint64_t& __cordl_internal_get_TotalCount();

  constexpr void __cordl_internal_set_TotalCount(uint64_t value);

  /// @brief Method .ctor, addr 0x29dce60, size 0x27c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeList(ChallengeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeList(ChallengeList const&) = delete;

  /// @brief Field TotalCount, offset: 0x28, size: 0x8, def value: None
  uint64_t ___TotalCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ChallengeList, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeList, ___TotalCount) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeList*, "Oculus.Platform.Models", "ChallengeList");
