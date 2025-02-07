#pragma once
// IWYU pragma private; include "LufsMetering/CalculateRmsBlockJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJob_impl.hpp"
#include "LufsMetering/zzzz__CalculateRmsBlockJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::LufsMetering::CalculateRmsBlockJob.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::CalculateRmsBlockJob (*)(::Unity::Collections::NativeArray_1<float_t>)>(
    &::LufsMetering::CalculateRmsBlockJob::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b78cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsBlockJob>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::CalculateRmsBlockJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::CalculateRmsBlockJob::*)()>(&::LufsMetering::CalculateRmsBlockJob::Execute)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3b78cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsBlockJob>::get(), "Execute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::LufsMetering::CalculateRmsBlockJob LufsMetering::CalculateRmsBlockJob::Create(::Unity::Collections::NativeArray_1<float_t> inputData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsBlockJob>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::CalculateRmsBlockJob, false>(nullptr, ___internal_method, inputData);
}
inline void LufsMetering::CalculateRmsBlockJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::CalculateRmsBlockJob>::get(), "Execute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr LufsMetering::CalculateRmsBlockJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* LufsMetering::CalculateRmsBlockJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "inputData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputData", ty: "float_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::LufsMetering::CalculateRmsBlockJob::CalculateRmsBlockJob(::Unity::Collections::NativeArray_1<float_t> inputData, float_t outputData) noexcept {
  this->inputData = inputData;
  this->outputData = outputData;
}
// Ctor Parameters []
constexpr ::LufsMetering::CalculateRmsBlockJob::CalculateRmsBlockJob() {}
