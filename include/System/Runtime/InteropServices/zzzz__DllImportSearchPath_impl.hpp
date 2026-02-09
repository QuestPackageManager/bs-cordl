#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DllImportSearchPath.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::DllImportSearchPath::DllImportSearchPath(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DllImportSearchPath::DllImportSearchPath()   {
}
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UseDllDirectoryForDependencies{static_cast<int32_t>(0x100)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::ApplicationDirectory{static_cast<int32_t>(0x200)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UserDirectories{static_cast<int32_t>(0x400)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::System32{static_cast<int32_t>(0x800)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::SafeDirectories{static_cast<int32_t>(0x1000)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::AssemblyDirectory{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::LegacyBehavior{static_cast<int32_t>(0x0)};
