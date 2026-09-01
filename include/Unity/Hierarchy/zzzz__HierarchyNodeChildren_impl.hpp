#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyNodeChildren.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)(::Unity::Hierarchy::Hierarchy*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeChildren::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b36094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b3620c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b36240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(), { "ThrowIfVersionChanged", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeChildren::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodeChildrenPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy, nodeChildrenPtr);
}
inline ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren>(), { "ThrowIfVersionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Ptr", ty: "::Unity::Hierarchy::HierarchyNode*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren(::Unity::Hierarchy::Hierarchy* m_Hierarchy, ::Unity::Hierarchy::HierarchyNode* m_Ptr, int32_t m_Version,
                                                                           int32_t m_Count) noexcept {
  this->m_Hierarchy = m_Hierarchy;
  this->m_Ptr = m_Ptr;
  this->m_Version = m_Version;
  this->m_Count = m_Count;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)(::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>)>(
    &::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b36224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b362b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)()>(&::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b36334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeChildren_Enumerator::_ctor(::by_ref<::Unity::Hierarchy::HierarchyNodeChildren> enumerable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyNodeChildren_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeChildren_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyNodeChildren", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyNodeChildren m_Enumerable, int32_t m_Index) noexcept {
  this->m_Enumerable = m_Enumerable;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator() {}
