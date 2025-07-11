#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKTransform)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTransform;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTransform);
// Dependencies LIV.SDK.Unity.SDKQuaternion, LIV.SDK.Unity.SDKVector3
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKTransform
struct CORDL_TYPE SDKTransform {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac84a4, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_empty, addr 0x3ac7a4c, size 0x14, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKTransform get_empty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKTransform();

  // Ctor Parameters [CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion",
  // modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
  constexpr SDKTransform(::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation, ::LIV::SDK::Unity::SDKVector3 localScale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17339 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field localPosition, offset: 0x0, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 localPosition;

  /// @brief Field localRotation, offset: 0xc, size: 0x10, def value: None
  ::LIV::SDK::Unity::SDKQuaternion localRotation;

  /// @brief Field localScale, offset: 0x1c, size: 0xc, def value: None
  ::LIV::SDK::Unity::SDKVector3 localScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKTransform, localPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTransform, localRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKTransform, localScale) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTransform, 0x28>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTransform, "LIV.SDK.Unity", "SDKTransform");
