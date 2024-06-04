#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelChecksums.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelChecksums_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelChecksums_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::*)(
    ::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14c03a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::*)(
    ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums)>(&::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x14c05c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::_ctor(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum,
                                                                                        ::StringW lightshowAssetChecksum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficulty, beatmapCharacteristic, beatmapAssetChecksum, lightshowAssetChecksum);
}
inline void GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::_ctor(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "beatmapDifficulty", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "beatmapCharacteristic", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "beatmapAssetChecksum", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lightshowAssetChecksum", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::__BeatmapLevelChecksums__DifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic,
                                                                                                                                      ::StringW beatmapAssetChecksum,
                                                                                                                                      ::StringW lightshowAssetChecksum) noexcept {
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatmapCharacteristic = beatmapCharacteristic;
  this->beatmapAssetChecksum = beatmapAssetChecksum;
  this->lightshowAssetChecksum = lightshowAssetChecksum;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums::__BeatmapLevelChecksums__DifficultyBeatmapChecksums() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelChecksums____c::*)()>(
    &::GlobalNamespace::__BeatmapLevelChecksums____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14c0650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums (
    ::GlobalNamespace::__BeatmapLevelChecksums____c::*)(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums)>(&::GlobalNamespace::__BeatmapLevelChecksums____c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14c0658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get(), "<.ctor>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelChecksums____c::setStaticF___9(::GlobalNamespace::__BeatmapLevelChecksums____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BeatmapLevelChecksums____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get>(
      std::forward<::GlobalNamespace::__BeatmapLevelChecksums____c*>(value));
}
inline ::GlobalNamespace::__BeatmapLevelChecksums____c* GlobalNamespace::__BeatmapLevelChecksums____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BeatmapLevelChecksums____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get>();
}
inline void GlobalNamespace::__BeatmapLevelChecksums____c::setStaticF___9__6_0(
    ::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*,
                                    "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*
GlobalNamespace::__BeatmapLevelChecksums____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*, "<>9__6_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get>();
}
inline ::GlobalNamespace::__BeatmapLevelChecksums____c* GlobalNamespace::__BeatmapLevelChecksums____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelChecksums____c*>());
}
inline void GlobalNamespace::__BeatmapLevelChecksums____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums
GlobalNamespace::__BeatmapLevelChecksums____c::__ctor_b__6_0(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c*>::get(), "<.ctor>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, false>(this, ___internal_method, d);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelChecksums____c::__BeatmapLevelChecksums____c() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14c03a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0._GetOrAddDifficultyBeatmapChecksums_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::*)(
    ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums)>(&::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::_GetOrAddDifficultyBeatmapChecksums_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x14c0664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*>::get(), "<GetOrAddDifficultyBeatmapChecksums>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_set_beatmapDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapDifficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__cordl_internal_set_beatmapCharacteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0* GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::_GetOrAddDifficultyBeatmapChecksums_b__0(
    ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums difficultyBeatmapChecksums) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0*>::get(), "<GetOrAddDifficultyBeatmapChecksums>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, difficultyBeatmapChecksums);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass7_0::__BeatmapLevelChecksums____c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14c05c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0._SetDifficultyBeatmapChecksums_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::*)(
    ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums)>(&::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::_SetDifficultyBeatmapChecksums_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x14c06b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*>::get(), "<SetDifficultyBeatmapChecksums>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_set_beatmapDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapDifficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__cordl_internal_set_beatmapCharacteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0* GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*>());
}
inline void GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::_SetDifficultyBeatmapChecksums_b__0(::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0*>::get(), "<SetDifficultyBeatmapChecksums>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, d);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelChecksums____c__DisplayClass8_0::__BeatmapLevelChecksums____c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums::*)(::GlobalNamespace::BeatmapLevelChecksums)>(
    &::GlobalNamespace::BeatmapLevelChecksums::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x14bff68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelChecksums>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums.GetOrAddDifficultyBeatmapChecksums
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums (::GlobalNamespace::BeatmapLevelChecksums::*)(
    ::StringW, ::StringW)>(&::GlobalNamespace::BeatmapLevelChecksums::GetOrAddDifficultyBeatmapChecksums)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x14c00b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), "GetOrAddDifficultyBeatmapChecksums", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelChecksums.SetDifficultyBeatmapChecksums
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelChecksums::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelChecksums::SetDifficultyBeatmapChecksums)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x14c03b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), "SetDifficultyBeatmapChecksums", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelChecksums::_ctor(::GlobalNamespace::BeatmapLevelChecksums other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelChecksums>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums GlobalNamespace::BeatmapLevelChecksums::GetOrAddDifficultyBeatmapChecksums(::StringW beatmapDifficulty,
                                                                                                                                                         ::StringW beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), "GetOrAddDifficultyBeatmapChecksums", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums, false>(this, ___internal_method, beatmapDifficulty, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapLevelChecksums::SetDifficultyBeatmapChecksums(::StringW beatmapDifficulty, ::StringW beatmapCharacteristic, ::StringW beatmapAssetChecksum,
                                                                                  ::StringW lightshowAssetChecksum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelChecksums>::get(), "SetDifficultyBeatmapChecksums", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficulty, beatmapCharacteristic, beatmapAssetChecksum, lightshowAssetChecksum);
}
// Ctor Parameters [CppParam { name: "beatmapLevelChecksum", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "coverImageChecksum", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "songAudioClipChecksum", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "audioDataAssetChecksum", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "difficultyBeatmapsChecksums", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::BeatmapLevelChecksums::BeatmapLevelChecksums(
    ::StringW beatmapLevelChecksum, ::StringW coverImageChecksum, ::StringW songAudioClipChecksum, ::StringW audioDataAssetChecksum,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelChecksums__DifficultyBeatmapChecksums>* difficultyBeatmapsChecksums) noexcept {
  this->beatmapLevelChecksum = beatmapLevelChecksum;
  this->coverImageChecksum = coverImageChecksum;
  this->songAudioClipChecksum = songAudioClipChecksum;
  this->audioDataAssetChecksum = audioDataAssetChecksum;
  this->difficultyBeatmapsChecksums = difficultyBeatmapsChecksums;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelChecksums::BeatmapLevelChecksums() {}
