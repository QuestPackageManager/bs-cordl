#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngineError.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError::FontEngineError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError::FontEngineError()   {
}
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Path{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Format{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Structure{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Table{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Glyph_Index{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Character_Code{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Pixel_Size{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library{static_cast<int32_t>(0x21)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Face{static_cast<int32_t>(0x23)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library_or_Face{static_cast<int32_t>(0x29)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Atlas_Generation_Cancelled{static_cast<int32_t>(0x64)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_SharedTextureData{static_cast<int32_t>(0x65)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::OpenTypeLayoutLookup_Mismatch{static_cast<int32_t>(0x74)};
