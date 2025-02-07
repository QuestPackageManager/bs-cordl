#pragma once
// IWYU pragma private; include "LufsMetering/CalculateRmsBlockJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CalculateRmsBlockJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace LufsMetering {
struct CalculateRmsBlockJob;
}
// Write type traits
MARK_VAL_T(::LufsMetering::CalculateRmsBlockJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJob
namespace LufsMetering {
// Is value type: true
// CS Name: LufsMetering.CalculateRmsBlockJob
struct CORDL_TYPE CalculateRmsBlockJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Create, addr 0x3b78cd0, size 0xc, virtual false, abstract: false, final false
  static inline ::LufsMetering::CalculateRmsBlockJob Create(::Unity::Collections::NativeArray_1<float_t> inputData);

  /// @brief Method Execute, addr 0x3b78cdc, size 0xb4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CalculateRmsBlockJob();

  // Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "outputData", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr CalculateRmsBlockJob(::Unity::Collections::NativeArray_1<float_t> inputData, float_t outputData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field inputData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> inputData;

  /// @brief Field outputData, offset: 0x10, size: 0x4, def value: None
  float_t outputData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LufsMetering::CalculateRmsBlockJob, inputData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsBlockJob, outputData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LufsMetering::CalculateRmsBlockJob, 0x18>, "Size mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::CalculateRmsBlockJob, "LufsMetering", "CalculateRmsBlockJob");
