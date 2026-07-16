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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8a244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.GetLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::RuntimeLabel (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f8a24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(),
                                                                                           { "GetLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.ToDebugString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(
    int32_t, ::System::Object*, ::System::Func_2<int32_t, int32_t>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*)>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f8a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f8a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), 3 }));
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
inline void System::Linq::Expressions::Interpreter::IndexedBranchInstruction::_ctor(int32_t labelIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, labelIndex);
}
inline ::System::Linq::Expressions::Interpreter::RuntimeLabel
System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(),
                                                                                         { "GetLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::RuntimeLabel>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                                                                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, instructionIndex, cookie, labelIndexer, objects);
}
inline ::StringW System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction* System::Linq::Expressions::Interpreter::IndexedBranchInstruction::New_ctor(int32_t labelIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*>(labelIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::IndexedBranchInstruction() {}
