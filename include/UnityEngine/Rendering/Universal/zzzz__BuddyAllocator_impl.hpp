#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocator.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocator_Header> (
    ::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(&::UnityEngine::Rendering::Universal::BuddyAllocator::get_header)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66c3dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "get_header", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMaskCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskCounts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66c3e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "get_freeMaskCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMasksStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMasksStorage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66c3e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "get_freeMasksStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.FreeMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::FreeMasks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66c3ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "FreeMasks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_freeMaskIndicesStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskIndicesStorage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66c4030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "get_freeMaskIndicesStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.FreeMaskIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::FreeMaskIndices)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66c409c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "FreeMaskIndices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.get_levelCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::get_levelCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66c4180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "get_levelCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(int32_t, int32_t, ::Unity::Collections::Allocator)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x66c41c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.TryAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(
    int32_t, ::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocation>)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::TryAllocate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x66c4384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "TryAllocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocation>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)(::UnityEngine::Rendering::Universal::BuddyAllocation)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::Free)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x66c45a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::BuddyAllocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocator::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocator::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66c4710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66c476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66c478c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelOffset64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66c3fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelOffset64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.LevelLength64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66c400c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelLength64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.AlignForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::AlignForward)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66c47ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "AlignForward", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.PtrAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::PtrAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c47c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "PtrAdd", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Pow2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::Pow2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c4598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Pow2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocator.Pow2N
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::BuddyAllocator::Pow2N)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66c479c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Pow2N", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocator_Header> UnityEngine::Rendering::Universal::BuddyAllocator::get_header() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "get_header", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocator_Header>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskCounts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "get_freeMaskCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMasksStorage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "get_freeMasksStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> UnityEngine::Rendering::Universal::BuddyAllocator::FreeMasks(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "FreeMasks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>, false>(this, ___internal_method, level);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::get_freeMaskIndicesStorage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "get_freeMaskIndicesStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::FreeMaskIndices(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "FreeMaskIndices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>, false>(this, ___internal_method, level);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::get_levelCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "get_levelCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::_ctor(int32_t levelCount, int32_t branchingOrder, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCount, branchingOrder, allocator);
}
inline bool UnityEngine::Rendering::Universal::BuddyAllocator::TryAllocate(int32_t requestedLevel, ::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocation> allocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "TryAllocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::BuddyAllocation>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestedLevel, allocation);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::Free(::UnityEngine::Rendering::Universal::BuddyAllocation allocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::BuddyAllocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocation);
}
inline void UnityEngine::Rendering::Universal::BuddyAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Rendering::Universal::BuddyAllocator::GetNativeArray(int32_t offset, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "GetNativeArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, offset, length);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelOffset64(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelOffset64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, level, branchingOrder);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::LevelLength64(int32_t level, int32_t branchingOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "LevelLength64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, level, branchingOrder);
}
template <typename T> inline ::System::ValueTuple_2<int32_t, int32_t> UnityEngine::Rendering::Universal::BuddyAllocator::AllocateRange(int32_t length, ::ByRef<int32_t> dataSize) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "AllocateRange",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, int32_t>, false>(nullptr, ___internal_method, length, dataSize);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::AlignForward(int32_t offset, int32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "AlignForward", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, offset, alignment);
}
inline void* UnityEngine::Rendering::Universal::BuddyAllocator::PtrAdd(void* ptr, int32_t bytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "PtrAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, ptr, bytes);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::Pow2(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Pow2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, n);
}
inline int32_t UnityEngine::Rendering::Universal::BuddyAllocator::Pow2N(int32_t x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocator>::get(), "Pow2N", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, n);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::BuddyAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::BuddyAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
