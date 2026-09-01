#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentKeywords.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.get_environmentKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::EnvironmentKeywords::*)()>(
    &::GlobalNamespace::EnvironmentKeywords::get_environmentKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37087f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(), { "get_environmentKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentKeywords::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(
    &::GlobalNamespace::EnvironmentKeywords::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3708800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.HasKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentKeywords::*)(::StringW)>(&::GlobalNamespace::EnvironmentKeywords::HasKeyword)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3708930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(), { "HasKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& GlobalNamespace::EnvironmentKeywords::__cordl_internal_get__environmentKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywords;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& GlobalNamespace::EnvironmentKeywords::__cordl_internal_get__environmentKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywords;
}
constexpr void GlobalNamespace::EnvironmentKeywords::__cordl_internal_set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentKeywords = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::EnvironmentKeywords::__cordl_internal_get__environmentKeywordsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywordsSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::EnvironmentKeywords::__cordl_internal_get__environmentKeywordsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentKeywordsSet;
}
constexpr void GlobalNamespace::EnvironmentKeywords::__cordl_internal_set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentKeywordsSet = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentKeywords::get_environmentKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(), { "get_environmentKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentKeywords::_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentKeywords);
}
inline bool GlobalNamespace::EnvironmentKeywords::HasKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentKeywords*>(), { "HasKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyword);
}
inline ::GlobalNamespace::EnvironmentKeywords* GlobalNamespace::EnvironmentKeywords::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentKeywords*>(environmentKeywords));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentKeywords::EnvironmentKeywords() {}
