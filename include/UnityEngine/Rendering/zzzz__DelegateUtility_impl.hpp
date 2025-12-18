#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DelegateUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DelegateUtility_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DelegateUtility.Cast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Type*)>(&::UnityEngine::Rendering::DelegateUtility::Cast)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x660b5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DelegateUtility*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Delegate* UnityEngine::Rendering::DelegateUtility::Cast(::System::Delegate* source, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DelegateUtility*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, source, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DelegateUtility::DelegateUtility() {}
