#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlock.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer::UnsafeStreamBlock__Data_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer::UnsafeStreamBlock__Data_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "Next", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock::UnsafeStreamBlock(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Next,
                                                                                       ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer Data) noexcept {
  this->Next = Next;
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock::UnsafeStreamBlock() {}
