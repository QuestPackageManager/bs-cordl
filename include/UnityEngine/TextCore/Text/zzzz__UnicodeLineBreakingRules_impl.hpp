#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\UnicodeLineBreakingRules.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__UnicodeLineBreakingRules_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.get_leadingCharactersLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c14e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_leadingCharactersLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.get_followingCharactersLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c15098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_followingCharactersLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.get_useModernHangulLineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_useModernHangulLineBreakingRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c150bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_useModernHangulLineBreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.LoadLineBreakingRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6c14ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "LoadLineBreakingRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.GetCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (*)(::UnityEngine::TextAsset*)>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c150c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c151b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_UnicodeLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_UnicodeLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_UnicodeLineBreakingRules(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnicodeLineBreakingRules = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_LeadingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeadingCharacters;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_LeadingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeadingCharacters;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_LeadingCharacters(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeadingCharacters = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_FollowingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FollowingCharacters;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_FollowingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FollowingCharacters;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_FollowingCharacters(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FollowingCharacters = value;
}
constexpr bool& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_UseModernHangulLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr bool const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_UseModernHangulLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_UseModernHangulLineBreakingRules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseModernHangulLineBreakingRules = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_LeadingCharactersLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeadingCharactersLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_LeadingCharactersLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeadingCharactersLookup;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LeadingCharactersLookup = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_FollowingCharactersLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FollowingCharactersLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_get_m_FollowingCharactersLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FollowingCharactersLookup;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__cordl_internal_set_m_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FollowingCharactersLookup = value;
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_leadingCharactersLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_followingCharactersLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_useModernHangulLineBreakingRules() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "get_useModernHangulLineBreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "LoadLineBreakingRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters(::UnityEngine::TextAsset* file) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*>(nullptr, ___internal_method, file);
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::UnicodeLineBreakingRules() {}
