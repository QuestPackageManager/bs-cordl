#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Store.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)(
    ::System::Security::Cryptography::X509Certificates::StoreName, ::System::Security::Cryptography::X509Certificates::StoreLocation)>(
    &::System::Security::Cryptography::X509Certificates::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2fd89a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::StoreName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::StoreLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Certificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509Store::*)()>(&::System::Security::Cryptography::X509Certificates::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2fd8ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Certificates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Factory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores* (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::get_Factory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fd8b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Factory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Store
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store* (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::get_Store)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fd8b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Store",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fd8b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Close",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fd8ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)(
    ::System::Security::Cryptography::X509Certificates::OpenFlags)>(&::System::Security::Cryptography::X509Certificates::X509Store::Open)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2fd8bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::OpenFlags>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::X509Certificates::X509Store::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::X509Certificates::X509Store::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____location;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____location;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__location(::System::Security::Cryptography::X509Certificates::StoreLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____location = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> const&
System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set_list(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__flags(::System::Security::Cryptography::X509Certificates::OpenFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
constexpr ::Mono::Security::X509::X509Store*& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Store*> const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set_store(::Mono::Security::X509::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::X509Certificates::X509Store*
System::Security::Cryptography::X509Certificates::X509Store::New_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName,
                                                                      ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::X509Certificates::X509Store*>(storeName, storeLocation));
}
inline void System::Security::Cryptography::X509Certificates::X509Store::_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName,
                                                                               ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::StoreName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::StoreLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storeName, storeLocation);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509Store::get_Certificates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Certificates",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* System::Security::Cryptography::X509Certificates::X509Store::get_Factory() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Factory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* System::Security::Cryptography::X509Certificates::X509Store::get_Store() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "get_Store",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Close() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Close",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Open(::System::Security::Cryptography::X509Certificates::OpenFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Store*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::OpenFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flags);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Store::X509Store() {}
