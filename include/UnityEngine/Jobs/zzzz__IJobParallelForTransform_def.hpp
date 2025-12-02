#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransform)
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Jobs::IJobParallelForTransform);
// Dependencies
namespace UnityEngine::Jobs {
// Is value type: false
// CS Name: UnityEngine.Jobs.IJobParallelForTransform
class CORDL_TYPE IJobParallelForTransform {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForTransform(IJobParallelForTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Jobs
NEED_NO_BOX(::UnityEngine::Jobs::IJobParallelForTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::IJobParallelForTransform*, "UnityEngine.Jobs", "IJobParallelForTransform");
