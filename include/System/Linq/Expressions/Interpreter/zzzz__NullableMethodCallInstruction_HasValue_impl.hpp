#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_HasValue.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_HasValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_HasValue.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_HasValue::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::NullableMethodCallInstruction_HasValue::Run)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0a6b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_HasValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_HasValue::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_HasValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0a5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_HasValue::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_HasValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_HasValue* GlobalNamespace::NullableMethodCallInstruction_HasValue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_HasValue::NullableMethodCallInstruction_HasValue() {}
