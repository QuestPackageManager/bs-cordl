#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_NotEqualUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NotEqualInstruction_NotEqualUInt32::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::NotEqualInstruction_NotEqualUInt32::Run)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x40ef054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NotEqualInstruction_NotEqualUInt32::*)()>(
    &::GlobalNamespace::NotEqualInstruction_NotEqualUInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40ee90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotEqualInstruction_NotEqualUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotEqualInstruction_NotEqualUInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32* GlobalNamespace::NotEqualInstruction_NotEqualUInt32::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NotEqualInstruction_NotEqualUInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotEqualInstruction_NotEqualUInt32::NotEqualInstruction_NotEqualUInt32() {}
