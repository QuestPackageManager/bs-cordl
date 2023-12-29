#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelFor)
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelFor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::IJobParallelFor);
// Type: Unity.Jobs::IJobParallelFor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Jobs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9897))
// CS Name: ::Unity.Jobs::IJobParallelFor*
class CORDL_TYPE IJobParallelFor {
public:
  // Declarations
  /// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelFor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelFor(IJobParallelFor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelFor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelFor(IJobParallelFor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::IJobParallelFor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::IJobParallelFor*, "Unity.Jobs", "IJobParallelFor");
