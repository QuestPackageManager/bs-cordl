#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Ref_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Value_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastInstruction_CastInstructionNoT._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CastInstruction_CastInstructionNoT::*)(::System::Type*)>(
    &::GlobalNamespace::CastInstruction_CastInstructionNoT::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40fdc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstruction_CastInstructionNoT.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::CastInstruction* (*)(::System::Type*)>(
    &::GlobalNamespace::CastInstruction_CastInstructionNoT::Create)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x40fdb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstruction_CastInstructionNoT.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CastInstruction_CastInstructionNoT::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::CastInstruction_CastInstructionNoT::Run)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x40fdc7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstruction_CastInstructionNoT.ConvertNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CastInstruction_CastInstructionNoT::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::CastInstruction_CastInstructionNoT::ConvertNull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::CastInstruction_CastInstructionNoT::__cordl_internal_get__t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr ::System::Type* const& GlobalNamespace::CastInstruction_CastInstructionNoT::__cordl_internal_get__t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr void GlobalNamespace::CastInstruction_CastInstructionNoT::__cordl_internal_set__t(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CastInstruction_CastInstructionNoT::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::System::Linq::Expressions::Interpreter::CastInstruction* GlobalNamespace::CastInstruction_CastInstructionNoT::Create(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), "Create",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::CastInstruction*, false>(nullptr, ___internal_method, t);
}
inline int32_t GlobalNamespace::CastInstruction_CastInstructionNoT::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::CastInstruction_CastInstructionNoT::ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionNoT*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::CastInstruction_CastInstructionNoT* GlobalNamespace::CastInstruction_CastInstructionNoT::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CastInstruction_CastInstructionNoT*>(t));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastInstruction_CastInstructionNoT::CastInstruction_CastInstructionNoT() {}
