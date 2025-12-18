#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_ExclusiveOrSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::Run)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ddfc10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::*)()>(
    &::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddfc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte* GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte::ExclusiveOrInstruction_ExclusiveOrSByte() {}
