#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_AndSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AndInstruction_AndSByte.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AndInstruction_AndSByte::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::AndInstruction_AndSByte::Run)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5dd8014;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AndInstruction_AndSByte*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AndInstruction_AndSByte*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AndInstruction_AndSByte._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AndInstruction_AndSByte::*)()>(&::GlobalNamespace::AndInstruction_AndSByte::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dd7ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AndInstruction_AndSByte*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AndInstruction_AndSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AndInstruction_AndSByte*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::AndInstruction_AndSByte::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AndInstruction_AndSByte*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AndInstruction_AndSByte* GlobalNamespace::AndInstruction_AndSByte::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AndInstruction_AndSByte*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AndInstruction_AndSByte::AndInstruction_AndSByte() {}
