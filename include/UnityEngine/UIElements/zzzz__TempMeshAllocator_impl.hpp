#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TempMeshAllocator.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TempMeshAllocator.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::InteropServices::GCHandle, ::by_ref<::UnityEngine::UIElements::TempMeshAllocator>)>(
    &::UnityEngine::UIElements::TempMeshAllocator::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd4764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                            { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TempMeshAllocator>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TempMeshAllocator.AllocateTempMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TempMeshAllocator::*)(
    int32_t, int32_t, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>, ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>)>(
    &::UnityEngine::UIElements::TempMeshAllocator::AllocateTempMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6dd3758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                                         { "AllocateTempMesh",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TempMeshAllocator::Create(::System::Runtime::InteropServices::GCHandle handle, ::by_ref<::UnityEngine::UIElements::TempMeshAllocator> allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                          { "Create", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TempMeshAllocator>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, allocator);
}
inline void UnityEngine::UIElements::TempMeshAllocator::AllocateTempMesh(int32_t vertexCount, int32_t indexCount,
                                                                         ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertices,
                                                                         ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TempMeshAllocator>(),
                                       { "AllocateTempMesh",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>>(),
                                           ::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCount, indexCount, vertices, indices);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TempMeshAllocator::TempMeshAllocator(::System::Runtime::InteropServices::GCHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TempMeshAllocator::TempMeshAllocator() {}
