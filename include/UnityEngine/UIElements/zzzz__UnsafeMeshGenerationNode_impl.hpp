#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UnsafeMeshGenerationNode.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeImpl* (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::GetManaged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c0a194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                                                               "GetManaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::InteropServices::GCHandle, ::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode>)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0a270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMesh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c0a278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawMeshInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMeshInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c0a39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawMeshInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.DrawGradientsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::UIElements::VectorImage*)>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawGradientsInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c0a400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawGradientsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UnsafeMeshGenerationNode.GetParentEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::UnsafeMeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::UnsafeMeshGenerationNode::GetParentEntry)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c0a560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                                                               "GetParentEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* UnityEngine::UIElements::UnsafeMeshGenerationNode::GetManaged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                                                             "GetManaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeImpl*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::Create(::System::Runtime::InteropServices::GCHandle handle, ::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, node);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                        ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, indices, texture);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawMeshInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool skipAtlas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawMeshInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, indices, texture, skipAtlas);
}
inline void UnityEngine::UIElements::UnsafeMeshGenerationNode::DrawGradientsInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                                     ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::UIElements::VectorImage* gradientsOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(), "DrawGradientsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, indices, gradientsOwner);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::UnsafeMeshGenerationNode::GetParentEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                                                             "GetParentEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UnsafeMeshGenerationNode::UnsafeMeshGenerationNode(::System::Runtime::InteropServices::GCHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UnsafeMeshGenerationNode::UnsafeMeshGenerationNode() {}
