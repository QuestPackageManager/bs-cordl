#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BufferedRTHandleSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::BufferedRTHandleSystem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0::BufferedRTHandleSystem___c__DisplayClass12_0(::UnityEngine::Rendering::BufferedRTHandleSystem* __4__this,
                                                                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat format) noexcept {
  this->__4__this = __4__this;
  this->format = format;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0::BufferedRTHandleSystem___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_maxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::get_maxWidth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67a8794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_maxWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_maxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::get_maxHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67a87ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_maxHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_rtHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandleProperties (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::get_rtHandleProperties)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67a87c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_rtHandleProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.GetFrameRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::GetFrameRT)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67a87e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "GetFrameRT", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ClearBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ClearBuffers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x67a88b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                           { "ClearBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.AllocBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(
    int32_t, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*, int32_t)>(&::UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x67a8a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                         { "AllocBuffer",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*>(),
                                             ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.AllocBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(
    int32_t, int32_t, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x67a8c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                            { "AllocBuffer",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ReleaseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t)>(&::UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67a8ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.SwapAndSetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::SwapAndSetReferenceSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67a8fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                           { "SwapAndSetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ResetReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ResetReferenceSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67a93dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                           { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.GetNumFramesAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::GetNumFramesAllocated)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67a93f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "GetNumFramesAllocated", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.CalculateRatioAgainstMaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::CalculateRatioAgainstMaxSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67a94ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                           { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::Swap)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x67a9020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Swap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(bool)>(&::UnityEngine::Rendering::BufferedRTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67a94d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a9758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ReleaseAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseAll)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x67a951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ReleaseAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(&::UnityEngine::Rendering::BufferedRTHandleSystem::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67a9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem._AllocBuffer_g__Alloc_12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::BufferedRTHandleSystem::*)(::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW,
                                                         ::by_ref<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::_AllocBuffer_g__Alloc_12_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67a8e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                             { "<AllocBuffer>g__Alloc|12_0",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                 ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*>>*& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandles;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*>>* const&
UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandles;
}
constexpr void
UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_RTHandles(::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RTHandles = value;
}
constexpr ::UnityEngine::Rendering::RTHandleSystem*& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleSystem;
}
constexpr ::UnityEngine::Rendering::RTHandleSystem* const& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleSystem;
}
constexpr void UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_RTHandleSystem(::UnityEngine::Rendering::RTHandleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RTHandleSystem = value;
}
constexpr bool& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_DisposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
constexpr bool const& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_DisposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
constexpr void UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_DisposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisposedValue = value;
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::get_maxWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_maxWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::get_maxHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_maxHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandleProperties UnityEngine::Rendering::BufferedRTHandleSystem::get_rtHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "get_rtHandleProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandleProperties>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::BufferedRTHandleSystem::GetFrameRT(int32_t bufferId, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "GetFrameRT", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, bufferId, frameIndex);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ClearBuffers(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ClearBuffers", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer(int32_t bufferId,
                                                                        ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>* allocator,
                                                                        int32_t bufferCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                       { "AllocBuffer",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*>(),
                                           ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, allocator, bufferCount);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer(int32_t bufferId, int32_t bufferCount, ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                        ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel,
                                                                        float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                          { "AllocBuffer",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                              ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId, bufferCount, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseBuffer(int32_t bufferId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferId);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::SwapAndSetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                         { "SwapAndSetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ResetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ResetReferenceSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::GetNumFramesAllocated(int32_t bufferId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "GetNumFramesAllocated", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufferId);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::BufferedRTHandleSystem::CalculateRatioAgainstMaxSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                                                         { "CalculateRatioAgainstMaxSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Swap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Swap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { "ReleaseAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::BufferedRTHandleSystem::_AllocBuffer_g__Alloc_12_0(::by_ref<::UnityEngine::RenderTextureDescriptor> d, ::UnityEngine::FilterMode fMode, ::UnityEngine::TextureWrapMode wMode,
                                                                           bool isShadow, int32_t aniso, float_t mipBias, ::StringW n,
                                                                           ::by_ref<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>(),
                                                           { "<AllocBuffer>g__Alloc|12_0",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                               ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, d, fMode, wMode, isShadow, aniso, mipBias, n, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* UnityEngine::Rendering::BufferedRTHandleSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BufferedRTHandleSystem*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::BufferedRTHandleSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::BufferedRTHandleSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem::BufferedRTHandleSystem() {}
