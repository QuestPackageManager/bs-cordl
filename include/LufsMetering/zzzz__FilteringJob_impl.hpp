#pragma once
// IWYU pragma private; include "LufsMetering\FilteringJob.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "LufsMetering/zzzz__FilteringJob_def.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::LufsMetering::FilteringJob._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LufsMetering::FilteringJob::*)(::Unity::Collections::NativeArray_1<float_t>, ::Unity::Collections::NativeArray_1<float_t>,
                                                                                              ::LufsMetering::FilterCoefficients)>(&::LufsMetering::FilteringJob::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x326819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::FilteringJob>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(),
                                                                 ::i2c::type_of<::LufsMetering::FilterCoefficients>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::FilteringJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LufsMetering::FilteringJob::*)()>(&::LufsMetering::FilteringJob::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32681b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::FilteringJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void LufsMetering::FilteringJob::_ctor(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData,
                                              ::LufsMetering::FilterCoefficients coefficients) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::FilteringJob>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(),
                                                               ::i2c::type_of<::LufsMetering::FilterCoefficients>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputData, outputData, coefficients);
}
inline void LufsMetering::FilteringJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::FilteringJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr LufsMetering::FilteringJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* LufsMetering::FilteringJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "coefficients", ty:
// "::LufsMetering::FilterCoefficients", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::LufsMetering::FilteringJob::FilteringJob(::Unity::Collections::NativeArray_1<float_t> inputData, ::LufsMetering::FilterCoefficients coefficients,
                                                     ::Unity::Collections::NativeArray_1<float_t> outputData) noexcept {
  this->inputData = inputData;
  this->coefficients = coefficients;
  this->outputData = outputData;
}
// Ctor Parameters []
constexpr ::LufsMetering::FilteringJob::FilteringJob() {}
