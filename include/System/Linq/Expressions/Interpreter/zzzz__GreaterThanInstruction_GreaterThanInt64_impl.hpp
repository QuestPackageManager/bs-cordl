#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanInstruction_GreaterThanInt64.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_GreaterThanInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::*)(::System::Object*)>(
    &::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40c6608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x40c6a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>::get(), 8));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64* GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt64::GreaterThanInstruction_GreaterThanInt64() {}
