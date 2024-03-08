#pragma once
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
// Type: ::LoadBeatmapLevelDataResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LoadBeatmapLevelDataResult
struct CORDL_TYPE LoadBeatmapLevelDataResult {
public:
  // Declarations
  /// @brief Field Error, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Error, put = setStaticF_Error))::GlobalNamespace::LoadBeatmapLevelDataResult Error;

  /// @brief Method FromValue, addr 0x12f96c8, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult FromValue(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method Success, addr 0x12f96bc, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult Success(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method .ctor, addr 0x12f96ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult getStaticF_Error();

  static inline void setStaticF_Error(::GlobalNamespace::LoadBeatmapLevelDataResult value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBeatmapLevelDataResult();

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
  // def_value: None }]
  constexpr LoadBeatmapLevelDataResult(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadBeatmapLevelDataResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadBeatmapLevelDataResult, "", "LoadBeatmapLevelDataResult");
