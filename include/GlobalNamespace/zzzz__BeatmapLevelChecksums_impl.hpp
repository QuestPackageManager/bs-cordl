#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelChecksums.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelChecksums_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelChecksums_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x371d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::*)(
    ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums)>(&::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x371dba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::_ctor(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum,
                                                                                     ::StringW lightshowAssetChecksum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beatmapDifficulty, beatmapCharacteristic, beatmapAssetChecksum, lightshowAssetChecksum);
}
inline void GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::_ctor(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "beatmapDifficulty", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapCharacteristic", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "beatmapAssetChecksum", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightshowAssetChecksum", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::BeatmapLevelChecksums_DifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic,
                                                                                                                                ::StringW beatmapAssetChecksum,
                                                                                                                                ::StringW lightshowAssetChecksum) noexcept {
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatmapCharacteristic = beatmapCharacteristic;
  this->beatmapAssetChecksum = beatmapAssetChecksum;
  this->lightshowAssetChecksum = lightshowAssetChecksum;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums::BeatmapLevelChecksums_DifficultyBeatmapChecksums() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums___c::*)()>(&::GlobalNamespace::BeatmapLevelChecksums___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x371dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums (::GlobalNamespace::BeatmapLevelChecksums___c::*)(
    ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums)>(&::GlobalNamespace::BeatmapLevelChecksums___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x371dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c*>(),
                                                             { "<.ctor>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelChecksums___c::setStaticF___9(::GlobalNamespace::BeatmapLevelChecksums___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapLevelChecksums___c*, "<>9", ::GlobalNamespace::BeatmapLevelChecksums___c*>(
      std::forward<::GlobalNamespace::BeatmapLevelChecksums___c*>(value));
}
inline ::GlobalNamespace::BeatmapLevelChecksums___c* GlobalNamespace::BeatmapLevelChecksums___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapLevelChecksums___c*, "<>9", ::GlobalNamespace::BeatmapLevelChecksums___c*>();
}
inline void GlobalNamespace::BeatmapLevelChecksums___c::setStaticF___9__6_0(
    ::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*,
                                    "<>9__6_0", ::GlobalNamespace::BeatmapLevelChecksums___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*
GlobalNamespace::BeatmapLevelChecksums___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums, ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*,
                                           "<>9__6_0", ::GlobalNamespace::BeatmapLevelChecksums___c*>();
}
inline void GlobalNamespace::BeatmapLevelChecksums___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums
GlobalNamespace::BeatmapLevelChecksums___c::__ctor_b__6_0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c*>(),
                                                           { "<.ctor>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(this, ___internal_method, d);
}
inline ::GlobalNamespace::BeatmapLevelChecksums___c* GlobalNamespace::BeatmapLevelChecksums___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelChecksums___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums___c::BeatmapLevelChecksums___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x371d94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0._GetOrAddDifficultyBeatmapChecksums_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::*)(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums)>(
    &::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::_GetOrAddDifficultyBeatmapChecksums_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x371dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*>(),
                                                { "<GetOrAddDifficultyBeatmapChecksums>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_set_beatmapDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::__cordl_internal_set_beatmapCharacteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristic = value;
}
inline void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool
GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::_GetOrAddDifficultyBeatmapChecksums_b__0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums difficultyBeatmapChecksums) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*>(),
                                              { "<GetOrAddDifficultyBeatmapChecksums>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, difficultyBeatmapChecksums);
}
inline ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0* GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass7_0::BeatmapLevelChecksums___c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x371dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0._SetDifficultyBeatmapChecksums_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::*)(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums)>(
    &::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::_SetDifficultyBeatmapChecksums_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x371dc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*>(),
                                                { "<SetDifficultyBeatmapChecksums>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_set_beatmapDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::__cordl_internal_set_beatmapCharacteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristic = value;
}
inline void GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::_SetDifficultyBeatmapChecksums_b__0(::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*>(),
                                                           { "<SetDifficultyBeatmapChecksums>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0* GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums___c__DisplayClass8_0::BeatmapLevelChecksums___c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums::*)(::GlobalNamespace::BeatmapLevelChecksums)>(
    &::GlobalNamespace::BeatmapLevelChecksums::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x371d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums.GetOrAddDifficultyBeatmapChecksums
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums (::GlobalNamespace::BeatmapLevelChecksums::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelChecksums::GetOrAddDifficultyBeatmapChecksums)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x371d6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(), { "GetOrAddDifficultyBeatmapChecksums", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums.SetDifficultyBeatmapChecksums
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelChecksums::SetDifficultyBeatmapChecksums)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x371d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(),
                            { "SetDifficultyBeatmapChecksums", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelChecksums::_ctor(::GlobalNamespace::BeatmapLevelChecksums other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelChecksums>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums GlobalNamespace::BeatmapLevelChecksums::GetOrAddDifficultyBeatmapChecksums(::StringW beatmapDifficulty,
                                                                                                                                                      ::StringW beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(),
                                                                                         { "GetOrAddDifficultyBeatmapChecksums", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>(*this, ___internal_method, beatmapDifficulty, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapLevelChecksums::SetDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum,
                                                                                  ::StringW lightshowAssetChecksum) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelChecksums>(),
                          { "SetDifficultyBeatmapChecksums", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beatmapDifficulty, beatmapCharacteristic, beatmapAssetChecksum, lightshowAssetChecksum);
}
// Ctor Parameters [CppParam { name: "beatmapLevelChecksum", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "coverImageChecksum", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "songAudioClipChecksum", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "audioDataAssetChecksum", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "difficultyBeatmapsChecksums", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelChecksums::BeatmapLevelChecksums(
    ::StringW beatmapLevelChecksum, ::StringW coverImageChecksum, ::StringW songAudioClipChecksum, ::StringW audioDataAssetChecksum,
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelChecksums_DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums) noexcept {
  this->beatmapLevelChecksum = beatmapLevelChecksum;
  this->coverImageChecksum = coverImageChecksum;
  this->songAudioClipChecksum = songAudioClipChecksum;
  this->audioDataAssetChecksum = audioDataAssetChecksum;
  this->difficultyBeatmapsChecksums = difficultyBeatmapsChecksums;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums::BeatmapLevelChecksums() {}
