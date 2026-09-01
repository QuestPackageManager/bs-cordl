#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RasterState.hpp"
#include "UnityEngine/Rendering/zzzz__CullMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RasterState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RasterState::*)(::UnityEngine::Rendering::CullMode, int32_t, float_t, bool)>(
    &::UnityEngine::Rendering::RasterState::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b21c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RasterState::*)(::UnityEngine::Rendering::RasterState)>(&::UnityEngine::Rendering::RasterState::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b21cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RasterState::*)(::System::Object*)>(&::UnityEngine::Rendering::RasterState::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b21d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(), { ::i2c::class_of<::UnityEngine::Rendering::RasterState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RasterState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RasterState::*)()>(&::UnityEngine::Rendering::RasterState::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b21dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(), { ::i2c::class_of<::UnityEngine::Rendering::RasterState>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RasterState::setStaticF_defaultValue(::UnityEngine::Rendering::RasterState value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RasterState, "defaultValue", ::UnityEngine::Rendering::RasterState>(std::forward<::UnityEngine::Rendering::RasterState>(value));
}
inline ::UnityEngine::Rendering::RasterState UnityEngine::Rendering::RasterState::getStaticF_defaultValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RasterState, "defaultValue", ::UnityEngine::Rendering::RasterState>();
}
inline void UnityEngine::Rendering::RasterState::_ctor(::UnityEngine::Rendering::CullMode cullingMode, int32_t offsetUnits, float_t offsetFactor, bool depthClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cullingMode, offsetUnits, offsetFactor, depthClip);
}
inline bool UnityEngine::Rendering::RasterState::Equals(::UnityEngine::Rendering::RasterState other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RasterState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::RasterState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RasterState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::RasterState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RasterState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
constexpr UnityEngine::Rendering::RasterState::operator ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RasterState>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>* UnityEngine::Rendering::RasterState::i___System__IEquatable_1___UnityEngine__Rendering__RasterState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CullingMode", ty: "::UnityEngine::Rendering::CullMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OffsetUnits", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_OffsetFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthClip", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Conservative", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Padding1", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Padding2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RasterState::RasterState(::UnityEngine::Rendering::CullMode m_CullingMode, int32_t m_OffsetUnits, float_t m_OffsetFactor, uint8_t m_DepthClip,
                                                             uint8_t m_Conservative, uint8_t m_Padding1, uint8_t m_Padding2) noexcept {
  this->m_CullingMode = m_CullingMode;
  this->m_OffsetUnits = m_OffsetUnits;
  this->m_OffsetFactor = m_OffsetFactor;
  this->m_DepthClip = m_DepthClip;
  this->m_Conservative = m_Conservative;
  this->m_Padding1 = m_Padding1;
  this->m_Padding2 = m_Padding2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RasterState::RasterState() {}
