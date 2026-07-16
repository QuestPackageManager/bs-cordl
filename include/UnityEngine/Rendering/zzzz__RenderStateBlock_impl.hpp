#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderStateBlock.hpp"
#include "UnityEngine/Rendering/zzzz__BlendState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DepthState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RasterState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateMask_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__BlendState_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthState_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterState_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RenderStateMask)>(
    &::UnityEngine::Rendering::RenderStateBlock::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b2112c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_blendState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::BlendState)>(
    &::UnityEngine::Rendering::RenderStateBlock::set_blendState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b21260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_blendState", {}, { ::i2c::type_of<::UnityEngine::Rendering::BlendState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_rasterState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RasterState)>(
    &::UnityEngine::Rendering::RenderStateBlock::set_rasterState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b21268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_rasterState", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.get_depthState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DepthState (::UnityEngine::Rendering::RenderStateBlock::*)()>(
    &::UnityEngine::Rendering::RenderStateBlock::get_depthState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b21274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_depthState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_depthState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::DepthState)>(
    &::UnityEngine::Rendering::RenderStateBlock::set_depthState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_depthState", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.get_stencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilState (::UnityEngine::Rendering::RenderStateBlock::*)()>(
    &::UnityEngine::Rendering::RenderStateBlock::get_stencilState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b21284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_stencilState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_stencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::StencilState)>(
    &::UnityEngine::Rendering::RenderStateBlock::set_stencilState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b21294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_stencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.get_stencilReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderStateBlock::*)()>(&::UnityEngine::Rendering::RenderStateBlock::get_stencilReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b212a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_stencilReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_stencilReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(int32_t)>(&::UnityEngine::Rendering::RenderStateBlock::set_stencilReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b212a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_stencilReference", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.get_mask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderStateMask (::UnityEngine::Rendering::RenderStateBlock::*)()>(
    &::UnityEngine::Rendering::RenderStateBlock::get_mask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b212b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_mask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.set_mask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RenderStateMask)>(
    &::UnityEngine::Rendering::RenderStateBlock::set_mask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b212b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_mask", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RenderStateBlock)>(
    &::UnityEngine::Rendering::RenderStateBlock::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b212c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderStateBlock::*)(::System::Object*)>(&::UnityEngine::Rendering::RenderStateBlock::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b21470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { ::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderStateBlock.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderStateBlock::*)()>(&::UnityEngine::Rendering::RenderStateBlock::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b21504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { ::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderStateBlock::_ctor(::UnityEngine::Rendering::RenderStateMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mask);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_blendState(::UnityEngine::Rendering::BlendState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_blendState", {}, { ::i2c::type_of<::UnityEngine::Rendering::BlendState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_rasterState(::UnityEngine::Rendering::RasterState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_rasterState", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::DepthState UnityEngine::Rendering::RenderStateBlock::get_depthState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_depthState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthState>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_depthState(::UnityEngine::Rendering::DepthState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_depthState", {}, { ::i2c::type_of<::UnityEngine::Rendering::DepthState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::StencilState UnityEngine::Rendering::RenderStateBlock::get_stencilState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_stencilState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilState>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_stencilState(::UnityEngine::Rendering::StencilState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_stencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderStateBlock::get_stencilReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_stencilReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_stencilReference(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_stencilReference", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderStateMask UnityEngine::Rendering::RenderStateBlock::get_mask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "get_mask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateMask>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderStateBlock::set_mask(::UnityEngine::Rendering::RenderStateMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "set_mask", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderStateBlock::Equals(::UnityEngine::Rendering::RenderStateBlock other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::RenderStateBlock::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::RenderStateBlock::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderStateBlock>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>"
constexpr UnityEngine::Rendering::RenderStateBlock::operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>* UnityEngine::Rendering::RenderStateBlock::i___System__IEquatable_1___UnityEngine__Rendering__RenderStateBlock_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BlendState", ty: "::UnityEngine::Rendering::BlendState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RasterState", ty:
// "::UnityEngine::Rendering::RasterState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthState", ty: "::UnityEngine::Rendering::DepthState", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StencilState", ty: "::UnityEngine::Rendering::StencilState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StencilReference", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Mask", ty: "::UnityEngine::Rendering::RenderStateMask", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderStateBlock::RenderStateBlock(::UnityEngine::Rendering::BlendState m_BlendState, ::UnityEngine::Rendering::RasterState m_RasterState,
                                                                       ::UnityEngine::Rendering::DepthState m_DepthState, ::UnityEngine::Rendering::StencilState m_StencilState,
                                                                       int32_t m_StencilReference, ::UnityEngine::Rendering::RenderStateMask m_Mask) noexcept {
  this->m_BlendState = m_BlendState;
  this->m_RasterState = m_RasterState;
  this->m_DepthState = m_DepthState;
  this->m_StencilState = m_StencilState;
  this->m_StencilReference = m_StencilReference;
  this->m_Mask = m_Mask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderStateBlock::RenderStateBlock() {}
