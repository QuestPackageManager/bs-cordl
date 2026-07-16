#pragma once
// IWYU pragma private; include "UnityEngine/UI/FontUpdateTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__FontUpdateTracker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::FontUpdateTracker.TrackText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::FontUpdateTracker::TrackText)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6c20004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "TrackText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontUpdateTracker.RebuildForFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*)>(&::UnityEngine::UI::FontUpdateTracker::RebuildForFont)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6c20280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "RebuildForFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontUpdateTracker.UntrackText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::FontUpdateTracker::UntrackText)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6c203ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "UntrackText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::FontUpdateTracker::setStaticF_m_Tracked(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>*,
                                    "m_Tracked", ::UnityEngine::UI::FontUpdateTracker*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>*
UnityEngine::UI::FontUpdateTracker::getStaticF_m_Tracked() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>*,
                                           "m_Tracked", ::UnityEngine::UI::FontUpdateTracker*>();
}
inline void UnityEngine::UI::FontUpdateTracker::TrackText(::UnityEngine::UI::Text* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "TrackText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void UnityEngine::UI::FontUpdateTracker::RebuildForFont(::UnityEngine::Font* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "RebuildForFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void UnityEngine::UI::FontUpdateTracker::UntrackText(::UnityEngine::UI::Text* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontUpdateTracker*>(), { "UntrackText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::FontUpdateTracker::FontUpdateTracker() {}
