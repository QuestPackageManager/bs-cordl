#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__AudioSaveData_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BpmData_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__LufsData_def.hpp"
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::AudioSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::AudioSaveData::*)()>(&::BeatmapLevelSaveDataVersion4::AudioSaveData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1326378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songChecksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songChecksum;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songChecksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songChecksum;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songChecksum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songChecksum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songSampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSampleCount;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songSampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSampleCount;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songSampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSampleCount = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songFrequency;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songFrequency;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songFrequency = value;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*>& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_bpmData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmData;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*> const&
BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_bpmData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmData;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_bpmData(::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bpmData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*>& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_lufsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lufsData;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*> const&
BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_lufsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lufsData;
}
constexpr void
BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_lufsData(::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lufsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapLevelSaveDataVersion4::AudioSaveData* BeatmapLevelSaveDataVersion4::AudioSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::AudioSaveData*>());
}
inline void BeatmapLevelSaveDataVersion4::AudioSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::AudioSaveData::AudioSaveData() {}
