#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\LODParameters.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_isOrthographic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_isOrthographic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b21b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_isOrthographic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_cameraPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_cameraPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b21b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_cameraPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_fieldOfView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_fieldOfView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b21b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_fieldOfView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_orthoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_orthoSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b21b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_orthoSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)(::UnityEngine::Rendering::LODParameters)>(&::UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b1fb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)(::System::Object*)>(&::UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b21b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b1ffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::LODParameters::get_isOrthographic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_isOrthographic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LODParameters::get_cameraPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_cameraPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline float_t UnityEngine::Rendering::LODParameters::get_fieldOfView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_fieldOfView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Rendering::LODParameters::get_orthoSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "get_orthoSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::LODParameters::Equals(::UnityEngine::Rendering::LODParameters other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::LODParameters::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::LODParameters::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr UnityEngine::Rendering::LODParameters::operator ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>* UnityEngine::Rendering::LODParameters::i___System__IEquatable_1___UnityEngine__Rendering__LODParameters_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODParameters::LODParameters(int32_t m_IsOrthographic, ::UnityEngine::Vector3 m_CameraPosition, float_t m_FieldOfView, float_t m_OrthoSize,
                                                                 int32_t m_CameraPixelHeight) noexcept {
  this->m_IsOrthographic = m_IsOrthographic;
  this->m_CameraPosition = m_CameraPosition;
  this->m_FieldOfView = m_FieldOfView;
  this->m_OrthoSize = m_OrthoSize;
  this->m_CameraPixelHeight = m_CameraPixelHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODParameters::LODParameters() {}
