#pragma once
// IWYU pragma private; include "System/Net/Configuration/DefaultProxySectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Configuration/zzzz__DefaultProxySectionInternal_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetDefaultProxy_UsingOldMonoCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(
    &::System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                 "GetDefaultProxy_UsingOldMonoCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSystemWebProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(), "GetSystemWebProxy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_ClassSyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3044438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(), "get_ClassSyncObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::DefaultProxySectionInternal* (*)()>(
    &::System::Net::Configuration::DefaultProxySectionInternal::GetSection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x30444d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(), "GetSection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_WebProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(
    &::System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30445f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(), "get_WebProxy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(
    &::System::Net::Configuration::DefaultProxySectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30445ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::IWebProxy*& System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_get_webProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webProxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_get_webProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webProxy;
}
constexpr void System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_set_webProxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webProxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::Configuration::DefaultProxySectionInternal::setStaticF_classSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "classSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::Configuration::DefaultProxySectionInternal::getStaticF_classSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "classSyncObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get>();
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             "GetDefaultProxy_UsingOldMonoCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             "GetSystemWebProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(nullptr, ___internal_method);
}
inline ::System::Object* System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             "get_ClassSyncObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline ::System::Net::Configuration::DefaultProxySectionInternal* System::Net::Configuration::DefaultProxySectionInternal::GetSection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             "GetSection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::DefaultProxySectionInternal*, false>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             "get_WebProxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::DefaultProxySectionInternal* System::Net::Configuration::DefaultProxySectionInternal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::DefaultProxySectionInternal*>());
}
inline void System::Net::Configuration::DefaultProxySectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::DefaultProxySectionInternal::DefaultProxySectionInternal() {}
