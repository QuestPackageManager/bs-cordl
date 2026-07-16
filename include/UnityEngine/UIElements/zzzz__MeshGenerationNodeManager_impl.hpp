#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNodeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryRecorder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeImpl_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)(::UnityEngine::UIElements::UIR::EntryRecorder*)>(
    &::UnityEngine::UIElements::MeshGenerationNodeManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6dd2ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryRecorder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.CreateNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::by_ref<::UnityEngine::UIElements::MeshGenerationNode>)>(&::UnityEngine::UIElements::MeshGenerationNodeManager::CreateNode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6dd1e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                            { "CreateNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.CreateUnsafeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>)>(&::UnityEngine::UIElements::MeshGenerationNodeManager::CreateUnsafeNode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6dd1ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                         { "CreateUnsafeNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeImpl* (
    ::UnityEngine::UIElements::MeshGenerationNodeManager::*)(::UnityEngine::UIElements::UIR::Entry*, bool)>(&::UnityEngine::UIElements::MeshGenerationNodeManager::CreateImpl)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6dd2b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                                                             { "CreateImpl", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.ResetAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeManager::ResetAll)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6dd2cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "ResetAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::MeshGenerationNodeManager::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd2d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)(bool)>(&::UnityEngine::UIElements::MeshGenerationNodeManager::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd2d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeManager::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dd2d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeManager::*)(bool)>(&::UnityEngine::UIElements::MeshGenerationNodeManager::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6dd2df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>*& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* const& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshGenerationNodeImpl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nodes = value;
}
constexpr int32_t& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_UsedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedCounter;
}
constexpr int32_t const& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_UsedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedCounter;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_set_m_UsedCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsedCounter = value;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_EntryRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryRecorder;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get_m_EntryRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryRecorder;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_set_m_EntryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryRecorder = value;
}
constexpr bool& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeManager::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::_ctor(::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryRecorder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryRecorder);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::CreateNode(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::by_ref<::UnityEngine::UIElements::MeshGenerationNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                                       { "CreateNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, node);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::CreateUnsafeNode(::UnityEngine::UIElements::UIR::Entry* parentEntry,
                                                                                 ::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                          { "CreateUnsafeNode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, node);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* UnityEngine::UIElements::MeshGenerationNodeManager::CreateImpl(::UnityEngine::UIElements::UIR::Entry* parentEntry, bool safe) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(),
                                                                                         { "CreateImpl", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(this, ___internal_method, parentEntry, safe);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::ResetAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "ResetAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::MeshGenerationNodeManager::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeManager::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeManager* UnityEngine::UIElements::MeshGenerationNodeManager::New_ctor(::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MeshGenerationNodeManager*>(entryRecorder));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::MeshGenerationNodeManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::MeshGenerationNodeManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager::MeshGenerationNodeManager() {}
