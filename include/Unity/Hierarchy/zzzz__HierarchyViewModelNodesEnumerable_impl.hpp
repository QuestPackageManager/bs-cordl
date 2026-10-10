#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModelNodesEnumerable.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_impl.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModelNodesEnumerable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModelNodesEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f95e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::*)(
    ::by_ref<::Unity::Hierarchy::HierarchyNode const>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f95edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(),
                                                                                          { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(), 13 }));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node,
                                                                                  ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, flags);
}
inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate::HierarchyViewModelNodesEnumerable_Predicate() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::*)(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable)>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f95e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6f95ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6f95ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6f96154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable enumerable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNode>>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::ThrowIfVersionChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(), { "ThrowIfVersionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FlattenedNodes", ty: "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::HierarchyViewModelNodesEnumerable_Enumerator(
    ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate, ::Unity::Hierarchy::HierarchyNodeFlags m_Flags,
    ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> m_FlattenedNodes, int32_t m_Version, int32_t m_Index) noexcept {
  this->m_HierarchyViewModel = m_HierarchyViewModel;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
  this->m_FlattenedNodes = m_FlattenedNodes;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator::HierarchyViewModelNodesEnumerable_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::*)(::Unity::Hierarchy::HierarchyViewModel*, ::Unity::Hierarchy::HierarchyNodeFlags,
                                                                                                                       ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*)>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6f95d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                                 ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator (::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::*)()>(
    &::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f95de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewModelNodesEnumerable::_ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                       ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>(), ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeFlags>(),
                                                               ::i2c::type_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewModel, flags, predicate);
}
inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator Unity::Hierarchy::HierarchyViewModelNodesEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::HierarchyViewModelNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel,
                                                                                                   ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate,
                                                                                                   ::Unity::Hierarchy::HierarchyNodeFlags m_Flags) noexcept {
  this->m_HierarchyViewModel = m_HierarchyViewModel;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable::HierarchyViewModelNodesEnumerable() {}
