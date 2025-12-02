#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ZBinningJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBinningJob_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ZBinningJob.EncodeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::Universal::ZBinningJob::EncodeHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a7940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "EncodeHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ZBinningJob.DecodeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<uint32_t, uint32_t> (*)(uint32_t)>(
    &::UnityEngine::Rendering::Universal::ZBinningJob::DecodeHeader)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66a7948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "DecodeHeader",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ZBinningJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ZBinningJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ZBinningJob::Execute)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66a7994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ZBinningJob.FillZBins
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ZBinningJob::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::ZBinningJob::FillZBins)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x66a7aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "FillZBins", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::Universal::ZBinningJob::EncodeHeader(uint32_t min, uint32_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "EncodeHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, min, max);
}
inline ::System::ValueTuple_2<uint32_t, uint32_t> UnityEngine::Rendering::Universal::ZBinningJob::DecodeHeader(uint32_t zBin) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "DecodeHeader",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint32_t, uint32_t>, false>(nullptr, ___internal_method, zBin);
}
inline void UnityEngine::Rendering::Universal::ZBinningJob::Execute(int32_t jobIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobIndex);
}
inline void UnityEngine::Rendering::Universal::ZBinningJob::FillZBins(int32_t binStart, int32_t binEnd, int32_t itemStart, int32_t itemEnd, int32_t headerIndex, int32_t itemOffset,
                                                                      int32_t binOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "FillZBins", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binStart, binEnd, itemStart, itemEnd, headerIndex, itemOffset, binOffset);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::ZBinningJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::ZBinningJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "bins", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minMaxZs", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "zBinScale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "zBinOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "binCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "wordsPerTile", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reflectionProbeCount",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "isOrthographic", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ZBinningJob::ZBinningJob(::Unity::Collections::NativeArray_1<uint32_t> bins, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs,
                                                                        float_t zBinScale, float_t zBinOffset, int32_t binCount, int32_t wordsPerTile, int32_t lightCount, int32_t reflectionProbeCount,
                                                                        int32_t batchCount, int32_t viewCount, bool isOrthographic) noexcept {
  this->bins = bins;
  this->minMaxZs = minMaxZs;
  this->zBinScale = zBinScale;
  this->zBinOffset = zBinOffset;
  this->binCount = binCount;
  this->wordsPerTile = wordsPerTile;
  this->lightCount = lightCount;
  this->reflectionProbeCount = reflectionProbeCount;
  this->batchCount = batchCount;
  this->viewCount = viewCount;
  this->isOrthographic = isOrthographic;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ZBinningJob::ZBinningJob() {}
