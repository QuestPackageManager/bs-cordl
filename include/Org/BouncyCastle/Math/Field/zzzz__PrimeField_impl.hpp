#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/PrimeField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__PrimeField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::PrimeField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::Field::PrimeField::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Field::PrimeField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3437070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::PrimeField.get_Characteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::Field::PrimeField::*)()>(
    &::Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34376cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::PrimeField.get_Dimension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::PrimeField::*)()>(
    &::Org::BouncyCastle::Math::Field::PrimeField::get_Dimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34376d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::PrimeField.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::Field::PrimeField::*)(::System::Object*)>(
    &::Org::BouncyCastle::Math::Field::PrimeField::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x34376dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::PrimeField.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::PrimeField::*)()>(
    &::Org::BouncyCastle::Math::Field::PrimeField::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3437798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::Field::PrimeField::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::Field::PrimeField::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void Org::BouncyCastle::Math::Field::PrimeField::__cordl_internal_set_characteristic(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Math::Field::PrimeField::_ctor(::Org::BouncyCastle::Math::BigInteger* characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, characteristic);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::Field::PrimeField::get_Dimension() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::Field::PrimeField::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Math::Field::PrimeField::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::PrimeField*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Field::PrimeField* Org::BouncyCastle::Math::Field::PrimeField::New_ctor(::Org::BouncyCastle::Math::BigInteger* characteristic) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::Field::PrimeField*>(characteristic));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr Org::BouncyCastle::Math::Field::PrimeField::operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::PrimeField::i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Field::PrimeField::PrimeField() {}
