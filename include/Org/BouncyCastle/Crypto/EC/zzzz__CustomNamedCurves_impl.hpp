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
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3292c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3292c84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_Curve25519Holder::CustomNamedCurves_Curve25519Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3292e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3292e08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP128R1Holder::CustomNamedCurves_SecP128R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3292fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3292fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160K1Holder::CustomNamedCurves_SecP160K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x329347c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R1Holder::CustomNamedCurves_SecP160R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x329365c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP160R2Holder::CustomNamedCurves_SecP160R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x329383c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192K1Holder::CustomNamedCurves_SecP192K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3293cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP192R1Holder::CustomNamedCurves_SecP192R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3293eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224K1Holder::CustomNamedCurves_SecP224K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3294340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3294344;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP224R1Holder::CustomNamedCurves_SecP224R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3294520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3294524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256K1Holder::CustomNamedCurves_SecP256K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32949b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x32949b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP256R1Holder::CustomNamedCurves_SecP256R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3294b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3294b98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP384R1Holder::CustomNamedCurves_SecP384R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3294d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3294d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecP521R1Holder::CustomNamedCurves_SecP521R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3294f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3294f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R1Holder::CustomNamedCurves_SecT113R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3295138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT113R2Holder::CustomNamedCurves_SecT113R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3295318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R1Holder::CustomNamedCurves_SecT131R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32954f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x32954f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT131R2Holder::CustomNamedCurves_SecT131R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32956d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x32956d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163K1Holder::CustomNamedCurves_SecT163K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x329585c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R1Holder::CustomNamedCurves_SecT163R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3295a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT163R2Holder::CustomNamedCurves_SecT163R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3295c1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R1Holder::CustomNamedCurves_SecT193R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3295dfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT193R2Holder::CustomNamedCurves_SecT193R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3295fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3295fdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233K1Holder::CustomNamedCurves_SecT233K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329615c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3296160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT233R1Holder::CustomNamedCurves_SecT233R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3296340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT239K1Holder::CustomNamedCurves_SecT239K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32964c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x32964c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283K1Holder::CustomNamedCurves_SecT283K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3296648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT283R1Holder::CustomNamedCurves_SecT283R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3296828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409K1Holder::CustomNamedCurves_SecT409K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32969a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x32969ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT409R1Holder::CustomNamedCurves_SecT409R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3296b8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571K1Holder::CustomNamedCurves_SecT571K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3296d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SecT571R1Holder::CustomNamedCurves_SecT571R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3296eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3296ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>::get(),
                            4
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder* Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves_SM2P256V1Holder::CustomNamedCurves_SM2P256V1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3290e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureBasepoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3290e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureBasepoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3290f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurveGlv
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3290f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurveGlv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3290fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveWithOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3291150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveWithOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveAlias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3291464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveAlias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x32926e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x329285c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3292994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3292af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.get_Names
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3292bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToCurve(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToCurve()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToOid(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToOid()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToCurve(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToCurve()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToName(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToName()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_names(::System::Collections::IList*  value)  {
::cordl_internals::setStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_names()  {
return ::cordl_internals::getStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::StringW  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureBasepoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*, false>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv(::Org::BouncyCastle::Math::EC::ECCurve*  c, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurveGlv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, c, p);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve(::StringW  name, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid(::StringW  name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveWithOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias(::StringW  name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveAlias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::CustomNamedCurves()   {
}
