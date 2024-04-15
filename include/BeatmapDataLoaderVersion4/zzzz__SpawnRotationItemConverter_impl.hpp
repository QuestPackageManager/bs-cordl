#pragma once
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__SpawnRotationItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__SpawnRotation_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::SpawnRotationItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*>, ::GlobalNamespace::IBeatToTimeConverter*)>(
    &::BeatmapDataLoaderVersion4::SpawnRotationItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14045d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (
    ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter::*)(::BeatmapSaveDataVersion4::BeatIndex*)>(&::BeatmapDataLoaderVersion4::SpawnRotationItemConverter::Convert)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1404604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*>&
BeatmapDataLoaderVersion4::SpawnRotationItemConverter::__cordl_internal_get__spawnRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotations;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> const&
BeatmapDataLoaderVersion4::SpawnRotationItemConverter::__cordl_internal_get__spawnRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotations;
}
constexpr void BeatmapDataLoaderVersion4::SpawnRotationItemConverter::__cordl_internal_set__spawnRotations(
    ::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*
BeatmapDataLoaderVersion4::SpawnRotationItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> spawnRotations,
                                                                ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*>(spawnRotations, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::SpawnRotationItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*> spawnRotations,
                                                                         ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::SpawnRotation, ::Array<::BeatmapSaveDataVersion4::SpawnRotation>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spawnRotations, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion4::SpawnRotationItemConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::SpawnRotationItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::SpawnRotationItemConverter::SpawnRotationItemConverter() {}
