#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DepthState.hpp"
#include "UnityEngine/Rendering/zzzz__DepthState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState.get_defaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DepthState (*)()>(&::UnityEngine::Rendering::DepthState::get_defaultValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b1d5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "get_defaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DepthState::*)(bool, ::UnityEngine::Rendering::CompareFunction)>(&::UnityEngine::Rendering::DepthState::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b1d618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState.get_compareFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CompareFunction (::UnityEngine::Rendering::DepthState::*)()>(
    &::UnityEngine::Rendering::DepthState::get_compareFunction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "get_compareFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DepthState::*)(::UnityEngine::Rendering::DepthState)>(&::UnityEngine::Rendering::DepthState::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b1d690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DepthState::*)(::System::Object*)>(&::UnityEngine::Rendering::DepthState::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b1d6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { ::i2c::class_of<::UnityEngine::Rendering::DepthState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DepthState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DepthState::*)()>(&::UnityEngine::Rendering::DepthState::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b1d744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { ::i2c::class_of<::UnityEngine::Rendering::DepthState>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DepthState UnityEngine::Rendering::DepthState::get_defaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "get_defaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthState>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DepthState::_ctor(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction compareFunction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writeEnabled, compareFunction);
}
inline ::UnityEngine::Rendering::CompareFunction UnityEngine::Rendering::DepthState::get_compareFunction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "get_compareFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CompareFunction>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::DepthState::Equals(::UnityEngine::Rendering::DepthState other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DepthState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::DepthState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DepthState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::DepthState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DepthState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DepthState>"
constexpr UnityEngine::Rendering::DepthState::operator ::System::IEquatable_1<::UnityEngine::Rendering::DepthState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DepthState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DepthState>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DepthState>* UnityEngine::Rendering::DepthState::i___System__IEquatable_1___UnityEngine__Rendering__DepthState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DepthState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_WriteEnabled", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompareFunction", ty: "int8_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::DepthState::DepthState(uint8_t m_WriteEnabled, int8_t m_CompareFunction) noexcept {
  this->m_WriteEnabled = m_WriteEnabled;
  this->m_CompareFunction = m_CompareFunction;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DepthState::DepthState() {}
