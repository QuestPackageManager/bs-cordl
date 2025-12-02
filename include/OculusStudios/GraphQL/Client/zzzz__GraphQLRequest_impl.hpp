#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MultipartFile_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequest::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d16cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_operationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operationName;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_operationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operationName;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_operationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___operationName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_document(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___document)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_docId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docId;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_docId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docId;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_docId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_variables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variables;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_variables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___variables;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_variables(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___variables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>*& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_files() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___files;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_files() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___files;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_files(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___files)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int64_t const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_size(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_graphqlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphqlType;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_get_graphqlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphqlType;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequest::__cordl_internal_set_graphqlType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphqlType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::GraphQLRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequest* OculusStudios::GraphQL::Client::GraphQLRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLRequest*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequest::GraphQLRequest() {}
