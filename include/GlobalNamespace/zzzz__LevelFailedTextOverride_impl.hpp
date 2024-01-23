#pragma once
#include "Polyglot/zzzz__Language_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextOverride_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextOverride_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedText_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride.get_language
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::*)()>(
    &::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::get_language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2220ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), "get_language",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride.get_overrideText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::*)()>(
    &::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::get_overrideText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2220ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), "get_overrideText",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::*)()>(
    &::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2221000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Polyglot::Language& GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_get__language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr ::Polyglot::Language const& GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_get__language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr void GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_set__language(::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____language = value;
}
constexpr ::StringW& GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_get__overrideText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr ::StringW const& GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_get__overrideText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr void GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__cordl_internal_set__overrideText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Polyglot::Language GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::get_language() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), "get_language",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Polyglot::Language, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::get_overrideText() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), "get_overrideText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>());
}
inline void GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride::__LevelFailedTextOverride__LanguageOverride() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2220fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0._Start_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::*)(
    ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*)>(&::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2221008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Polyglot::Language& GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::__cordl_internal_get_selectedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr ::Polyglot::Language const& GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::__cordl_internal_get_selectedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr void GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::__cordl_internal_set_selectedLanguage(::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLanguage = value;
}
inline ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0* GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::_Start_b__0(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0::__LevelFailedTextOverride____c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride::*)()>(&::GlobalNamespace::LevelFailedTextOverride::Start)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x2220958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride::*)()>(&::GlobalNamespace::LevelFailedTextOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2220fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__perLanguageOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perLanguageOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__perLanguageOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perLanguageOverrides;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__perLanguageOverrides(
    ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perLanguageOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__beatmapLevelPacks(
    ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__beatmapLevels(
    ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedText>& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__levelFailedTextEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedText> const& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__levelFailedTextEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelFailedTextEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap*& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__difficultyBeatmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__difficultyBeatmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmap;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelFailedTextOverride::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelFailedTextOverride* GlobalNamespace::LevelFailedTextOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFailedTextOverride*>());
}
inline void GlobalNamespace::LevelFailedTextOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedTextOverride::LevelFailedTextOverride() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
