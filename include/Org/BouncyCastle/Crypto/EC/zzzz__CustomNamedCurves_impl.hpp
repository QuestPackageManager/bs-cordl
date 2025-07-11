#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/EC/CustomNamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233afcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233afd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CustomNamedCurves_Curve25519Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233b154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CustomNamedCurves_SecP128R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x233b328;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CustomNamedCurves_SecP160K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233b7a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CustomNamedCurves_SecP160R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233b97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CustomNamedCurves_SecP160R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233bb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x233bb50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CustomNamedCurves_SecP192K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233bfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233bfd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CustomNamedCurves_SecP192R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233c19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x233c1a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CustomNamedCurves_SecP224K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233c61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233c624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CustomNamedCurves_SecP224R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x233c7f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CustomNamedCurves_SecP256K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233cc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233cc78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CustomNamedCurves_SecP256R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ce44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233ce4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CustomNamedCurves_SecP384R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233d020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CustomNamedCurves_SecP521R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233d1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CustomNamedCurves_SecT113R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233d3c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CustomNamedCurves_SecT113R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233d59c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CustomNamedCurves_SecT131R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233d770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CustomNamedCurves_SecT131R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233d93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233d944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CustomNamedCurves_SecT163K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233dabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233dac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CustomNamedCurves_SecT163R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233dc98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CustomNamedCurves_SecT163R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233de64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233de6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CustomNamedCurves_SecT193R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233e040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CustomNamedCurves_SecT193R2Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233e214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CustomNamedCurves_SecT233K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233e394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CustomNamedCurves_SecT233R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233e568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CustomNamedCurves_SecT239K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233e6e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CustomNamedCurves_SecT283K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233e860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233e868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CustomNamedCurves_SecT283R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ea34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233ea3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CustomNamedCurves_SecT409K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ebb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233ebbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CustomNamedCurves_SecT409R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ed88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233ed90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CustomNamedCurves_SecT571K1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x233ef10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CustomNamedCurves_SecT571R1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (
    ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x233f0e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(), 4));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CustomNamedCurves_SM2P256V1Holder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::*)()>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23392d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23392e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureBasepoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23393d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureCurve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurveGlv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(
        &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23393d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureCurveGlv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2339478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveWithOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2339614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurveWithOid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveAlias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2339918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurveAlias", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x233aa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetByName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x233abc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetByOid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x233acf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetOid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x233ae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.get_Names
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x233af44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                                                                               "get_Names", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToCurve(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToCurve",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToCurve() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToCurve",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToOid(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToOid() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToOid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToCurve(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToCurve",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToCurve() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToCurve",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToName(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToName() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_names(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(
      std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_names() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureBasepoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*, false>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv(::Org::BouncyCastle::Math::EC::ECCurve* c,
                                                                                                                   ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "ConfigureCurveGlv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, c, p);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid,
                                                                                 ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurveWithOid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "DefineCurveAlias", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetByName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetByOid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetOid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                                                                             "get_Names", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::CustomNamedCurves() {}
