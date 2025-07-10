#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChangeEventArgs.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::XObjectChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::XObjectChangeEventArgs::*)(::System::Xml::Linq::XObjectChange)>(
    &::System::Xml::Linq::XObjectChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x424e00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XObjectChange>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Linq::XObjectChange& System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_get__objectChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectChange;
}
constexpr ::System::Xml::Linq::XObjectChange const& System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_get__objectChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectChange;
}
constexpr void System::Xml::Linq::XObjectChangeEventArgs::__cordl_internal_set__objectChange(::System::Xml::Linq::XObjectChange value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectChange = value;
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Add() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Add",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Remove() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Remove",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Name() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Name",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>(
      std::forward<::System::Xml::Linq::XObjectChangeEventArgs*>(value));
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::Xml::Linq::XObjectChangeEventArgs*, "Value",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get>();
}
inline void System::Xml::Linq::XObjectChangeEventArgs::_ctor(::System::Xml::Linq::XObjectChange objectChange) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::XObjectChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XObjectChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectChange);
}
inline ::System::Xml::Linq::XObjectChangeEventArgs* System::Xml::Linq::XObjectChangeEventArgs::New_ctor(::System::Xml::Linq::XObjectChange objectChange) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::XObjectChangeEventArgs*>(objectChange));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XObjectChangeEventArgs::XObjectChangeEventArgs() {}
