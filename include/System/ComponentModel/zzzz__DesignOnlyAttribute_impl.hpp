#pragma once
// IWYU pragma private; include "System/ComponentModel/DesignOnlyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignOnlyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DesignOnlyAttribute::*)(bool)>(
    &::System::ComponentModel::DesignOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43e4698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.get_IsDesignOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)()>(
    &::System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43e46c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(),
                                                                               "get_IsDesignOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DesignOnlyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x43e46c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::DesignOnlyAttribute::*)()>(
    &::System::ComponentModel::DesignOnlyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x43e47ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignOnlyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignOnlyAttribute::*)()>(
    &::System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x43e4818;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DesignOnlyAttribute::__cordl_internal_get__IsDesignOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDesignOnly_k__BackingField;
}
constexpr bool const& System::ComponentModel::DesignOnlyAttribute::__cordl_internal_get__IsDesignOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDesignOnly_k__BackingField;
}
constexpr void System::ComponentModel::DesignOnlyAttribute::__cordl_internal_set__IsDesignOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDesignOnly_k__BackingField = value;
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_Yes(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>();
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_No(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>();
}
inline void System::ComponentModel::DesignOnlyAttribute::setStaticF_Default(::System::ComponentModel::DesignOnlyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignOnlyAttribute*>(value));
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignOnlyAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get>();
}
inline ::System::ComponentModel::DesignOnlyAttribute* System::ComponentModel::DesignOnlyAttribute::New_ctor(bool isDesignOnly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DesignOnlyAttribute*>(isDesignOnly));
}
inline void System::ComponentModel::DesignOnlyAttribute::_ctor(bool isDesignOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isDesignOnly);
}
inline bool System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(),
                                                                             "get_IsDesignOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignOnlyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignOnlyAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignOnlyAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignOnlyAttribute::DesignOnlyAttribute() {}
