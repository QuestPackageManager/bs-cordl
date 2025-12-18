#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForBatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForBatch)
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelForBatch);
// Dependencies
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForBatch
class CORDL_TYPE IJobParallelForBatch {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(int32_t startIndex, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForBatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForBatch(IJobParallelForBatch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15480 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJobParallelForBatch);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelForBatch*, "Unity.Jobs", "IJobParallelForBatch");
