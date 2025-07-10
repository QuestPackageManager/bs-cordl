#pragma once
// IWYU pragma private; include "LufsMetering/FilteringJob.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJob_impl.hpp"
#include "LufsMetering/zzzz__FilteringJob_def.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::LufsMetering::FilteringJob._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::FilteringJob::*)(
    ::Unity::Collections::NativeArray_1<float_t>, ::Unity::Collections::NativeArray_1<float_t>, ::LufsMetering::FilterCoefficients)>(&::LufsMetering::FilteringJob::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b73958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::FilteringJob>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LufsMetering::FilterCoefficients>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::FilteringJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::FilteringJob::*)()>(&::LufsMetering::FilteringJob::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3b73974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::FilteringJob>::get(), "Execute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void LufsMetering::FilteringJob::_ctor(::Unity::Collections::NativeArray_1<float_t> inputData, ::Unity::Collections::NativeArray_1<float_t> outputData,
                                              ::LufsMetering::FilterCoefficients coefficients) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::FilteringJob>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LufsMetering::FilterCoefficients>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputData, outputData, coefficients);
}
inline void LufsMetering::FilteringJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::FilteringJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr LufsMetering::FilteringJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* LufsMetering::FilteringJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
