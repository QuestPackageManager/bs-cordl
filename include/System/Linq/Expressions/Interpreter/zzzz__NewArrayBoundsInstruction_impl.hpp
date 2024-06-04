#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NewArrayBoundsInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NewArrayBoundsInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)(::System::Type*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c31960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c31990;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c31998;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c319a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::Run)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c319e0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType;
}
constexpr void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_set__elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_get__rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::__cordl_internal_set__rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rank = value;
}
inline ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction* System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::New_ctor(::System::Type* elementType, int32_t rank) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>(elementType, rank));
}
inline void System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::_ctor(::System::Type* elementType, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType, rank);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction::NewArrayBoundsInstruction() {}
