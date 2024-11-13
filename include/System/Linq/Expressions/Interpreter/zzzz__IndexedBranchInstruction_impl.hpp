#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IndexedBranchInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4061508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.GetLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::RuntimeLabel (
    ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4061530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), "GetLabel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.ToDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(
    int32_t, ::System::Object*, ::System::Func_2<int32_t, int32_t>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*)>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4061578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4061654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::IndexedBranchInstruction::__cordl_internal_get__labelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::IndexedBranchInstruction::__cordl_internal_get__labelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelIndex;
}
constexpr void System::Linq::Expressions::Interpreter::IndexedBranchInstruction::__cordl_internal_set__labelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labelIndex = value;
}
inline ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction* System::Linq::Expressions::Interpreter::IndexedBranchInstruction::New_ctor(int32_t labelIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(labelIndex));
}
inline void System::Linq::Expressions::Interpreter::IndexedBranchInstruction::_ctor(int32_t labelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, labelIndex);
}
inline ::System::Linq::Expressions::Interpreter::RuntimeLabel
System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), "GetLabel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::RuntimeLabel, false>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                                                                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, instructionIndex, cookie, labelIndexer, objects);
}
inline ::StringW System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::IndexedBranchInstruction() {}
