#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/FiniteFields.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__FiniteFields_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomialExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields.GetBinaryExtensionField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* (*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x24dcd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), "GetBinaryExtensionField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields.GetPrimeField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x24dcfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), "GetPrimeField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::FiniteFields._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::Field::FiniteFields::*)()>(&::Org::BouncyCastle::Math::Field::FiniteFields::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24dd234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::Field::FiniteFields::setStaticF_GF_2(::Org::BouncyCastle::Math::Field::IFiniteField* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get>(
      std::forward<::Org::BouncyCastle::Math::Field::IFiniteField*>(value));
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::getStaticF_GF_2() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get>();
}
inline void Org::BouncyCastle::Math::Field::FiniteFields::setStaticF_GF_3(::Org::BouncyCastle::Math::Field::IFiniteField* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get>(
      std::forward<::Org::BouncyCastle::Math::Field::IFiniteField*>(value));
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::getStaticF_GF_3() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::Field::IFiniteField*, "GF_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get>();
}
inline ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField(::ArrayW<int32_t, ::Array<int32_t>*> exponents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), "GetBinaryExtensionField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*, false>(nullptr, ___internal_method, exponents);
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField(::Org::BouncyCastle::Math::BigInteger* characteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), "GetPrimeField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*, false>(nullptr, ___internal_method, characteristic);
}
inline void Org::BouncyCastle::Math::Field::FiniteFields::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::FiniteFields*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Field::FiniteFields* Org::BouncyCastle::Math::Field::FiniteFields::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::Field::FiniteFields*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Field::FiniteFields::FiniteFields() {}
