#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionArray.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionArray::*)(
    int32_t, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, ::ArrayW<::System::Object*>, ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>,
    ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*)>(&::System::Linq::Expressions::Interpreter::InstructionArray::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f925c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(),
                                                    ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*>() } })));
    return ___internal_method;
  }
};
inline void
System::Linq::Expressions::Interpreter::InstructionArray::_ctor(int32_t maxStackDepth, int32_t maxContinuationDepth, ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> instructions,
                                                                ::ArrayW<::System::Object*> objects, ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> labels,
                                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* debugCookies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(),
                                                  ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxStackDepth, maxContinuationDepth, instructions, objects, labels, debugCookies);
}
// Ctor Parameters [CppParam { name: "MaxStackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxContinuationDepth", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Instructions", ty: "::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Objects", ty:
// "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Labels", ty: "::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "DebugCookies", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray::InstructionArray(
    int32_t MaxStackDepth, int32_t MaxContinuationDepth, ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> Instructions, ::ArrayW<::System::Object*> Objects,
    ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> Labels,
    ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* DebugCookies) noexcept {
  this->MaxStackDepth = MaxStackDepth;
  this->MaxContinuationDepth = MaxContinuationDepth;
  this->Instructions = Instructions;
  this->Objects = Objects;
  this->Labels = Labels;
  this->DebugCookies = DebugCookies;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray::InstructionArray() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::*)(::System::Linq::Expressions::Interpreter::InstructionArray)>(
    &::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f925d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionArray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView.GetInstructionViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView> (
    ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::*)(bool)>(&::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::GetInstructionViews)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f92678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(), { "GetInstructionViews", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView._GetInstructionViews_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::_GetInstructionViews_b__4_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f92d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(),
                                                                                           { "<GetInstructionViews>b__4_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray& System::Linq::Expressions::Interpreter::InstructionArray_DebugView::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray const& System::Linq::Expressions::Interpreter::InstructionArray_DebugView::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionArray_DebugView::__cordl_internal_set__array(::System::Linq::Expressions::Interpreter::InstructionArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____array = value;
}
inline void System::Linq::Expressions::Interpreter::InstructionArray_DebugView::_ctor(::System::Linq::Expressions::Interpreter::InstructionArray array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionArray>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>
System::Linq::Expressions::Interpreter::InstructionArray_DebugView::GetInstructionViews(bool includeDebugCookies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(), { "GetInstructionViews", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>>(this, ___internal_method, includeDebugCookies);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionArray_DebugView::_GetInstructionViews_b__4_0(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(),
                                                                                         { "<GetInstructionViews>b__4_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*
System::Linq::Expressions::Interpreter::InstructionArray_DebugView::New_ctor(::System::Linq::Expressions::Interpreter::InstructionArray array) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::InstructionArray_DebugView*>(array));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray_DebugView::InstructionArray_DebugView() {}
