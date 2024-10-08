#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterExceptionHandlerInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterExceptionHandlerInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)(bool)>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x404e3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x404e3f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404e434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404e43c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404e444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 8));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::setStaticF_Void(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "Void",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::getStaticF_Void() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "Void",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::setStaticF_NonVoid(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "NonVoid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::getStaticF_NonVoid() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "NonVoid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get>();
}
inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::New_ctor(bool hasValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>(hasValue));
}
inline void System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::_ctor(bool hasValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasValue);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction::EnterExceptionHandlerInstruction() {}
