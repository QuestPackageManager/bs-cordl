#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_DecrementUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecrementInstruction_DecrementUInt32.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DecrementInstruction_DecrementUInt32::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::DecrementInstruction_DecrementUInt32::Run)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x40c6534;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecrementInstruction_DecrementUInt32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DecrementInstruction_DecrementUInt32::*)()>(
    &::GlobalNamespace::DecrementInstruction_DecrementUInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c6278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::DecrementInstruction_DecrementUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::DecrementInstruction_DecrementUInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DecrementInstruction_DecrementUInt32* GlobalNamespace::DecrementInstruction_DecrementUInt32::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DecrementInstruction_DecrementUInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecrementInstruction_DecrementUInt32::DecrementInstruction_DecrementUInt32() {}
