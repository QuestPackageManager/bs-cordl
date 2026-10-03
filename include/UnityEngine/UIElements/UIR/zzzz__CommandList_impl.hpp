#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandList.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__MemoryLabel_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandFlags_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawBufferRange_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__SerializedCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIR::CommandList::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x7161270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)()>(&::UnityEngine::UIElements::UIR::CommandList::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x7161444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Material*, ::UnityEngine::UIElements::UIR::CommandFlags)>(&::UnityEngine::UIElements::UIR::CommandList::Init)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x71614e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                                                           { "Init",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)()>(&::UnityEngine::UIElements::UIR::CommandList::Execute)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x716164c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.SetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(int32_t, ::UnityEngine::Texture*, int32_t, ::UnityEngine::Vector4,
                                                                                                             ::UnityEngine::Vector4)>(&::UnityEngine::UIElements::UIR::CommandList::SetTexture)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x7161c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                                                           { "SetTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.ApplyUserProps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::UnityEngine::UIElements::UIR::CommandList::ApplyUserProps)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x7161db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "ApplyUserProps", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.ApplyBatchProps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)()>(&::UnityEngine::UIElements::UIR::CommandList::ApplyBatchProps)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7161eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "ApplyBatchProps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.DrawRanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(
    ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>*, ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>*,
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>)>(&::UnityEngine::UIElements::UIR::CommandList::DrawRanges)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x7161fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                             { "DrawRanges",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>*>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::CommandList::*)()>(&::UnityEngine::UIElements::UIR::CommandList::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(bool)>(&::UnityEngine::UIElements::UIR::CommandList::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)()>(&::UnityEngine::UIElements::UIR::CommandList::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandList::*)(bool)>(&::UnityEngine::UIElements::UIR::CommandList::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7162158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_Owner(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Owner = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer>& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIRenderer> const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_Renderer(::UnityW<::UnityEngine::UIElements::UIRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Renderer = value;
}
constexpr ::System::IntPtr& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_VertexDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr ::System::IntPtr const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_VertexDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_VertexDecl(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexDecl = value;
}
constexpr ::System::IntPtr& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_StencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilState;
}
constexpr ::System::IntPtr const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_StencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilState;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_StencilState(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilState = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_constantProps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantProps;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_constantProps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantProps;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_constantProps(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constantProps = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::UnityEngine::UIElements::UIR::CommandFlags& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::UnityEngine::UIElements::UIR::CommandFlags const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_flags(::UnityEngine::UIElements::UIR::CommandFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>*& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Commands;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_Commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Commands;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_Commands(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::SerializedCommand>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Commands = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_GpuTextureData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuTextureData;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_GpuTextureData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuTextureData;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_GpuTextureData(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GpuTextureData = value;
}
constexpr ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>*& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_DrawRanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawRanges;
}
constexpr ::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get_m_DrawRanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawRanges;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set_m_DrawRanges(::UnityEngine::UIElements::UIR::NativeList_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawRanges = value;
}
constexpr bool& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::CommandList::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::CommandList::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::CommandList::setStaticF_k_MemoryLabel(::Unity::Collections::MemoryLabel value) {
  ::cordl_internals::setStaticField<::Unity::Collections::MemoryLabel, "k_MemoryLabel", ::UnityEngine::UIElements::UIR::CommandList*>(std::forward<::Unity::Collections::MemoryLabel>(value));
}
inline ::Unity::Collections::MemoryLabel UnityEngine::UIElements::UIR::CommandList::getStaticF_k_MemoryLabel() {
  return ::cordl_internals::getStaticField<::Unity::Collections::MemoryLabel, "k_MemoryLabel", ::UnityEngine::UIElements::UIR::CommandList*>();
}
inline void UnityEngine::UIElements::UIR::CommandList::_ctor(::System::IntPtr vertexDecl, ::System::IntPtr stencilState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexDecl, stencilState);
}
inline void UnityEngine::UIElements::UIR::CommandList::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandList::Init(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::Material* material,
                                                            ::UnityEngine::UIElements::UIR::CommandFlags commandFlags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                                                         { "Init",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, material, commandFlags);
}
inline void UnityEngine::UIElements::UIR::CommandList::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandList::SetTexture(int32_t name, ::UnityEngine::Texture* texture, int32_t gpuDataOffset, ::UnityEngine::Vector4 gpuData0,
                                                                  ::UnityEngine::Vector4 gpuData1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                                                         { "SetTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, texture, gpuDataOffset, gpuData0, gpuData1);
}
inline void UnityEngine::UIElements::UIR::CommandList::ApplyUserProps(::UnityEngine::MaterialPropertyBlock* userProps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "ApplyUserProps", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userProps);
}
inline void UnityEngine::UIElements::UIR::CommandList::ApplyBatchProps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "ApplyBatchProps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandList::DrawRanges(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>* ib,
                                                                  ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>* vb,
                                                                  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(),
                                                           { "DrawRanges",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>*>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ib, vb, ranges);
}
inline bool UnityEngine::UIElements::UIR::CommandList::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandList::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::CommandList::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandList::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandList*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::CommandList* UnityEngine::UIElements::UIR::CommandList::New_ctor(::System::IntPtr vertexDecl, ::System::IntPtr stencilState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::CommandList*>(vertexDecl, stencilState));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::CommandList::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::CommandList::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandList::CommandList() {}
