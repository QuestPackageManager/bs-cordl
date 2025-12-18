#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/AssetFrameData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFrameData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
struct AssetFrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Profiling::AssetFrameData);
// Dependencies UnityEngine.ResourceManagement.Profiling.ContentStatus
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Profiling.AssetFrameData
struct CORDL_TYPE AssetFrameData {
public:
  // Declarations
  /// @brief Method Equals, addr 0x676c07c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x676c108, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFrameData();

  // Ctor Parameters [CppParam { name: "AssetCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BundleCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ReferenceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PercentComplete", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Status", ty:
  // "::UnityEngine::ResourceManagement::Profiling::ContentStatus", modifiers: "", def_value: None }]
  constexpr AssetFrameData(int32_t AssetCode, int32_t BundleCode, int32_t ReferenceCount, float_t PercentComplete, ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field AssetCode, offset: 0x0, size: 0x4, def value: None
  int32_t AssetCode;

  /// @brief Field BundleCode, offset: 0x4, size: 0x4, def value: None
  int32_t BundleCode;

  /// @brief Field ReferenceCount, offset: 0x8, size: 0x4, def value: None
  int32_t ReferenceCount;

  /// @brief Field PercentComplete, offset: 0xc, size: 0x4, def value: None
  float_t PercentComplete;

  /// @brief Field Status, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, AssetCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, BundleCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, ReferenceCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, PercentComplete) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, Status) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::AssetFrameData, 0x14>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::AssetFrameData, "UnityEngine.ResourceManagement.Profiling", "AssetFrameData");
