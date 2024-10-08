#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IndexMethodByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexMethodByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>,
    ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>, ::System::Reflection::MethodInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x406f004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::Update)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x406f054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x406f2a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__indexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__indexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexer;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__indexer(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__obj(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obj = value;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>&
System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> const&
System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__args(
    ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater* System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::New_ctor(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
    ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> args, ::System::Reflection::MethodInfo* indexer,
    int32_t argumentIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(obj, args, indexer, argumentIndex));
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::_ctor(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
    ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> args, ::System::Reflection::MethodInfo* indexer,
    int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition, ::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, args, indexer, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                           ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instructions, locals);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::IndexMethodByRefUpdater() {}
