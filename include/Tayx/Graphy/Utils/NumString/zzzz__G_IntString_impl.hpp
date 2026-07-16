#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/NumString/G_IntString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/NumString/zzzz__G_IntString_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.get_MinValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::get_MinValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64390ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "get_MinValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.get_MaxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::get_MaxValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x643911c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "get_MaxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Tayx::Graphy::Utils::NumString::G_IntString::Init)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6439184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "Init", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Tayx::Graphy::Utils::NumString::G_IntString::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6434f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_IntString.ToStringNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Tayx::Graphy::Utils::NumString::G_IntString::ToStringNonAlloc)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x64393b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::Utils::NumString::G_IntString::setStaticF_m_negativeBuffer(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_negativeBuffer", ::Tayx::Graphy::Utils::NumString::G_IntString*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Tayx::Graphy::Utils::NumString::G_IntString::getStaticF_m_negativeBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_negativeBuffer", ::Tayx::Graphy::Utils::NumString::G_IntString*>();
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::setStaticF_m_positiveBuffer(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_positiveBuffer", ::Tayx::Graphy::Utils::NumString::G_IntString*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Tayx::Graphy::Utils::NumString::G_IntString::getStaticF_m_positiveBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_positiveBuffer", ::Tayx::Graphy::Utils::NumString::G_IntString*>();
}
inline int32_t Tayx::Graphy::Utils::NumString::G_IntString::get_MinValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "get_MinValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Tayx::Graphy::Utils::NumString::G_IntString::get_MaxValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "get_MaxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::Init(int32_t minNegativeValue, int32_t maxPositiveValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "Init", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, minNegativeValue, maxPositiveValue);
}
inline void Tayx::Graphy::Utils::NumString::G_IntString::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Tayx::Graphy::Utils::NumString::G_IntString::ToStringNonAlloc(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_IntString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Utils::NumString::G_IntString::G_IntString() {}
