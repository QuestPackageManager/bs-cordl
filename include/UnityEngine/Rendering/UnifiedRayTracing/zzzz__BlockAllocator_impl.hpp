#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BlockAllocator.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
inline void UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block::setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>();
}
// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block::BlockAllocator_Block(int32_t offset, int32_t count) noexcept {
  this->offset = offset;
  this->count = count;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block::BlockAllocator_Block() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation.get_valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e036a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(), { "get_valid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(
      std::forward<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(value));
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, "Invalid", ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>();
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(), { "get_valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "block", ty:
// "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::BlockAllocator_Allocation(int32_t handle,
                                                                                                            ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block block) noexcept {
  this->handle = handle;
  this->block = block;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation::BlockAllocator_Allocation() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.get_freeElementsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_freeElementsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e07ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_freeElementsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.get_freeBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_freeBlocks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e07ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_freeBlocks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.get_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e07f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.get_allocatedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_allocatedSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e07f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_allocatedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Initialize)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e03090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.CalculateGeometricGrowthCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::CalculateGeometricGrowthCapacity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e07f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                                                           { "CalculateGeometricGrowthCapacity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Grow)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e07f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Grow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.GetExpectedGrowthToFitAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(int32_t, int32_t, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GetExpectedGrowthToFitAllocation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e08240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                { "GetExpectedGrowthToFitAllocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.GrowAndAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(
    int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GrowAndAllocate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e0839c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                             { "GrowAndAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.GrowAndAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(
    int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GrowAndAllocate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6e0463c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                            { "GrowAndAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Dispose)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e033d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(
    int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Allocate)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x6e04210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.MergeBlockFrontBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::MergeBlockFrontBack)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6e08070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "MergeBlockFrontBack", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.FreeAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(
    ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>)>(&::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::FreeAllocation)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6e036b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                             { "FreeAllocation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator.SplitAllocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> (
    ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::*)(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::SplitAllocation)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6e083bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                            { "SplitAllocation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_freeElementsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_freeElementsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_freeBlocks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_freeBlocks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::get_allocatedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "get_allocatedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Initialize(int32_t maxElementCounts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxElementCounts);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::CalculateGeometricGrowthCapacity(int32_t desiredNewCapacity, int32_t maxAllowedNewCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                                                         { "CalculateGeometricGrowthCapacity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, desiredNewCapacity, maxAllowedNewCapacity);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Grow(int32_t newDesiredCapacity, int32_t maxAllowedCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Grow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, newDesiredCapacity, maxAllowedCapacity);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GetExpectedGrowthToFitAllocation(int32_t elementCounts, int32_t maxAllowedCapacity, ::by_ref<int32_t> newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                           { "GetExpectedGrowthToFitAllocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, elementCounts, maxAllowedCapacity, newCapacity);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation
UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GrowAndAllocate(int32_t elementCounts, ::by_ref<int32_t> oldCapacity, ::by_ref<int32_t> newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                           { "GrowAndAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(*this, ___internal_method, elementCounts, oldCapacity, newCapacity);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation
UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::GrowAndAllocate(int32_t elementCounts, int32_t maxAllowedCapacity, ::by_ref<int32_t> oldCapacity, ::by_ref<int32_t> newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                       { "GrowAndAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(*this, ___internal_method, elementCounts, maxAllowedCapacity, oldCapacity,
                                                                                                                     newCapacity);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::Allocate(int32_t elementCounts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>(*this, ___internal_method, elementCounts);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::MergeBlockFrontBack(int32_t freeBlockId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(), { "MergeBlockFrontBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, freeBlockId);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::FreeAllocation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> allocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                                           { "FreeAllocation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocation);
}
inline ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>
UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::SplitAllocation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> allocation,
                                                                           int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator>(),
                                       { "SplitAllocation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>>(*this, ___internal_method, allocation, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FreeElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxElementCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_freeBlocks", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_usedBlocks", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_freeSlots", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::BlockAllocator(
    int32_t m_FreeElementCount, int32_t m_MaxElementCount, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_freeBlocks,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_usedBlocks, ::Unity::Collections::NativeList_1<int32_t> m_freeSlots) noexcept {
  this->m_FreeElementCount = m_FreeElementCount;
  this->m_MaxElementCount = m_MaxElementCount;
  this->m_freeBlocks = m_freeBlocks;
  this->m_usedBlocks = m_usedBlocks;
  this->m_freeSlots = m_freeSlots;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator::BlockAllocator() {}
