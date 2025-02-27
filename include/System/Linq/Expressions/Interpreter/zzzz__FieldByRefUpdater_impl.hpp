#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/FieldByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__FieldByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::FieldInfo*, int32_t)>(&::System::Linq::Expressions::Interpreter::FieldByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x40f3554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x40f359c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40f3640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr void System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_set__object(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____object = value;
}
constexpr ::System::Reflection::FieldInfo*& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr ::System::Reflection::FieldInfo* const& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr void System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_set__field(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____field)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                             ::System::Reflection::FieldInfo* field, int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, field, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                     ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::FieldByRefUpdater*
System::Linq::Expressions::Interpreter::FieldByRefUpdater::New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::FieldInfo* field,
                                                                    int32_t argumentIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(obj, field, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::FieldByRefUpdater::FieldByRefUpdater() {}
