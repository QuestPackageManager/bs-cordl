#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/DSAManaged.hpp"
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5914a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::*)(
    ::System::Object*, ::System::EventArgs*)>(&::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5914bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::Invoke(::System::Object* sender, ::System::EventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler::DSAManaged_KeyGeneratedEventHandler() {}
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::DSAManaged::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5912fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5913078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Generate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59130c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Generate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5913644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                               "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::Cryptography::DSAManaged::add)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x591386c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(
    &::Mono::Security::Cryptography::DSAManaged::GenerateParams)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5913114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "GenerateParams",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_Random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_Random)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5913904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "get_Random",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_KeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5913c44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_PublicOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_PublicOnly)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5913c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                               "get_PublicOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.NormalizeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::NormalizeArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5913ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "NormalizeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ExportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(
    &::Mono::Security::Cryptography::DSAManaged::ExportParameters)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5913d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ImportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::System::Security::Cryptography::DSAParameters)>(
    &::Mono::Security::Cryptography::DSAManaged::ImportParameters)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5914058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::VerifySignature)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x59142c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(&::Mono::Security::Cryptography::DSAManaged::Dispose)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5914750;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::add_KeyGenerated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5914924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.remove_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59149d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "remove_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_keypairGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_keypairGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_keypairGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypairGenerated = value;
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_p(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_q(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_g(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___g)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_x(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_y(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_j() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_j() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_j(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___j)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_seed(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr int32_t const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_j_missing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j_missing;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_j_missing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j_missing;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_j_missing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___j_missing = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_rng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_rng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rng;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_KeyGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr ::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* const& Mono::Security::Cryptography::DSAManaged::__cordl_internal_get_KeyGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__cordl_internal_set_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyGenerated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::Cryptography::DSAManaged::_ctor(int32_t dwKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dwKeySize);
}
inline void Mono::Security::Cryptography::DSAManaged::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::Generate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Generate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateKeyPair() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                             "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::add(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b, value);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateParams(int32_t keyLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "GenerateParams",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyLength);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::DSAManaged::get_Random() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "get_Random",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::DSAManaged::get_KeySize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::DSAManaged::get_PublicOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                             "get_PublicOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::DSAManaged::NormalizeArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "NormalizeArray", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, array);
}
inline ::System::Security::Cryptography::DSAParameters Mono::Security::Cryptography::DSAManaged::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(this, ___internal_method, includePrivateParameters);
}
inline void Mono::Security::Cryptography::DSAManaged::ImportParameters(::System::Security::Cryptography::DSAParameters parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline bool Mono::Security::Cryptography::DSAManaged::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, rgbSignature);
}
inline void Mono::Security::Cryptography::DSAManaged::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Security::Cryptography::DSAManaged::add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "remove_KeyGenerated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Security::Cryptography::DSAManaged* Mono::Security::Cryptography::DSAManaged::New_ctor(int32_t dwKeySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::DSAManaged*>(dwKeySize));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::DSAManaged::DSAManaged() {}
