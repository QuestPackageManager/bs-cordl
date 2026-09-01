#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UnsafeMeshGenerationNode.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeImpl_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.GetManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeImpl* (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::GetManaged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6dd5a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), { "GetManaged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::InteropServices::GCHandle, ::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd5b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                            { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>,
                                                                                                                     ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMesh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6dd5b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                             { "DrawMesh",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawMeshInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>,
                                                                                                                     ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMeshInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd5c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                { "DrawMeshInternal",
                                                  {},
                                                  { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawGradientsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::UIElements::VectorImage*)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawGradientsInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dd5cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                             { "DrawGradientsInternal",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.GetParentEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::GetParentEntry)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dd5e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), { "GetParentEntry", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* UnityEngine::UIElements::UnsafeMeshGenerationNode::GetManaged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), { "GetManaged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::Create(::System::Runtime::InteropServices::GCHandle handle, ::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                          { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, node);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                        ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                           { "DrawMesh",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, indices, texture);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMeshInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool skipAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                              { "DrawMeshInternal",
                                                {},
                                                { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, indices, texture, skipAtlas);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawGradientsInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                     ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::UIElements::VectorImage* gradientsOwner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                           { "DrawGradientsInternal",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, indices, gradientsOwner);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::UnsafeMeshGenerationNode::GetParentEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), { "GetParentEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UnsafeMeshGenerationNode::UnsafeMeshGenerationNode(::System::Runtime::InteropServices::GCHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UnsafeMeshGenerationNode::UnsafeMeshGenerationNode() {}
