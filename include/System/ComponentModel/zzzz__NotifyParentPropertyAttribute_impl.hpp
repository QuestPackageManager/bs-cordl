#pragma once
// IWYU pragma private; include "System/ComponentModel/NotifyParentPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__NotifyParentPropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::NotifyParentPropertyAttribute::*)(bool)>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x447dc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.get_NotifyParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::get_NotifyParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447dcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(),
                                                                               "get_NotifyParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x447dcc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447dd48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x447dd50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_get_notifyParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notifyParent;
}
constexpr bool const& System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_get_notifyParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notifyParent;
}
constexpr void System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_set_notifyParent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notifyParent = value;
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_Yes(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Yes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_No(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "No",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_Default(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::_ctor(bool notifyParent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notifyParent);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::get_NotifyParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(),
                                                                             "get_NotifyParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::NotifyParentPropertyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::NotifyParentPropertyAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::New_ctor(bool notifyParent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::NotifyParentPropertyAttribute*>(notifyParent));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::NotifyParentPropertyAttribute::NotifyParentPropertyAttribute() {}
