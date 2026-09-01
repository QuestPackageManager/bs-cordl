#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderTargetBlendState.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetBlendState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__BlendMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__BlendOp_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBlendState.get_defaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetBlendState (*)()>(&::UnityEngine::Rendering::RenderTargetBlendState::get_defaultValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b1ddd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), { "get_defaultValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBlendState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderTargetBlendState::*)(
    ::UnityEngine::Rendering::ColorWriteMask, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode, ::UnityEngine::Rendering::BlendMode,
    ::UnityEngine::Rendering::BlendOp, ::UnityEngine::Rendering::BlendOp)>(&::UnityEngine::Rendering::RenderTargetBlendState::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b24c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(),
                                ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(),
                                ::i2c::type_of<::UnityEngine::Rendering::BlendOp>(), ::i2c::type_of<::UnityEngine::Rendering::BlendOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBlendState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderTargetBlendState::*)(::UnityEngine::Rendering::RenderTargetBlendState)>(
    &::UnityEngine::Rendering::RenderTargetBlendState::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b1dea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetBlendState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBlendState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderTargetBlendState::*)(::System::Object*)>(&::UnityEngine::Rendering::RenderTargetBlendState::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b24c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), { ::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBlendState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderTargetBlendState::*)()>(&::UnityEngine::Rendering::RenderTargetBlendState::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b1e268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), { ::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderTargetBlendState UnityEngine::Rendering::RenderTargetBlendState::get_defaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), { "get_defaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetBlendState>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderTargetBlendState::_ctor(::UnityEngine::Rendering::ColorWriteMask writeMask, ::UnityEngine::Rendering::BlendMode sourceColorBlendMode,
                                                                  ::UnityEngine::Rendering::BlendMode destinationColorBlendMode, ::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode,
                                                                  ::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode, ::UnityEngine::Rendering::BlendOp colorBlendOperation,
                                                                  ::UnityEngine::Rendering::BlendOp alphaBlendOperation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ColorWriteMask>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(),
                              ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(), ::i2c::type_of<::UnityEngine::Rendering::BlendMode>(), ::i2c::type_of<::UnityEngine::Rendering::BlendOp>(),
                              ::i2c::type_of<::UnityEngine::Rendering::BlendOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writeMask, sourceColorBlendMode, destinationColorBlendMode, sourceAlphaBlendMode, destinationAlphaBlendMode,
                                                   colorBlendOperation, alphaBlendOperation);
}
inline bool UnityEngine::Rendering::RenderTargetBlendState::Equals(::UnityEngine::Rendering::RenderTargetBlendState other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetBlendState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::RenderTargetBlendState::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::RenderTargetBlendState::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderTargetBlendState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>"
constexpr UnityEngine::Rendering::RenderTargetBlendState::operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>*
UnityEngine::Rendering::RenderTargetBlendState::i___System__IEquatable_1___UnityEngine__Rendering__RenderTargetBlendState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetBlendState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceColorBlendMode", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_DestinationColorBlendMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceAlphaBlendMode", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_DestinationAlphaBlendMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorBlendOperation", ty: "uint8_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_AlphaBlendOperation", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderTargetBlendState::RenderTargetBlendState(uint8_t m_WriteMask, uint8_t m_SourceColorBlendMode, uint8_t m_DestinationColorBlendMode,
                                                                                   uint8_t m_SourceAlphaBlendMode, uint8_t m_DestinationAlphaBlendMode, uint8_t m_ColorBlendOperation,
                                                                                   uint8_t m_AlphaBlendOperation, uint8_t m_Padding) noexcept {
  this->m_WriteMask = m_WriteMask;
  this->m_SourceColorBlendMode = m_SourceColorBlendMode;
  this->m_DestinationColorBlendMode = m_DestinationColorBlendMode;
  this->m_SourceAlphaBlendMode = m_SourceAlphaBlendMode;
  this->m_DestinationAlphaBlendMode = m_DestinationAlphaBlendMode;
  this->m_ColorBlendOperation = m_ColorBlendOperation;
  this->m_AlphaBlendOperation = m_AlphaBlendOperation;
  this->m_Padding = m_Padding;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderTargetBlendState::RenderTargetBlendState() {}
