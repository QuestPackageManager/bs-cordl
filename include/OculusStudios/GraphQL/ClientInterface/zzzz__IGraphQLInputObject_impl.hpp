#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IGraphQLInputObject.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject.GetParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (
    ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::*)()>(&::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::GetParams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject::GetParams() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*, false>(this, ___internal_method);
}
