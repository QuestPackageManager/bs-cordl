#pragma once
// IWYU pragma private; include "Mono/Net/Security/NoReflectionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__NoReflectionHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::NoReflectionHelper.GetProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::Mono::Net::Security::NoReflectionHelper::GetProvider)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dc25fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::NoReflectionHelper*>::get(), "GetProvider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Object* Mono::Net::Security::NoReflectionHelper::GetProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::NoReflectionHelper*>::get(), "GetProvider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::NoReflectionHelper::NoReflectionHelper() {}
