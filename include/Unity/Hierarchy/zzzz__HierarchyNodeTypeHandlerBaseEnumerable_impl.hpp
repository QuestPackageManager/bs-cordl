#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)(::Unity::Hierarchy::Hierarchy*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6b3469c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b34998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b34a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b34be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handlers", ty: "::System::Buffers::IMemoryOwner_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator(::System::Buffers::IMemoryOwner_1<::System::IntPtr>* m_Handlers,
                                                                                                                                   int32_t m_Count, int32_t m_Index) noexcept {
  this->m_Handlers = m_Handlers;
  this->m_Count = m_Count;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)(::Unity::Hierarchy::Hierarchy*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3466c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b34674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Hierarchy::Hierarchy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hierarchy);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable(::Unity::Hierarchy::Hierarchy* m_Hierarchy) noexcept {
  this->m_Hierarchy = m_Hierarchy;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable() {}
