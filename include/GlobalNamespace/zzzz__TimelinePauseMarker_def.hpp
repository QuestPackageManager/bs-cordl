#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelinePauseMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
CORDL_MODULE_EXPORT(TimelinePauseMarker)
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseMarker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelinePauseMarker);
// Dependencies UnityEngine.Playables.INotification, UnityEngine.PropertyName, UnityEngine.Timeline.Marker
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelinePauseMarker
class CORDL_TYPE TimelinePauseMarker : public ::UnityEngine::Timeline::Marker {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) ::UnityEngine::PropertyName _id_k__BackingField;

  __declspec(property(get = get_id)) ::UnityEngine::PropertyName id;

  /// @brief Convert operator to "::UnityEngine::Playables::INotification"
  constexpr operator ::UnityEngine::Playables::INotification*() noexcept;

  static inline ::GlobalNamespace::TimelinePauseMarker* New_ctor();

  constexpr ::UnityEngine::PropertyName const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::UnityEngine::PropertyName& __cordl_internal_get__id_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(::UnityEngine::PropertyName value);

  /// @brief Method .ctor, addr 0x39d332c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x39d3324, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::PropertyName get_id();

  /// @brief Convert to "::UnityEngine::Playables::INotification"
  constexpr ::UnityEngine::Playables::INotification* i___UnityEngine__Playables__INotification() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePauseMarker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePauseMarker(TimelinePauseMarker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePauseMarker(TimelinePauseMarker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16460 };

  /// @brief Field <id>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::PropertyName ____id_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelinePauseMarker, ____id_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelinePauseMarker, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelinePauseMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseMarker*, "", "TimelinePauseMarker");
