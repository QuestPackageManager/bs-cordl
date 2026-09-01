#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevel.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
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
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel___c::*)()>(&::GlobalNamespace::BeatmapLevel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3721d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetDifficulties_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__23_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3721d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetDifficulties>b__23_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetDifficulties_b__23_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__23_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3721d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { "<GetDifficulties>b__23_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetCharacteristics_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapLevel___c::*)(
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::BeatmapLevel___c::_GetCharacteristics_b__24_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3721d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                            { "<GetCharacteristics>b__24_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c._GetCharacteristics_b__24_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevel___c::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapLevel___c::_GetCharacteristics_b__24_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3721d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                                                                                           { "<GetCharacteristics>b__24_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9(::GlobalNamespace::BeatmapLevel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapLevel___c*, "<>9", ::GlobalNamespace::BeatmapLevel___c*>(std::forward<::GlobalNamespace::BeatmapLevel___c*>(value));
}
inline ::GlobalNamespace::BeatmapLevel___c* GlobalNamespace::BeatmapLevel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapLevel___c*, "<>9", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__23_1(
    ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*,
                                    "<>9__23_1", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*, "<>9__23_1",
      ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__23_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*, "<>9__23_2", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* GlobalNamespace::BeatmapLevel___c::getStaticF___9__23_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>*, "<>9__23_2", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__24_0(
    ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>*,
                                    "<>9__24_0", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>*
GlobalNamespace::BeatmapLevel___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>*, "<>9__24_0",
      ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::setStaticF___9__24_1(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*, "<>9__24_1", ::GlobalNamespace::BeatmapLevel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* GlobalNamespace::BeatmapLevel___c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>*, "<>9__24_1", ::GlobalNamespace::BeatmapLevel___c*>();
}
inline void GlobalNamespace::BeatmapLevel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty
GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__23_1(::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetDifficulties>b__23_1", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetDifficulties_b__23_2(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(), { "<GetDifficulties>b__23_2", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, difficulty);
}
inline ::GlobalNamespace::BeatmapCharacteristic
GlobalNamespace::BeatmapLevel___c::_GetCharacteristics_b__24_0(::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                          { "<GetCharacteristics>b__24_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method, entry);
}
inline int32_t GlobalNamespace::BeatmapLevel___c::_GetCharacteristics_b__24_1(::GlobalNamespace::BeatmapCharacteristic entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c*>(),
                                                                                         { "<GetCharacteristics>b__24_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel___c* GlobalNamespace::BeatmapLevel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel___c::BeatmapLevel___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::*)()>(&::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37216fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0._GetDifficulties_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::*)(
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::_GetDifficulties_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3721d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*>(),
                            { "<GetDifficulties>b__0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::__cordl_internal_set_characteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristic = value;
}
inline void GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::_GetDifficulties_b__0(::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*>(),
                                       { "<GetDifficulties>b__0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0* GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0::BeatmapLevel___c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.get_beatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* (::GlobalNamespace::BeatmapLevel::*)()>(
    &::GlobalNamespace::BeatmapLevel::get_beatmapBasicData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3721380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "get_beatmapBasicData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(
    int32_t, bool, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>, float_t, float_t, float_t, float_t, float_t, float_t, ::GlobalNamespace::PlayerSensitivityFlag,
    ::GlobalNamespace::IPreviewMediaData*,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*)>(
    &::GlobalNamespace::BeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3721388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(),
                                ::i2c::type_of<::GlobalNamespace::IPreviewMediaData*>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                                                            ::GlobalNamespace::BeatmapBasicData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapLevel::GetDifficulties)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x37213c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetDifficulties", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapCharacteristic>* (::GlobalNamespace::BeatmapLevel::*)()>(
    &::GlobalNamespace::BeatmapLevel::GetCharacteristics)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3721700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetCharacteristics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetBeatmapKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* (::GlobalNamespace::BeatmapLevel::*)()>(
    &::GlobalNamespace::BeatmapLevel::GetBeatmapKeys)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x37219a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetBeatmapKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficultyBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapBasicData* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3721af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                         { "GetDifficultyBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetEnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevel::*)(
    ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetEnvironmentName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3713338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                { "GetEnvironmentName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetColorScheme)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3721b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                                { "GetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.AddBeatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty,
                                                                                                 ::GlobalNamespace::BeatmapBasicData*)>(&::GlobalNamespace::BeatmapLevel::AddBeatmapBasicData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3721b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "AddBeatmapBasicData",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.RemoveBeatmapBasicData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapLevel::RemoveBeatmapBasicData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3721c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                         { "RemoveBeatmapBasicData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._GetBeatmapKeys_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::BeatmapLevel::*)(
    ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__25_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3721cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                            { "<GetBeatmapKeys>b__25_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
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
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapBasicDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapBasicDatas;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::BeatmapBasicData*>* const&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapBasicDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapBasicDatas;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__beatmapBasicDatas(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapBasicDatas = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>& GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCache;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCache;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__characteristicsCache(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characteristicsCache = value;
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
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                             ::GlobalNamespace::BeatmapBasicData*>*
GlobalNamespace::BeatmapLevel::get_beatmapBasicData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "get_beatmapBasicData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevel::_ctor(int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName,
                                                 ::ArrayW<::StringW> allMappers, ::ArrayW<::StringW> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset,
                                                 float_t previewStartTime, float_t previewDuration, float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                                                 ::GlobalNamespace::IPreviewMediaData* previewMediaData,
                                                 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
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
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                                          ::GlobalNamespace::BeatmapBasicData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters, beatsPerMinute,
                                                   integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration, contentRating, previewMediaData, beatmapBasicData);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GlobalNamespace::BeatmapLevel::GetDifficulties(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetDifficulties", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*>(this, ___internal_method, characteristic);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapCharacteristic>* GlobalNamespace::BeatmapLevel::GetCharacteristics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetCharacteristics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapCharacteristic>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GlobalNamespace::BeatmapLevel::GetBeatmapKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "GetBeatmapKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapBasicData* GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData(::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                                                    ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                       { "GetDifficultyBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapBasicData*>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevel::GetEnvironmentName(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                              { "GetEnvironmentName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::BeatmapLevel::GetColorScheme(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                              { "GetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method, characteristic, difficulty);
}
inline void GlobalNamespace::BeatmapLevel::AddBeatmapBasicData(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                               ::GlobalNamespace::BeatmapBasicData* beatmapBasicData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(), { "AddBeatmapBasicData",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characteristic, difficulty, beatmapBasicData);
}
inline void GlobalNamespace::BeatmapLevel::RemoveBeatmapBasicData(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                                       { "RemoveBeatmapBasicData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::BeatmapKey
GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__25_0(::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevel*>(),
                          { "<GetBeatmapKeys>b__25_0", {}, { ::i2c::type_of<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevel::New_ctor(
    int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW> allMappers, ::ArrayW<::StringW> allLighters,
    float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration, float_t songDuration,
    ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*
        beatmapBasicData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevel*>(version, hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters,
                                                                                            beatsPerMinute, integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration,
                                                                                            contentRating, previewMediaData, beatmapBasicData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel::BeatmapLevel() {}
