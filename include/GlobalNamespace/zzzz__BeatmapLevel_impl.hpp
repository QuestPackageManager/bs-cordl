#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevel.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayType_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapBasicData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel___c::*)()>(&::GlobalNamespace::BeatmapLevel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d0030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetBeatmapKeys_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d0034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetBeatmapKeys>b__23_0",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetBeatmapKeys_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39d003c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetBeatmapKeys>b__23_1",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetBeatmapKeys_b__23_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d0094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetBeatmapKeys>b__23_2",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetDifficulties_b__29_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__29_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d009c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetDifficulties>b__29_1",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetDifficulties_b__29_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__29_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d00a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { "<GetDifficulties>b__29_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._CollectCharacteristics_b__34_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c::_CollectCharacteristics_b__34_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d00ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<CollectCharacteristics>b__34_1",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._CollectCharacteristics_b__34_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapLevel___c::_CollectCharacteristics_b__34_2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39d00b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                                                                                           { "<CollectCharacteristics>b__34_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9(::GlobalNamespace::BeatmapLevel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapLevel___c*, "<>9", ::GlobalNamespace::BeatmapLevel___c*>(std::forward<::GlobalNamespace::BeatmapLevel___c*>(value));
}
inline ::GlobalNamespace::BeatmapLevel___c* GlobalNamespace::BeatmapLevel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapLevel___c*, "<>9", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__23_0(
    ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*,
                                    "<>9__23_0", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*, "<>9__23_0",
      ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__23_1(
    ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*,
                                    "<>9__23_1", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*, "<>9__23_1",
      ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__23_2(
    ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*,
                                    "<>9__23_2", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__23_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*, "<>9__23_2",
      ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__29_1(
    ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*,
      "<>9__29_1", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                    ::GlobalNamespace::BeatmapDifficulty>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__29_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*,
      "<>9__29_1", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__29_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*, "<>9__29_2", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* GlobalNamespace::BeatmapLevel___c::getStaticF___9__29_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*, "<>9__29_2", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__34_1(
    ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>*
        value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                     ::GlobalNamespace::BeatmapCharacteristic>*,
                                    "<>9__34_1", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                    ::GlobalNamespace::BeatmapCharacteristic>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                        ::GlobalNamespace::BeatmapCharacteristic>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__34_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                            ::GlobalNamespace::BeatmapCharacteristic>*,
                                           "<>9__34_1", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__34_2(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*, "<>9__34_2", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* GlobalNamespace::BeatmapLevel___c::getStaticF___9__34_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*, "<>9__34_2", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_0(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                          ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                              entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetBeatmapKeys>b__23_0",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_1(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                          ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                              entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetBeatmapKeys>b__23_1",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetBeatmapKeys_b__23_2(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                          ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                              entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetBeatmapKeys>b__23_2",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__29_1(
    /* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                               ::GlobalNamespace::BeatmapDifficulty>
        entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetDifficulties>b__29_1",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__29_2(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { "<GetDifficulties>b__29_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, difficulty);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapLevel___c::_CollectCharacteristics_b__34_1(
    /* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                               ::GlobalNamespace::BeatmapDifficulty>
        entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<CollectCharacteristics>b__34_1",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_CollectCharacteristics_b__34_2(::GlobalNamespace::BeatmapCharacteristic entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                                                                                         { "<CollectCharacteristics>b__34_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel___c* GlobalNamespace::BeatmapLevel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel___c::BeatmapLevel___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::*)()>(&::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cfd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0._GetDifficulties_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::_GetDifficulties_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39d010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*>(),
                            { "<GetDifficulties>b__0",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayType& GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_get_gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr ::GlobalNamespace::GameplayType const& GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_get_gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr void GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayType = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::__cordl_internal_set_characteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
inline void GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::_GetDifficulties_b__0(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                                       ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                                           entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*>(),
                          { "<GetDifficulties>b__0",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0* GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0::BeatmapLevel___c__DisplayClass29_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::*)()>(&::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0._CollectCharacteristics_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::_CollectCharacteristics_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d0134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*>(),
                            { "<CollectCharacteristics>b__0",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayType& GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::__cordl_internal_get_gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr ::GlobalNamespace::GameplayType const& GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::__cordl_internal_get_gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr void GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::__cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayType = value;
}
inline void GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::_CollectCharacteristics_b__0(
    /* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                               ::GlobalNamespace::BeatmapDifficulty>
        entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*>(),
                          { "<CollectCharacteristics>b__0",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0* GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0::BeatmapLevel___c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.get_gameplayTypeBeatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* (
    ::GlobalNamespace::BeatmapLevel::*)()>(&::GlobalNamespace::BeatmapLevel::get_gameplayTypeBeatmapBasicData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cefa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "get_gameplayTypeBeatmapBasicData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(
    int32_t, bool, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>, float_t, float_t, float_t, float_t, float_t, float_t, ::GlobalNamespace::PlayerSensitivityFlag,
    ::GlobalNamespace::IPreviewMediaData*,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::BeatmapBasicData*>*)>(&::GlobalNamespace::BeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x39cefb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::GlobalNamespace::IPreviewMediaData*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<
                                                        ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::BeatmapBasicData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetBeatmapKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* (::GlobalNamespace::BeatmapLevel::*)()>(
    &::GlobalNamespace::BeatmapLevel::GetBeatmapKeys)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x39cf160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetBeatmapKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficultyBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapBasicData* (::GlobalNamespace::BeatmapLevel::*)(::by_ref<::GlobalNamespace::BeatmapKey const>)>(
    &::GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x39cf4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                                           { "GetDifficultyBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetEnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevel::*)(::by_ref<::GlobalNamespace::BeatmapKey const>)>(
    &::GlobalNamespace::BeatmapLevel::GetEnvironmentName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x39c0780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetEnvironmentName", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::BeatmapLevel::*)(::by_ref<::GlobalNamespace::BeatmapKey const>)>(
    &::GlobalNamespace::BeatmapLevel::GetColorScheme)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39cf544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetColorScheme", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.HasGameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType)>(&::GlobalNamespace::BeatmapLevel::HasGameplayType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x39cf55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "HasGameplayType", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristic> (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType)>(
    &::GlobalNamespace::BeatmapLevel::GetCharacteristics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39cf6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetCharacteristics", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapLevel::GetDifficulties)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x39cfa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                { "GetDifficulties", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficultyBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapBasicData* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x39cfd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetDifficultyBeatmapData",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetEnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevel::*)(
    ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetEnvironmentName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39cfd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetEnvironmentName",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.AddBeatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                 ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapBasicData*)>(
    &::GlobalNamespace::BeatmapLevel::AddBeatmapBasicData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x39cfe2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                             { "AddBeatmapBasicData",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.RemoveBeatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                 ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::RemoveBeatmapBasicData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x39cff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "RemoveBeatmapBasicData",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.CollectCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristic> (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::GameplayType)>(
    &::GlobalNamespace::BeatmapLevel::CollectCharacteristics)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x39cf700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "CollectCharacteristics", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.InvalidateCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)()>(&::GlobalNamespace::BeatmapLevel::InvalidateCaches)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x39cfedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "InvalidateCaches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._GetBeatmapKeys_b__23_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::BeatmapLevel::*)(
    ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__23_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39cffc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                            { "<GetBeatmapKeys>b__23_3",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr bool& GlobalNamespace::BeatmapLevel::__cordl_internal_get_hasPrecalculatedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPrecalculatedData;
}
constexpr bool const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_hasPrecalculatedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPrecalculatedData;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_hasPrecalculatedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasPrecalculatedData = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelID = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSubName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songAuthorName = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allMappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allMappers;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allMappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allMappers;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_allMappers(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allMappers = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allLighters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLighters;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allLighters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLighters;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_allLighters(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allLighters = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_integratedLufs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___integratedLufs;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_integratedLufs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___integratedLufs;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_integratedLufs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___integratedLufs = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewStartTime;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewStartTime;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewStartTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewDuration;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songDuration;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songDuration = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevel::__cordl_internal_get_contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentRating = value;
}
constexpr ::GlobalNamespace::IPreviewMediaData*& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewMediaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewMediaData;
}
constexpr ::GlobalNamespace::IPreviewMediaData* const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewMediaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewMediaData;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewMediaData(::GlobalNamespace::IPreviewMediaData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewMediaData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::BeatmapBasicData*>*&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__gameplayTypeBeatmapBasicDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayTypeBeatmapBasicDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::BeatmapBasicData*>* const&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__gameplayTypeBeatmapBasicDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayTypeBeatmapBasicDatas;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__gameplayTypeBeatmapBasicDatas(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::BeatmapBasicData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayTypeBeatmapBasicDatas = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>& GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCaches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCaches;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCaches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCaches;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__characteristicsCaches(::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristicsCaches = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapKey>& GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapKeysCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKeysCache;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapKey> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapKeysCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKeysCache;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__beatmapKeysCache(::ArrayW<::GlobalNamespace::BeatmapKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKeysCache = value;
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                             ::GlobalNamespace::BeatmapBasicData*>*
GlobalNamespace::BeatmapLevel::get_gameplayTypeBeatmapBasicData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "get_gameplayTypeBeatmapBasicData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*>(
      this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevel::_ctor(
    int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW> allMappers, ::ArrayW<::StringW> allLighters,
    float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration, float_t songDuration,
    ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData, /* [Nullable(new[] { 1, 0, 1 })] */
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
              ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::GlobalNamespace::IPreviewMediaData*>(),
              ::i2c::type_of<
                  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                               ::GlobalNamespace::BeatmapBasicData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters, beatsPerMinute,
                                                   integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration, contentRating, previewMediaData, beatmapBasicData);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GlobalNamespace::BeatmapLevel::GetBeatmapKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetBeatmapKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapBasicData* GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetDifficultyBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapBasicData*>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevel::GetEnvironmentName(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetEnvironmentName", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::BeatmapLevel::GetColorScheme(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetColorScheme", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::BeatmapLevel::HasGameplayType(::GlobalNamespace::GameplayType gameplayType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "HasGameplayType", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameplayType);
}
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::BeatmapLevel::GetCharacteristics(::GlobalNamespace::GameplayType gameplayType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetCharacteristics", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>(this, ___internal_method, gameplayType);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GlobalNamespace::BeatmapLevel::GetDifficulties(::GlobalNamespace::GameplayType gameplayType,
                                                                                                                                           ::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                              { "GetDifficulties", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*>(this, ___internal_method, gameplayType, characteristic);
}
inline ::GlobalNamespace::BeatmapBasicData* GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData(::GlobalNamespace::GameplayType gameplayType,
                                                                                                    ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                                                    ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetDifficultyBeatmapData",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapBasicData*>(this, ___internal_method, gameplayType, characteristic, difficulty);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevel::GetEnvironmentName(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                                            ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetEnvironmentName",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(this, ___internal_method, gameplayType, characteristic, difficulty);
}
inline void GlobalNamespace::BeatmapLevel::AddBeatmapBasicData(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                               ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapBasicData* beatmapBasicData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                           { "AddBeatmapBasicData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayType, characteristic, difficulty, beatmapBasicData);
}
inline void GlobalNamespace::BeatmapLevel::RemoveBeatmapBasicData(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                  ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "RemoveBeatmapBasicData",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::GameplayType>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayType, characteristic, difficulty);
}
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::BeatmapLevel::CollectCharacteristics(::GlobalNamespace::GameplayType gameplayType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "CollectCharacteristics", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>(this, ___internal_method, gameplayType);
}
inline void GlobalNamespace::BeatmapLevel::InvalidateCaches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "InvalidateCaches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__23_3(
    /* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                               ::GlobalNamespace::BeatmapDifficulty>
        entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                          { "<GetBeatmapKeys>b__23_3",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevel::New_ctor(
    int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW> allMappers, ::ArrayW<::StringW> allLighters,
    float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration, float_t songDuration,
    ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData, /* [Nullable(new[] { 1, 0, 1 })] */
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel*>(version, hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters,
                                                                                            beatsPerMinute, integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration,
                                                                                            contentRating, previewMediaData, beatmapBasicData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel::BeatmapLevel() {}
