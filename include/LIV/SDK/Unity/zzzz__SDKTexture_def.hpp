#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKTexture)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTexture;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTexture);
// Dependencies LIV.SDK.Unity.TEXTURE_COLOR_SPACE, LIV.SDK.Unity.TEXTURE_DEVICE, LIV.SDK.Unity.TEXTURE_FORMAT, LIV.SDK.Unity.TEXTURE_ID, LIV.SDK.Unity.TEXTURE_TYPE, System.IntPtr
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKTexture
struct CORDL_TYPE SDKTexture {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac3528, size 0x3a4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3abd44c, size 0x14, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKTexture get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKTexture();

  // Ctor Parameters [CppParam { name: "id", ty: "::LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: None }, CppParam { name: "texturePtr", ty: "::System::IntPtr", modifiers: "", def_value:
  // None }, CppParam { name: "SharedHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value:
  // None }, CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: None }, CppParam {
  // name: "format", ty: "::LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "::LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value:
  // None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SDKTexture(::LIV::SDK::Unity::TEXTURE_ID id, ::System::IntPtr texturePtr, ::System::IntPtr SharedHandle, ::LIV::SDK::Unity::TEXTURE_DEVICE device, int32_t dummy,
                       ::LIV::SDK::Unity::TEXTURE_TYPE type, ::LIV::SDK::Unity::TEXTURE_FORMAT format, ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace, int32_t width, int32_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_ID id;

  /// @brief Field texturePtr, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr texturePtr;

  /// @brief Field SharedHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr SharedHandle;

  /// @brief Field device, offset: 0x18, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_DEVICE device;

  /// @brief Field dummy, offset: 0x1c, size: 0x4, def value: None
  int32_t dummy;

  /// @brief Field type, offset: 0x20, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_TYPE type;

  /// @brief Field format, offset: 0x24, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_FORMAT format;

  /// @brief Field colorSpace, offset: 0x28, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace;

  /// @brief Field width, offset: 0x2c, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x30, size: 0x4, def value: None
  int32_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, texturePtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, SharedHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, dummy) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, format) == 0x24, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, colorSpace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, width) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTexture, height) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTexture, 0x38>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTexture, "LIV.SDK.Unity", "SDKTexture");
