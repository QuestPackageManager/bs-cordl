#pragma once
// IWYU pragma private; include "UnityEngine\XR\Eyes.hpp"
#include "UnityEngine/XR/zzzz__Eyes_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Eyes.get_deviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "get_deviceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.get_featureIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::get_featureIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e37ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "get_featureIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Eyes::*)(::System::Object*)>(&::UnityEngine::XR::Eyes::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e37ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { ::i2c::class_of<::UnityEngine::XR::Eyes>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Eyes::*)(::UnityEngine::XR::Eyes)>(&::UnityEngine::XR::Eyes::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e37b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::Eyes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Eyes.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Eyes::*)()>(&::UnityEngine::XR::Eyes::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e37b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { ::i2c::class_of<::UnityEngine::XR::Eyes>(), 2 }));
    return ___internal_method;
  }
};
inline uint64_t UnityEngine::XR::Eyes::get_deviceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "get_deviceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::Eyes::get_featureIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "get_featureIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::Eyes::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::Eyes>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::XR::Eyes::Equals(::UnityEngine::XR::Eyes other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::Eyes>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::Eyes>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::Eyes::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::Eyes>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Eyes>"
constexpr UnityEngine::XR::Eyes::operator ::System::IEquatable_1<::UnityEngine::XR::Eyes>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::Eyes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Eyes>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::Eyes>* UnityEngine::XR::Eyes::i___System__IEquatable_1___UnityEngine__XR__Eyes_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::Eyes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FeatureIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Eyes::Eyes(uint64_t m_DeviceId, uint32_t m_FeatureIndex) noexcept {
  this->m_DeviceId = m_DeviceId;
  this->m_FeatureIndex = m_FeatureIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Eyes::Eyes() {}
