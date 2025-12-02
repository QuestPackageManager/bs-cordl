#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamRange.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamRange_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
// Ctor Parameters [CppParam { name: "Block", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetInFirstBlock", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastOffset", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "NumberOfBlocks", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange::UnsafeStreamRange(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Block, int32_t OffsetInFirstBlock,
                                                                                       int32_t ElementCount, int32_t LastOffset, int32_t NumberOfBlocks) noexcept {
  this->Block = Block;
  this->OffsetInFirstBlock = OffsetInFirstBlock;
  this->ElementCount = ElementCount;
  this->LastOffset = LastOffset;
  this->NumberOfBlocks = NumberOfBlocks;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange::UnsafeStreamRange() {}
