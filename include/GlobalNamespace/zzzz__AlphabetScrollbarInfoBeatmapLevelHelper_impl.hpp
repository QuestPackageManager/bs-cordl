#pragma once
// IWYU pragma private; include "GlobalNamespace\AlphabetScrollbarInfoBeatmapLevelHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollbarInfoBeatmapLevelHelper_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollbarInfoBeatmapLevelHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::*)()>(
    &::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0f9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c._CreateData_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::_CreateData_b__4_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a0f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(),
                                                                                           { "<CreateData>b__4_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::setStaticF___9(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*, "<>9", ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(
      std::forward<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(value));
}
inline ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*, "<>9", ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>();
}
inline void GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::setStaticF___9__4_0(::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>*, "<>9__4_0", ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>* GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevel*, ::StringW>*, "<>9__4_0", ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>();
}
inline void GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::_CreateData_b__4_0(::GlobalNamespace::BeatmapLevel* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>(),
                                                                                         { "<CreateData>b__4_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c* GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper___c::AlphabetScrollbarInfoBeatmapLevelHelper___c() {}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper.CreateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>* (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*, bool,
                                                                                                      ::by_ref<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*>)>(
    &::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::CreateData)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x5a0f308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*>(),
                                                             { "CreateData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper.IsNumericOrSpecial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::IsNumericOrSpecial)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a0f8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*>(), { "IsNumericOrSpecial", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>*
GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::CreateData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, bool sortBeatmapLevels,
                                                                     ::by_ref<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*> sortedBeatmapLevels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*>(),
                                                           { "CreateData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevel*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo_Data*>*>(nullptr, ___internal_method, beatmapLevels,
                                                                                                                                            sortBeatmapLevels, sortedBeatmapLevels);
}
inline bool GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::IsNumericOrSpecial(::StringW comparedChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper*>(), { "IsNumericOrSpecial", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, comparedChar);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::AlphabetScrollbarInfoBeatmapLevelHelper() {}
