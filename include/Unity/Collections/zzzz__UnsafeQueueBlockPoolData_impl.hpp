#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockPoolData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPoolData.AllocateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::UnsafeQueueBlockHeader* (::Unity::Collections::UnsafeQueueBlockPoolData::*)()>(
    &::Unity::Collections::UnsafeQueueBlockPoolData::AllocateBlock)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64c38f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPoolData>(), { "AllocateBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueBlockPoolData.FreeBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::UnsafeQueueBlockPoolData::*)(::Unity::Collections::UnsafeQueueBlockHeader*)>(
    &::Unity::Collections::UnsafeQueueBlockPoolData::FreeBlock)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64c399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPoolData>(), { "FreeBlock", {}, { ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockHeader*>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueBlockPoolData::AllocateBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPoolData>(), { "AllocateBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*>(*this, ___internal_method);
}
inline void Unity::Collections::UnsafeQueueBlockPoolData::FreeBlock(::Unity::Collections::UnsafeQueueBlockHeader* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueBlockPoolData>(), { "FreeBlock", {}, { ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, block);
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
