#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeList)
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13426)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1171 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13430))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13427)) CS Name: ::Oculus.Platform.Models::ChallengeList*
class CORDL_TYPE ChallengeList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Challenge*> {
public:
  // Declarations
  /// @brief Field TotalCount, offset 0x28, size 0x8
  __declspec(property(get = __get_TotalCount, put = __set_TotalCount)) uint64_t TotalCount;

  constexpr uint64_t& __get_TotalCount();

  constexpr uint64_t const& __get_TotalCount() const;

  constexpr void __set_TotalCount(uint64_t value);

  static inline ::Oculus::Platform::Models::ChallengeList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x270555c, size 0x27c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeList(ChallengeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeList(ChallengeList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeList();

public:
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
