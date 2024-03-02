#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ExceptionHelpers_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ExceptionHelpers.IsExceptionIndicatingBugInCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bf5644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ExceptionHelpers*>::get(), "IsExceptionIndicatingBugInCode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ExceptionHelpers*>::get(), "IsExceptionIndicatingBugInCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ExceptionHelpers::ExceptionHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
