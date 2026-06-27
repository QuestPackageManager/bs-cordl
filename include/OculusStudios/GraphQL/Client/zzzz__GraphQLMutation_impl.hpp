#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLMutation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutation_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLMutation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLMutation::*)()>(&::OculusStudios::GraphQL::Client::GraphQLMutation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df1824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLMutation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::GraphQLMutation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLMutation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLMutation* OculusStudios::GraphQL::Client::GraphQLMutation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLMutation*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLMutation::GraphQLMutation()   {
}
