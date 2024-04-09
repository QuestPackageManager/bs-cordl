#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalAccessInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalAccessInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::LocalAccessInstruction::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b3b45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalAccessInstruction.ToDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LocalAccessInstruction::*)(
    int32_t, ::System::Object*, ::System::Func_2<int32_t, int32_t>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*)>(
    &::System::Linq::Expressions::Interpreter::LocalAccessInstruction::ToDebugString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2b3b484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>::get(), 10));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalAccessInstruction::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalAccessInstruction::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Linq::Expressions::Interpreter::LocalAccessInstruction::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline ::System::Linq::Expressions::Interpreter::LocalAccessInstruction* System::Linq::Expressions::Interpreter::LocalAccessInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>(index));
}
inline void System::Linq::Expressions::Interpreter::LocalAccessInstruction::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::StringW System::Linq::Expressions::Interpreter::LocalAccessInstruction::ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                                                                               ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalAccessInstruction*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, instructionIndex, cookie, labelIndexer, objects);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalAccessInstruction::LocalAccessInstruction() {}
