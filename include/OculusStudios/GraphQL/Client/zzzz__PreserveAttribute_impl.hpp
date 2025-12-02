#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::PreserveAttribute::*)()>(
    &::OculusStudios::GraphQL::Client::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0dc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::PreserveAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::Client::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::PreserveAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::PreserveAttribute* OculusStudios::GraphQL::Client::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::PreserveAttribute::PreserveAttribute() {}
