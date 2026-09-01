#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelExtensions___c::*)()>(&::GlobalNamespace::BeatmapLevelExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3726b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions___c._ToRuntime_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelExtensions___c::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelExtensions___c::_ToRuntime_b__2_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3726b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions___c*>(), { "<ToRuntime>b__2_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelExtensions___c::setStaticF___9(::GlobalNamespace::BeatmapLevelExtensions___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapLevelExtensions___c*, "<>9", ::GlobalNamespace::BeatmapLevelExtensions___c*>(
      std::forward<::GlobalNamespace::BeatmapLevelExtensions___c*>(value));
}
inline ::GlobalNamespace::BeatmapLevelExtensions___c* GlobalNamespace::BeatmapLevelExtensions___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapLevelExtensions___c*, "<>9", ::GlobalNamespace::BeatmapLevelExtensions___c*>();
}
inline void GlobalNamespace::BeatmapLevelExtensions___c::setStaticF___9__2_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__2_0", ::GlobalNamespace::BeatmapLevelExtensions___c*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* GlobalNamespace::BeatmapLevelExtensions___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__2_0", ::GlobalNamespace::BeatmapLevelExtensions___c*>();
}
inline void GlobalNamespace::BeatmapLevelExtensions___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelExtensions___c::_ToRuntime_b__2_0(::StringW l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions___c*>(), { "<ToRuntime>b__2_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, l);
}
inline ::GlobalNamespace::BeatmapLevelExtensions___c* GlobalNamespace::BeatmapLevelExtensions___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelExtensions___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelExtensions___c::BeatmapLevelExtensions___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions.CompareLevelNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapLevelSO*, ::GlobalNamespace::BeatmapLevelSO*)>(
    &::GlobalNamespace::BeatmapLevelExtensions::CompareLevelNames)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x37250a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
                                                { "CompareLevelNames", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions.ToCensoredRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (*)(::GlobalNamespace::BeatmapLevelSO*, ::UnityEngine::Sprite*, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelExtensions::ToCensoredRuntime)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x37250fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
                            { "ToCensoredRuntime", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions.ToRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (*)(::GlobalNamespace::BeatmapLevelSO*)>(&::GlobalNamespace::BeatmapLevelExtensions::ToRuntime)> {
  constexpr static std::size_t size = 0xcf4;
  constexpr static std::size_t addrs = 0x3725a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(), { "ToRuntime", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelExtensions.CreateColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (*)(int32_t, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*)>(
    &::GlobalNamespace::BeatmapLevelExtensions::CreateColorScheme)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x372689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
            { "CreateColorScheme", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*>() } })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BeatmapLevelExtensions::CompareLevelNames(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo1, ::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
                                              { "CompareLevelNames", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, beatmapLevelSo1, beatmapLevelSo2);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelExtensions::ToCensoredRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo, ::UnityEngine::Sprite* coverSprite,
                                                                                                   ::StringW censoredLocalizedSongName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
                                       { "ToCensoredRuntime", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(nullptr, ___internal_method, beatmapLevelSo, coverSprite, censoredLocalizedSongName);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelExtensions::ToRuntime(::GlobalNamespace::BeatmapLevelSO* beatmapLevelSo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(), { "ToRuntime", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(nullptr, ___internal_method, beatmapLevelSo);
}
inline ::GlobalNamespace::ColorScheme*
GlobalNamespace::BeatmapLevelExtensions::CreateColorScheme(int32_t idx, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* colorSchemes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapLevelExtensions*>(),
          { "CreateColorScheme", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(nullptr, ___internal_method, idx, colorSchemes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelExtensions::BeatmapLevelExtensions() {}
