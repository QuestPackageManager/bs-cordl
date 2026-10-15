#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsSnapshotCondition.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsSnapshotCondition_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsSnapshotCondition_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350c344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c._ComputeHash_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::*)(
    ::System::ValueTuple_2<::StringW, float_t>, ::System::ValueTuple_2<::StringW, float_t>)>(&::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::_ComputeHash_b__9_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x350c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(),
                            { "<ComputeHash>b__9_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, float_t>>(), ::i2c::type_of<::System::ValueTuple_2<::StringW, float_t>>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::setStaticF___9(::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*, "<>9", ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(
      std::forward<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(value));
}
inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*, "<>9", ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>();
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::setStaticF___9__9_0(::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>*, "<>9__9_0", ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>* BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<::StringW, float_t>>*, "<>9__9_0", ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>();
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t
BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::_ComputeHash_b__9_0(/* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::ValueTuple_2<::StringW, float_t> a,
                                                                                   /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::ValueTuple_2<::StringW, float_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>(),
                                       { "<ComputeHash>b__9_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::StringW, float_t>>(), ::i2c::type_of<::System::ValueTuple_2<::StringW, float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c* BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition___c::SettingsSnapshotCondition___c() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::*)(int32_t)>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350bd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition.ShouldFire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::*)(::UnityEngine::Hash128)>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ShouldFire)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x350c0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "ShouldFire", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition.RecordFired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::*)(::UnityEngine::Hash128)>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::RecordFired)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x350c1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "RecordFired", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition.ClearPersistedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ClearPersistedState)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x350c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "ClearPersistedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::StringW, float_t>>*, ::StringW)>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ComputeHash)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x350bd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(),
                            { "ComputeHash", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::StringW, float_t>>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::Analytics::Settings::SettingsSnapshotCondition::__cordl_internal_get__todayInDays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____todayInDays;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::SettingsSnapshotCondition::__cordl_internal_get__todayInDays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____todayInDays;
}
constexpr void BeatSaber::Analytics::Settings::SettingsSnapshotCondition::__cordl_internal_set__todayInDays(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____todayInDays = value;
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition::_ctor(int32_t todayInDays) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, todayInDays);
}
inline bool BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ShouldFire(::UnityEngine::Hash128 currentHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "ShouldFire", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentHash);
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition::RecordFired(::UnityEngine::Hash128 currentHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "RecordFired", {}, { ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentHash);
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ClearPersistedState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(), { "ClearPersistedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Hash128 BeatSaber::Analytics::Settings::SettingsSnapshotCondition::ComputeHash(
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::StringW, float_t>>* metrics, ::StringW extraPayload) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(),
                          { "ComputeHash", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::StringW, float_t>>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, metrics, extraPayload);
}
inline ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition* BeatSaber::Analytics::Settings::SettingsSnapshotCondition::New_ctor(int32_t todayInDays) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsSnapshotCondition*>(todayInDays));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsSnapshotCondition::SettingsSnapshotCondition() {}
