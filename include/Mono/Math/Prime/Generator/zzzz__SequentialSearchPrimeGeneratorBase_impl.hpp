#pragma once
// IWYU pragma private; include "Mono/Math/Prime/Generator/SequentialSearchPrimeGeneratorBase.hpp"
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_impl.hpp"
#include "Mono/Math/Prime/Generator/zzzz__SequentialSearchPrimeGeneratorBase_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateSearchBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::System::Object*)>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aa95a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(),
                                                                                          { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t)>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aa9614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(),
                                                                                          { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::System::Object*)>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5aa9624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(),
                                                                                          { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.IsPrimeAcceptable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(::Mono::Math::BigInteger*, ::System::Object*)>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa9910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(),
                                                                                          { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa8284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase(int32_t bits, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, bits, context);
}
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, bits);
}
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, bits, context);
}
inline bool Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(::Mono::Math::BigInteger* bi, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bi, context);
}
inline void Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>());
}
// Ctor Parameters []
constexpr ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::SequentialSearchPrimeGeneratorBase() {}
