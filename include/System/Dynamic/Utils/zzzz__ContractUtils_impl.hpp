#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__ContractUtils_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::ContractUtils.get_Unreachable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::System::Dynamic::Utils::ContractUtils::get_Unreachable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2698d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ContractUtils*>::get(),
                                                                               "get_Unreachable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Dynamic::Utils::ContractUtils::get_Unreachable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::ContractUtils*>::get(), "get_Unreachable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::ContractUtils::ContractUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
