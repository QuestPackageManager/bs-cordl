#pragma once
// IWYU pragma private; include "LufsMetering/FilteringJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FilteringJob)
namespace LufsMetering {
struct FilterCoefficients;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace LufsMetering {
struct FilteringJob;
}
// Write type traits
MARK_VAL_T(::LufsMetering::FilteringJob);
// Type: LufsMetering::FilteringJob
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: true
// CS Name: ::LufsMetering::FilteringJob
struct CORDL_TYPE FilteringJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x26d7aac, size 0xb4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method .ctor, addr 0x26d7a90, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData, ::LufsMetering::FilterCoefficients coefficients);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilteringJob();

  // Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "coefficients", ty:
  // "::LufsMetering::FilterCoefficients", modifiers: "", def_value: None }, CppParam { name: "outputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }]
  constexpr FilteringJob(::Unity::Collections::NativeArray_1<float_t> inputData, ::LufsMetering::FilterCoefficients coefficients, ::Unity::Collections::NativeArray_1<float_t> outputData) noexcept;

  /// @brief Field inputData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> inputData;

  /// @brief Field coefficients, offset: 0x10, size: 0x18, def value: None
  ::LufsMetering::FilterCoefficients coefficients;

  /// @brief Field outputData, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> outputData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::FilteringJob, 0x38>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::FilteringJob, inputData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilteringJob, coefficients) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::FilteringJob, outputData) == 0x28, "Offset mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::FilteringJob, "LufsMetering", "FilteringJob");
