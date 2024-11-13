#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_ImmutableBox.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ImmutableBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::*)(
    int32_t, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40878e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::Run)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4087958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::*)()>(
    &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4087a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::__cordl_internal_set__defaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*
System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::New_ctor(int32_t index, ::System::Object* defaultValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>(index, defaultValue));
}
inline void System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::_ctor(int32_t index, ::System::Object* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, defaultValue);
}
inline int32_t System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::StringW System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox::__InitializeLocalInstruction__ImmutableBox() {}
