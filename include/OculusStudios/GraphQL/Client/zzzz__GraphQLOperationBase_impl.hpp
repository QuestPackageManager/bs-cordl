#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLOperationBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLOperationBase_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLOperationBase.GetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (::OculusStudios::GraphQL::Client::GraphQLOperationBase::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLOperationBase::GetParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1fac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), { "GetParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLOperationBase.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::OculusStudios::GraphQL::Client::GraphQLOperationBase::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLOperationBase::GetVariableNames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLOperationBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLOperationBase::*)()>(&::OculusStudios::GraphQL::Client::GraphQLOperationBase::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f1fa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& OculusStudios::GraphQL::Client::GraphQLOperationBase::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const& OculusStudios::GraphQL::Client::GraphQLOperationBase::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLOperationBase::__cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* OculusStudios::GraphQL::Client::GraphQLOperationBase::GetParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), { "GetParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* OculusStudios::GraphQL::Client::GraphQLOperationBase::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLOperationBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLOperationBase* OculusStudios::GraphQL::Client::GraphQLOperationBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLOperationBase*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLOperationBase::GraphQLOperationBase() {}
