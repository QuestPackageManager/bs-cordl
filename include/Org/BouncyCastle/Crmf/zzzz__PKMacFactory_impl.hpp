#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PbmParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacFactory::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*)>(&::Org::BouncyCastle::Crmf::PKMacFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1211fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(
    &::Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1212058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacFactory.CreateCalculator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crmf::PKMacFactory::*)()>(
    &::Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x12120f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), 7));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacFactory"
constexpr Org::BouncyCastle::Crmf::PKMacFactory::operator ::Org::BouncyCastle::Crypto::IMacFactory*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacFactory*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*& Org::BouncyCastle::Crmf::PKMacFactory::__get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*> const& Org::BouncyCastle::Crmf::PKMacFactory::__get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crmf::PKMacFactory::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crmf::PKMacFactory::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::PKMacFactory* Org::BouncyCastle::Crmf::PKMacFactory::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::PKMacFactory*>(key, parameters));
}
inline void Org::BouncyCastle::Crmf::PKMacFactory::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, parameters);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacFactory*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PKMacFactory::PKMacFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
