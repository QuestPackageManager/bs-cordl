#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ParameterBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b3ca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b3ca50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::*)()>(
    &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b3cb2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), 9));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*
System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>(index));
}
inline void System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::_ctor(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ParameterBox::__InitializeLocalInstruction__ParameterBox() {}
