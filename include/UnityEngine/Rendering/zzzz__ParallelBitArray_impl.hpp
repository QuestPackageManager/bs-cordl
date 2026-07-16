#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelBitArray.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ParallelBitArray::*)()>(&::UnityEngine::Rendering::ParallelBitArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6832fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ParallelBitArray::*)()>(&::UnityEngine::Rendering::ParallelBitArray::get_IsCreated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6832fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t, ::Unity::Collections::Allocator, ::Unity::Collections::NativeArrayOptions)>(
    &::UnityEngine::Rendering::ParallelBitArray::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6833024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)()>(&::UnityEngine::Rendering::ParallelBitArray::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68330c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::ParallelBitArray::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x683311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(&::UnityEngine::Rendering::ParallelBitArray::Resize)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6833188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t, bool)>(&::UnityEngine::Rendering::ParallelBitArray::Set)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6827bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(&::UnityEngine::Rendering::ParallelBitArray::Get)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6827f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.GetChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(&::UnityEngine::Rendering::ParallelBitArray::GetChunk)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6827f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetChunk", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.SetChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t, uint64_t)>(&::UnityEngine::Rendering::ParallelBitArray::SetChunk)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6827fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "SetChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.InterlockedReadChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(&::UnityEngine::Rendering::ParallelBitArray::InterlockedReadChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6833340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "InterlockedReadChunk", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.InterlockedOrChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t, uint64_t)>(&::UnityEngine::Rendering::ParallelBitArray::InterlockedOrChunk)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68333a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "InterlockedOrChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.ChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ParallelBitArray::*)()>(&::UnityEngine::Rendering::ParallelBitArray::ChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6833428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "ChunkCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.GetSubArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ParallelBitArray (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(
    &::UnityEngine::Rendering::ParallelBitArray::GetSubArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6833430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetSubArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.GetBitsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int64_t> (::UnityEngine::Rendering::ParallelBitArray::*)()>(
    &::UnityEngine::Rendering::ParallelBitArray::GetBitsArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68334b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetBitsArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ParallelBitArray.FillZeroes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ParallelBitArray::*)(int32_t)>(&::UnityEngine::Rendering::ParallelBitArray::FillZeroes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68334c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "FillZeroes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::ParallelBitArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::ParallelBitArray::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ParallelBitArray::_ctor(int32_t length, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator, options);
}
inline void UnityEngine::Rendering::ParallelBitArray::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ParallelBitArray::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputDeps);
}
inline void UnityEngine::Rendering::ParallelBitArray::Resize(int32_t newLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength);
}
inline void UnityEngine::Rendering::ParallelBitArray::Set(int32_t index, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool UnityEngine::Rendering::ParallelBitArray::Get(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline uint64_t UnityEngine::Rendering::ParallelBitArray::GetChunk(int32_t chunk_index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetChunk", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, chunk_index);
}
inline void UnityEngine::Rendering::ParallelBitArray::SetChunk(int32_t chunk_index, uint64_t chunk_bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "SetChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk_index, chunk_bits);
}
inline uint64_t UnityEngine::Rendering::ParallelBitArray::InterlockedReadChunk(int32_t chunk_index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "InterlockedReadChunk", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, chunk_index);
}
inline void UnityEngine::Rendering::ParallelBitArray::InterlockedOrChunk(int32_t chunk_index, uint64_t chunk_bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "InterlockedOrChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk_index, chunk_bits);
}
inline int32_t UnityEngine::Rendering::ParallelBitArray::ChunkCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "ChunkCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::ParallelBitArray UnityEngine::Rendering::ParallelBitArray::GetSubArray(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetSubArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ParallelBitArray>(*this, ___internal_method, length);
}
inline ::Unity::Collections::NativeArray_1<int64_t> UnityEngine::Rendering::ParallelBitArray::GetBitsArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "GetBitsArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int64_t>>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ParallelBitArray::FillZeroes(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ParallelBitArray>(), { "FillZeroes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Bits", ty:
// "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ParallelBitArray::ParallelBitArray(::Unity::Collections::Allocator m_Allocator, ::Unity::Collections::NativeArray_1<int64_t> m_Bits, int32_t m_Length) noexcept {
  this->m_Allocator = m_Allocator;
  this->m_Bits = m_Bits;
  this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ParallelBitArray::ParallelBitArray() {}
