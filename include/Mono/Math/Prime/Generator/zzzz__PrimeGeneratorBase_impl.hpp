#pragma once
// IWYU pragma private; include "Mono/Math/Prime/Generator/PrimeGeneratorBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_def.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
#include "Mono/Math/Prime/zzzz__PrimalityTest_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::Generator::PrimeGeneratorBase.get_Confidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::Prime::ConfidenceFactor (::Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6d0fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::PrimeGeneratorBase.get_PrimalityTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::Prime::PrimalityTest* (::Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_PrimalityTest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3c6d104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::PrimeGeneratorBase.get_TrialDivisionBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_TrialDivisionBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6d170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::PrimeGeneratorBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::Prime::Generator::PrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::PrimeGeneratorBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6d178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Mono::Math::Prime::ConfidenceFactor Mono::Math::Prime::Generator::PrimeGeneratorBase::get_Confidence() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::Prime::ConfidenceFactor, false>(this, ___internal_method);
}
inline ::Mono::Math::Prime::PrimalityTest* Mono::Math::Prime::Generator::PrimeGeneratorBase::get_PrimalityTest() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::Prime::PrimalityTest*, false>(this, ___internal_method);
}
inline int32_t Mono::Math::Prime::Generator::PrimeGeneratorBase::get_TrialDivisionBounds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::PrimeGeneratorBase::GenerateNewPrime(int32_t bits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, bits);
}
inline void Mono::Math::Prime::Generator::PrimeGeneratorBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Math::Prime::Generator::PrimeGeneratorBase* Mono::Math::Prime::Generator::PrimeGeneratorBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::Prime::Generator::PrimeGeneratorBase*>());
}
// Ctor Parameters []
constexpr ::Mono::Math::Prime::Generator::PrimeGeneratorBase::PrimeGeneratorBase() {}
