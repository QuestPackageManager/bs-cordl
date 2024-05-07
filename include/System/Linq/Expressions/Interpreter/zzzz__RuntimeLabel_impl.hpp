#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RuntimeLabel.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::RuntimeLabel::*)(int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::RuntimeLabel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeLabel.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::RuntimeLabel::*)()>(
    &::System::Linq::Expressions::Interpreter::RuntimeLabel::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2c11858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeLabel>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeLabel>::get(), 3));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::RuntimeLabel::_ctor(int32_t index, int32_t continuationStackDepth, int32_t stackDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, continuationStackDepth, stackDepth);
}
inline ::StringW System::Linq::Expressions::Interpreter::RuntimeLabel::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeLabel>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ContinuationStackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::RuntimeLabel::RuntimeLabel(int32_t Index, int32_t StackDepth, int32_t ContinuationStackDepth) noexcept {
  this->Index = Index;
  this->StackDepth = StackDepth;
  this->ContinuationStackDepth = ContinuationStackDepth;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RuntimeLabel::RuntimeLabel() {}
