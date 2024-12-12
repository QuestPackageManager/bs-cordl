#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HeaderInfo_HeaderTypeInfo_2.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_HeaderTypeInfo_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__TryParseDelegate_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename U> constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>*& GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::__cordl_internal_get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U> constexpr ::System::Net::Http::Headers::TryParseDelegate_1<T>* const& GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::__cordl_internal_get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
template <typename T, typename U> constexpr void GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::__cordl_internal_set_parser(::System::Net::Http::Headers::TryParseDelegate_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___parser, value);
}
template <typename T, typename U>
inline void GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                      ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::TryParseDelegate_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaderKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, parser, headerKind);
}
template <typename T, typename U> inline void GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::AddToCollection(::System::Object* collection, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, value);
}
template <typename T, typename U>
inline ::System::Object* GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::CreateCollection(::System::Net::Http::Headers::HttpHeaders* headers,
                                                                                              ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, headers, headerInfo);
}
template <typename T, typename U> inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::ToStringCollection(::System::Object* collection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method, collection);
}
template <typename T, typename U> inline bool GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::TryParse(::StringW value, ::ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, result);
}
template <typename T, typename U>
inline ::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>* GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::New_ctor(::StringW name, ::System::Net::Http::Headers::TryParseDelegate_1<T>* parser,
                                                                                                                          ::System::Net::Http::Headers::HttpHeaderKind headerKind) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>*>(name, parser, headerKind));
}
// Ctor Parameters []
template <typename T, typename U> constexpr ::GlobalNamespace::HeaderInfo_HeaderTypeInfo_2<T, U>::HeaderInfo_HeaderTypeInfo_2() {}
