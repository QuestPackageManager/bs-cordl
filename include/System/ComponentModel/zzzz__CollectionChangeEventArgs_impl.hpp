#pragma once
// IWYU pragma private; include "System/ComponentModel/CollectionChangeEventArgs.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeAction_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::CollectionChangeEventArgs::*)(
    ::System::ComponentModel::CollectionChangeAction, ::System::Object*)>(&::System::ComponentModel::CollectionChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x444ef18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs.get_Action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::CollectionChangeAction (::System::ComponentModel::CollectionChangeEventArgs::*)()>(
    &::System::ComponentModel::CollectionChangeEventArgs::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x444ef8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CollectionChangeEventArgs.get_Element
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::CollectionChangeEventArgs::*)()>(
    &::System::ComponentModel::CollectionChangeEventArgs::get_Element)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x444ef94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::CollectionChangeAction& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr ::System::ComponentModel::CollectionChangeAction const& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Action_k__BackingField;
}
constexpr void System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_set__Action_k__BackingField(::System::ComponentModel::CollectionChangeAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Action_k__BackingField = value;
}
constexpr ::System::Object*& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Element_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Element_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_get__Element_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Element_k__BackingField;
}
constexpr void System::ComponentModel::CollectionChangeEventArgs::__cordl_internal_set__Element_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Element_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::CollectionChangeEventArgs::_ctor(::System::ComponentModel::CollectionChangeAction action, ::System::Object* element) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeAction>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, element);
}
inline ::System::ComponentModel::CollectionChangeAction System::ComponentModel::CollectionChangeEventArgs::get_Action() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::CollectionChangeAction, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::CollectionChangeEventArgs::get_Element() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CollectionChangeEventArgs*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::CollectionChangeEventArgs* System::ComponentModel::CollectionChangeEventArgs::New_ctor(::System::ComponentModel::CollectionChangeAction action,
                                                                                                                        ::System::Object* element) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::CollectionChangeEventArgs*>(action, element));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CollectionChangeEventArgs::CollectionChangeEventArgs() {}
