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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6abd220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.CreateNativeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(
    ::ByRef<::UnityEngine::UIElements::TempMeshAllocator>)>(&::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::CreateNativeHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6abd40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "CreateNativeHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TempMeshAllocator>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.AllocateTempMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(
    int32_t, int32_t, ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>)>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::AllocateTempMesh)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6abd418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "AllocateTempMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Clear)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6abd6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abd8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                               "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(bool)>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abd8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)()>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6abd8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::*)(bool)>(
    &::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6abd960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*>&
UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_ThreadData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadData;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*> const&
UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_get_m_ThreadData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadData;
}
constexpr void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::__cordl_internal_set_m_ThreadData(
    ::ArrayW<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData, ::Array<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl_ThreadData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThreadData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VertexPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::CreateNativeHandle(::ByRef<::UnityEngine::UIElements::TempMeshAllocator> allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "CreateNativeHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::TempMeshAllocator>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocator);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Allocate(int32_t count, int32_t alignment) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "Allocate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(this, ___internal_method, count, alignment);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::AllocateTempMesh(int32_t vertexCount, int32_t indexCount,
                                                                                  ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertices,
                                                                                  ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "AllocateTempMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertexCount, indexCount, vertices, indices);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* UnityEngine::UIElements::UIR::TempMeshAllocatorImpl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>());
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
