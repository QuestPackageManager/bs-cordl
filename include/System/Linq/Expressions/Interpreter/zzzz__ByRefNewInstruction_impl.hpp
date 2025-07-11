#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ByRefNewInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NewInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefNewInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)(
    ::System::Reflection::ConstructorInfo*, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>)>(
    &::System::Linq::Expressions::Interpreter::ByRefNewInstruction::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40ef33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::ByRefNewInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40ef37c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefNewInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::ByRefNewInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::ByRefNewInstruction::Run)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x40ef3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>&
System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_get__byrefArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> const&
System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_get__byrefArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byrefArgs;
}
constexpr void System::Linq::Expressions::Interpreter::ByRefNewInstruction::__cordl_internal_set__byrefArgs(
    ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____byrefArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::ByRefNewInstruction::_ctor(
    ::System::Reflection::ConstructorInfo* target, int32_t argumentCount,
    ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> byrefArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, argumentCount, byrefArgs);
}
inline ::StringW System::Linq::Expressions::Interpreter::ByRefNewInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::ByRefNewInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::InterpretedFrame*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::ByRefNewInstruction* System::Linq::Expressions::Interpreter::ByRefNewInstruction::New_ctor(
    ::System::Reflection::ConstructorInfo* target, int32_t argumentCount,
    ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> byrefArgs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::ByRefNewInstruction*>(target, argumentCount, byrefArgs));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ByRefNewInstruction::ByRefNewInstruction() {}
