#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempMeshAllocatorImpl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempMeshAllocatorImpl_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempMeshAllocatorImpl_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
// Ctor Parameters [CppParam { name: "allocations", ty: "::System::Collections::Generic::List_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData::TempMeshAllocatorImpl_ThreadData(::System::Collections::Generic::List_1<::System::IntPtr>* allocations) noexcept {
  this->allocations = allocations;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData::TempMeshAllocatorImpl_ThreadData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6cee3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.CreateNativeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(::by_ref<::UnityEngine::UIElements::TempMeshAllocator>)>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::CreateNativeHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cee5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(),
                                                             { "CreateNativeHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TempMeshAllocator>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.AllocateTempMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(
    int32_t, int32_t, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>)>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::AllocateTempMesh)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6cee5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(),
                                         { "AllocateTempMesh",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Clear)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6cee874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ceeaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(bool)>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ceeaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ceeab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(bool)>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ceeb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_GCHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GCHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_GCHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GCHandle;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set_m_GCHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GCHandle = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_ThreadData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadData;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData> const& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_ThreadData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadData;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set_m_ThreadData(::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThreadData = value;
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_VertexPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexPool;
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* const& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_VertexPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexPool;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set_m_VertexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexPool = value;
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_IndexPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexPool;
}
constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* const& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_IndexPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexPool;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set_m_IndexPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndexPool = value;
}
constexpr bool& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::CreateNativeHandle(::by_ref<::UnityEngine::UIElements::TempMeshAllocator> allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(),
                                                                                         { "CreateNativeHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TempMeshAllocator>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocator);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Allocate(int32_t count, int32_t alignment) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(),
                                                                                              { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>>(this, ___internal_method, count, alignment);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::AllocateTempMesh(int32_t vertexCount, int32_t indexCount,
                                                                                  ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertices,
                                                                                  ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(),
                                       { "AllocateTempMesh",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, indexCount, vertices, indices);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::TempMeshAllocatorImpl() {}
