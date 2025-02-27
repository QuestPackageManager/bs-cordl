#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualSingleLiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_NotEqualSingleLiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::Run)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x40feb5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::*)()>(
    &::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40fd7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull* GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotEqualInstruction_NotEqualSingleLiftedToNull::NotEqualInstruction_NotEqualSingleLiftedToNull() {}
