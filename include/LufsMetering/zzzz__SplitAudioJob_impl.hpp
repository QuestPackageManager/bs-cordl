#pragma once
// IWYU pragma private; include "LufsMetering/SplitAudioJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_impl.hpp"
#include "LufsMetering/zzzz__SplitAudioJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::LufsMetering::SplitAudioJob.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::SplitAudioJob (*)(
    ::Unity::Collections::NativeArray_1<float_t>, ::Unity::Collections::NativeArray_1<float_t>, int32_t, int32_t)>(&::LufsMetering::SplitAudioJob::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b6ed48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::SplitAudioJob>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::SplitAudioJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::SplitAudioJob::*)(int32_t)>(&::LufsMetering::SplitAudioJob::Execute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b6ed58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::SplitAudioJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::LufsMetering::SplitAudioJob LufsMetering::SplitAudioJob::Create(::Unity::Collections::NativeArray_1<float_t> interleavedData, ::Unity::Collections::NativeArray_1<float_t> channelData,
                                                                         int32_t numChannels, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::SplitAudioJob>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::SplitAudioJob, false>(nullptr, ___internal_method, interleavedData, channelData, numChannels, channel);
}
inline void LufsMetering::SplitAudioJob::Execute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::SplitAudioJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr LufsMetering::SplitAudioJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* LufsMetering::SplitAudioJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "channelData", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "interleavedData", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mumChannels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "channel", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LufsMetering::SplitAudioJob::SplitAudioJob(::Unity::Collections::NativeArray_1<float_t> channelData, ::Unity::Collections::NativeArray_1<float_t> interleavedData, int32_t mumChannels,
                                                       int32_t channel) noexcept {
  this->channelData = channelData;
  this->interleavedData = interleavedData;
  this->mumChannels = mumChannels;
  this->channel = channel;
}
// Ctor Parameters []
constexpr ::LufsMetering::SplitAudioJob::SplitAudioJob() {}
