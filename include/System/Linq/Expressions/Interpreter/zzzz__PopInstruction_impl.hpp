#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/PopInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__PopInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PopInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::PopInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::PopInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f142c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PopInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::PopInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::PopInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40f1434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PopInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::PopInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::PopInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40f143c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PopInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::PopInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::PopInstruction::Run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40f147c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 8));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::PopInstruction::setStaticF_Instance(::System::Linq::Expressions::Interpreter::PopInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::PopInstruction*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::PopInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::PopInstruction* System::Linq::Expressions::Interpreter::PopInstruction::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::PopInstruction*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::PopInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::PopInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::PopInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::PopInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::PopInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::PopInstruction* System::Linq::Expressions::Interpreter::PopInstruction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::PopInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::PopInstruction::PopInstruction() {}
