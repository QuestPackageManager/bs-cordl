#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet.get_beatmapCharacteristicName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::get_beatmapCharacteristicName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(),
                                                 "get_beatmapCharacteristicName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> (
        ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(),
                                                 "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::*)(
    ::StringW, ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>)>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2201df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__get__beatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__get__beatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicName;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__set__beatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>&
GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> const&
GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__set__difficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::get_beatmapCharacteristicName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(),
                                               "get_beatmapCharacteristicName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>
GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(),
                                               "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet* GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::New_ctor(
    ::StringW beatmapCharacteristicName,
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>(beatmapCharacteristicName, difficultyBeatmaps));
}
inline void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::_ctor(
    ::StringW beatmapCharacteristicName,
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristicName, difficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet::__StandardLevelInfoSaveData__DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), "get_difficulty",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap.get_difficultyRank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                                 "get_difficultyRank", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap.get_beatmapFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_beatmapFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                                 "get_beatmapFilename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                                 "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                                 "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::*)(
    ::StringW, int32_t, ::StringW, float_t, float_t)>(&::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2201da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::StringW const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__set__difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__difficultyRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr int32_t const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__difficultyRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__set__difficultyRank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyRank = value;
}
constexpr ::StringW& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__beatmapFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr ::StringW const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__beatmapFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapFilename;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__set__beatmapFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
inline ::StringW GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), "get_difficulty",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_difficultyRank() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), "get_difficultyRank",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_beatmapFilename() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), "get_beatmapFilename",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                               "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(),
                                               "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap* GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::New_ctor(::StringW difficultyName, int32_t difficultyRank,
                                                                                                                                                    ::StringW beatmapFilename,
                                                                                                                                                    float_t noteJumpMovementSpeed,
                                                                                                                                                    float_t noteJumpStartBeatOffset) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset));
}
inline void GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                                   float_t noteJumpStartBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap::__StandardLevelInfoSaveData__DifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*>::get(), "get_version",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::*)()>(
    &::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::__set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*>::get(), "get_version",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck* GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*>());
}
inline void GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck::__StandardLevelInfoSaveData__VersionCheck() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songSubName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songSubName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_shuffle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_shuffle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_previewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_previewDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_songFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_songFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_songFilename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_coverImageFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22017a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_coverImageFilename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_environmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22017a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_environmentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_allDirectionsEnvironmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22017b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_allDirectionsEnvironmentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> (
        ::GlobalNamespace::StandardLevelInfoSaveData::*)()>(&::GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22017b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, float_t, float_t, float_t, float_t, float_t, float_t, ::StringW, ::StringW, ::StringW, ::StringW,
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>)>(
    &::GlobalNamespace::StandardLevelInfoSaveData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22017c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.get_hasAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22018a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "get_hasAllData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.SetSongFilename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelInfoSaveData::*)(::StringW)>(
    &::GlobalNamespace::StandardLevelInfoSaveData::SetSongFilename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "SetSongFilename",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.SerializeToJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelInfoSaveData::*)()>(
    &::GlobalNamespace::StandardLevelInfoSaveData::SerializeToJSONString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2201910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                               "SerializeToJSONString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelInfoSaveData.DeserializeFromJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (*)(::StringW)>(
    &::GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2201918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "DeserializeFromJSONString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songSubName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__levelAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__levelAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__levelAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__shuffle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__shuffle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__shuffle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__shufflePeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__shufflePeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__shufflePeriod(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime = value;
}
constexpr float_t& GlobalNamespace::StandardLevelInfoSaveData::__get__previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr float_t const& GlobalNamespace::StandardLevelInfoSaveData::__get__previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__songFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__songFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__songFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__coverImageFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__coverImageFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImageFilename;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__coverImageFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImageFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__environmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelInfoSaveData::__get__allDirectionsEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelInfoSaveData::__get__allDirectionsEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__allDirectionsEnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allDirectionsEnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>&
GlobalNamespace::StandardLevelInfoSaveData::__get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> const&
GlobalNamespace::StandardLevelInfoSaveData::__get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::StandardLevelInfoSaveData::__set__difficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songSubName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_shuffle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_songFilename() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_songFilename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_coverImageFilename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_environmentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_allDirectionsEnvironmentName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>
GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::StandardLevelInfoSaveData::New_ctor(
    ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
    float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelInfoSaveData*>(songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod,
                                                                                         previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName,
                                                                                         allDirectionsEnvironmentName, difficultyBeatmapSets));
}
inline void GlobalNamespace::StandardLevelInfoSaveData::_ctor(
    ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
    float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod,
                                                          previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName, allDirectionsEnvironmentName, difficultyBeatmapSets);
}
inline bool GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "get_hasAllData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelInfoSaveData::SetSongFilename(::StringW songFilename) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "SetSongFilename",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songFilename);
}
inline ::StringW GlobalNamespace::StandardLevelInfoSaveData::SerializeToJSONString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
                                                                             "SerializeToJSONString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString(::StringW stringData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelInfoSaveData*>::get(), "DeserializeFromJSONString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardLevelInfoSaveData*, false>(nullptr, ___internal_method, stringData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelInfoSaveData::StandardLevelInfoSaveData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
