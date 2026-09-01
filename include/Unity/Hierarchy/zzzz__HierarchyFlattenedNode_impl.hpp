#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyFlattenedNode.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeType_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> (*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::get_Null)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b36038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.get_Node
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNode (::Unity::Hierarchy::HierarchyFlattenedNode::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::get_Node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_Node", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.get_NextSiblingOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattenedNode::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::get_NextSiblingOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_NextSiblingOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.get_ChildrenCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattenedNode::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::get_ChildrenCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_ChildrenCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>, ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>)>(
    &::Unity::Hierarchy::HierarchyFlattenedNode::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b36080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(),
                         { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattenedNode::*)(::Unity::Hierarchy::HierarchyFlattenedNode)>(
    &::Unity::Hierarchy::HierarchyFlattenedNode::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b3a078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "Equals", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchyFlattenedNode::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::ToString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b3a08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattenedNode::*)(::System::Object*)>(&::Unity::Hierarchy::HierarchyFlattenedNode::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b3a1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyFlattenedNode::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNode::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b3a26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNode.GetNodeByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (*)(::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>)>(
    &::Unity::Hierarchy::HierarchyFlattenedNode::GetNodeByRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b3a300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(),
                                                                                           { "GetNodeByRef", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedNode::setStaticF_s_Null(::Unity::Hierarchy::HierarchyFlattenedNode value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchyFlattenedNode, "s_Null", ::Unity::Hierarchy::HierarchyFlattenedNode>(std::forward<::Unity::Hierarchy::HierarchyFlattenedNode>(value));
}
inline ::Unity::Hierarchy::HierarchyFlattenedNode Unity::Hierarchy::HierarchyFlattenedNode::getStaticF_s_Null() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchyFlattenedNode, "s_Null", ::Unity::Hierarchy::HierarchyFlattenedNode>();
}
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> Unity::Hierarchy::HierarchyFlattenedNode::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(nullptr, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNode Unity::Hierarchy::HierarchyFlattenedNode::get_Node() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_Node", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNode>(*this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyFlattenedNode::get_NextSiblingOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_NextSiblingOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyFlattenedNode::get_ChildrenCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "get_ChildrenCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattenedNode::op_Equality(::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> lhs, ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Hierarchy::HierarchyFlattenedNode::Equals(::Unity::Hierarchy::HierarchyFlattenedNode other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), { "Equals", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedNode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Hierarchy::HierarchyFlattenedNode::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattenedNode::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Hierarchy::HierarchyFlattenedNode::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyFlattenedNode::GetNodeByRef(::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> hierarchyFlattenedNode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedNode>(),
                                                                                         { "GetNodeByRef", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(nullptr, ___internal_method, hierarchyFlattenedNode);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>"
constexpr Unity::Hierarchy::HierarchyFlattenedNode::operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>*() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>"
constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>* Unity::Hierarchy::HierarchyFlattenedNode::i___System__IEquatable_1___Unity__Hierarchy__HierarchyFlattenedNode_() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Unity::Hierarchy::HierarchyNodeType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParentOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextSiblingOffset", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_ChildrenCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Depth", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedNode::HierarchyFlattenedNode(::Unity::Hierarchy::HierarchyNode m_Node, ::Unity::Hierarchy::HierarchyNodeType m_Type, int32_t m_ParentOffset,
                                                                             int32_t m_NextSiblingOffset, int32_t m_ChildrenCount, int32_t m_Depth) noexcept {
  this->m_Node = m_Node;
  this->m_Type = m_Type;
  this->m_ParentOffset = m_ParentOffset;
  this->m_NextSiblingOffset = m_NextSiblingOffset;
  this->m_ChildrenCount = m_ChildrenCount;
  this->m_Depth = m_Depth;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedNode::HierarchyFlattenedNode() {}
