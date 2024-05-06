#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CalculateRmsJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace LufsMetering {
struct CalculateRmsJob;
}
// Write type traits
MARK_VAL_T(::LufsMetering::CalculateRmsJob);
// Type: LufsMetering::CalculateRmsJob
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: true
// CS Name: ::LufsMetering::CalculateRmsJob
struct CORDL_TYPE CalculateRmsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x26a800c, size 0x288, virtual true, abstract: false, final true
  inline void Execute(int32_t i);

  /// @brief Method .ctor, addr 0x26a7ff8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData, float_t step, float_t timeGate, int32_t rate);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CalculateRmsJob();

  // Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "outputData", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "step", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeGate", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "rate", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CalculateRmsJob(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData, float_t step, float_t timeGate, int32_t rate) noexcept;

  /// @brief Field inputData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> inputData;

  /// @brief Field outputData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> outputData;

  /// @brief Field step, offset: 0x20, size: 0x4, def value: None
  float_t step;

  /// @brief Field timeGate, offset: 0x24, size: 0x4, def value: None
  float_t timeGate;

  /// @brief Field rate, offset: 0x28, size: 0x4, def value: None
  int32_t rate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::CalculateRmsJob, 0x30>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsJob, inputData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsJob, outputData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsJob, step) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsJob, timeGate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::CalculateRmsJob, rate) == 0x28, "Offset mismatch!");

} // namespace LufsMetering
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::CalculateRmsJob, "LufsMetering", "CalculateRmsJob");
