#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelColorSchemeSaveData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet.get_beatmapCharacteristicName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::get_beatmapCharacteristicName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(),
                                                 "get_beatmapCharacteristicName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*> (
        ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(),
                                                 "get_difficultyBeatmaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::*)(
    ::StringW, ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>)>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26fd4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>&
GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*> const&
GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::__cordl_internal_set__difficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::get_beatmapCharacteristicName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(),
                                               "get_beatmapCharacteristicName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>
GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(),
                                               "get_difficultyBeatmaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>,
                                             false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::_ctor(
    ::StringW beatmapCharacteristicName,
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*> difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristicName, difficultyBeatmaps);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet* GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::New_ctor(
    ::StringW beatmapCharacteristicName,
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>*> difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>(beatmapCharacteristicName, difficultyBeatmaps));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet::StandardLevelInfoSaveData_DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_difficulty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_difficultyRank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_difficultyRank",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_beatmapFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_beatmapFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_beatmapFilename",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                                 "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                                 "get_noteJumpStartBeatOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_beatmapColorSchemeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_beatmapColorSchemeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                                 "get_beatmapColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap.get_environmentNameIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fd54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                                 "get_environmentNameIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::*)(
    ::StringW, int32_t, ::StringW, float_t, float_t, int32_t, int32_t)>(&::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26fd478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__difficultyRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr int32_t const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__difficultyRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__difficultyRank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyRank = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__beatmapFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__beatmapFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__beatmapFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
constexpr int32_t& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr int32_t const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__beatmapColorSchemeIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapColorSchemeIdx = value;
}
constexpr int32_t& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__environmentNameIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr int32_t const& GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_get__environmentNameIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::__cordl_internal_set__environmentNameIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentNameIdx = value;
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_difficulty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_difficultyRank() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_difficultyRank",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_beatmapFilename() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_beatmapFilename",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                               "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                               "get_noteJumpStartBeatOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_beatmapColorSchemeIdx() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(),
                                               "get_beatmapColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::get_environmentNameIdx() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), "get_environmentNameIdx",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                                float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset,
                                                          beatmapColorSchemeIdx, environmentNameIdx);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*
GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                       float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap*>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed,
                                                                                                                   noteJumpStartBeatOffset, beatmapColorSchemeIdx, environmentNameIdx));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmap::StandardLevelInfoSaveData_DifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songSubName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songSubName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songAuthorName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_levelAuthorName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_beatsPerMinute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_shuffle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_shuffle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_shufflePeriod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_previewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_previewStartTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_previewDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_previewDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songFilename", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_coverImageFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_coverImageFilename", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_environmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_environmentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_allDirectionsEnvironmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "get_allDirectionsEnvironmentName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_environmentNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_environmentNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_environmentNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_colorSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
        &::GlobalNamespace::StandardLevelInfoSaveData::get_colorSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_colorSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*> (
        ::GlobalNamespace::StandardLevelInfoSaveData::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fcbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_difficultyBeatmapSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, float_t, float_t, float_t, float_t, float_t, float_t, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>,
    ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>,
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>)>(
    &::GlobalNamespace::StandardLevelInfoSaveData::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x26fcbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 17>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_hasAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26fccb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_hasAllData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.DeserializeFromJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (*)(::StringW)>(
    &::GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x26fcd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "DeserializeFromJSONString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songSubName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__levelAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__levelAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__levelAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__shuffle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__shuffle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__shuffle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__shufflePeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__shufflePeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__shufflePeriod(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__songFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__songFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__coverImageFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__coverImageFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__coverImageFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImageFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__allDirectionsEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__allDirectionsEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__allDirectionsEnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allDirectionsEnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__environmentNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__environmentNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__environmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>&
GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> const&
GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__colorSchemes(
    ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>&
GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*> const&
GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__cordl_internal_set__difficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songSubName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songAuthorName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_levelAuthorName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_beatsPerMinute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songTimeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_shuffle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_shufflePeriod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_previewStartTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_previewDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songFilename() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songFilename", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_coverImageFilename", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_environmentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_allDirectionsEnvironmentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::StandardLevelInfoSaveData::get_environmentNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_environmentNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> GlobalNamespace::StandardLevelInfoSaveData::get_colorSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_colorSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>
GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_difficultyBeatmapSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>,
                                             false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData::_ctor(
    ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
    float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
    ::ArrayW<::StringW, ::Array<::StringW>*> environmentNames,
    ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> colorSchemes,
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 17>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod,
                                                          previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName, allDirectionsEnvironmentName, environmentNames,
                                                          colorSchemes, difficultyBeatmapSets);
}
inline bool GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_hasAllData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString(::StringW stringData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "DeserializeFromJSONString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardLevelInfoSaveData*, false>(nullptr, ___internal_method, stringData);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::StandardLevelInfoSaveData::New_ctor(
    ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
    float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
    ::ArrayW<::StringW, ::Array<::StringW>*> environmentNames,
    ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> colorSchemes,
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelInfoSaveData*>(songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle,
                                                                                                 shufflePeriod, previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName,
                                                                                                 allDirectionsEnvironmentName, environmentNames, colorSchemes, difficultyBeatmapSets));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData::StandardLevelInfoSaveData() {}
