#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LeftShiftInstruction_LeftShiftUInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::Run)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x40e36b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::*)()>(
    &::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40e320c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16* GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeftShiftInstruction_LeftShiftUInt16::LeftShiftInstruction_LeftShiftUInt16() {}
