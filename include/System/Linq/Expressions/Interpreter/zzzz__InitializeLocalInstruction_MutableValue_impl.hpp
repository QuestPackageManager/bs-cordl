#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_MutableValue.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_MutableValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_MutableValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_MutableValue::*)(int32_t, ::System::Type*)>(
    &::GlobalNamespace::InitializeLocalInstruction_MutableValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40eef8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_MutableValue.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_MutableValue::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::InitializeLocalInstruction_MutableValue::Run)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x40eefbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_MutableValue.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (
    ::GlobalNamespace::InitializeLocalInstruction_MutableValue::*)(int32_t)>(&::GlobalNamespace::InitializeLocalInstruction_MutableValue::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40ef0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), "BoxIfIndexMatches",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_MutableValue.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_MutableValue::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_MutableValue::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40ef184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::InitializeLocalInstruction_MutableValue::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& GlobalNamespace::InitializeLocalInstruction_MutableValue::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::InitializeLocalInstruction_MutableValue::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InitializeLocalInstruction_MutableValue::_ctor(int32_t index, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, type);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_MutableValue::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* GlobalNamespace::InitializeLocalInstruction_MutableValue::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), "BoxIfIndexMatches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_MutableValue::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_MutableValue* GlobalNamespace::InitializeLocalInstruction_MutableValue::New_ctor(int32_t index, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InitializeLocalInstruction_MutableValue*>(index, type));
}
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr GlobalNamespace::InitializeLocalInstruction_MutableValue::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
GlobalNamespace::InitializeLocalInstruction_MutableValue::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_MutableValue::InitializeLocalInstruction_MutableValue() {}
