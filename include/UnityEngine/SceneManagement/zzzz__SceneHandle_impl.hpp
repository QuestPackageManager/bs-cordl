#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneHandle.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SceneManagement::SceneHandle::*)(::System::Object*)>(&::UnityEngine::SceneManagement::SceneHandle::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f5aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SceneManagement::SceneHandle::*)(::UnityEngine::SceneManagement::SceneHandle)>(
    &::UnityEngine::SceneManagement::SceneHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f5af28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::SceneHandle, ::UnityEngine::SceneManagement::SceneHandle)>(
    &::UnityEngine::SceneManagement::SceneHandle::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f5ad54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>(), ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::SceneManagement::SceneHandle)>(&::UnityEngine::SceneManagement::SceneHandle::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SceneManagement::SceneHandle::*)()>(&::UnityEngine::SceneManagement::SceneHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f5adc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SceneManagement::SceneHandle::*)()>(&::UnityEngine::SceneManagement::SceneHandle::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f5af3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::SceneManagement::SceneHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::SceneManagement::SceneHandle::Equals(::UnityEngine::SceneManagement::SceneHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::SceneManagement::SceneHandle::op_Equality(::UnityEngine::SceneManagement::SceneHandle left, ::UnityEngine::SceneManagement::SceneHandle right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>(), ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::SceneManagement::SceneHandle::op_Implicit_int32_t(::UnityEngine::SceneManagement::SceneHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::SceneHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline int32_t UnityEngine::SceneManagement::SceneHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::SceneManagement::SceneHandle::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SceneManagement::SceneHandle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>"
constexpr UnityEngine::SceneManagement::SceneHandle::operator ::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>* UnityEngine::SceneManagement::SceneHandle::i___System__IEquatable_1___UnityEngine__SceneManagement__SceneHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::SceneManagement::SceneHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SceneManagement::SceneHandle::SceneHandle(::UnityEngine::EntityId m_Value) noexcept {
  this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneHandle::SceneHandle() {}
