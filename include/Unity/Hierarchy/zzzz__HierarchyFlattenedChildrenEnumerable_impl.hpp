#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedChildrenEnumerable.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedChildrenEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedChildrenEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::*)(
    ::Unity::Hierarchy::HierarchyFlattened*, ::by_ref<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6f934e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f93854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened,
                                                                          /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattened*>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchyFlattened, node);
}
inline ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ParentNode", ty:
// "::Unity::Hierarchy::HierarchyFlattenedNode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ParentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::HierarchyFlattenedChildrenEnumerable(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                                                                         ::Unity::Hierarchy::HierarchyFlattenedNode m_ParentNode, int32_t m_ParentIndex) noexcept {
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_ParentNode = m_ParentNode;
  this->m_ParentIndex = m_ParentIndex;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable::HierarchyFlattenedChildrenEnumerable() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::*)(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable)>(
    &::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6f93890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f938d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6f939e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f93b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::_ctor(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable enumerable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::ThrowIfVersionChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_End",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Depth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::HierarchyFlattenedChildrenEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable m_Enumerable,
                                                                                                                               int32_t m_End, int32_t m_Depth, int32_t m_Version,
                                                                                                                               int32_t m_Current) noexcept {
  this->m_Enumerable = m_Enumerable;
  this->m_End = m_End;
  this->m_Depth = m_Depth;
  this->m_Version = m_Version;
  this->m_Current = m_Current;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator::HierarchyFlattenedChildrenEnumerable_Enumerator() {}
