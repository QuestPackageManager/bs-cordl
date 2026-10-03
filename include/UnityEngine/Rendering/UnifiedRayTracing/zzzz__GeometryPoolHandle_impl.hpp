#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolHandle.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e02e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::*)(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e02e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>();
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::get_valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::Equals(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>"
constexpr UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::operator ::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>*
UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::i___System__IEquatable_1___UnityEngine__Rendering__UnifiedRayTracing__GeometryPoolHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::GeometryPoolHandle(int32_t index) noexcept {
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle::GeometryPoolHandle() {}
