#pragma once
// IWYU pragma private; include "UnityEngine\RefreshRate.hpp"
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::RefreshRate.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::RefreshRate::*)()>(&::UnityEngine::RefreshRate::get_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a85158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::RefreshRate::*)(::UnityEngine::RefreshRate)>(&::UnityEngine::RefreshRate::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RefreshRate::*)(::UnityEngine::RefreshRate)>(&::UnityEngine::RefreshRate::CompareTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a851a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::RefreshRate::*)()>(&::UnityEngine::RefreshRate::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6a851ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { ::i2c::class_of<::UnityEngine::RefreshRate>(), 3 }));
    return ___internal_method;
  }
};
inline double_t UnityEngine::RefreshRate::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline bool UnityEngine::RefreshRate::Equals(::UnityEngine::RefreshRate other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::RefreshRate::CompareTo(::UnityEngine::RefreshRate other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RefreshRate>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::RefreshRate::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::RefreshRate>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
constexpr UnityEngine::RefreshRate::operator ::System::IEquatable_1<::UnityEngine::RefreshRate>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
constexpr ::System::IEquatable_1<::UnityEngine::RefreshRate>* UnityEngine::RefreshRate::i___System__IEquatable_1___UnityEngine__RefreshRate_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::RefreshRate>"
constexpr UnityEngine::RefreshRate::operator ::System::IComparable_1<::UnityEngine::RefreshRate>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::RefreshRate>"
constexpr ::System::IComparable_1<::UnityEngine::RefreshRate>* UnityEngine::RefreshRate::i___System__IComparable_1___UnityEngine__RefreshRate_() {
  return static_cast<::System::IComparable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "numerator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "denominator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RefreshRate::RefreshRate(uint32_t numerator, uint32_t denominator) noexcept {
  this->numerator = numerator;
  this->denominator = denominator;
}
// Ctor Parameters []
constexpr ::UnityEngine::RefreshRate::RefreshRate() {}
