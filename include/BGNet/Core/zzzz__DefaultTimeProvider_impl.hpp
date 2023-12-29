#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/zzzz__DefaultTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTimeProvider.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITimeProvider* (*)()>(&::BGNet::Core::DefaultTimeProvider::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd8484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider*>::get(), "get_instance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::BGNet::Core::ITimeProvider* BGNet::Core::DefaultTimeProvider::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::DefaultTimeProvider*>::get(), "get_instance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITimeProvider*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::DefaultTimeProvider::DefaultTimeProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
