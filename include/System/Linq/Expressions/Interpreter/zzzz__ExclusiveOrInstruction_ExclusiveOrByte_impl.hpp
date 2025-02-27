#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_ExclusiveOrByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::Run)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x40d7448;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::*)()>(
    &::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d7690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte* GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte::ExclusiveOrInstruction_ExclusiveOrByte() {}
