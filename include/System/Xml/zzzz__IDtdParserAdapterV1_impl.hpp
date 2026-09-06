#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapterV1.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterV1_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_V1CompatibilityMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_V1CompatibilityMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_Normalization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_Normalization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdParserAdapterV1.get_Namespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IDtdParserAdapterV1::*)()>(&::System::Xml::IDtdParserAdapterV1::get_Namespaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 2 }));
    return ___internal_method;
  }
};
inline bool System::Xml::IDtdParserAdapterV1::get_V1CompatibilityMode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapterV1::get_Normalization() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapterV1::get_Namespaces() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IDtdParserAdapterV1*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr ::System::Xml::IDtdParserAdapterWithValidation* System::Xml::IDtdParserAdapterV1::i___System__Xml__IDtdParserAdapterWithValidation() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
constexpr System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapter*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapter"
constexpr ::System::Xml::IDtdParserAdapter* System::Xml::IDtdParserAdapterV1::i___System__Xml__IDtdParserAdapter() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
