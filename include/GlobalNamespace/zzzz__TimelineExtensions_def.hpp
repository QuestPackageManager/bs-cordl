#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimelineExtensions)
namespace GlobalNamespace {
class TimelineExtensions___c__DisplayClass0_0;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class IMarker;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelineExtensions;
}
namespace GlobalNamespace {
class TimelineExtensions___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelineExtensions);
MARK_REF_PTR_T(::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelineExtensions/<>c__DisplayClass0_0
class CORDL_TYPE TimelineExtensions___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field markerType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_markerType, put = __cordl_internal_set_markerType)) ::System::Type* markerType;

  static inline ::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0* New_ctor();

  /// @brief Method <JumpToTimelineMarker>b__0, addr 0x3b36130, size 0x38, virtual false, abstract: false, final false
  inline bool _JumpToTimelineMarker_b__0(::UnityEngine::Timeline::IMarker* marker);

  constexpr ::System::Type* const& __cordl_internal_get_markerType() const;

  constexpr ::System::Type*& __cordl_internal_get_markerType();

  constexpr void __cordl_internal_set_markerType(::System::Type* value);

  /// @brief Method .ctor, addr 0x3b36128, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineExtensions___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineExtensions___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineExtensions___c__DisplayClass0_0(TimelineExtensions___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineExtensions___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineExtensions___c__DisplayClass0_0(TimelineExtensions___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5188 };

  /// @brief Field markerType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___markerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0, ___markerType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelineExtensions
class CORDL_TYPE TimelineExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0;

  /// @brief Method JumpToTimelineMarker, addr 0x3b35f60, size 0x1c8, virtual false, abstract: false, final false
  static inline void JumpToTimelineMarker(::UnityEngine::Playables::PlayableDirector* playableDirector, ::System::Type* markerType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineExtensions(TimelineExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineExtensions(TimelineExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelineExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelineExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineExtensions*, "", "TimelineExtensions");
NEED_NO_BOX(::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelineExtensions___c__DisplayClass0_0*, "", "TimelineExtensions/<>c__DisplayClass0_0");
