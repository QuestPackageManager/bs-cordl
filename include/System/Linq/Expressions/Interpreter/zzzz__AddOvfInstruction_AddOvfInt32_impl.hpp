#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AddOvfInstruction_AddOvfInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AddOvfInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AddOvfInstruction_AddOvfInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddOvfInstruction_AddOvfInt32.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::GlobalNamespace::AddOvfInstruction_AddOvfInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::AddOvfInstruction_AddOvfInt32::Run)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x40bfd54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddOvfInstruction_AddOvfInt32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AddOvfInstruction_AddOvfInt32::*)()>(
    &::GlobalNamespace::AddOvfInstruction_AddOvfInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40bfae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AddOvfInstruction_AddOvfInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::AddOvfInstruction_AddOvfInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AddOvfInstruction_AddOvfInt32* GlobalNamespace::AddOvfInstruction_AddOvfInt32::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AddOvfInstruction_AddOvfInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddOvfInstruction_AddOvfInt32::AddOvfInstruction_AddOvfInt32() {}
