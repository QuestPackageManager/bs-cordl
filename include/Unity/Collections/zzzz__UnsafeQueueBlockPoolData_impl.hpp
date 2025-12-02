#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockPoolData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPoolData.AllocateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::UnsafeQueueBlockHeader* (::Unity::Collections::UnsafeQueueBlockPoolData::*)()>(
    &::Unity::Collections::UnsafeQueueBlockPoolData::AllocateBlock)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62aaf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPoolData>::get(),
                                                                               "AllocateBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPoolData.FreeBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::UnsafeQueueBlockPoolData::*)(::Unity::Collections::UnsafeQueueBlockHeader*)>(
    &::Unity::Collections::UnsafeQueueBlockPoolData::FreeBlock)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62aafac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPoolData>::get(), "FreeBlock", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockHeader*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueBlockPoolData::AllocateBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPoolData>::get(),
                                                                             "AllocateBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*, false>(this, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPoolData::FreeBlock(::Unity::Collections::UnsafeQueueBlockHeader* block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueBlockPoolData>::get(), "FreeBlock", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockHeader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block);
}
// Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumBlocks", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_MaxBlocks", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocLock", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UnsafeQueueBlockPoolData::UnsafeQueueBlockPoolData(::System::IntPtr m_FirstBlock, int32_t m_NumBlocks, int32_t m_MaxBlocks, int32_t m_AllocLock) noexcept {
  this->m_FirstBlock = m_FirstBlock;
  this->m_NumBlocks = m_NumBlocks;
  this->m_MaxBlocks = m_MaxBlocks;
  this->m_AllocLock = m_AllocLock;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueBlockPoolData::UnsafeQueueBlockPoolData() {}
