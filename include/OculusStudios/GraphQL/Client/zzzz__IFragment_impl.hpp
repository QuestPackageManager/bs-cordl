#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/IFragment.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IFragment_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::IFragment.CovertNestedFragments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::IFragment::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::OculusStudios::GraphQL::Client::IFragment::CovertNestedFragments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::IFragment.GetNestedFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::GraphQL::Client::GraphQLModel* (::OculusStudios::GraphQL::Client::IFragment::*)()>(
    &::OculusStudios::GraphQL::Client::IFragment::GetNestedFragment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0da34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(), 1));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::IFragment::CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* json) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline ::OculusStudios::GraphQL::Client::GraphQLModel* OculusStudios::GraphQL::Client::IFragment::GetNestedFragment() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::IFragment*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::Client::GraphQLModel*, false>(this, ___internal_method);
}
