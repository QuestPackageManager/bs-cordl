#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadBeatmapLevelDataResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LoadBeatmapLevelDataResult)
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Forward declare root types
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LoadBeatmapLevelDataResult);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LoadBeatmapLevelDataResult
struct CORDL_TYPE LoadBeatmapLevelDataResult {
public:
  // Declarations
  /// @brief Field Error, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Error, put = setStaticF_Error)) ::GlobalNamespace::LoadBeatmapLevelDataResult Error;

  /// @brief Method FromValue, addr 0x26d9a74, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult FromValue(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method Success, addr 0x26d9a68, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult Success(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method .ctor, addr 0x26d9a58, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult getStaticF_Error();

  static inline void setStaticF_Error(::GlobalNamespace::LoadBeatmapLevelDataResult value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBeatmapLevelDataResult();

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
  // def_value: None }]
  constexpr LoadBeatmapLevelDataResult(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadBeatmapLevelDataResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadBeatmapLevelDataResult, "", "LoadBeatmapLevelDataResult");
