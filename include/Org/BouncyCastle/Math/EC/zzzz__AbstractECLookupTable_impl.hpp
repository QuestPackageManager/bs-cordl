#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractECLookupTable.Lookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractECLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractECLookupTable::Lookup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractECLookupTable.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::AbstractECLookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::AbstractECLookupTable::get_Size)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractECLookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractECLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractECLookupTable::LookupVar)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xfcbc94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractECLookupTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractECLookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::AbstractECLookupTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfcb8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::ECLookupTable"
constexpr Org::BouncyCastle::Math::EC::AbstractECLookupTable::operator ::Org::BouncyCastle::Math::EC::ECLookupTable*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractECLookupTable::Lookup(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(), "Lookup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline int32_t Org::BouncyCastle::Math::EC::AbstractECLookupTable::get_Size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                                             "get_Size", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractECLookupTable::LookupVar(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(), "LookupVar",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::AbstractECLookupTable* Org::BouncyCastle::Math::EC::AbstractECLookupTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>());
}
inline void Org::BouncyCastle::Math::EC::AbstractECLookupTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractECLookupTable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractECLookupTable::AbstractECLookupTable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
