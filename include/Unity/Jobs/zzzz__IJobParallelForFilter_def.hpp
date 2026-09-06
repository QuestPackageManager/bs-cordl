#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForFilter)
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelForFilter;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::IJobParallelForFilter*);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobParallelForFilter*, "Unity.Jobs", "IJobParallelForFilter");
// [Obsolete("\'IJobParallelForFilter\' has been deprecated; use \'IJobFilter\' instead. (UnityUpgradable) -> IJobFilter")]
// Dependencies
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForFilter
class CORDL_TYPE IJobParallelForFilter {
public:
  // Declarations
  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForFilter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForFilter(IJobParallelForFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
