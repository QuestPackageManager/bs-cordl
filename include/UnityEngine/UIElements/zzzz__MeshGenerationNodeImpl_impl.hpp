#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MeshGenerationNodeImpl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeImpl_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryRecorder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dd5e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(
    ::UnityEngine::UIElements::UIR::Entry*, ::UnityEngine::UIElements::UIR::EntryRecorder*, bool)>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6dd5e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                            { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6dd5efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.GetNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(::by_ref<::UnityEngine::UIElements::MeshGenerationNode>)>(
    &::UnityEngine::UIElements::MeshGenerationNodeImpl::GetNode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd5f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                                                           { "GetNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.GetUnsafeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>)>(
    &::UnityEngine::UIElements::MeshGenerationNodeImpl::GetUnsafeNode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd5f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                             { "GetUnsafeNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.GetParentEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Entry* (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)()>(
    &::UnityEngine::UIElements::MeshGenerationNodeImpl::GetParentEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd5f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "GetParentEntry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.DrawMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>,
                                                                                                                   ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::MeshGenerationNodeImpl::DrawMesh)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6dd5b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                { "DrawMesh",
                                                  {},
                                                  { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.DrawGradients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(
    ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, ::UnityEngine::UIElements::VectorImage*)>(
    &::UnityEngine::UIElements::MeshGenerationNodeImpl::DrawGradients)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6dd5d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                             { "DrawGradients",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd5fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(bool)>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd5fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)()>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dd5fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationNodeImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MeshGenerationNodeImpl::*)(bool)>(&::UnityEngine::UIElements::MeshGenerationNodeImpl::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dd6018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_SelfHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelfHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_SelfHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelfHandle;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_set_m_SelfHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelfHandle = value;
}
constexpr ::UnityEngine::UIElements::UIR::Entry*& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_ParentEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentEntry;
}
constexpr ::UnityEngine::UIElements::UIR::Entry* const& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_ParentEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentEntry;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_set_m_ParentEntry(::UnityEngine::UIElements::UIR::Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentEntry = value;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_EntryRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryRecorder;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get_m_EntryRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntryRecorder;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_set_m_EntryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntryRecorder = value;
}
constexpr bool& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::MeshGenerationNodeImpl::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::Init(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder, bool safe) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                          { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::EntryRecorder*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentEntry, entryRecorder, safe);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::GetNode(::by_ref<::UnityEngine::UIElements::MeshGenerationNode> node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                                                         { "GetNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::GetUnsafeNode(::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                           { "GetUnsafeNode", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UnsafeMeshGenerationNode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::UnityEngine::UIElements::UIR::Entry* UnityEngine::UIElements::MeshGenerationNodeImpl::GetParentEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "GetParentEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Entry*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::DrawMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                      ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool skipAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                              { "DrawMesh",
                                                {},
                                                { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, indices, texture, skipAtlas);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::DrawGradients(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                                                                           ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::UIElements::VectorImage* gradientsOwner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(),
                                                           { "DrawGradients",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeSlice_1<uint16_t>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, indices, gradientsOwner);
}
inline bool UnityEngine::UIElements::MeshGenerationNodeImpl::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MeshGenerationNodeImpl::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshGenerationNodeImpl*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* UnityEngine::UIElements::MeshGenerationNodeImpl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MeshGenerationNodeImpl*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::MeshGenerationNodeImpl::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::MeshGenerationNodeImpl::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationNodeImpl::MeshGenerationNodeImpl() {}
