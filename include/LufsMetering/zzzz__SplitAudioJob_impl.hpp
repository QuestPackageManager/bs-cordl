#pragma once
// IWYU pragma private; include "LufsMetering\SplitAudioJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "LufsMetering/zzzz__SplitAudioJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::LufsMetering::SplitAudioJob.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LufsMetering::SplitAudioJob (*)(::Unity::Collections::NativeArray_1<float_t>, ::Unity::Collections::NativeArray_1<float_t>, int32_t, int32_t)>(
    &::LufsMetering::SplitAudioJob::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3268170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::SplitAudioJob>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::SplitAudioJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LufsMetering::SplitAudioJob::*)(int32_t)>(&::LufsMetering::SplitAudioJob::Execute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3268180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::SplitAudioJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::LufsMetering::SplitAudioJob LufsMetering::SplitAudioJob::Create(::Unity::Collections::NativeArray_1<float_t> interleavedData, ::Unity::Collections::NativeArray_1<float_t> channelData,
                                                                         int32_t numChannels, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::SplitAudioJob>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<float_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::SplitAudioJob>(nullptr, ___internal_method, interleavedData, channelData, numChannels, channel);
}
inline void LufsMetering::SplitAudioJob::Execute(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::SplitAudioJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr LufsMetering::SplitAudioJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* LufsMetering::SplitAudioJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
