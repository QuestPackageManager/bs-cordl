#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\LayoutDataStore.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ComponentType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk::LayoutDataStore_Chunk(uint8_t* Buffer) noexcept {
  this->Buffer = Buffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk::LayoutDataStore_Chunk() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::*)(int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d031bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6d03334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore.GetComponentDataPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::*)(int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::GetComponentDataPtr)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d03470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "GetComponentDataPtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore.ResizeCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::*)(int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::ResizeCapacity)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6d0383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "ResizeCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::_ctor(int32_t size, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, allocator);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t* UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::GetComponentDataPtr(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "GetComponentDataPtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::ResizeCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore>(), { "ResizeCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ComponentCountPerChunk", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Chunks", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::LayoutDataStore_ComponentDataStore(::Unity::Collections::Allocator Allocator, int32_t Size,
                                                                                                                    int32_t ComponentCountPerChunk, int32_t ChunkCount,
                                                                                                                    ::UnityEngine::UIElements::Layout::LayoutDataStore_Chunk* m_Chunks) noexcept {
  this->Allocator = Allocator;
  this->Size = Size;
  this->ComponentCountPerChunk = ComponentCountPerChunk;
  this->ChunkCount = ChunkCount;
  this->m_Chunks = m_Chunks;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore::LayoutDataStore_ComponentDataStore() {}
// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NextFreeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ComponentCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Versions", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Components", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_Data::LayoutDataStore_Data(int32_t Capacity, int32_t NextFreeIndex, int32_t ComponentCount, int32_t* Versions,
                                                                                        ::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* Components) noexcept {
  this->Capacity = Capacity;
  this->NextFreeIndex = NextFreeIndex;
  this->ComponentCount = ComponentCount;
  this->Versions = Versions;
  this->Components = Components;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore_Data::LayoutDataStore_Data() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutDataStore::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataStore::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d02dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(
    ::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>, int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6cfeb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataStore::Dispose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6cfeed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Exists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::Exists)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d0340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                           { "Exists", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.GetComponentDataPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::GetComponentDataPtr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d0344c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                           { "GetComponentDataPtr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutHandle (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(uint8_t*, int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::Allocate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6d034a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "Allocate", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::Free)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6cff060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                           { "Free", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.SetNextFreeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*, int32_t, int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::SetNextFreeIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d036d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
            { "SetNextFreeIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.GetNextFreeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*, int32_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::GetNextFreeIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d03688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                { "GetNextFreeIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.IncreaseCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataStore::IncreaseCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6d0369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "IncreaseCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.ResizeCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::ResizeCapacity)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6d031d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "ResizeCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.ResizeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, int64_t, int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::UIElements::Layout::LayoutDataStore::ResizeArray)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6d036f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                           { "ResizeArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::Layout::LayoutDataStore::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::_ctor(::ArrayW<::UnityEngine::UIElements::Layout::ComponentType> components, int32_t initialCapacity,
                                                                    ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, components, initialCapacity, allocator);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::Layout::LayoutDataStore::Exists(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                         { "Exists", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle);
}
inline void* UnityEngine::UIElements::Layout::LayoutDataStore::GetComponentDataPtr(int32_t index, int32_t componentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                         { "GetComponentDataPtr", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, index, componentIndex);
}
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(uint8_t* data, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "Allocate", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, data, count);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::Free(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                         { "Free", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::SetNextFreeIndex(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* ptr, int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
          { "SetNextFreeIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, index, value);
}
inline int32_t UnityEngine::UIElements::Layout::LayoutDataStore::GetNextFreeIndex(::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore* ptr, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                              { "GetNextFreeIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, index);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::IncreaseCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "IncreaseCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::ResizeCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "ResizeCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void* UnityEngine::UIElements::Layout::LayoutDataStore::ResizeArray(void* fromPtr, int64_t fromCount, int64_t toCount, int64_t size, int32_t align, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                                                         { "ResizeArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, fromPtr, fromCount, toCount, size, align, allocator);
}
template <typename T0> inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(::by_ref<T0> component0) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(), { "Allocate", { ::i2c::class_of<T0>() }, { ::i2c::type_of<::by_ref<T0>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, component0);
}
template <typename T0, typename T1, typename T2, typename T3>
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(::by_ref<T0> component0, ::by_ref<T1> component1, ::by_ref<T2> component2,
                                                                                                                  ::by_ref<T3> component3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                                                           { "Allocate",
                                                             { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, component0, component1, component2, component3);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Layout::LayoutDataStore::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Layout::LayoutDataStore::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty:
// "::UnityEngine::UIElements::Layout::LayoutDataStore_Data*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore::LayoutDataStore(::Unity::Collections::Allocator m_Allocator, ::UnityEngine::UIElements::Layout::LayoutDataStore_Data* m_Data) noexcept {
  this->m_Allocator = m_Allocator;
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore::LayoutDataStore() {}
