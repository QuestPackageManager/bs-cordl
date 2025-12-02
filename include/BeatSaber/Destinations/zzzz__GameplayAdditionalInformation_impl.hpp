#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameplayAdditionalInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayAdditionalInformation_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayAdditionalInformation.get_backButtonText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Destinations::GameplayAdditionalInformation::*)()>(
    &::BeatSaber::Destinations::GameplayAdditionalInformation::get_backButtonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x318182c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                               "get_backButtonText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayAdditionalInformation.get_useTestNoteCutSoundEffects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Destinations::GameplayAdditionalInformation::*)()>(
    &::BeatSaber::Destinations::GameplayAdditionalInformation::get_useTestNoteCutSoundEffects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3181834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                               "get_useTestNoteCutSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayAdditionalInformation.get_startPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Destinations::GameplayAdditionalInformation::*)()>(
    &::BeatSaber::Destinations::GameplayAdditionalInformation::get_startPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x318183c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                               "get_startPaused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayAdditionalInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::GameplayAdditionalInformation::*)()>(
    &::BeatSaber::Destinations::GameplayAdditionalInformation::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3181844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr ::StringW const& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr void BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_set__backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__useTestNoteCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestNoteCutSoundEffects;
}
constexpr bool const& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__useTestNoteCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestNoteCutSoundEffects;
}
constexpr void BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_set__useTestNoteCutSoundEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTestNoteCutSoundEffects = value;
}
constexpr bool& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPaused;
}
constexpr bool const& BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_get__startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPaused;
}
constexpr void BeatSaber::Destinations::GameplayAdditionalInformation::__cordl_internal_set__startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPaused = value;
}
inline ::StringW BeatSaber::Destinations::GameplayAdditionalInformation::get_backButtonText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                             "get_backButtonText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::GameplayAdditionalInformation::get_useTestNoteCutSoundEffects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                             "get_useTestNoteCutSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::GameplayAdditionalInformation::get_startPaused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                             "get_startPaused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::GameplayAdditionalInformation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayAdditionalInformation*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::GameplayAdditionalInformation* BeatSaber::Destinations::GameplayAdditionalInformation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::GameplayAdditionalInformation*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameplayAdditionalInformation::GameplayAdditionalInformation() {}
