#pragma once
// IWYU pragma private; include "System/IO/MonoIOStat.hpp"
#include "System/IO/zzzz__FileAttributes_impl.hpp"
#include "System/IO/zzzz__MonoIOStat_def.hpp"
// Ctor Parameters [CppParam { name: "fileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreationTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastAccessTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastWriteTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoIOStat::MonoIOStat(::System::IO::FileAttributes  fileAttributes, int64_t  Length, int64_t  CreationTime, int64_t  LastAccessTime, int64_t  LastWriteTime) noexcept  {
this->fileAttributes = fileAttributes;
this->Length = Length;
this->CreationTime = CreationTime;
this->LastAccessTime = LastAccessTime;
this->LastWriteTime = LastWriteTime;
}
// Ctor Parameters []
constexpr ::System::IO::MonoIOStat::MonoIOStat()   {
}
