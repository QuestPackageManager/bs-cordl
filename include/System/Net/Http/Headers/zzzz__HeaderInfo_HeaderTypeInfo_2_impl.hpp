#pragma once
#include "System/Net/Http/Headers/zzzz__HeaderInfo_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseDelegate_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
template <typename T, typename U> constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>*& System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::__get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parser;
}
template <typename T, typename U>
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::TryParseDelegate_1<T>*> const& System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::__get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parser;
}
template <typename T, typename U> constexpr void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::__set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename U>
inline ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*
System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                           ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>(name, parser, headerKind));
}
template <typename T, typename U>
inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                                    ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, parser, headerKind);
}
template <typename T, typename U> inline void System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::AddToCollection(::System::Object* collection, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>::get(), "AddToCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, value);
}
template <typename T, typename U>
inline ::System::Object* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers,
                                                                                                            ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>::get(), "CreateCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HeaderInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, headers, headerInfo);
}
template <typename T, typename U>
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::ToStringCollection(::System::Object* collection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>::get(), "ToStringCollection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, collection);
}
template <typename T, typename U> inline bool System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::TryParse(::StringW value, ByRef<::System::Object*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, result);
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::System::Net::Http::Headers::__HeaderInfo__HeaderTypeInfo_2<T, U>::__HeaderInfo__HeaderTypeInfo_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
