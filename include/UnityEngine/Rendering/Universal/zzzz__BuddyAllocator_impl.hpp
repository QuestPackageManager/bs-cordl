#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\BuddyAllocator.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocation_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocator_def.hpp"
// Ctor Parameters [CppParam { name: "branchingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "allocationCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "freeAllocationIdsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocator_Header::BuddyAllocator_Header(int32_t branchingOrder, int32_t levelCount, int32_t allocationCount,
                                                                                            int32_t freeAllocationIdsCount) noexcept {
  this->branchingOrder = branchingOrder;
  this->levelCount = levelCount;
  this->allocationCount = allocationCount;
  this->freeAllocationIdsCount = freeAllocationIdsCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocator_Header::BuddyAllocator_Header() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocator_Header> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_header)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x687c1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMaskCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskCounts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x687c1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMaskCounts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMasksStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMasksStorage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x687c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMasksStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.FreeMasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::FreeMasks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x687c2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "FreeMasks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMaskIndicesStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskIndicesStorage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x687c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMaskIndicesStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.FreeMaskIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::FreeMaskIndices)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x687c474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "FreeMaskIndices", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_levelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(&::UnityEngine::Rendering::Universal::BuddyAllocator::get_levelCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x687c558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_levelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t, int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x687c5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t, ::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocation>)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::TryAllocate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x687c75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                             { "TryAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocation>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(::UnityEngine::Rendering::Universal::BuddyAllocation)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::Free)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x687c97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                                                           { "Free", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BuddyAllocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(&::UnityEngine::Rendering::Universal::BuddyAllocator::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x687cae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x687cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x687cb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelOffset64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x687c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelOffset64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelLength64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x687c3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelLength64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.AlignForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::AlignForward)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x687cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "AlignForward", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.PtrAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::PtrAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "PtrAdd", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Pow2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::Pow2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Pow2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Pow2N
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::Pow2N)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x687cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Pow2N", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocator_Header> UnityEngine::Rendering::Universal::BuddyAllocator::get_header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocator_Header>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskCounts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMaskCounts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMasksStorage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMasksStorage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> UnityEngine::Rendering::Universal::BuddyAllocator::FreeMasks(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "FreeMasks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(*this, ___internal_method, level);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskIndicesStorage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_freeMaskIndicesStorage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::FreeMaskIndices(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "FreeMaskIndices", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, level);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::get_levelCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "get_levelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::_ctor(int32_t levelCount, int32_t branchingOrder, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, levelCount, branchingOrder, allocator);
}
inline bool UnityEngine::Rendering::Universal::BuddyAllocator::TryAllocate(int32_t requestedLevel, ::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocation> allocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                           { "TryAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::BuddyAllocation>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, requestedLevel, allocation);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::Free(::UnityEngine::Rendering::Universal::BuddyAllocation allocation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                                                         { "Free", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BuddyAllocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocation);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::Universal::BuddyAllocator::GetNativeArray(int32_t offset, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                           { "GetNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, offset, length);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset64(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelOffset64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength64(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "LevelLength64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level, branchingOrder);
}
template <typename T> inline ::System::ValueTuple_2<int32_t, int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::AllocateRange(int32_t length, ::by_ref<int32_t> dataSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(),
                                                           { "AllocateRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, int32_t>>(nullptr, ___internal_method, length, dataSize);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::AlignForward(int32_t offset, int32_t alignment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "AlignForward", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, offset, alignment);
}
inline void* UnityEngine::Rendering::Universal::BuddyAllocator::PtrAdd(void* ptr, int32_t bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "PtrAdd", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, ptr, bytes);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::Pow2(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Pow2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::Pow2N(int32_t x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocator>(), { "Pow2N", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, n);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::BuddyAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::BuddyAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActiveFreeMaskCounts", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_FreeMasksStorage", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FreeMaskIndicesStorage", ty: "::System::ValueTuple_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocator::BuddyAllocator(void* m_Data, ::System::ValueTuple_2<int32_t, int32_t> m_ActiveFreeMaskCounts,
                                                                              ::System::ValueTuple_2<int32_t, int32_t> m_FreeMasksStorage,
                                                                              ::System::ValueTuple_2<int32_t, int32_t> m_FreeMaskIndicesStorage, ::Unity::Collections::Allocator m_Allocator) noexcept {
  this->m_Data = m_Data;
  this->m_ActiveFreeMaskCounts = m_ActiveFreeMaskCounts;
  this->m_FreeMasksStorage = m_FreeMasksStorage;
  this->m_FreeMaskIndicesStorage = m_FreeMaskIndicesStorage;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocator::BuddyAllocator() {}
