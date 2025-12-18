#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValue.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValue.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_GetValue::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::NullableMethodCallInstruction_GetValue::Run)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0a6f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_GetValue::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0a5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_GetValue::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_GetValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_GetValue* GlobalNamespace::NullableMethodCallInstruction_GetValue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_GetValue::NullableMethodCallInstruction_GetValue() {}
