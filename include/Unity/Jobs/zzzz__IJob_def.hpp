#pragma once
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
// Type: Unity.Jobs::IJob
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Jobs {
// Is value type: false
// CS Name: ::Unity.Jobs::IJob*
class CORDL_TYPE IJob {
public:
  // Declarations
  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute();

  // Ctor Parameters [CppParam { name: "", ty: "IJob", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJob(IJob&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJob", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJob(IJob const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJob);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJob*, "Unity.Jobs", "IJob");
