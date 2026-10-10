#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RTHandleSystem_ResizeMode::RTHandleSystem_ResizeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleSystem_ResizeMode::RTHandleSystem_ResizeMode() {}
constexpr ::UnityEngine::Rendering::RTHandleSystem_ResizeMode UnityEngine::Rendering::RTHandleSystem_ResizeMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RTHandleSystem_ResizeMode UnityEngine::Rendering::RTHandleSystem_ResizeMode::OnDemand{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem___c::*)()>(&::UnityEngine::Rendering::RTHandleSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bcb3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c._Alloc_b__32_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandleSystem___c::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::RTHandleSystem___c::_Alloc_b__32_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bcb3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c*>(), { "<Alloc>b__32_0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RTHandleSystem___c::setStaticF___9(::UnityEngine::Rendering::RTHandleSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandleSystem___c*, "<>9", ::UnityEngine::Rendering::RTHandleSystem___c*>(
      std::forward<::UnityEngine::Rendering::RTHandleSystem___c*>(value));
}
inline ::UnityEngine::Rendering::RTHandleSystem___c* UnityEngine::Rendering::RTHandleSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandleSystem___c*, "<>9", ::UnityEngine::Rendering::RTHandleSystem___c*>();
}
inline void UnityEngine::Rendering::RTHandleSystem___c::setStaticF___9__32_0(::UnityEngine::Rendering::ScaleFunc* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ScaleFunc*, "<>9__32_0", ::UnityEngine::Rendering::RTHandleSystem___c*>(std::forward<::UnityEngine::Rendering::ScaleFunc*>(value));
}
inline ::UnityEngine::Rendering::ScaleFunc* UnityEngine::Rendering::RTHandleSystem___c::getStaticF___9__32_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ScaleFunc*, "<>9__32_0", ::UnityEngine::Rendering::RTHandleSystem___c*>();
}
inline void UnityEngine::Rendering::RTHandleSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem___c::_Alloc_b__32_0(::UnityEngine::Vector2Int refSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c*>(), { "<Alloc>b__32_0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, refSize);
}
inline ::UnityEngine::Rendering::RTHandleSystem___c* UnityEngine::Rendering::RTHandleSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RTHandleSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleSystem___c::RTHandleSystem___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::*)()>(
    &::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bca764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0._Alloc_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::_Alloc_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bcb3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*>(), { "<Alloc>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::__cordl_internal_get_scaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFactor;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::__cordl_internal_get_scaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFactor;
}
constexpr void UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::__cordl_internal_set_scaleFactor(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleFactor = value;
}
inline void UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::_Alloc_b__0(::UnityEngine::Vector2Int refSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*>(), { "<Alloc>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, refSize);
}
inline ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0* UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0::RTHandleSystem___c__DisplayClass37_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::*)()>(
    &::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bcad48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0._Alloc_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::_Alloc_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6bcb414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*>(), { "<Alloc>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ScaleFunc*& UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::__cordl_internal_get_scaleFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFunc;
}
constexpr ::UnityEngine::Rendering::ScaleFunc* const& UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::__cordl_internal_get_scaleFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFunc;
}
constexpr void UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::__cordl_internal_set_scaleFunc(::UnityEngine::Rendering::ScaleFunc* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleFunc = value;
}
inline void UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::_Alloc_b__0(::UnityEngine::Vector2Int refSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*>(), { "<Alloc>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, refSize);
}
inline ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0* UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0::RTHandleSystem___c__DisplayClass41_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.get_rtHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandleProperties (::UnityEngine::Rendering::RTHandleSystem::*)()>(
    &::UnityEngine::Rendering::RTHandleSystem::get_rtHandleProperties)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc83d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "get_rtHandleProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)()>(&::UnityEngine::Rendering::RTHandleSystem::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bc4c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)()>(&::UnityEngine::Rendering::RTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc4ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandleSystem::Initialize)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6bc85c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::RTHandleSystem::Initialize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6bc88a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RTHandleSystem::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc41d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RTHandleSystem::Remove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6bc7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.ResetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandleSystem::ResetReferenceSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bc45f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.SetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::RTHandleSystem::SetReferenceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc45d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.SetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::RTHandleSystem::SetReferenceSize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6bc88d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                             { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.CalculateRatioAgainstMaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::RTHandleSystem::*)(::by_ref<::UnityEngine::Vector2Int const>)>(
    &::UnityEngine::Rendering::RTHandleSystem::CalculateRatioAgainstMaxSize)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6bc46e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                           { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.SetHardwareDynamicResolutionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(bool)>(&::UnityEngine::Rendering::RTHandleSystem::SetHardwareDynamicResolutionState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6bc8da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "SetHardwareDynamicResolutionState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.SwitchResizeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode)>(
    &::UnityEngine::Rendering::RTHandleSystem::SwitchResizeMode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6bc3a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                            { "SwitchResizeMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem_ResizeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.DemandResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RTHandleSystem::DemandResize)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6bc8f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "DemandResize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.GetMaxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RTHandleSystem::*)()>(&::UnityEngine::Rendering::RTHandleSystem::GetMaxWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc91d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "GetMaxWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.GetMaxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RTHandleSystem::*)()>(&::UnityEngine::Rendering::RTHandleSystem::GetMaxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc91d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "GetMaxHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(bool)>(&::UnityEngine::Rendering::RTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6bc83ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::RTHandleSystem::Resize)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6bc8a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                           { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode,
                                                 ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t,
                                                 ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6bc91e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode,
                                                 ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                 ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bc957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode, int32_t,
                                                 ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode,
                                                 ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                 ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6bc9618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode,
                                                 ::UnityEngine::TextureWrapMode, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t,
                                                 float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6bc9350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.CreateRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::RTHandleSystem::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::TextureWrapMode,
    ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
    ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, bool, ::StringW)>(&::UnityEngine::Rendering::RTHandleSystem::CreateRenderTexture)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x6bc9794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CreateRenderTexture",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, ::UnityEngine::Rendering::RTHandleAllocInfo)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6bc3eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                { "Alloc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.CalculateDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::RTHandleSystem::CalculateDimensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.CalculateDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::RTHandleSystem::CalculateDimensions)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6bc9df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                             { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Vector2, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode,
                                                 ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                 ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6bc9fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Vector2, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                 ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t,
                                                 ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6bca308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Vector2, ::UnityEngine::Rendering::RTHandleAllocInfo)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6bca46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.CalculateDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::ScaleFunc*)>(
    &::UnityEngine::Rendering::RTHandleSystem::CalculateDimensions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bca948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::ScaleFunc*, int32_t, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                 ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t,
                                                 ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6bca98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::ScaleFunc*, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, ::UnityEngine::FilterMode,
                                                 ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t,
                                                 ::UnityEngine::Rendering::MSAASamples, bool, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6bcaad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                            { "Alloc",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::ScaleFunc*, ::UnityEngine::Rendering::RTHandleAllocInfo)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6bcabd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.AllocAutoSizedRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode,
                                                 ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int32_t, float_t, ::UnityEngine::Rendering::MSAASamples, bool, bool, bool,
                                                 ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, bool, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::AllocAutoSizedRenderTexture)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6bca0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "AllocAutoSizedRenderTexture",
                                                                                                                             {},
                                                                                                                             { ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                               ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                               ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.AllocAutoSizedRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::RTHandleSystem::*)(int32_t, int32_t, ::UnityEngine::Rendering::RTHandleAllocInfo)>(&::UnityEngine::Rendering::RTHandleSystem::AllocAutoSizedRenderTexture)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6bca768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                            { "AllocAutoSizedRenderTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::RenderTexture*, bool)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6bcad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6bcae1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bcaee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::RTHandleSystem::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::StringW)>(
    &::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6bcaf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RTHandleSystem::Alloc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bcb000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.DumpRTInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RTHandleSystem::*)()>(&::UnityEngine::Rendering::RTHandleSystem::DumpRTInfo)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6bcb078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "DumpRTInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleSystem.GetStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::RTHandleSystem::*)(
    ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::RTHandleSystem::GetStencilFormat)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6bc9d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                           { "GetStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_HardwareDynamicResRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HardwareDynamicResRequested;
}
constexpr bool const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_HardwareDynamicResRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HardwareDynamicResRequested;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_HardwareDynamicResRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HardwareDynamicResRequested = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_AutoSizedRTs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizedRTs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_AutoSizedRTs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizedRTs;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_AutoSizedRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoSizedRTs = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_AutoSizedRTsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizedRTsArray;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_AutoSizedRTsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizedRTsArray;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_AutoSizedRTsArray(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoSizedRTsArray = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_ResizeOnDemandRTs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizeOnDemandRTs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_ResizeOnDemandRTs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizeOnDemandRTs;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_ResizeOnDemandRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResizeOnDemandRTs = value;
}
constexpr ::UnityEngine::Rendering::RTHandleProperties& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_RTHandleProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleProperties;
}
constexpr ::UnityEngine::Rendering::RTHandleProperties const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_RTHandleProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleProperties;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_RTHandleProperties(::UnityEngine::Rendering::RTHandleProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RTHandleProperties = value;
}
constexpr int32_t& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_MaxWidths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxWidths;
}
constexpr int32_t const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_MaxWidths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxWidths;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_MaxWidths(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxWidths = value;
}
constexpr int32_t& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_MaxHeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxHeights;
}
constexpr int32_t const& UnityEngine::Rendering::RTHandleSystem::__cordl_internal_get_m_MaxHeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxHeights;
}
constexpr void UnityEngine::Rendering::RTHandleSystem::__cordl_internal_set_m_MaxHeights(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxHeights = value;
}
inline ::UnityEngine::Rendering::RTHandleProperties UnityEngine::Rendering::RTHandleSystem::get_rtHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "get_rtHandleProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandleProperties>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleSystem::Initialize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::RTHandleSystem::Initialize(int32_t width, int32_t height, bool useLegacyDynamicResControl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, useLegacyDynamicResControl);
}
inline void UnityEngine::Rendering::RTHandleSystem::Release(::UnityEngine::Rendering::RTHandle* rth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rth);
}
inline void UnityEngine::Rendering::RTHandleSystem::Remove(::UnityEngine::Rendering::RTHandle* rth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rth);
}
inline void UnityEngine::Rendering::RTHandleSystem::ResetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::RTHandleSystem::SetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::RTHandleSystem::SetReferenceSize(int32_t width, int32_t height, bool reset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "SetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, reset);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::RTHandleSystem::CalculateRatioAgainstMaxSize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2Int const> viewportSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                         { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, viewportSize);
}
inline void UnityEngine::Rendering::RTHandleSystem::SetHardwareDynamicResolutionState(bool enableHWDynamicRes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "SetHardwareDynamicResolutionState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableHWDynamicRes);
}
inline void UnityEngine::Rendering::RTHandleSystem::SwitchResizeMode(::UnityEngine::Rendering::RTHandle* rth, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                       { "SwitchResizeMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem_ResizeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rth, mode);
}
inline void UnityEngine::Rendering::RTHandleSystem::DemandResize(::UnityEngine::Rendering::RTHandle* rth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "DemandResize", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rth);
}
inline int32_t UnityEngine::Rendering::RTHandleSystem::GetMaxWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "GetMaxWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RTHandleSystem::GetMaxHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "GetMaxHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandleSystem::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RTHandleSystem::Resize(int32_t width, int32_t height, bool sizeChanged) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                         { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, sizeChanged);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                         ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                         ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                         bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                                                                         float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS,
                                                                                         bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                         ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                                                         ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                         ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                                                         bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                                         ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                         bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                         ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, format, slices, filterMode, wrapMode, dimension, enableRandomWrite,
                                                                                  useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                              ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                              ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                              float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                              ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, wrapModeU, wrapModeV, wrapModeW, slices, depthBufferBits, colorFormat,
                                                                                  filterMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias,
                                                                                  msaaSamples, bindTextureMS, useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureWrapMode wrapModeU,
                                              ::UnityEngine::TextureWrapMode wrapModeV, ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::FilterMode filterMode,
                                              ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                              float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                              ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, format, wrapModeU, wrapModeV, wrapModeW, slices, filterMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::RTHandleSystem::CreateRenderTexture(
    int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapModeU,
    ::UnityEngine::TextureWrapMode wrapModeV, ::UnityEngine::TextureWrapMode wrapModeW, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
    bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
    bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, bool enableShadingRate, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CreateRenderTexture",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, width, height, format, slices, filterMode, wrapModeU, wrapModeV, wrapModeW, dimension,
                                                                                     enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                     useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, enableShadingRate, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, info);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem::CalculateDimensions(::UnityEngine::Vector2 scaleFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, scaleFactor);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem::CalculateDimensions(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Vector2Int size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                           { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, scaleFactor, size);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                         int32_t slices, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                         ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                                                         bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                                         ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                         bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                         ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                       { "Alloc",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFactor, format, slices, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap,
                                                                                  autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                                                         ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                                                         ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                         bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                                                                         float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS,
                                                                                         bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                         ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFactor, info);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandleSystem::CalculateDimensions(::UnityEngine::Rendering::ScaleFunc* scaleFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "CalculateDimensions", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, scaleFunc);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                              ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel,
                                              float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                              ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::DepthBits>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension,
                                                                                  enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS,
                                                                                  useDynamicScale, useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                         int32_t slices, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                         ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                                                         bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                                         ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                                                         bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                                         ::UnityEngine::VRTextureUsage vrUsage, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                       { "Alloc",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(), ::i2c::type_of<::UnityEngine::VRTextureUsage>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFunc, format, slices, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap,
                                                                                  autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                              { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, scaleFunc, info);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RTHandleSystem::AllocAutoSizedRenderTexture(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                    bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                    ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, bool enableShadingRate, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "AllocAutoSizedRenderTexture",
                                                                                                                           {},
                                                                                                                           { ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<int32_t>(),
                                                                                                                             ::i2c::type_of<float_t>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureMemoryless>(),
                                                                                                                             ::i2c::type_of<::UnityEngine::VRTextureUsage>(),
                                                                                                                             ::i2c::type_of<bool>(),
                                                                                                                             ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, slices, format, filterMode, wrapMode, dimension, enableRandomWrite,
                                                                                  useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale,
                                                                                  useDynamicScaleExplicit, memoryless, vrUsage, enableShadingRate, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::AllocAutoSizedRenderTexture(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                          { "AllocAutoSizedRenderTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandleAllocInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, width, height, info);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::RenderTexture* texture, bool transferOwnership) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, texture, transferOwnership);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, texture, name);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleSystem::Alloc(::UnityEngine::Rendering::RTHandle* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "Alloc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, tex);
}
inline ::StringW UnityEngine::Rendering::RTHandleSystem::DumpRTInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(), { "DumpRTInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::RTHandleSystem::GetStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleSystem*>(),
                                                                                         { "GetStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method, depthStencilFormat);
}
inline ::UnityEngine::Rendering::RTHandleSystem* UnityEngine::Rendering::RTHandleSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RTHandleSystem*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RTHandleSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RTHandleSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleSystem::RTHandleSystem() {}
