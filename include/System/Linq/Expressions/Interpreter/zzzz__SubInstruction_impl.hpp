#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubSingle_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubUInt64_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::SubInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::SubInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::SubInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4103a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::SubInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::SubInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::SubInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4103a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::SubInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::SubInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::SubInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4103a1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::SubInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::SubInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::SubInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4103a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::SubInstruction.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::SubInstruction::Create)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x4103a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_Int16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_Int32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_Int64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_UInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_UInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_UInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_Single() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::getStaticF_s_Double() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get>();
}
inline int32_t System::Linq::Expressions::Interpreter::SubInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::SubInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::SubInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::SubInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::SubInstruction::Create(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::SubInstruction*>::get(), "Create",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, type);
}
inline ::System::Linq::Expressions::Interpreter::SubInstruction* System::Linq::Expressions::Interpreter::SubInstruction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::SubInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::SubInstruction::SubInstruction() {}
