#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionT_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CastInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CastInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40fd474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CastInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CastInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40fd47c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::CastInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CastInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40fd484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastInstruction.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::CastInstruction::Create)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x40fd4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::CastInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CastInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40fdbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Boolean(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Boolean",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Boolean() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Boolean",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Byte(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Byte",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Byte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Byte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Char(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Char",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Char() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Char",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_DateTime(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_DateTime",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_DateTime() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_DateTime",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Decimal(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Decimal",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Decimal() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Decimal",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Double(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Double",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Double() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Double",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Int16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Int32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Int64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Int64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_SByte(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_SByte",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_SByte() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_SByte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_Single(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Single",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_Single() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_Single",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_String(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_String",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_String() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_String",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt16",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_UInt16() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt16",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt32",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_UInt32() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt32",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::CastInstruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt64",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>(
      std::forward<::System::Linq::Expressions::Interpreter::CastInstruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::getStaticF_s_UInt64() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::CastInstruction*, "s_UInt64",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get>();
}
inline int32_t System::Linq::Expressions::Interpreter::CastInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::CastInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::CastInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::CastInstruction::Create(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(), "Create",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, t);
}
inline void System::Linq::Expressions::Interpreter::CastInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastInstruction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* System::Linq::Expressions::Interpreter::CastInstruction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::CastInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::CastInstruction::CastInstruction() {}
