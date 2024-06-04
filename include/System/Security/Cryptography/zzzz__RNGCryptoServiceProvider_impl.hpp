#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x280dc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Check
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::Check)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x280dd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "Check",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x280dc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngOpen",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<uint8_t>, ::System::IntPtr)>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x280dd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngInitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngGetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr)>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x280dde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngGetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngClose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x280dde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngClose",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x280dde8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x280e004;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RNGCryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x280e11c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr ::System::IntPtr const& System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr void System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_set__handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Security::Cryptography::RNGCryptoServiceProvider::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get>();
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RNGCryptoServiceProvider*>());
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Check() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                                             "Check", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(),
                                                                             "RngOpen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize(::cordl_internals::Ptr<uint8_t> seed, ::System::IntPtr seed_length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngInitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, seed, seed_length);
}
inline ::System::IntPtr System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes(::System::IntPtr handle, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr data_length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngGetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handle, data, data_length);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::RngClose(::System::IntPtr handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), "RngClose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RNGCryptoServiceProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider::RNGCryptoServiceProvider() {}
