#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DefaultEventAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DefaultEventAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DefaultEventAttribute::*)(::StringW)>(
    &::System::ComponentModel::DefaultEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x290e460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultEventAttribute.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::DefaultEventAttribute::*)()>(
    &::System::ComponentModel::DefaultEventAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290e488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(),
                                                                               "get_Name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultEventAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DefaultEventAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DefaultEventAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x290e490;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultEventAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::DefaultEventAttribute::*)()>(
    &::System::ComponentModel::DefaultEventAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x290e510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DefaultEventAttribute::__get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DefaultEventAttribute::__get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::ComponentModel::DefaultEventAttribute::__set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::DefaultEventAttribute::setStaticF_Default(::System::ComponentModel::DefaultEventAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DefaultEventAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get>(
      std::forward<::System::ComponentModel::DefaultEventAttribute*>(value));
}
inline ::System::ComponentModel::DefaultEventAttribute* System::ComponentModel::DefaultEventAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DefaultEventAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get>();
}
inline ::System::ComponentModel::DefaultEventAttribute* System::ComponentModel::DefaultEventAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::DefaultEventAttribute*>(name));
}
inline void System::ComponentModel::DefaultEventAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::StringW System::ComponentModel::DefaultEventAttribute::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(),
                                                                             "get_Name", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DefaultEventAttribute::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DefaultEventAttribute::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DefaultEventAttribute*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DefaultEventAttribute::DefaultEventAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
