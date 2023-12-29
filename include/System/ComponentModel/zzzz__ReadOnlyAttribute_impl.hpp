#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ReadOnlyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReadOnlyAttribute::*)(bool)>(&::System::ComponentModel::ReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2786f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)()>(
    &::System::ComponentModel::ReadOnlyAttribute::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2786f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                               "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::ReadOnlyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2786f3c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::ReadOnlyAttribute::*)()>(
    &::System::ComponentModel::ReadOnlyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2787020;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReadOnlyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReadOnlyAttribute::*)()>(
    &::System::ComponentModel::ReadOnlyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2787028;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::ReadOnlyAttribute::__get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& System::ComponentModel::ReadOnlyAttribute::__get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void System::ComponentModel::ReadOnlyAttribute::__set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_Yes(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>();
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_No(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>();
}
inline void System::ComponentModel::ReadOnlyAttribute::setStaticF_Default(::System::ComponentModel::ReadOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::ReadOnlyAttribute*>(value));
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ReadOnlyAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get>();
}
inline ::System::ComponentModel::ReadOnlyAttribute* System::ComponentModel::ReadOnlyAttribute::New_ctor(bool isReadOnly) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ReadOnlyAttribute*>(isReadOnly));
}
inline void System::ComponentModel::ReadOnlyAttribute::_ctor(bool isReadOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isReadOnly);
}
inline bool System::ComponentModel::ReadOnlyAttribute::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                             "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::ReadOnlyAttribute::Equals(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::ReadOnlyAttribute::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::ReadOnlyAttribute::IsDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReadOnlyAttribute*>::get(),
                                                                             "IsDefaultAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReadOnlyAttribute::ReadOnlyAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
