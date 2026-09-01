#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyViewNodesEnumerable.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b38334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(
    ::by_ref<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b383b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                                                                                          { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(), 13 }));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke(::by_ref<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, flags);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::HierarchyViewNodesEnumerable_Predicate() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)(::Unity::Hierarchy::HierarchyViewNodesEnumerable)>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b382ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b383d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b38454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b38528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewNodesEnumerable enumerable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NodesCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                                                                               ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                                                                                               ::Unity::Hierarchy::HierarchyNodeFlags m_Flags,
                                                                                                               ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr, int32_t m_NodesCount,
                                                                                                               int32_t m_Version, int32_t m_Index) noexcept {
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
  this->m_NodesPtr = m_NodesPtr;
  this->m_NodesCount = m_NodesCount;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)(::Unity::Hierarchy::HierarchyViewModel*, ::Unity::Hierarchy::HierarchyNodeFlags,
                                                                                                                  ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*)>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b38228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b382b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                  ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewModel, flags, predicate);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewNodesEnumerable>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel,
                                                                                         ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                                                                         ::Unity::Hierarchy::HierarchyNodeFlags m_Flags) noexcept {
  this->m_HierarchyViewModel = m_HierarchyViewModel;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable() {}
