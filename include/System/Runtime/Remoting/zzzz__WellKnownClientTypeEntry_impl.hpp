#pragma once
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownClientTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24b793c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ApplicationUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                               "get_ApplicationUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                               "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.get_ObjectUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                               "get_ObjectUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownClientTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownClientTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24b7a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_url;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_obj_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_url;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_obj_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj_url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_app_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_url;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_get_app_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___app_url;
}
constexpr void System::Runtime::Remoting::WellKnownClientTypeEntry::__cordl_internal_set_app_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___app_url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* System::Runtime::Remoting::WellKnownClientTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::WellKnownClientTypeEntry*>(typeName, assemblyName, objectUrl));
}
inline void System::Runtime::Remoting::WellKnownClientTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName, assemblyName, objectUrl);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                             "get_ApplicationUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                             "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(),
                                                                             "get_ObjectUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownClientTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownClientTypeEntry*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::WellKnownClientTypeEntry::WellKnownClientTypeEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
