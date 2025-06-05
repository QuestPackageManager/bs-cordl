#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RethrowException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RethrowException_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RethrowException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::RethrowException::*)()>(
    &::System::Linq::Expressions::Interpreter::RethrowException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40d81c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RethrowException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::RethrowException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RethrowException*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::RethrowException* System::Linq::Expressions::Interpreter::RethrowException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::RethrowException*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RethrowException::RethrowException() {}
