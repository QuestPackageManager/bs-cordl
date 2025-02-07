#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CopyClosingMeshJobData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyClosingMeshJobData)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct CopyClosingMeshJobData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData);
// Dependencies System.IntPtr
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.CopyClosingMeshJobData
struct CORDL_TYPE CopyClosingMeshJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyClosingMeshJobData();

  // Ctor Parameters [CppParam { name: "vertSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "vertDst", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "vertCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "indexDst",
  // ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexOffset", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr CopyClosingMeshJobData(::System::IntPtr vertSrc, ::System::IntPtr vertDst, int32_t vertCount, ::System::IntPtr indexSrc, ::System::IntPtr indexDst, int32_t indexCount,
                                   int32_t indexOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field vertSrc, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr vertSrc;

  /// @brief Field vertDst, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr vertDst;

  /// @brief Field vertCount, offset: 0x10, size: 0x4, def value: None
  int32_t vertCount;

  /// @brief Field indexSrc, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr indexSrc;

  /// @brief Field indexDst, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr indexDst;

  /// @brief Field indexCount, offset: 0x28, size: 0x4, def value: None
  int32_t indexCount;

  /// @brief Field indexOffset, offset: 0x2c, size: 0x4, def value: None
  int32_t indexOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, vertSrc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, vertDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, vertCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, indexSrc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, indexDst) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, indexCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, indexOffset) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::CopyClosingMeshJobData, "UnityEngine.UIElements.UIR", "CopyClosingMeshJobData");
