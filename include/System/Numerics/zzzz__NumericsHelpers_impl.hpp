#pragma once
// IWYU pragma private; include "System/Numerics/NumericsHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__NumericsHelpers_def.hpp"
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.GetDoubleParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<uint64_t>, ::by_ref<bool>)>(
    &::System::Numerics::NumericsHelpers::GetDoubleParts)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60ec648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(),
                                                                                           { "GetDoubleParts",
                                                                                             {},
                                                                                             { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                               ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.GetDoubleFromParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t, int32_t, uint64_t)>(&::System::Numerics::NumericsHelpers::GetDoubleFromParts)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60ef1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(),
                                                             { "GetDoubleFromParts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.DangerousMakeTwosComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>)>(&::System::Numerics::NumericsHelpers::DangerousMakeTwosComplement)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60eced0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "DangerousMakeTwosComplement", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.MakeUlong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Numerics::NumericsHelpers::MakeUlong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ed578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "MakeUlong", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t)>(&::System::Numerics::NumericsHelpers::Abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ee2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "Abs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.CombineHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::System::Numerics::NumericsHelpers::CombineHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f3a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CombineHash", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.CombineHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Numerics::NumericsHelpers::CombineHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ed394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CombineHash", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.CbitHighZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::NumericsHelpers::CbitHighZero)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60ef128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CbitHighZero", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::NumericsHelpers.CbitHighZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Numerics::NumericsHelpers::CbitHighZero)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60f3a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CbitHighZero", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void System::Numerics::NumericsHelpers::GetDoubleParts(double_t dbl, ::by_ref<int32_t> sign, ::by_ref<int32_t> exp, ::by_ref<uint64_t> man, ::by_ref<bool> fFinite) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(),
                                                                                         { "GetDoubleParts",
                                                                                           {},
                                                                                           { ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                             ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dbl, sign, exp, man, fFinite);
}
inline double_t System::Numerics::NumericsHelpers::GetDoubleFromParts(int32_t sign, int32_t exp, uint64_t man) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(),
                                                           { "GetDoubleFromParts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, sign, exp, man);
}
inline void System::Numerics::NumericsHelpers::DangerousMakeTwosComplement(::ArrayW<uint32_t> d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "DangerousMakeTwosComplement", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d);
}
inline uint64_t System::Numerics::NumericsHelpers::MakeUlong(uint32_t uHi, uint32_t uLo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "MakeUlong", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, uHi, uLo);
}
inline uint32_t System::Numerics::NumericsHelpers::Abs(int32_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "Abs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a);
}
inline uint32_t System::Numerics::NumericsHelpers::CombineHash(uint32_t u1, uint32_t u2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CombineHash", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, u1, u2);
}
inline int32_t System::Numerics::NumericsHelpers::CombineHash(int32_t n1, int32_t n2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CombineHash", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n1, n2);
}
inline int32_t System::Numerics::NumericsHelpers::CbitHighZero(uint32_t u) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CbitHighZero", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, u);
}
inline int32_t System::Numerics::NumericsHelpers::CbitHighZero(uint64_t uu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::NumericsHelpers*>(), { "CbitHighZero", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, uu);
}
// Ctor Parameters []
constexpr ::System::Numerics::NumericsHelpers::NumericsHelpers() {}
