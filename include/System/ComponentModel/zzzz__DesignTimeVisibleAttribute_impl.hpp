#pragma once
// IWYU pragma private; include "System/ComponentModel/DesignTimeVisibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignTimeVisibleAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DesignTimeVisibleAttribute::*)(bool)>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x444d17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.get_Visible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::get_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x444d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(),
                                                                               "get_Visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x444d1ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x444d244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(
    &::System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x444d2e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_get__Visible_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visible_k__BackingField;
}
constexpr bool const& System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_get__Visible_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Visible_k__BackingField;
}
constexpr void System::ComponentModel::DesignTimeVisibleAttribute::__cordl_internal_set__Visible_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Visible_k__BackingField = value;
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_Yes(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Yes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_No(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "No",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::setStaticF_Default(::System::ComponentModel::DesignTimeVisibleAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>(
      std::forward<::System::ComponentModel::DesignTimeVisibleAttribute*>(value));
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get>();
}
inline void System::ComponentModel::DesignTimeVisibleAttribute::_ctor(bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::get_Visible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(),
                                                                             "get_Visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignTimeVisibleAttribute* System::ComponentModel::DesignTimeVisibleAttribute::New_ctor(bool visible) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DesignTimeVisibleAttribute*>(visible));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignTimeVisibleAttribute::DesignTimeVisibleAttribute() {}
