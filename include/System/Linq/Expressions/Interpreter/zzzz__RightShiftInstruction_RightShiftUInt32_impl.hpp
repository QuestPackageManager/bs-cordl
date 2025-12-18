#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RightShiftInstruction_RightShiftUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_RightShiftUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftUInt32.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::RightShiftInstruction_RightShiftUInt32::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::RightShiftInstruction_RightShiftUInt32::Run)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e07e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftUInt32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RightShiftInstruction_RightShiftUInt32::*)()>(
    &::GlobalNamespace::RightShiftInstruction_RightShiftUInt32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e07a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::RightShiftInstruction_RightShiftUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::RightShiftInstruction_RightShiftUInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RightShiftInstruction_RightShiftUInt32* GlobalNamespace::RightShiftInstruction_RightShiftUInt32::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RightShiftInstruction_RightShiftUInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RightShiftInstruction_RightShiftUInt32::RightShiftInstruction_RightShiftUInt32() {}
