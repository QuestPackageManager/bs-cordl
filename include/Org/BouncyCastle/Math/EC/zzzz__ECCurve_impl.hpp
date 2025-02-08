#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_Config._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve_Config::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, int32_t, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve_Config::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x244ec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_Config.SetCoordinateSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve_Config* (::Org::BouncyCastle::Math::EC::ECCurve_Config::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECCurve_Config::SetCoordinateSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24505b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetCoordinateSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_Config.SetEndomorphism
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve_Config* (
    ::Org::BouncyCastle::Math::EC::ECCurve_Config::*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(&::Org::BouncyCastle::Math::EC::ECCurve_Config::SetEndomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24505b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetEndomorphism", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_Config.SetMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve_Config* (
    ::Org::BouncyCastle::Math::EC::ECCurve_Config::*)(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)>(&::Org::BouncyCastle::Math::EC::ECCurve_Config::SetMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24505c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetMultiplier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_Config.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::ECCurve_Config::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve_Config::Create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24505c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_set_outer(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_coord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coord;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_coord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coord;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_set_coord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coord = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_endomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endomorphism;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_endomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_set_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endomorphism)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* const& Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_Config::__cordl_internal_set_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Math::EC::ECCurve_Config::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                               ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, coord, endomorphism, multiplier);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Org::BouncyCastle::Math::EC::ECCurve_Config::SetCoordinateSystem(int32_t coord) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetCoordinateSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve_Config*, false>(this, ___internal_method, coord);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Org::BouncyCastle::Math::EC::ECCurve_Config::SetEndomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetEndomorphism", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve_Config*, false>(this, ___internal_method, endomorphism);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Org::BouncyCastle::Math::EC::ECCurve_Config::SetMultiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "SetMultiplier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve_Config*, false>(this, ___internal_method, multiplier);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::ECCurve_Config::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_Config*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Org::BouncyCastle::Math::EC::ECCurve_Config::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord,
                                                                                                            ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                            ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::ECCurve_Config*>(outer, coord, endomorphism, multiplier));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::ECCurve_Config::ECCurve_Config() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x244fab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24506a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable.Lookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::Lookup)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x24506ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::LookupVar)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2450928;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable.CreatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2450830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), "CreatePoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_set_m_table(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_get_m_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::__cordl_internal_set_m_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_size = value;
}
inline void Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, table, size);
}
inline int32_t Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::get_Size() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::Lookup(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::LookupVar(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::CreatePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>::get(), "CreatePoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable* Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer,
                                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*>(outer, table, size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable::ECCurve_DefaultLookupTable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.GetAllCoordinateSystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)()>(&::Org::BouncyCastle::Math::EC::ECCurve::GetAllCoordinateSystems)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x244eb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                               "GetAllCoordinateSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::Field::IFiniteField*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x244eb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::Field::IFiniteField*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_FieldSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(&::Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.FromBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.IsValidFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::IsValidFieldElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.RandomFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.RandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve_Config* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::Configure)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x244ebb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.ValidatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x244ec78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.ValidatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, bool)>(&::Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x244ed04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x244ed8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, bool)>(&::Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x244eda0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CloneCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CloneCurve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                               ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>, bool)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreateDefaultMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x244ee08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.SupportsCoordinateSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::ECCurve::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244eebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.GetPreCompInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::StringW)>(&::Org::BouncyCastle::Math::EC::ECCurve::GetPreCompInfo)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x244eec8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::StringW, ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::Precompute)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x244f0e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.ImportPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::ECCurve::ImportPoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x244f450;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.NormalizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>)>(&::Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x244f560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.NormalizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t, int32_t, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x244f58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_Infinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_Infinity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_Field
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_Field)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_A)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_B
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_B)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f890;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_Cofactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.get_CoordinateSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f8a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CreateCacheSafeLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x244f8a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CheckPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::CheckPoint)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x244faf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CheckPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>)>(&::Org::BouncyCastle::Math::EC::ECCurve::CheckPoints)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x244fb84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.CheckPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ECCurve::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::ECCurve::CheckPoints)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x244fbac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::ECCurve::*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x244fd0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::ECCurve::*)(::System::Object*)>(
    &::Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x244fe5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(&::Org::BouncyCastle::Math::EC::ECCurve::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x244fee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.DecompressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::ECCurve::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.GetEndomorphism
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::GetEndomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ffb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.GetMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Math::EC::ECCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x244ffbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECCurve.DecodePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ECCurve::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::ECCurve::DecodePoint)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2450078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 39));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_field;
}
constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_field;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_field(::Org::BouncyCastle::Math::Field::IFiniteField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_field)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_a(::Org::BouncyCastle::Math::EC::ECFieldElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_a)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_b;
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_b;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_b(::Org::BouncyCastle::Math::EC::ECFieldElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_b)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_order;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_order;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_order(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_order)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_cofactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cofactor;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_cofactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cofactor;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_cofactor(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_cofactor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_coord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_coord;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_coord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_coord;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_coord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_coord = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_endomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_endomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_endomorphism)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_multiplier;
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* const& Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_get_m_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_multiplier;
}
constexpr void Org::BouncyCastle::Math::EC::ECCurve::__cordl_internal_set_m_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_multiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::ECCurve::GetAllCoordinateSystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                             "GetAllCoordinateSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::Field::IFiniteField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field);
}
inline int32_t Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, x);
}
inline bool Org::BouncyCastle::Math::EC::ECCurve::IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Org::BouncyCastle::Math::EC::ECCurve::Configure() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve_Config*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y,
                                                                                                   bool withCompression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y,
                                                                                                 bool withCompression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::ECCurve::CloneCurve() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                    bool withCompression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint*
Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                     ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem(int32_t coord) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, coord);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::ECCurve::GetPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, point, name);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::ECCurve::Precompute(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name,
                                                                                                                ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, point, name, callback);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len,
                                                               ::Org::BouncyCastle::Math::EC::ECFieldElement* iso) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points, off, len, iso);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::get_Infinity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::EC::ECCurve::get_Field() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECCurve::get_A() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECCurve::get_B() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::ECCurve::get_Order() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECLookupTable*
Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off,
                                                                 int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECLookupTable*, false>(this, ___internal_method, points, off, len);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::CheckPoint(::Org::BouncyCastle::Math::EC::ECPoint* point) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void Org::BouncyCastle::Math::EC::ECCurve::CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points, off, len);
}
inline bool Org::BouncyCastle::Math::EC::ECCurve::Equals(::Org::BouncyCastle::Math::EC::ECCurve* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool Org::BouncyCastle::Math::EC::ECCurve::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Math::EC::ECCurve::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, yTilde, X1);
}
inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::ECCurve::GetEndomorphism() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECCurve::DecodePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, encoded);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::ECCurve::New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::ECCurve*>(field));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::ECCurve::ECCurve() {}
