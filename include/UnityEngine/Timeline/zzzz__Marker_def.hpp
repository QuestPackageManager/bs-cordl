#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/Marker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Marker)
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Marker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::Marker);
// Type: UnityEngine.Timeline::Marker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::Marker*
class CORDL_TYPE Marker : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field <parent>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parent_k__BackingField, put = __cordl_internal_set__parent_k__BackingField))::UnityW<::UnityEngine::Timeline::TrackAsset> _parent_k__BackingField;

  /// @brief Field m_Time, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Time, put = __cordl_internal_set_m_Time)) double_t m_Time;

  __declspec(property(get = get_parent, put = set_parent))::UnityW<::UnityEngine::Timeline::TrackAsset> parent;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  /// @brief Convert operator to "::UnityEngine::Timeline::IMarker"
  constexpr operator ::UnityEngine::Timeline::IMarker*() noexcept;

  static inline ::UnityEngine::Timeline::Marker* New_ctor();

  /// @brief Method OnInitialize, addr 0x33c6ed8, size 0x4, virtual true, abstract: false, final false
  inline void OnInitialize(::UnityEngine::Timeline::TrackAsset* aPent);

  /// @brief Method UnityEngine.Timeline.IMarker.Initialize, addr 0x33c6d8c, size 0x14c, virtual true, abstract: false, final true
  inline void UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset* parentTrack);

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& __cordl_internal_get__parent_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& __cordl_internal_get__parent_k__BackingField();

  constexpr double_t const& __cordl_internal_get_m_Time() const;

  constexpr double_t& __cordl_internal_get_m_Time();

  constexpr void __cordl_internal_set__parent_k__BackingField(::UnityW<::UnityEngine::Timeline::TrackAsset> value);

  constexpr void __cordl_internal_set_m_Time(double_t value);

  /// @brief Method .ctor, addr 0x33c6edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_parent, addr 0x33c6d04, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> get_parent();

  /// @brief Method get_time, addr 0x33c6d14, size 0x8, virtual true, abstract: false, final true
  inline double_t get_time();

  /// @brief Convert to "::UnityEngine::Timeline::IMarker"
  constexpr ::UnityEngine::Timeline::IMarker* i___UnityEngine__Timeline__IMarker() noexcept;

  /// @brief Method set_parent, addr 0x33c6d0c, size 0x8, virtual false, abstract: false, final false
  inline void set_parent(::UnityEngine::Timeline::TrackAsset* value);

  /// @brief Method set_time, addr 0x33c6d1c, size 0x70, virtual true, abstract: false, final true
  inline void set_time(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marker(Marker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marker(Marker const&) = delete;

  /// @brief Field m_Time, offset: 0x18, size: 0x8, def value: None
  double_t ___m_Time;

  /// @brief Field <parent>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::TrackAsset> ____parent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Marker, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::Marker, ___m_Time) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::Marker, ____parent_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::Marker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Marker*, "UnityEngine.Timeline", "Marker");
