#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileInfoResult.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileState_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileInfoResult_def.hpp"
// Ctor Parameters [CppParam { name: "FileSize", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileState", ty: "::Unity::IO::LowLevel::Unsafe::FileState", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::FileInfoResult::FileInfoResult(int64_t FileSize, ::Unity::IO::LowLevel::Unsafe::FileState FileState) noexcept {
  this->FileSize = FileSize;
  this->FileState = FileState;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::FileInfoResult::FileInfoResult() {}
