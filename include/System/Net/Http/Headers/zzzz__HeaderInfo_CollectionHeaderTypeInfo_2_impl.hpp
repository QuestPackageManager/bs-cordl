#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo_CollectionHeaderTypeInfo_2.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_CollectionHeaderTypeInfo_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseListDelegate_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename U> constexpr int32_t& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_minimalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimalCount;
}
template <typename T, typename U> constexpr int32_t const& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_minimalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimalCount;
}
template <typename T, typename U> constexpr void GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_set_minimalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minimalCount = value;
}
template <typename T, typename U> constexpr ::StringW& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
template <typename T, typename U> constexpr ::StringW const& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
template <typename T, typename U> constexpr void GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_set_separator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___separator = value;
}
template <typename T, typename U> constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>*& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U>
constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>* const& GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U>
constexpr void GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::__cordl_internal_set_parser(::System::Net::Http::Headers::TryParseListDelegate_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parser = value;
}
template <typename T, typename U>
inline void GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser,
                                                                                ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>(),
                                                               ::i2c::type_of<::System::Net::Http::Headers::HttpHeaderKind>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, parser, headerKind, minimalCount, separator);
}
template <typename T, typename U> inline ::StringW GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::get_Separator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T, typename U> inline bool GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::TryParse(::StringW value, ::by_ref<::System::Object*> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, result);
}
template <typename T, typename U>
inline ::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>*
GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser,
                                                                       ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>*>(name, parser, headerKind, minimalCount, separator));
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::GlobalNamespace::HeaderInfo_CollectionHeaderTypeInfo_2<T, U>::HeaderInfo_CollectionHeaderTypeInfo_2() {}
