#pragma once
// IWYU pragma private; include "LufsMetering/CalculateRmsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_impl.hpp"
#include "LufsMetering/zzzz__CalculateRmsJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::LufsMetering::CalculateRmsJob._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::CalculateRmsJob::*)(
    ::Unity::Collections::NativeArray_1<float_t>, ::Unity::Collections::NativeArray_1<float_t>, float_t, float_t, int32_t)>(&::LufsMetering::CalculateRmsJob::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b73978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsJob>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::CalculateRmsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::CalculateRmsJob::*)(int32_t)>(&::LufsMetering::CalculateRmsJob::Execute)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3b7398c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void LufsMetering::CalculateRmsJob::_ctor(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData, float_t step, float_t timeGate,
                                                 int32_t rate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsJob>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputData, outputData, step, timeGate, rate);
}
inline void LufsMetering::CalculateRmsJob::Execute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr LufsMetering::CalculateRmsJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* LufsMetering::CalculateRmsJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputData", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "step", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeGate",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rate", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LufsMetering::CalculateRmsJob::CalculateRmsJob(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData, float_t step,
                                                           float_t timeGate, int32_t rate) noexcept {
  this->inputData = inputData;
  this->outputData = outputData;
  this->step = step;
  this->timeGate = timeGate;
  this->rate = rate;
}
// Ctor Parameters []
constexpr ::LufsMetering::CalculateRmsJob::CalculateRmsJob() {}
