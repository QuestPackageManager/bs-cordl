#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyChangingEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyChangingEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::PropertyChangingEventArgs::*)(::StringW)>(
    &::System::ComponentModel::PropertyChangingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2791d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyChangingEventArgs.get_PropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::PropertyChangingEventArgs::*)()>(
    &::System::ComponentModel::PropertyChangingEventArgs::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2791df0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyChangingEventArgs.set_PropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::PropertyChangingEventArgs::*)(::StringW)>(
    &::System::ComponentModel::PropertyChangingEventArgs::set_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2791df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_get__PropertyName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_get__PropertyName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
constexpr void System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_set__PropertyName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PropertyName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::PropertyChangingEventArgs* System::ComponentModel::PropertyChangingEventArgs::New_ctor(::StringW propertyName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::PropertyChangingEventArgs*>(propertyName));
}
inline void System::ComponentModel::PropertyChangingEventArgs::_ctor(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName);
}
inline ::StringW System::ComponentModel::PropertyChangingEventArgs::get_PropertyName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::ComponentModel::PropertyChangingEventArgs::set_PropertyName(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangingEventArgs*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyChangingEventArgs::PropertyChangingEventArgs() {}
