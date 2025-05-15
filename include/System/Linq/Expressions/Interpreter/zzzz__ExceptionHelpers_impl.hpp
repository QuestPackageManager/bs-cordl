#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionHelpers_def.hpp"
#include "System/Reflection/zzzz__TargetInvocationException_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionHelpers.UnwrapAndRethrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::TargetInvocationException*)>(
    &::System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40e639c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHelpers*>::get(), "UnwrapAndRethrow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::TargetInvocationException*>::get() })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow(::System::Reflection::TargetInvocationException* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHelpers*>::get(), "UnwrapAndRethrow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::TargetInvocationException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ExceptionHelpers::ExceptionHelpers() {}
