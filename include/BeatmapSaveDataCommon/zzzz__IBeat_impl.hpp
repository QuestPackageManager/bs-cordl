#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/IBeat.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::IBeat.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataCommon::IBeat::*)()>(&::BeatmapSaveDataCommon::IBeat::get_beat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::IBeat*>(), { ::i2c::class_of<::BeatmapSaveDataCommon::IBeat*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::IBeat.System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataCommon::IBeat::*)(::BeatmapSaveDataCommon::IBeat*)>(
    &::BeatmapSaveDataCommon::IBeat::System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x375b724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::IBeat*>(),
                                                             { "System.IComparable<BeatmapSaveDataCommon.IBeat>.CompareTo", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::IBeat*>() } })));
    return ___internal_method;
  }
};
inline float_t BeatmapSaveDataCommon::IBeat::get_beat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataCommon::IBeat*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataCommon::IBeat::System_IComparable_BeatmapSaveDataCommon_IBeat__CompareTo(::BeatmapSaveDataCommon::IBeat* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataCommon::IBeat*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataCommon::IBeat::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataCommon::IBeat::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
