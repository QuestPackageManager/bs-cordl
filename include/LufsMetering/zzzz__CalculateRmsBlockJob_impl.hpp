#pragma once
// IWYU pragma private; include "LufsMetering/CalculateRmsBlockJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "LufsMetering/zzzz__CalculateRmsBlockJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::LufsMetering::CalculateRmsBlockJob.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LufsMetering::CalculateRmsBlockJob (*)(::Unity::Collections::NativeArray_1<float_t>)>(&::LufsMetering::CalculateRmsBlockJob::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3267a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::CalculateRmsBlockJob>(), { "Create", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::CalculateRmsBlockJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LufsMetering::CalculateRmsBlockJob::*)()>(&::LufsMetering::CalculateRmsBlockJob::Execute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3267a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::CalculateRmsBlockJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline ::LufsMetering::CalculateRmsBlockJob LufsMetering::CalculateRmsBlockJob::Create(::Unity::Collections::NativeArray_1<float_t> inputData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::CalculateRmsBlockJob>(), { "Create", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::CalculateRmsBlockJob>(nullptr, ___internal_method, inputData);
}
inline void LufsMetering::CalculateRmsBlockJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::CalculateRmsBlockJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr LufsMetering::CalculateRmsBlockJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* LufsMetering::CalculateRmsBlockJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputData", ty: "float_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::LufsMetering::CalculateRmsBlockJob::CalculateRmsBlockJob(::Unity::Collections::NativeArray_1<float_t> inputData, float_t outputData) noexcept {
  this->inputData = inputData;
  this->outputData = outputData;
}
// Ctor Parameters []
constexpr ::LufsMetering::CalculateRmsBlockJob::CalculateRmsBlockJob() {}
