#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNode.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNode.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::InteropServices::GCHandle, ::ByRef<::UnityEngine::UIElements::MeshGenerationNode>)>(
    &::UnityEngine::UIElements::MeshGenerationNode::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0a16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationNode>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshGenerationNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNode.GetParentEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::MeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::MeshGenerationNode::GetParentEntry)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c0a174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationNode>::get(),
                                                                               "GetParentEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MeshGenerationNode::Create(::System::Runtime::InteropServices::GCHandle handle, ::ByRef<::UnityEngine::UIElements::MeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationNode>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshGenerationNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, node);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::MeshGenerationNode::GetParentEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationNode>::get(),
                                                                             "GetParentEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UnsafeNode", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshGenerationNode::MeshGenerationNode(::UnityEngine::UIElements::UnsafeMeshGenerationNode m_UnsafeNode) noexcept {
  this->m_UnsafeNode = m_UnsafeNode;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationNode::MeshGenerationNode() {}
