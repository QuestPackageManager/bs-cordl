#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ModuloInstruction_ModuloUInt64.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_ModuloUInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModuloInstruction_ModuloUInt64.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::GlobalNamespace::ModuloInstruction_ModuloUInt64::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::ModuloInstruction_ModuloUInt64::Run)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x40ec13c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModuloInstruction_ModuloUInt64._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ModuloInstruction_ModuloUInt64::*)()>(
    &::GlobalNamespace::ModuloInstruction_ModuloUInt64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40eb974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ModuloInstruction_ModuloUInt64::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ModuloInstruction_ModuloUInt64::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ModuloInstruction_ModuloUInt64* GlobalNamespace::ModuloInstruction_ModuloUInt64::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ModuloInstruction_ModuloUInt64*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModuloInstruction_ModuloUInt64::ModuloInstruction_ModuloUInt64() {}
