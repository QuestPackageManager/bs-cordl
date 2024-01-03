#pragma once
#include "Org/BouncyCastle/Math/Field/zzzz__IExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IExtensionField.get_Subfield
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (::Org::BouncyCastle::Math::Field::IExtensionField::*)()>(
    &::Org::BouncyCastle::Math::Field::IExtensionField::get_Subfield)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IExtensionField.get_Degree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::IExtensionField::*)()>(
    &::Org::BouncyCastle::Math::Field::IExtensionField::get_Degree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr Org::BouncyCastle::Math::Field::IExtensionField::operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::Field::IFiniteField"
constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::IExtensionField::i___Org__BouncyCastle__Math__Field__IFiniteField() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::Field::IExtensionField::get_Subfield() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::Field::IExtensionField::get_Degree() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IExtensionField*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
