#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterTryCatchFinallyInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterTryCatchFinallyInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryCatchFinallyHandler_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.SetTryHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(
    ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*)>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::SetTryHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d1c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), "SetTryHandler",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* (
    ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d1c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                 "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_ProducedContinuations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_ProducedContinuations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d1c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(int32_t, bool)>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40d1c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.CreateTryFinally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* (*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryFinally)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x40d1c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), "CreateTryFinally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.CreateTryCatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* (*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryCatch)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x40d1cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                 "CreateTryCatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::Run)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x40d1d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x40d21d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40d2240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 3));
    return ___internal_method;
  }
};
constexpr bool& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__hasFinally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinally;
}
constexpr bool const& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__hasFinally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinally;
}
constexpr void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_set__hasFinally(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasFinally = value;
}
constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__tryHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* const& System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_get__tryHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tryHandler;
}
constexpr void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::__cordl_internal_set__tryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tryHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::SetTryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* tryHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), "SetTryHandler",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tryHandler);
}
inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), "get_Handler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_ProducedContinuations() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::_ctor(int32_t targetIndex, bool hasFinally) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetIndex, hasFinally);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryFinally(int32_t labelIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), "CreateTryFinally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*, false>(nullptr, ___internal_method, labelIndex);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::CreateTryCatch() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(),
                                               "CreateTryCatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*, false>(nullptr, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::New_ctor(int32_t targetIndex,
                                                                                                                                                                    bool hasFinally) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*>(targetIndex, hasFinally));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction::EnterTryCatchFinallyInstruction() {}
