#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftUInt64_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c26758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c26760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c26768;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LeftShiftInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LeftShiftInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c267a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LeftShiftInstruction.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::LeftShiftInstruction::Create)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2c217b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_SByte",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_SByte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_SByte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_Int16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_Int32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_Int64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Byte",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_Byte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Byte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_UInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_UInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::getStaticF_s_UInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get>();
}
inline int32_t System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::LeftShiftInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LeftShiftInstruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>());
}
inline void System::Linq::Expressions::Interpreter::LeftShiftInstruction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LeftShiftInstruction::Create(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LeftShiftInstruction*>::get(), "Create",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LeftShiftInstruction::LeftShiftInstruction() {}
