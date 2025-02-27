#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKApplicationOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKApplicationOutput)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKApplicationOutput);
// Dependencies LIV.SDK.Unity.FEATURES
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKApplicationOutput
struct CORDL_TYPE SDKApplicationOutput {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ad5788, size 0x244, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3acf158, size 0x80, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKApplicationOutput get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKApplicationOutput();

  // Ctor Parameters [CppParam { name: "supportedFeatures", ty: "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: None }, CppParam { name: "engineName", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "graphicsAPI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkVersion", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr SDKApplicationOutput(::LIV::SDK::Unity::FEATURES supportedFeatures, ::StringW engineName, ::StringW engineVersion, ::StringW applicationName, ::StringW applicationVersion,
                                 ::StringW xrDeviceName, ::StringW graphicsAPI, ::StringW sdkID, ::StringW sdkVersion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field supportedFeatures, offset: 0x0, size: 0x8, def value: None
  ::LIV::SDK::Unity::FEATURES supportedFeatures;

  /// @brief Field engineName, offset: 0x8, size: 0x8, def value: None
  ::StringW engineName;

  /// @brief Field engineVersion, offset: 0x10, size: 0x8, def value: None
  ::StringW engineVersion;

  /// @brief Field applicationName, offset: 0x18, size: 0x8, def value: None
  ::StringW applicationName;

  /// @brief Field applicationVersion, offset: 0x20, size: 0x8, def value: None
  ::StringW applicationVersion;

  /// @brief Field xrDeviceName, offset: 0x28, size: 0x8, def value: None
  ::StringW xrDeviceName;

  /// @brief Field graphicsAPI, offset: 0x30, size: 0x8, def value: None
  ::StringW graphicsAPI;

  /// @brief Field sdkID, offset: 0x38, size: 0x8, def value: None
  ::StringW sdkID;

  /// @brief Field sdkVersion, offset: 0x40, size: 0x8, def value: None
  ::StringW sdkVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, supportedFeatures) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, engineName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, engineVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, applicationName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, applicationVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, xrDeviceName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, graphicsAPI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, sdkID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKApplicationOutput, sdkVersion) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKApplicationOutput, 0x48>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKApplicationOutput, "LIV.SDK.Unity", "SDKApplicationOutput");
