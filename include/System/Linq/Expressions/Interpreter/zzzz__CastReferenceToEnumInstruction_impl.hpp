#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastReferenceToEnumInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastReferenceToEnumInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40fdee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::Run)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x40fdf10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::__cordl_internal_get__t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr ::System::Type* const& System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::__cordl_internal_get__t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr void System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::__cordl_internal_set__t(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline int32_t System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction* System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction*>(t));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction::CastReferenceToEnumInstruction() {}
