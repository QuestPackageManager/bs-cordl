#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNode.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNode.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::InteropServices::GCHandle, ::by_ref<::UnityEngine::UIElements::MeshGenerationNode>)>(
    &::UnityEngine::UIElements::MeshGenerationNode::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd24a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNode>(),
                            { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNode.GetParentEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::MeshGenerationNode::*)()>(
    &::UnityEngine::UIElements::MeshGenerationNode::GetParentEntry)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dd24ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNode>(), { "GetParentEntry", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MeshGenerationNode::Create(::System::Runtime::InteropServices::GCHandle handle, ::by_ref<::UnityEngine::UIElements::MeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNode>(),
                          { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, node);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::MeshGenerationNode::GetParentEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNode>(), { "GetParentEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UnsafeNode", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshGenerationNode::MeshGenerationNode(::UnityEngine::UIElements::UnsafeMeshGenerationNode m_UnsafeNode) noexcept {
  this->m_UnsafeNode = m_UnsafeNode;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationNode::MeshGenerationNode() {}
