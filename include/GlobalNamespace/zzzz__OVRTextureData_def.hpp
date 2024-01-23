#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTextureData)
namespace GlobalNamespace {
struct OVRTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTextureData);
// Type: ::OVRTextureData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7562)), TypeDefinitionIndex(TypeDefinitionIndex(10115))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7568))
// CS Name: ::OVRTextureData
struct CORDL_TYPE OVRTextureData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat", modifiers: "", def_value: None }, CppParam {
  // name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr OVRTextureData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t width, int32_t height, ::GlobalNamespace::OVRTextureFormat format, ::UnityEngine::TextureFormat transcodedFormat,
                           ::StringW uri) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTextureData();

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field width, offset: 0x8, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0xc, size: 0x4, def value: None
  int32_t height;

  /// @brief Field format, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureFormat format;

  /// @brief Field transcodedFormat, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::TextureFormat transcodedFormat;

  /// @brief Field uri, offset: 0x18, size: 0x8, def value: None
  ::StringW uri;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTextureData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, height) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, transcodedFormat) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTextureData, uri) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureData, "", "OVRTextureData");
