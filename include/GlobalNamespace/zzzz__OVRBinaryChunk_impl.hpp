#pragma once
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
// Ctor Parameters [CppParam { name: "chunkStream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "chunkLength", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "chunkStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRBinaryChunk::OVRBinaryChunk(::System::IO::Stream* chunkStream, uint32_t chunkLength, int64_t chunkStart) noexcept {
  this->chunkStream = chunkStream;
  this->chunkLength = chunkLength;
  this->chunkStart = chunkStart;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBinaryChunk::OVRBinaryChunk() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
