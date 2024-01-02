#pragma once
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_CollectionHeaderTypeInfo_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseListDelegate_1_def.hpp"
template <typename T, typename U> constexpr int32_t& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_minimalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimalCount;
}
template <typename T, typename U> constexpr int32_t const& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_minimalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimalCount;
}
template <typename T, typename U> constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__set_minimalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minimalCount = value;
}
template <typename T, typename U> constexpr ::StringW& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
template <typename T, typename U> constexpr ::StringW const& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
template <typename T, typename U> constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__set_separator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___separator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename U> constexpr ::System::Net::Http::Headers::TryParseListDelegate_1<T>*& System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseListDelegate_1<T>*> const&
System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U>
constexpr void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__set_parser(::System::Net::Http::Headers::TryParseListDelegate_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename U>
inline ::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*
System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser,
                                                                                     ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*>(name, parser, headerKind, minimalCount, separator));
}
template <typename T, typename U>
inline void System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::_ctor(::StringW name, ::System::Net::Http::Headers::TryParseListDelegate_1<T>* parser,
                                                                                              ::System::Net::Http::Headers::HttpHeaderKind headerKind, int32_t minimalCount, ::StringW separator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseListDelegate_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, parser, headerKind, minimalCount, separator);
}
template <typename T, typename U> inline ::StringW System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::get_Separator() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T, typename U> inline bool System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::TryParse(::StringW value, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, result);
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::System::Net::Http::Headers::__HeaderInfo__CollectionHeaderTypeInfo_2<T, U>::__HeaderInfo__CollectionHeaderTypeInfo_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
