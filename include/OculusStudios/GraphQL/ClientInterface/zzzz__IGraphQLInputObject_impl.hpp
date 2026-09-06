#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputObject.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject.GetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (
    ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::*)()>(&::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::GetParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::GetParams() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method);
}
