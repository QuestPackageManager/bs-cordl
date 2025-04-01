#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualReference.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualReference_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualReference.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::EqualInstruction_EqualReference::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::EqualInstruction_EqualReference::Run)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x40c3cb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualReference*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualReference*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualReference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EqualInstruction_EqualReference::*)()>(
    &::GlobalNamespace::EqualInstruction_EqualReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c3220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualReference*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EqualInstruction_EqualReference::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualReference*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::EqualInstruction_EqualReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualReference*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualInstruction_EqualReference* GlobalNamespace::EqualInstruction_EqualReference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EqualInstruction_EqualReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualInstruction_EqualReference::EqualInstruction_EqualReference() {}
