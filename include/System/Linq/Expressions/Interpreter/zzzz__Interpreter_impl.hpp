#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/Interpreter.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Interpreter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::Interpreter::*)(
    ::StringW, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::System::Linq::Expressions::Interpreter::InstructionArray,
    ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*>)>(&::System::Linq::Expressions::Interpreter::Interpreter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x40d4dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InstructionArray>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::Interpreter::*)()>(
    &::System::Linq::Expressions::Interpreter::Interpreter::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d4e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                               "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.get_LocalCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::Interpreter::*)()>(
    &::System::Linq::Expressions::Interpreter::Interpreter::get_LocalCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d4e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                               "get_LocalCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.get_ClosureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::Interpreter::*)()>(
    &::System::Linq::Expressions::Interpreter::Interpreter::get_ClosureSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x40d4e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                               "get_ClosureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.get_Instructions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::InstructionArray (
    ::System::Linq::Expressions::Interpreter::Interpreter::*)()>(&::System::Linq::Expressions::Interpreter::Interpreter::get_Instructions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40d4e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                               "get_Instructions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.get_ClosureVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* (
        ::System::Linq::Expressions::Interpreter::Interpreter::*)()>(&::System::Linq::Expressions::Interpreter::Interpreter::get_ClosureVariables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d4e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                               "get_ClosureVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::Interpreter.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::Interpreter::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::Interpreter::Run)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x40d4ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__instructions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instructions;
}
constexpr ::System::Linq::Expressions::Interpreter::InstructionArray const& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__instructions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instructions;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__instructions(::System::Linq::Expressions::Interpreter::InstructionArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instructions = value;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> const&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__labels(
    ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel, ::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*>&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__debugInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInfos;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> const&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__debugInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInfos;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__debugInfos(
    ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__LocalCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCount_k__BackingField;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__LocalCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCount_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__LocalCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LocalCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__ClosureVariables_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClosureVariables_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* const&
System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_get__ClosureVariables_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClosureVariables_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::Interpreter::__cordl_internal_set__ClosureVariables_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClosureVariables_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::Interpreter::setStaticF_NoValue(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "NoValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Linq::Expressions::Interpreter::Interpreter::getStaticF_NoValue() {
  return ::cordl_internals::getStaticField<::System::Object*, "NoValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get>();
}
inline void
System::Linq::Expressions::Interpreter::Interpreter::_ctor(::StringW name, ::System::Linq::Expressions::Interpreter::LocalVariables* locals,
                                                           ::System::Linq::Expressions::Interpreter::InstructionArray instructions,
                                                           ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariables*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InstructionArray>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, locals, instructions, debugInfos);
}
inline ::StringW System::Linq::Expressions::Interpreter::Interpreter::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                             "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::Interpreter::get_LocalCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                             "get_LocalCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::Interpreter::get_ClosureSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                             "get_ClosureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::InstructionArray System::Linq::Expressions::Interpreter::Interpreter::get_Instructions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                             "get_Instructions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::InstructionArray, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*
System::Linq::Expressions::Interpreter::Interpreter::get_ClosureVariables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                                                             "get_ClosureVariables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*,
                                             false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::Interpreter::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::Interpreter*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Interpreter* System::Linq::Expressions::Interpreter::Interpreter::New_ctor(
    ::StringW name, ::System::Linq::Expressions::Interpreter::LocalVariables* locals, ::System::Linq::Expressions::Interpreter::InstructionArray instructions,
    ::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*, ::Array<::System::Linq::Expressions::Interpreter::DebugInfo*>*> debugInfos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::Interpreter*>(name, locals, instructions, debugInfos));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::Interpreter::Interpreter() {}
