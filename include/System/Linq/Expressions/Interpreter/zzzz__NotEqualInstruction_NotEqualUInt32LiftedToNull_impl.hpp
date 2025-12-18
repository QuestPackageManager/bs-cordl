#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualUInt32LiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_NotEqualUInt32LiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::Run)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e04214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::*)()>(
    &::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0349c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull* GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32LiftedToNull::NotEqualInstruction_NotEqualUInt32LiftedToNull() {}
