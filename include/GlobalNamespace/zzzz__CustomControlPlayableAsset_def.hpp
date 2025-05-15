#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomControlPlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__ControlPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
CORDL_MODULE_EXPORT(CustomControlPlayableAsset)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomControlPlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomControlPlayableAsset);
// Dependencies UnityEngine.Timeline.ControlPlayableAsset, UnityEngine.Timeline.ITimelineClipAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomControlPlayableAsset
class CORDL_TYPE CustomControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset {
public:
  // Declarations
  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  static inline ::GlobalNamespace::CustomControlPlayableAsset* New_ctor();

  /// @brief Method .ctor, addr 0x3b342d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x3b342cc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomControlPlayableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomControlPlayableAsset(CustomControlPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomControlPlayableAsset(CustomControlPlayableAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomControlPlayableAsset, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlPlayableAsset*, "", "CustomControlPlayableAsset");
