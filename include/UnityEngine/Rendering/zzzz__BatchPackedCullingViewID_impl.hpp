#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchPackedCullingViewID.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchPackedCullingViewID::*)()>(&::UnityEngine::Rendering::BatchPackedCullingViewID::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b272c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchPackedCullingViewID::*)(::UnityEngine::Rendering::BatchPackedCullingViewID)>(
    &::UnityEngine::Rendering::BatchPackedCullingViewID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b272cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchPackedCullingViewID>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchPackedCullingViewID::*)(::System::Object*)>(&::UnityEngine::Rendering::BatchPackedCullingViewID::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b272dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), { ::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchPackedCullingViewID.GetInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchPackedCullingViewID::*)()>(&::UnityEngine::Rendering::BatchPackedCullingViewID::GetInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b27358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), { "GetInstanceID", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::BatchPackedCullingViewID::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchPackedCullingViewID::Equals(::UnityEngine::Rendering::BatchPackedCullingViewID other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::BatchPackedCullingViewID>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchPackedCullingViewID::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BatchPackedCullingViewID::GetInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchPackedCullingViewID>(), { "GetInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
constexpr UnityEngine::Rendering::BatchPackedCullingViewID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*
UnityEngine::Rendering::BatchPackedCullingViewID::i___System__IEquatable_1___UnityEngine__Rendering__BatchPackedCullingViewID_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID::BatchPackedCullingViewID(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID::BatchPackedCullingViewID() {}
