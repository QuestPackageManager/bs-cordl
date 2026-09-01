#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeScratchAllocator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeScratchAllocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(void*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64ceff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator.CheckAllocationDoesNotExceedCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(uint64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::CheckAllocationDoesNotExceedCapacity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64cf004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(),
                                                                                           { "CheckAllocationDoesNotExceedCapacity", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64cf0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(),
                                                                                           { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::_ctor(void* ptr, int32_t capacityInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, capacityInBytes);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::CheckAllocationDoesNotExceedCapacity(uint64_t requestedSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(),
                                                                                         { "CheckAllocationDoesNotExceedCapacity", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requestedSize);
}
inline void* Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate(int32_t sizeInBytes, int32_t alignmentInBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(),
                                                                                         { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, sizeInBytes, alignmentInBytes);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate(int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>(), { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, count);
}
// Ctor Parameters [CppParam { name: "m_Pointer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LengthInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CapacityInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::UnsafeScratchAllocator(void* m_Pointer, int32_t m_LengthInBytes, int32_t m_CapacityInBytes) noexcept {
  this->m_Pointer = m_Pointer;
  this->m_LengthInBytes = m_LengthInBytes;
  this->m_CapacityInBytes = m_CapacityInBytes;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::UnsafeScratchAllocator() {}
