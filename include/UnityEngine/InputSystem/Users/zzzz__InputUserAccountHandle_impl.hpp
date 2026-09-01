#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Users\InputUserAccountHandle.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.get_apiName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)()>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::get_apiName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { "get_apiName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.get_handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)()>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::get_handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { "get_handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)(::StringW, uint64_t)>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6591db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)()>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6591e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6591ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6591f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle, ::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6591c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle, ::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6592010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUserAccountHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUserAccountHandle::*)()>(
    &::UnityEngine::InputSystem::Users::InputUserAccountHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6592040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Users::InputUserAccountHandle::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { "get_apiName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint64_t UnityEngine::InputSystem::Users::InputUserAccountHandle::get_handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { "get_handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUserAccountHandle::_ctor(::StringW apiName, uint64_t handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, apiName, handle);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUserAccountHandle::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUserAccountHandle::Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Users::InputUserAccountHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::InputSystem::Users::InputUserAccountHandle::op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left,
                                                                                 ::UnityEngine::InputSystem::Users::InputUserAccountHandle right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Users::InputUserAccountHandle::op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle left,
                                                                                   ::UnityEngine::InputSystem::Users::InputUserAccountHandle right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Users::InputUserAccountHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>"
constexpr UnityEngine::InputSystem::Users::InputUserAccountHandle::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*
UnityEngine::InputSystem::Users::InputUserAccountHandle::i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUserAccountHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle::InputUserAccountHandle(::StringW m_ApiName, uint64_t m_Handle) noexcept {
  this->m_ApiName = m_ApiName;
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle::InputUserAccountHandle() {}
