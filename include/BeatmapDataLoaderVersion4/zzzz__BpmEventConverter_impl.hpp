#pragma once
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BpmEventConverter_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BpmData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BpmEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::BpmEventConverter::*)(int32_t, ::GlobalNamespace::BpmTimeProcessor*)>(
    &::BeatmapDataLoaderVersion4::BpmEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14f6350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BpmEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (
    ::BeatmapDataLoaderVersion4::BpmEventConverter::*)(::BeatmapLevelSaveDataVersion4::BpmData*)>(&::BeatmapDataLoaderVersion4::BpmEventConverter::Convert)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x14f637c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::BpmData*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_get__songFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFrequency;
}
constexpr int32_t const& BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_get__songFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFrequency;
}
constexpr void BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_set__songFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songFrequency = value;
}
inline ::BeatmapDataLoaderVersion4::BpmEventConverter* BeatmapDataLoaderVersion4::BpmEventConverter::New_ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::BpmEventConverter*>(songFrequency, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::BpmEventConverter::_ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songFrequency, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion4::BpmEventConverter::Convert(::BeatmapLevelSaveDataVersion4::BpmData* bpmData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::BpmData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, bpmData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BpmEventConverter::BpmEventConverter() {}
