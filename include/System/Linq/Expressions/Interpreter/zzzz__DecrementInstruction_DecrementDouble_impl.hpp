#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementDouble.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_DecrementDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecrementInstruction_DecrementDouble.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DecrementInstruction_DecrementDouble::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::DecrementInstruction_DecrementDouble::Run)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x40c184c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementDouble*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementDouble*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecrementInstruction_DecrementDouble._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DecrementInstruction_DecrementDouble::*)()>(
    &::GlobalNamespace::DecrementInstruction_DecrementDouble::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c1394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementDouble*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::DecrementInstruction_DecrementDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementDouble*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::DecrementInstruction_DecrementDouble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementDouble*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DecrementInstruction_DecrementDouble* GlobalNamespace::DecrementInstruction_DecrementDouble::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DecrementInstruction_DecrementDouble*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecrementInstruction_DecrementDouble::DecrementInstruction_DecrementDouble() {}
