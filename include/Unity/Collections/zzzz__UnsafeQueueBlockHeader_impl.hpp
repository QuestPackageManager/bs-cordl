#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockHeader.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
// Ctor Parameters [CppParam { name: "m_NextBlock", ty: "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumItems", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UnsafeQueueBlockHeader::UnsafeQueueBlockHeader(::Unity::Collections::UnsafeQueueBlockHeader* m_NextBlock, int32_t m_NumItems) noexcept {
  this->m_NextBlock = m_NextBlock;
  this->m_NumItems = m_NumItems;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueBlockHeader::UnsafeQueueBlockHeader() {}
