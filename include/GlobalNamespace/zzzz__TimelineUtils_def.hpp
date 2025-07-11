#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineUtils)
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelineUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelineUtils);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelineUtils
class CORDL_TYPE TimelineUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindTrackAssetByName, addr 0x3b353c4, size 0x3d0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Timeline::TrackAsset> FindTrackAssetByName(::UnityEngine::Timeline::TimelineAsset* timeline, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineUtils(TimelineUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineUtils(TimelineUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelineUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineUtils*, "", "TimelineUtils");
