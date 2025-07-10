#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/WellKnownServiceTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownServiceTypeEntry_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)(
    ::StringW, ::StringW, ::StringW, ::System::Runtime::Remoting::WellKnownObjectMode)>(&::System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3cd78b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownObjectMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_Mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::WellKnownObjectMode (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd79e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                               "get_Mode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd79f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                               "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                               "get_ObjectUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::WellKnownServiceTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(
    &::System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3cd7a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_uri;
}
constexpr ::StringW const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_uri;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj_uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_mode;
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode const& System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_get_obj_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_mode;
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__cordl_internal_set_obj_mode(::System::Runtime::Remoting::WellKnownObjectMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj_mode = value;
}
inline void System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::WellKnownObjectMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName, assemblyName, objectUri, mode);
}
inline ::System::Runtime::Remoting::WellKnownObjectMode System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                             "get_Mode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::WellKnownObjectMode, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                             "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(),
                                                                             "get_ObjectUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::WellKnownServiceTypeEntry* System::Runtime::Remoting::WellKnownServiceTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri,
                                                                                                                              ::System::Runtime::Remoting::WellKnownObjectMode mode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::WellKnownServiceTypeEntry*>(typeName, assemblyName, objectUri, mode));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::WellKnownServiceTypeEntry::WellKnownServiceTypeEntry() {}
