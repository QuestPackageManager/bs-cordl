#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet.get_beatmapCharacteristicSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                                 "get_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> (
        ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234206c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                                 "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)(
    ::StringW, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>)>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2342074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__get__beatmapCharacteristicSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__get__beatmapCharacteristicSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__set__beatmapCharacteristicSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicSerializedName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>&
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> const&
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__set__difficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                               "get_beatmapCharacteristicSerializedName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), "get_difficultyBeatmaps",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::New_ctor(
    ::StringW beatmapCharacteristicSerializedName,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>(beatmapCharacteristicSerializedName, difficultyBeatmaps));
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::_ctor(
    ::StringW beatmapCharacteristicSerializedName,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*> difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__DifficultyBeatmap*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristicSerializedName, difficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__BeatmapLevelDataSO__DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_audioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234204c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "get_audioClip",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::BeatmapLevelDataSO::__get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::BeatmapLevelDataSO::__get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__set__audioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>&
GlobalNamespace::BeatmapLevelDataSO::__get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
GlobalNamespace::BeatmapLevelDataSO::__get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__set__difficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>&
GlobalNamespace::BeatmapLevelDataSO::__get__no360MovementDifficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____no360MovementDifficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
GlobalNamespace::BeatmapLevelDataSO::__get__no360MovementDifficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____no360MovementDifficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__set__no360MovementDifficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____no360MovementDifficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AudioClip* GlobalNamespace::BeatmapLevelDataSO::get_audioClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "get_audioClip",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>
GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelDataSO* GlobalNamespace::BeatmapLevelDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelDataSO*>());
}
inline void GlobalNamespace::BeatmapLevelDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO::BeatmapLevelDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
