#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/NumString/G_FloatString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/NumString/zzzz__G_FloatString_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.get_MinValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_FloatString::get_MinValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6438914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "get_MinValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.get_MaxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Tayx::Graphy::Utils::NumString::G_FloatString::get_MaxValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64389f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "get_MaxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::Init)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6438a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "Init", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Tayx::Graphy::Utils::NumString::G_FloatString::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6434ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.ToStringNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6438d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.ToStringNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t, ::StringW)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6438ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.ToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::ToInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6438fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToInt", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.ToFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::ToFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6439008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToFloat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.ToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::ToIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6438c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToIndex", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::NumString::G_FloatString.FromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::Tayx::Graphy::Utils::NumString::G_FloatString::FromIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6438988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::Utils::NumString::G_FloatString::setStaticF_m_decimalMultiplier(float_t value) {
  ::cordl_internals::setStaticField<float_t, "m_decimalMultiplier", ::Tayx::Graphy::Utils::NumString::G_FloatString*>(std::forward<float_t>(value));
}
inline float_t Tayx::Graphy::Utils::NumString::G_FloatString::getStaticF_m_decimalMultiplier() {
  return ::cordl_internals::getStaticField<float_t, "m_decimalMultiplier", ::Tayx::Graphy::Utils::NumString::G_FloatString*>();
}
inline void Tayx::Graphy::Utils::NumString::G_FloatString::setStaticF_m_negativeBuffer(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_negativeBuffer", ::Tayx::Graphy::Utils::NumString::G_FloatString*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Tayx::Graphy::Utils::NumString::G_FloatString::getStaticF_m_negativeBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_negativeBuffer", ::Tayx::Graphy::Utils::NumString::G_FloatString*>();
}
inline void Tayx::Graphy::Utils::NumString::G_FloatString::setStaticF_m_positiveBuffer(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_positiveBuffer", ::Tayx::Graphy::Utils::NumString::G_FloatString*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Tayx::Graphy::Utils::NumString::G_FloatString::getStaticF_m_positiveBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_positiveBuffer", ::Tayx::Graphy::Utils::NumString::G_FloatString*>();
}
inline float_t Tayx::Graphy::Utils::NumString::G_FloatString::get_MinValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "get_MinValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t Tayx::Graphy::Utils::NumString::G_FloatString::get_MaxValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "get_MaxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Tayx::Graphy::Utils::NumString::G_FloatString::Init(float_t minNegativeValue, float_t maxPositiveValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "Init", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, minNegativeValue, maxPositiveValue);
}
inline void Tayx::Graphy::Utils::NumString::G_FloatString::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc(float_t value, ::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToStringNonAlloc", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format);
}
inline int32_t Tayx::Graphy::Utils::NumString::G_FloatString::ToInt(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToInt", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f);
}
inline float_t Tayx::Graphy::Utils::NumString::G_FloatString::ToFloat(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToFloat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, i);
}
inline int32_t Tayx::Graphy::Utils::NumString::G_FloatString::ToIndex(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "ToIndex", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f);
}
inline float_t Tayx::Graphy::Utils::NumString::G_FloatString::FromIndex(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::NumString::G_FloatString*>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Utils::NumString::G_FloatString::G_FloatString() {}
