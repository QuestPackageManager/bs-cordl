#pragma once
// IWYU pragma private; include "UnityEngine\XR\InputFeatureUsage.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::InputFeatureUsage::*)()>(&::UnityEngine::XR::InputFeatureUsage::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e372c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.get_internalType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputFeatureType (::UnityEngine::XR::InputFeatureUsage::*)()>(&::UnityEngine::XR::InputFeatureUsage::get_internalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e372d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "get_internalType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputFeatureUsage::*)(::System::Object*)>(&::UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e372d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { ::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputFeatureUsage::*)(::UnityEngine::XR::InputFeatureUsage)>(&::UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e37360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::InputFeatureUsage::*)()>(&::UnityEngine::XR::InputFeatureUsage::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e3739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { ::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::XR::InputFeatureUsage::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureUsage::get_internalType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "get_internalType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputFeatureType>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputFeatureUsage::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::XR::InputFeatureUsage::Equals(::UnityEngine::XR::InputFeatureUsage other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::InputFeatureUsage::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::InputFeatureUsage>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
constexpr UnityEngine::XR::InputFeatureUsage::operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>* UnityEngine::XR::InputFeatureUsage::i___System__IEquatable_1___UnityEngine__XR__InputFeatureUsage_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InternalType", ty: "::UnityEngine::XR::InputFeatureType", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputFeatureUsage::InputFeatureUsage(::StringW m_Name, ::UnityEngine::XR::InputFeatureType m_InternalType) noexcept {
  this->m_Name = m_Name;
  this->m_InternalType = m_InternalType;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputFeatureUsage::InputFeatureUsage() {}
