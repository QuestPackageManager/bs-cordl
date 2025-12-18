#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlockData.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlockData_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* (
    ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Allocate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6318a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::*)(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Free)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6318afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*
Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Allocate(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* oldBlock, int32_t threadIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*, false>(this, ___internal_method, oldBlock, threadIndex);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* oldBlock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldBlock);
}
// Ctor Parameters [CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Blocks", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "Ranges", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }, CppParam { name: "RangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::UnsafeStreamBlockData(::Unity::Collections::AllocatorManager_AllocatorHandle Allocator,
                                                                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Blocks, int32_t BlockCount,
                                                                                               ::Unity::Collections::AllocatorManager_Block Ranges, int32_t RangeCount) noexcept {
  this->Allocator = Allocator;
  this->Blocks = Blocks;
  this->BlockCount = BlockCount;
  this->Ranges = Ranges;
  this->RangeCount = RangeCount;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData::UnsafeStreamBlockData() {}
