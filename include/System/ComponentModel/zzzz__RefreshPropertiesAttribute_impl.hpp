#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshPropertiesAttribute.hpp"
#include "System/ComponentModel/zzzz__RefreshProperties_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshPropertiesAttribute_def.hpp"
#include "System/ComponentModel/zzzz__RefreshProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::RefreshPropertiesAttribute::*)(::System::ComponentModel::RefreshProperties)>(
    &::System::ComponentModel::RefreshPropertiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x447de40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshProperties>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.get_RefreshProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::RefreshProperties (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(
    &::System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447de68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(),
                                                                               "get_RefreshProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::RefreshPropertiesAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::RefreshPropertiesAttribute::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x447de70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(
    &::System::ComponentModel::RefreshPropertiesAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447dee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RefreshPropertiesAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::RefreshPropertiesAttribute::*)()>(
    &::System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x447dee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::RefreshProperties& System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_get_refresh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refresh;
}
constexpr ::System::ComponentModel::RefreshProperties const& System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_get_refresh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refresh;
}
constexpr void System::ComponentModel::RefreshPropertiesAttribute::__cordl_internal_set_refresh(::System::ComponentModel::RefreshProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refresh = value;
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_All(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "All",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_All() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "All",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_Repaint(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Repaint",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_Repaint() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Repaint",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::setStaticF_Default(::System::ComponentModel::RefreshPropertiesAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>(
      std::forward<::System::ComponentModel::RefreshPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshPropertiesAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get>();
}
inline void System::ComponentModel::RefreshPropertiesAttribute::_ctor(::System::ComponentModel::RefreshProperties refresh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshProperties>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, refresh);
}
inline ::System::ComponentModel::RefreshProperties System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(),
                                                                             "get_RefreshProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::RefreshProperties, false>(this, ___internal_method);
}
inline bool System::ComponentModel::RefreshPropertiesAttribute::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::RefreshPropertiesAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshPropertiesAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ComponentModel::RefreshPropertiesAttribute* System::ComponentModel::RefreshPropertiesAttribute::New_ctor(::System::ComponentModel::RefreshProperties refresh) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::RefreshPropertiesAttribute*>(refresh));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshPropertiesAttribute::RefreshPropertiesAttribute() {}
