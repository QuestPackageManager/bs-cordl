#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchLabel_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterTryFaultInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__StrongBox_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::*)()>(
    &::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f98324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>(), { "GetValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::*)(
    ::System::Linq::Expressions::Interpreter::Instruction*, ::StringW, int32_t, int32_t, int32_t)>(&::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f98314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::GetValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>(), { "GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::_ctor(::System::Linq::Expressions::Interpreter::Instruction* instruction, ::StringW name, int32_t index,
                                                                                                     int32_t stackDepth, int32_t continuationsDepth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instruction, name, index, stackDepth, continuationsDepth);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_continuationsDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_instruction", ty: "::System::Linq::Expressions::Interpreter::Instruction*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView(
    int32_t _index, int32_t _stackDepth, int32_t _continuationsDepth, ::StringW _name, ::System::Linq::Expressions::Interpreter::Instruction* _instruction) noexcept {
  this->_index = _index;
  this->_stackDepth = _stackDepth;
  this->_continuationsDepth = _continuationsDepth;
  this->_name = _name;
  this->_instruction = _instruction;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList_DebugView.GetInstructionViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView> (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*,
    ::System::Func_2<int32_t, int32_t>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList_DebugView::GetInstructionViews)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x5f92718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList_DebugView*>(),
                                         { "GetInstructionViews",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*>(), ::i2c::type_of<::System::Func_2<int32_t, int32_t>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView> System::Linq::Expressions::Interpreter::InstructionList_DebugView::GetInstructionViews(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>* instructions, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects,
    ::System::Func_2<int32_t, int32_t>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* debugCookies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList_DebugView*>(),
                                              { "GetInstructionViews",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*>(), ::i2c::type_of<::System::Func_2<int32_t, int32_t>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>>(nullptr, ___internal_method, instructions, objects,
                                                                                                                                            labelIndexer, debugCookies);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionList_DebugView::InstructionList_DebugView() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::Instruction*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::Emit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f92d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "Emit", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.UpdateStackDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::Instruction*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::UpdateStackDepth)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f92e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "UpdateStackDepth", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.UnEmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::UnEmit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f92eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "UnEmit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f92fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_CurrentStackDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::get_CurrentStackDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_CurrentStackDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_CurrentContinuationsDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::get_CurrentContinuationsDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f93024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_CurrentContinuationsDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.GetInstruction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::GetInstruction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "GetInstruction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::InstructionArray (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::ToArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f93090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "ToArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Object*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f93334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoad", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5f937f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoad", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Object*, ::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5f9333c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitLoad", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitDup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f93960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitPop)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f939c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitPop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.SwitchToBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::SwitchToBoxed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f93a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "SwitchToBoxed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f93b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalBoxed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f93d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.LoadLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::LoadLocalBoxed)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f93d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "LoadLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalFromClosure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosure)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f93f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalFromClosure", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalFromClosureBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosureBoxed)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f9412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalFromClosureBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f94300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f944d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalBoxed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f946a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.AssignLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::AssignLocalBoxed)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f94718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "AssignLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalBoxed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f948d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.StoreLocalBoxed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::StoreLocalBoxed)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f94944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "StoreLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocalToClosure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalToClosure)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f94b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocalToClosure", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocalToClosure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalToClosure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f94cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocalToClosure", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitInitializeLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, ::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeLocal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f94cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitInitializeLocal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitInitializeParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeParameter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f94e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitInitializeParameter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.Parameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::Parameter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f94eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "Parameter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.ParameterBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::ParameterBox)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f94f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "ParameterBox", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.InitReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::InitReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f94df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "InitReference", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.InitImmutableRefBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::InitImmutableRefBox)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f94f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "InitImmutableRefBox", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewRuntimeVariables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNewRuntimeVariables)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f94fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNewRuntimeVariables", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGetArrayItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitGetArrayItem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f95008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitGetArrayItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitSetArrayItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitSetArrayItem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9506c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitSetArrayItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f950d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNewArray", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArrayBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayBounds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f95134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitNewArrayBounds", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArrayInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayInit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f951a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitNewArrayInit", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitAdd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f9520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitAdd", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitSub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitSub)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f95244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitSub", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitMul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitMul)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f9527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitMul", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitDiv)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f952b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDiv", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitModulo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitModulo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f952d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitModulo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitExclusiveOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f952fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitExclusiveOr", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitAnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f95320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAnd", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f95344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitOr", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLeftShift)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f95368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeftShift", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitRightShift)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f956d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRightShift", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f956f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNotEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNotEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitNotEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLessThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f95744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitLessThan", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLessThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitLessThanOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f9690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitGreaterThan", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitGreaterThanOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNumericConvertChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, ::System::TypeCode, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertChecked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f96954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitNumericConvertChecked", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNumericConvertUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, ::System::TypeCode, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertUnchecked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f969d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitNumericConvertUnchecked", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitConvertToUnderlying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitConvertToUnderlying)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f96a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitConvertToUnderlying", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCast)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCast", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCastToEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCastToEnum)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCastToEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCastReferenceToEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCastReferenceToEnum)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCastReferenceToEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNot", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitDefaultValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDefaultValue", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Reflection::ConstructorInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNew)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f96c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitNew", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitByRefNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Reflection::ConstructorInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitByRefNew)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f96ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                             { "EmitByRefNew",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::LightDelegateCreator*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCreateDelegate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                             { "EmitCreateDelegate", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeEquals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeEquals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitArrayLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitArrayLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitArrayLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNegate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNegate", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNegateChecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitNegateChecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNegateChecked", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitIncrement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f96ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitIncrement", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitDecrement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f96ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDecrement", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeIs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeIs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeIs", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeAs)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f96f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeAs", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadField)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f96fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitLoadField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.GetLoadField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (
    ::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(&::System::Linq::Expressions::Interpreter::InstructionList::GetLoadField)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5f96fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "GetLoadField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreField)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f97210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitStoreField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::MethodInfo*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCall)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f972b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCall)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9733c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitByRefCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitByRefCall)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f97364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                             { "EmitByRefCall",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNullableCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNullableCall)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f9741c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                         { "EmitNullableCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.BuildRuntimeLabels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::BuildRuntimeLabels)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5f93158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "BuildRuntimeLabels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MakeLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::BranchLabel* (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::MakeLabel)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f97470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "MakeLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.FixupBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::FixupBranch)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f9759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "FixupBranch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EnsureLabelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EnsureLabelIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9768c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EnsureLabelIndex", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MarkRuntimeLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::MarkRuntimeLabel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f976c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "MarkRuntimeLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MarkLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::MarkLabel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f97714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "MarkLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGoto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*, bool, bool, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitGoto)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f97734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                            { "EmitGoto", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(
    ::System::Linq::Expressions::Interpreter::OffsetInstruction*, ::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f977f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
            { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::OffsetInstruction*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f97830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*, bool, bool)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f978a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCoalescingBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitCoalescingBranch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f9792c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                             { "EmitCoalescingBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranchTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitBranchTrue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f97998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitBranchTrue", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranchFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitBranchFalse)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f97a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitBranchFalse", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitThrow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitThrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitThrowVoid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitThrowVoid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitThrowVoid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRethrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitRethrow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRethrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRethrowVoid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitRethrowVoid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRethrowVoid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryFinally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFinally)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f97c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                             { "EmitEnterTryFinally", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryCatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryCatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f97c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterTryCatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryFault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* (
    ::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFault)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f97c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitEnterTryFault", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterFinally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFinally)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f97d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitEnterFinally", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveFinally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFinally)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveFinally", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterFault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFault)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f97e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitEnterFault", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveFault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFault)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveFault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionFilter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveExceptionFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionFilter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveExceptionFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionHandlerNonVoid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerNonVoid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionHandlerNonVoid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionHandlerVoid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerVoid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f9802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionHandlerVoid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveExceptionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(bool, ::System::Linq::Expressions::Interpreter::BranchLabel*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionHandler)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f98090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                { "EmitLeaveExceptionHandler", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStringSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*,
                                                                                                                           ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*)>(
    &::System::Linq::Expressions::Interpreter::InstructionList::EmitStringSwitch)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f98134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                           { "EmitStringSwitch",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(),
                                                                                               ::i2c::type_of<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f9819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*&
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__instructions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instructions;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* const&
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__instructions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instructions;
}
constexpr void
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__instructions(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instructions = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__objects(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objects = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentStackDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentStackDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__currentStackDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentStackDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxStackDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxStackDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxStackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__maxStackDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxStackDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentContinuationsDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContinuationsDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentContinuationsDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContinuationsDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__currentContinuationsDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentContinuationsDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxContinuationDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxContinuationDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxContinuationDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxContinuationDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__maxContinuationDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxContinuationDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__runtimeLabelCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtimeLabelCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__runtimeLabelCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtimeLabelCount;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__runtimeLabelCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runtimeLabelCount = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* const&
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__labels(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labels = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>*&
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__debugCookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugCookies;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* const&
System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__debugCookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugCookies;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__debugCookies(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::System::Object*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugCookies = value;
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_null(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_null", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_null() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_null", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_true(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_true", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_true() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_true", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_false(::System::Linq::Expressions::Interpreter::Instruction* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_false", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_false() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_false", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_Ints(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_Ints", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_Ints() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_Ints", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadObjectCached(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadObjectCached", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadObjectCached() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadObjectCached", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocal() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalBoxed() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalFromClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalFromClosure", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalFromClosure() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalFromClosure", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalFromClosureBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalFromClosureBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalFromClosureBoxed() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_loadLocalFromClosureBoxed",
                                           ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocal() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_storeLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_storeLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_storeLocal() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_storeLocal", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocalBoxed() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_storeLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_storeLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_storeLocalBoxed() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_storeLocalBoxed", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocalToClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocalToClosure", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocalToClosure() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>, "s_assignLocalToClosure", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadFields(
    ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>*, "s_loadFields",
                                    ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>*
System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadFields() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>*, "s_loadFields",
                                           ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_emptyRuntimeLabels(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>, "s_emptyRuntimeLabels", ::System::Linq::Expressions::Interpreter::InstructionList*>(
      std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_emptyRuntimeLabels() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>, "s_emptyRuntimeLabels", ::System::Linq::Expressions::Interpreter::InstructionList*>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::Emit(::System::Linq::Expressions::Interpreter::Instruction* instruction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "Emit", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instruction);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction* instruction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "UpdateStackDepth", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instruction);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::UnEmit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "UnEmit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_CurrentStackDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_CurrentStackDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_CurrentContinuationsDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "get_CurrentContinuationsDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::GetInstruction(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "GetInstruction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::InstructionArray System::Linq::Expressions::Interpreter::InstructionList::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::InstructionArray>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoad", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoad", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(::System::Object* value, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitLoad", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitPop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitPop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::SwitchToBoxed(int32_t index, int32_t instructionIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "SwitchToBoxed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, instructionIndex);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalBoxed(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::LoadLocalBoxed(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "LoadLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosure(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalFromClosure", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosureBoxed(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLoadLocalFromClosureBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalBoxed(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::AssignLocalBoxed(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "AssignLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalBoxed(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::StoreLocalBoxed(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "StoreLocalBoxed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalToClosure(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAssignLocalToClosure", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalToClosure(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitStoreLocalToClosure", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeLocal(int32_t index, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitInitializeLocal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeParameter(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitInitializeParameter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::Parameter(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "Parameter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::ParameterBox(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "ParameterBox", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::InitReference(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "InitReference", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::InitImmutableRefBox(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "InitImmutableRefBox", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewRuntimeVariables(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNewRuntimeVariables", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGetArrayItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitGetArrayItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitSetArrayItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitSetArrayItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArray(::System::Type* elementType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNewArray", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayBounds(::System::Type* elementType, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitNewArrayBounds", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType, rank);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayInit(::System::Type* elementType, int32_t elementCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitNewArrayInit", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType, elementCount);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAdd(::System::Type* type, bool checked) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitAdd", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitSub(::System::Type* type, bool checked) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitSub", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitMul(::System::Type* type, bool checked) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitMul", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDiv(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDiv", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitModulo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitModulo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitExclusiveOr(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitExclusiveOr", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAnd(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitAnd", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitOr(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitOr", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeftShift(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeftShift", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRightShift(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRightShift", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEqual(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNotEqual(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitNotEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLessThan(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitLessThan", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLessThanOrEqual(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitLessThanOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThan(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitGreaterThan", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThanOrEqual(::System::Type* type, bool liftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitGreaterThanOrEqual", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertChecked(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitNumericConvertChecked", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertUnchecked(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitNumericConvertUnchecked", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitConvertToUnderlying(::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitConvertToUnderlying", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCast(::System::Type* toType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCast", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCastToEnum(::System::Type* toType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCastToEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCastReferenceToEnum(::System::Type* toType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCastReferenceToEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNot(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNot", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDefaultValue(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDefaultValue", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNew(::System::Reflection::ConstructorInfo* constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitNew", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructorInfo, parameters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitByRefNew(::System::Reflection::ConstructorInfo* constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*> parameters,
                                                                                  ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> updaters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitByRefNew",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructorInfo, parameters, updaters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator* creator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitCreateDelegate", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creator);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeEquals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeEquals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitArrayLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitArrayLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNegate(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNegate", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNegateChecked(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitNegateChecked", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitIncrement(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitIncrement", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDecrement(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitDecrement", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeIs(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeIs", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeAs(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitTypeAs", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadField(::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitLoadField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::GetLoadField(::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "GetLoadField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(this, ___internal_method, field);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreField(::System::Reflection::FieldInfo* field) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitStoreField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCall(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCall(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, parameters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitByRefCall(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> parameters,
                                                                                   ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitByRefCall",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, parameters, byrefArgs);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNullableCall(::System::Reflection::MethodInfo* method, ::ArrayW<::System::Reflection::ParameterInfo*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitNullableCall", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, parameters);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> System::Linq::Expressions::Interpreter::InstructionList::BuildRuntimeLabels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "BuildRuntimeLabels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::BranchLabel* System::Linq::Expressions::Interpreter::InstructionList::MakeLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "MakeLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::BranchLabel*>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::FixupBranch(int32_t branchIndex, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "FixupBranch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, branchIndex, offset);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel* label) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EnsureLabelIndex", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, label);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::MarkRuntimeLabel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "MarkRuntimeLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel* label) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "MarkLabel", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel* label, bool hasResult, bool hasValue, bool labelTargetGetsValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                          { "EmitGoto", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, hasResult, hasValue, labelTargetGetsValue);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction* instruction,
                                                                                ::System::Linq::Expressions::Interpreter::BranchLabel* label) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
          { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::OffsetInstruction*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instruction, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel* label) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel* label, bool hasResult, bool hasValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                              { "EmitBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, hasResult, hasValue);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel* leftNotNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitCoalescingBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftNotNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel* elseLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitBranchTrue", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elseLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel* elseLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitBranchFalse", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elseLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitThrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitThrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitThrowVoid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitThrowVoid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRethrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRethrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRethrowVoid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitRethrowVoid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel* finallyStartLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitEnterTryFinally", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finallyStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryCatch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterTryCatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*
System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel* tryEnd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitEnterTryFault", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*>(this, ___internal_method, tryEnd);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel* finallyStartLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitEnterFinally", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finallyStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFinally() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveFinally", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel* faultStartLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                                                         { "EmitEnterFault", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faultStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveFault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionFilter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionFilter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitLeaveExceptionFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerNonVoid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionHandlerNonVoid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerVoid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { "EmitEnterExceptionHandlerVoid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionHandler(bool hasValue, ::System::Linq::Expressions::Interpreter::BranchLabel* tryExpressionEndLabel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitLeaveExceptionHandler", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::BranchLabel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasValue, tryExpressionEndLabel);
}
template <typename T> inline void System::Linq::Expressions::Interpreter::InstructionList::EmitIntSwitch(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                                                           { "EmitIntSwitch", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<T, int32_t>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cases);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases,
                                                                                      ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(),
                          { "EmitStringSwitch",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(), ::i2c::type_of<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cases, nullCase);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::InstructionList* System::Linq::Expressions::Interpreter::InstructionList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::InstructionList*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionList::InstructionList() {}
