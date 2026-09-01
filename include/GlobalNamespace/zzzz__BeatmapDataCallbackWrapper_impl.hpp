#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataCallbackWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(float_t, ::System::Type*, ::ArrayW<int32_t>)>(
    &::GlobalNamespace::BeatmapDataCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58c40fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCallbackWrapper.CallCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataCallbackWrapper::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_BasicBeatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasicBeatmapEventType;
}
constexpr ::System::Type* const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_BasicBeatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasicBeatmapEventType;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_BasicBeatmapEventType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BasicBeatmapEventType = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_basicBeatmapEventTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEventTypeId;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_basicBeatmapEventTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicBeatmapEventTypeId;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_basicBeatmapEventTypeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicBeatmapEventTypeId = value;
}
constexpr float_t& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr float_t const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aheadTime;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aheadTime = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_subtypeIdentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeIdentifiers;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_get_subtypeIdentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeIdentifiers;
}
constexpr void GlobalNamespace::BeatmapDataCallbackWrapper::__cordl_internal_set_subtypeIdentifiers(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subtypeIdentifiers = value;
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t> subtypeIdentifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aheadTime, BasicBeatmapEventType, subtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapDataCallbackWrapper::CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataCallbackWrapper*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData);
}
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapDataCallbackWrapper::New_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType,
                                                                                                            ::ArrayW<int32_t> subtypeIdentifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataCallbackWrapper*>(aheadTime, BasicBeatmapEventType, subtypeIdentifiers));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper::BeatmapDataCallbackWrapper() {}
