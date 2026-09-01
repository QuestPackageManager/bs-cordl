#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\Utility.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Utility_GPUBufferType::Utility_GPUBufferType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Utility_GPUBufferType::Utility_GPUBufferType() {}
constexpr ::UnityEngine::UIElements::UIR::Utility_GPUBufferType UnityEngine::UIElements::UIR::Utility_GPUBufferType::Vertex{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::Utility_GPUBufferType UnityEngine::UIElements::UIR::Utility_GPUBufferType::Index{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::System::IntPtr& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
template <typename T> constexpr ::System::IntPtr const& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_set_buffer(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_elemCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_elemCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemCount;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_set_elemCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elemCount = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_elemStride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemStride;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_get_elemStride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemStride;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::__cordl_internal_set_elemStride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elemStride = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::_ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::Utility_GPUBufferType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Utility_GPUBufferType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementCount, type);
}
template <typename T> inline void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin,
                                                                               int32_t rangesMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(),
                          { "UpdateRanges",
                            {},
                            { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ranges, rangesMin, rangesMax);
}
template <typename T> inline int32_t UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::get_ElementStride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(), { "get_ElementStride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::get_BufferPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(), { "get_BufferPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>* UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::New_ctor(int32_t elementCount,
                                                                                                                              ::UnityEngine::UIElements::UIR::Utility_GPUBufferType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>*>(elementCount, type));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>::Utility_GPUBuffer_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_GraphicsResourcesRecreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::UIElements::UIR::Utility::add_GraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6cd19dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_GraphicsResourcesRecreate", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_GraphicsResourcesRecreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::UIElements::UIR::Utility::remove_GraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6cd1ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_GraphicsResourcesRecreate", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_EngineUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::UIElements::UIR::Utility::add_EngineUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cd1be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_EngineUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_EngineUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::UIElements::UIR::Utility::remove_EngineUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cd1cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_EngineUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_FlushPendingResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::UIElements::UIR::Utility::add_FlushPendingResources)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cd1dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_FlushPendingResources", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_FlushPendingResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::UIElements::UIR::Utility::remove_FlushPendingResources)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cd1eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_FlushPendingResources", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseGraphicsResourcesRecreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIR::Utility::RaiseGraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cd1fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseGraphicsResourcesRecreate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseEngineUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::RaiseEngineUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cd2024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseEngineUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseFlushPendingResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::RaiseFlushPendingResources)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cd20bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseFlushPendingResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.AllocateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, bool)>(&::UnityEngine::UIElements::UIR::Utility::AllocateBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6cd2134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "AllocateBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.FreeBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIR::Utility::FreeBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd2188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "FreeBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.UpdateBufferRanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::UpdateBufferRanges)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6cd21c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "UpdateBufferRanges",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetVertexDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(
    &::UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cd2230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                             { "GetVertexDeclaration", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.DrawRanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIR::Utility::DrawRanges)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cd2358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                                                           { "DrawRanges",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::UIElements::UIR::Utility::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cd23cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetPropertyBlock", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetScissorRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIR::Utility::SetScissorRect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cd2488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetScissorRect", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.DisableScissor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::DisableScissor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd2548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "DisableScissor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CreateStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::StencilState)>(&::UnityEngine::UIElements::UIR::Utility::CreateStencilState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cd2570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "CreateStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::SetStencilState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cd2634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetStencilState", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.HasMappedBufferRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIR::Utility::HasMappedBufferRange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd2678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "HasMappedBufferRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.InsertCPUFence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::UIElements::UIR::Utility::InsertCPUFence)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd26a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "InsertCPUFence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CPUFencePassed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Utility::CPUFencePassed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd26c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "CPUFencePassed", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.WaitForCPUFencePassed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Utility::WaitForCPUFencePassed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd2704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "WaitForCPUFencePassed", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SyncRenderThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::SyncRenderThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd2740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SyncRenderThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetActiveViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectInt (*)()>(&::UnityEngine::UIElements::UIR::Utility::GetActiveViewport)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cd2768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetActiveViewport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.ProfileDrawChainBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainBegin)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "ProfileDrawChainBegin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.ProfileDrawChainEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainEnd)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cd2854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "ProfileDrawChainEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.NotifyOfUIREvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIR::Utility::NotifyOfUIREvents)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd287c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "NotifyOfUIREvents", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetUnityProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cd28b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetUnityProjectionMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetVertexDeclaration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd231c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                             { "GetVertexDeclaration_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetPropertyBlock_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIR::Utility::SetPropertyBlock_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd244c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetPropertyBlock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetScissorRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RectInt>)>(&::UnityEngine::UIElements::UIR::Utility::SetScissorRect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetScissorRect_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CreateStencilState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Rendering::StencilState>)>(&::UnityEngine::UIElements::UIR::Utility::CreateStencilState_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd25f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                             { "CreateStencilState_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::StencilState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetActiveViewport_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RectInt>)>(&::UnityEngine::UIElements::UIR::Utility::GetActiveViewport_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd27f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetActiveViewport_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetUnityProjectionMatrix_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                                                           { "GetUnityProjectionMatrix_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Utility::setStaticF_GraphicsResourcesRecreate(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "GraphicsResourcesRecreate", ::UnityEngine::UIElements::UIR::Utility*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::UIElements::UIR::Utility::getStaticF_GraphicsResourcesRecreate() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "GraphicsResourcesRecreate", ::UnityEngine::UIElements::UIR::Utility*>();
}
inline void UnityEngine::UIElements::UIR::Utility::setStaticF_EngineUpdate(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "EngineUpdate", ::UnityEngine::UIElements::UIR::Utility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::UIElements::UIR::Utility::getStaticF_EngineUpdate() {
  return ::cordl_internals::getStaticField<::System::Action*, "EngineUpdate", ::UnityEngine::UIElements::UIR::Utility*>();
}
inline void UnityEngine::UIElements::UIR::Utility::setStaticF_FlushPendingResources(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "FlushPendingResources", ::UnityEngine::UIElements::UIR::Utility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::UIElements::UIR::Utility::getStaticF_FlushPendingResources() {
  return ::cordl_internals::getStaticField<::System::Action*, "FlushPendingResources", ::UnityEngine::UIElements::UIR::Utility*>();
}
inline void UnityEngine::UIElements::UIR::Utility::setStaticF_s_MarkerRaiseEngineUpdate(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRaiseEngineUpdate", ::UnityEngine::UIElements::UIR::Utility*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Utility::getStaticF_s_MarkerRaiseEngineUpdate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRaiseEngineUpdate", ::UnityEngine::UIElements::UIR::Utility*>();
}
inline void UnityEngine::UIElements::UIR::Utility::add_GraphicsResourcesRecreate(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_GraphicsResourcesRecreate", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::remove_GraphicsResourcesRecreate(::System::Action_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_GraphicsResourcesRecreate", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::add_EngineUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_EngineUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::remove_EngineUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_EngineUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::add_FlushPendingResources(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "add_FlushPendingResources", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::remove_FlushPendingResources(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "remove_FlushPendingResources", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Utility::RaiseGraphicsResourcesRecreate(bool recreate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseGraphicsResourcesRecreate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recreate);
}
inline void UnityEngine::UIElements::UIR::Utility::RaiseEngineUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseEngineUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Utility::RaiseFlushPendingResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "RaiseFlushPendingResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility::AllocateBuffer(int32_t elementCount, int32_t elementStride, bool vertexBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                                                         { "AllocateBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, elementCount, elementStride, vertexBuffer);
}
inline void UnityEngine::UIElements::UIR::Utility::FreeBuffer(::System::IntPtr buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "FreeBuffer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::UIElements::UIR::Utility::UpdateBufferRanges(::System::IntPtr buffer, ::System::IntPtr ranges, int32_t rangeCount, int32_t writeRangeStart, int32_t writeRangeEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
          { "UpdateBufferRanges", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, ranges, rangeCount, writeRangeStart, writeRangeEnd);
}
inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> vertexAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                           { "GetVertexDeclaration", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, vertexAttributes);
}
inline void UnityEngine::UIElements::UIR::Utility::DrawRanges(::System::IntPtr ib, ::System::IntPtr* vertexStreams, int32_t streamCount, ::System::IntPtr ranges, int32_t rangeCount,
                                                              ::System::IntPtr vertexDecl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                                                         { "DrawRanges",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ib, vertexStreams, streamCount, ranges, rangeCount, vertexDecl);
}
inline void UnityEngine::UIElements::UIR::Utility::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* props) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetPropertyBlock", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, props);
}
inline void UnityEngine::UIElements::UIR::Utility::SetScissorRect(::UnityEngine::RectInt scissorRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetScissorRect", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scissorRect);
}
inline void UnityEngine::UIElements::UIR::Utility::DisableScissor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "DisableScissor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility::CreateStencilState(::UnityEngine::Rendering::StencilState stencilState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "CreateStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, stencilState);
}
inline void UnityEngine::UIElements::UIR::Utility::SetStencilState(::System::IntPtr stencilState, int32_t stencilRef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetStencilState", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stencilState, stencilRef);
}
inline bool UnityEngine::UIElements::UIR::Utility::HasMappedBufferRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "HasMappedBufferRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::UIR::Utility::InsertCPUFence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "InsertCPUFence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::Utility::CPUFencePassed(uint32_t fence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "CPUFencePassed", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fence);
}
inline void UnityEngine::UIElements::UIR::Utility::WaitForCPUFencePassed(uint32_t fence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "WaitForCPUFencePassed", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fence);
}
inline void UnityEngine::UIElements::UIR::Utility::SyncRenderThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SyncRenderThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::RectInt UnityEngine::UIElements::UIR::Utility::GetActiveViewport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetActiveViewport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Utility::ProfileDrawChainBegin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "ProfileDrawChainBegin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Utility::ProfileDrawChainEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "ProfileDrawChainEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Utility::NotifyOfUIREvents(bool subscribe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "NotifyOfUIREvents", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subscribe);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetUnityProjectionMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vertexAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                           { "GetVertexDeclaration_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, vertexAttributes);
}
inline void UnityEngine::UIElements::UIR::Utility::SetPropertyBlock_Injected(::System::IntPtr props) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetPropertyBlock_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, props);
}
inline void UnityEngine::UIElements::UIR::Utility::SetScissorRect_Injected(::by_ref<::UnityEngine::RectInt> scissorRect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "SetScissorRect_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scissorRect);
}
inline ::System::IntPtr UnityEngine::UIElements::UIR::Utility::CreateStencilState_Injected(::by_ref<::UnityEngine::Rendering::StencilState> stencilState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "CreateStencilState_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::StencilState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, stencilState);
}
inline void UnityEngine::UIElements::UIR::Utility::GetActiveViewport_Injected(::by_ref<::UnityEngine::RectInt> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(), { "GetActiveViewport_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Utility*>(),
                                                                                         { "GetUnityProjectionMatrix_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Utility::Utility() {}
