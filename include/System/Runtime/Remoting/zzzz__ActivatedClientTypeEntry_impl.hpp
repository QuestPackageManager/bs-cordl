#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ActivatedClientTypeEntry.hpp"
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3cc6d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ApplicationUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc6e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                               "get_ApplicationUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ContextAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*, ::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> (
        ::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc6e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                               "get_ContextAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc6e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                               "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(
    &::System::Runtime::Remoting::ActivatedClientTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3cc6e70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_applicationUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationUrl;
}
constexpr ::StringW const& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_applicationUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___applicationUrl;
}
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_set_applicationUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___applicationUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_obj_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr ::System::Type* const& System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_get_obj_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj_type;
}
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__cordl_internal_set_obj_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName, assemblyName, appUrl);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                             "get_ApplicationUrl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*, ::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*>
System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                             "get_ContextAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*, ::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*>, false>(
      this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                                                             "get_ObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::ActivatedClientTypeEntry::New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(typeName, assemblyName, appUrl));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ActivatedClientTypeEntry::ActivatedClientTypeEntry() {}
