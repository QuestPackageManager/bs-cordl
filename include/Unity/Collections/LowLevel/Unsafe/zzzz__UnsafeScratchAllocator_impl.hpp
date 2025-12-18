#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeScratchAllocator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeScratchAllocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(void*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631897c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator.CheckAllocationDoesNotExceedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(uint64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::CheckAllocationDoesNotExceedCapacity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6318988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), "CheckAllocationDoesNotExceedCapacity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6318a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::_ctor(void* ptr, int32_t capacityInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr, capacityInBytes);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::CheckAllocationDoesNotExceedCapacity(uint64_t requestedSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), "CheckAllocationDoesNotExceedCapacity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestedSize);
}
inline void* Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate(int32_t sizeInBytes, int32_t alignmentInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, sizeInBytes, alignmentInBytes);
}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator::Allocate(int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator>::get(), "Allocate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, count);
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
