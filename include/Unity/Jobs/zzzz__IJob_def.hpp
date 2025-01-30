#pragma once
// IWYU pragma private; include "Unity/Jobs/IJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IJob)
// Forward declare root types
namespace Unity::Jobs {
class IJob;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJob);
// Dependencies
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJob
class CORDL_TYPE IJob {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute();

  // Ctor Parameters [CppParam { name: "", ty: "IJob", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJob(IJob const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJob);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJob*, "Unity.Jobs", "IJob");
