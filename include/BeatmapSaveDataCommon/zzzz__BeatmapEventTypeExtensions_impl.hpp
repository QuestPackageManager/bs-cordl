#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon\BeatmapEventTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventTypeExtensions_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions.GetSpecialEventTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* (*)()>(
    &::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::GetSpecialEventTypes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x375fd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>(), { "GetSpecialEventTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::*)()>(&::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375fe6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataCommon::BeatmapEventTypeExtensions::GetSpecialEventTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>(), { "GetSpecialEventTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*>(nullptr, ___internal_method);
}
inline void BeatmapSaveDataCommon::BeatmapEventTypeExtensions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions* BeatmapSaveDataCommon::BeatmapEventTypeExtensions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*>());
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions::BeatmapEventTypeExtensions() {}
