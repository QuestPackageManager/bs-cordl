#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelFilter.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilter___c::*)()>(&::GlobalNamespace::LevelFilter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c._FilterLevelByText_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (::GlobalNamespace::LevelFilter___c::*)(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>, ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>)>(
        &::GlobalNamespace::LevelFilter___c::_FilterLevelByText_b__15_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x372c3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c*>(), { "<FilterLevelByText>b__15_0",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>(),
                                                                                                            ::i2c::type_of<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter___c::setStaticF___9(::GlobalNamespace::LevelFilter___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LevelFilter___c*, "<>9", ::GlobalNamespace::LevelFilter___c*>(std::forward<::GlobalNamespace::LevelFilter___c*>(value));
}
inline ::GlobalNamespace::LevelFilter___c* GlobalNamespace::LevelFilter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LevelFilter___c*, "<>9", ::GlobalNamespace::LevelFilter___c*>();
}
inline void GlobalNamespace::LevelFilter___c::setStaticF___9__15_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*, "<>9__15_0", ::GlobalNamespace::LevelFilter___c*>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* GlobalNamespace::LevelFilter___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*, "<>9__15_0", ::GlobalNamespace::LevelFilter___c*>();
}
inline void GlobalNamespace::LevelFilter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LevelFilter___c::_FilterLevelByText_b__15_0(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> x,
                                                                            ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c*>(), { "<FilterLevelByText>b__15_0",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>(),
                                                                                                          ::i2c::type_of<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::LevelFilter___c* GlobalNamespace::LevelFilter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilter___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c::LevelFilter___c() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilter___c__DisplayClass14_0::*)()>(&::GlobalNamespace::LevelFilter___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372c1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_0._FilterLevelsAsync_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelFilter___c__DisplayClass14_0::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::LevelFilter___c__DisplayClass14_0::_FilterLevelsAsync_b__3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x372c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>(),
                                                                                           { "<FilterLevelsAsync>b__3", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_get_characteristicFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr ::StringW const& GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_get_characteristicFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_set_characteristicFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristicFilter = value;
}
inline void GlobalNamespace::LevelFilter___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilter___c__DisplayClass14_0::_FilterLevelsAsync_b__3(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>(),
                                                                                         { "<FilterLevelsAsync>b__3", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characteristic);
}
inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_0* GlobalNamespace::LevelFilter___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c__DisplayClass14_0::LevelFilter___c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilter___c__DisplayClass14_1::*)()>(&::GlobalNamespace::LevelFilter___c__DisplayClass14_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_1._FilterLevelsAsync_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelFilter___c__DisplayClass14_1::*)(
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::LevelFilter___c__DisplayClass14_1::_FilterLevelsAsync_b__4)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x372c4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>(),
                            { "<FilterLevelsAsync>b__4", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_difficultyFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyFilter;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_difficultyFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_set_difficultyFilter(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficultyFilter = value;
}
constexpr ::StringW& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_characteristicFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr ::StringW const& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_characteristicFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_set_characteristicFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristicFilter = value;
}
inline void GlobalNamespace::LevelFilter___c__DisplayClass14_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilter___c__DisplayClass14_1::_FilterLevelsAsync_b__4(::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>(),
                          { "<FilterLevelsAsync>b__4", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_1* GlobalNamespace::LevelFilter___c__DisplayClass14_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c__DisplayClass14_1::LevelFilter___c__DisplayClass14_1() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.IsWithoutFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LevelFilter>, bool)>(&::GlobalNamespace::LevelFilter::IsWithoutFilter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x372b2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(), { "IsWithoutFilter", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::ArrayW<::GlobalNamespace::BeatmapLevel*>>* (*)(::ArrayW<::GlobalNamespace::BeatmapLevelPack*>, ::GlobalNamespace::LevelFilter, ::GlobalNamespace::PlayerDataModel*,
                                                     ::GlobalNamespace::IEntitlementModel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::LevelFilter::FilterLevelsAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x372b368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(), { "FilterLevelsAsync",
                                                                                 {},
                                                                                 { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelPack*>>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(),
                                                                                   ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<
    ::GlobalNamespace::BeatmapLevel*>>* (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*, ::GlobalNamespace::LevelFilter, ::GlobalNamespace::PlayerDataModel*,
                                            ::GlobalNamespace::IEntitlementModel*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::LevelFilter::FilterLevelsAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x372b560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                             { "FilterLevelsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::LevelFilter>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelByText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*, ::ArrayW<::StringW>)>(
        &::GlobalNamespace::LevelFilter::FilterLevelByText)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x372b678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                            { "FilterLevelByText", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.CleanText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::LevelFilter::CleanText)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x372bb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(), { "CleanText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::PlayerDataModel*)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x372bdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                         { "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|14_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesCharacteristic_14_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::StringW)>(&::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_14_1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x372c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                { "<FilterLevelsAsync>g__MatchesCharacteristic|14_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesDifficulty_14_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficultyMask, ::StringW)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_14_2)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x372c1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                { "<FilterLevelsAsync>g__MatchesDifficulty|14_2",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelByText_g__CalculateMatchScore_15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<::StringW>)>(&::GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_15_1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x372bc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                             { "<FilterLevelByText>g__CalculateMatchScore|15_1", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter::setStaticF_bpmOptions(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "bpmOptions", ::GlobalNamespace::LevelFilter>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::LevelFilter::getStaticF_bpmOptions() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "bpmOptions", ::GlobalNamespace::LevelFilter>();
}
inline bool GlobalNamespace::LevelFilter::IsWithoutFilter(::by_ref<::GlobalNamespace::LevelFilter> filter, bool ignoreFilterBySongs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(), { "IsWithoutFilter", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter, ignoreFilterBySongs);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>*
GlobalNamespace::LevelFilter::FilterLevelsAsync(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> packs, ::GlobalNamespace::LevelFilter filter, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                                                ::GlobalNamespace::IEntitlementModel* levelsModel, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                          { "FilterLevelsAsync",
                            {},
                            { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelPack*>>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(),
                              ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>*>(nullptr, ___internal_method, packs, filter, playerDataModel, levelsModel,
                                                                                                                              cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>*
GlobalNamespace::LevelFilter::FilterLevelsAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter,
                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IEntitlementModel* levelsModel,
                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                           { "FilterLevelsAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::LevelFilter>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>*>(nullptr, ___internal_method, beatmapLevels, filter, playerDataModel,
                                                                                                                              levelsModel, cancellationToken);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*
GlobalNamespace::LevelFilter::FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levels, ::ArrayW<::StringW> searchTerms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                          { "FilterLevelByText", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(nullptr, ___internal_method, levels, searchTerms);
}
inline ::StringW GlobalNamespace::LevelFilter::CleanText(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(), { "CleanText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                          { "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|14_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level, playerDataModel);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_14_1(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristicFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                              { "<FilterLevelsAsync>g__MatchesCharacteristic|14_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapLevel, characteristicFilter);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_14_2(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask difficultyFilter,
                                                                                       ::StringW characteristicFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                              { "<FilterLevelsAsync>g__MatchesDifficulty|14_2",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapLevel, difficultyFilter, characteristicFilter);
}
inline int32_t GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_15_1(::StringW levelString, ::ArrayW<::StringW> searchTerms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter>(),
                                                           { "<FilterLevelByText>g__CalculateMatchScore|15_1", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, levelString, searchTerms);
}
// Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "songUnplayed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") },
// CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "minBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "sensitivity", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "limitIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelFilter::LevelFilter(bool songOwned, bool songNotOwned, bool songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask difficulties,
                                                      ::GlobalNamespace::SongPackMask songPacks, ::StringW characteristicSerializedName, float_t minBpm, float_t maxBpm,
                                                      ::GlobalNamespace::PlayerSensitivityFlag sensitivity, ::StringW searchText, ::ArrayW<::StringW> limitIds) noexcept {
  this->songOwned = songOwned;
  this->songNotOwned = songNotOwned;
  this->songUnplayed = songUnplayed;
  this->difficulties = difficulties;
  this->songPacks = songPacks;
  this->characteristicSerializedName = characteristicSerializedName;
  this->minBpm = minBpm;
  this->maxBpm = maxBpm;
  this->sensitivity = sensitivity;
  this->searchText = searchText;
  this->limitIds = limitIds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter::LevelFilter() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::*)()>(&::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x372c550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x372ceb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevels", ty:
// "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "filter", ty: "::GlobalNamespace::LevelFilter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "levelsModel", ty: "::GlobalNamespace::IEntitlementModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerDataModel", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_filteredLevels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__7__wrap2", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_level_5__4", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::LevelFilter__FilterLevelsAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>> __t__builder,
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter, ::GlobalNamespace::IEntitlementModel* levelsModel,
    ::System::Threading::CancellationToken cancellationToken, ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap2,
    ::GlobalNamespace::BeatmapLevel* _level_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevels = beatmapLevels;
  this->filter = filter;
  this->levelsModel = levelsModel;
  this->cancellationToken = cancellationToken;
  this->playerDataModel = playerDataModel;
  this->_filteredLevels_5__2 = _filteredLevels_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_level_5__4 = _level_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::LevelFilter__FilterLevelsAsync_d__14() {}
