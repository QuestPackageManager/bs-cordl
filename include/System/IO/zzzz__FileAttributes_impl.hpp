#pragma once
// IWYU pragma private; include "System/IO/FileAttributes.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileAttributes::FileAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::FileAttributes::FileAttributes()   {
}
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::ReadOnly{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Hidden{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::System{static_cast<int32_t>(0x4)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Directory{static_cast<int32_t>(0x10)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Archive{static_cast<int32_t>(0x20)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Device{static_cast<int32_t>(0x40)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Normal{static_cast<int32_t>(0x80)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Temporary{static_cast<int32_t>(0x100)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::SparseFile{static_cast<int32_t>(0x200)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::ReparsePoint{static_cast<int32_t>(0x400)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Compressed{static_cast<int32_t>(0x800)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Offline{static_cast<int32_t>(0x1000)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::NotContentIndexed{static_cast<int32_t>(0x2000)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::Encrypted{static_cast<int32_t>(0x4000)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::IntegrityStream{static_cast<int32_t>(0x8000)};
constexpr ::System::IO::FileAttributes  System::IO::FileAttributes::NoScrubData{static_cast<int32_t>(0x20000)};
