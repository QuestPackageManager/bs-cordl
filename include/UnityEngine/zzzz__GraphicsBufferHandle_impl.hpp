#pragma once
// IWYU pragma private; include "UnityEngine\GraphicsBufferHandle.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GraphicsBufferHandle::*)()>(&::UnityEngine::GraphicsBufferHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aa0d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), { ::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GraphicsBufferHandle::*)(::System::Object*)>(&::UnityEngine::GraphicsBufferHandle::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6aa0d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), { ::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GraphicsBufferHandle::*)(::UnityEngine::GraphicsBufferHandle)>(&::UnityEngine::GraphicsBufferHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aa0dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::GraphicsBufferHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::GraphicsBufferHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::GraphicsBufferHandle::Equals(::UnityEngine::GraphicsBufferHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GraphicsBufferHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::GraphicsBufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
constexpr UnityEngine::GraphicsBufferHandle::operator ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>* UnityEngine::GraphicsBufferHandle::i___System__IEquatable_1___UnityEngine__GraphicsBufferHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GraphicsBufferHandle::GraphicsBufferHandle(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBufferHandle::GraphicsBufferHandle() {}
