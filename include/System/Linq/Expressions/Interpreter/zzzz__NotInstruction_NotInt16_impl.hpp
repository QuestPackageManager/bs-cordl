#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_NotInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotInstruction_NotInt16.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NotInstruction_NotInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NotInstruction_NotInt16::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x40f1ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotInstruction_NotInt16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotInstruction_NotInt16*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotInstruction_NotInt16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NotInstruction_NotInt16::*)()>(&::GlobalNamespace::NotInstruction_NotInt16::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f18b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotInstruction_NotInt16*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotInstruction_NotInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotInstruction_NotInt16*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotInstruction_NotInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotInstruction_NotInt16*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NotInstruction_NotInt16* GlobalNamespace::NotInstruction_NotInt16::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NotInstruction_NotInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotInstruction_NotInt16::NotInstruction_NotInt16() {}
