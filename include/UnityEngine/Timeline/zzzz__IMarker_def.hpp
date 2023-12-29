#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IMarker)
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IMarker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IMarker);
// Type: UnityEngine.Timeline::IMarker
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14157))
// CS Name: ::UnityEngine.Timeline::IMarker*
class CORDL_TYPE IMarker {
public:
  // Declarations
  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_parent))::UnityEngine::Timeline::TrackAsset* parent;

  /// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual true final false
  inline double_t get_time();

  /// @brief Method set_time addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_time(double_t value);

  /// @brief Method get_parent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Timeline::TrackAsset* get_parent();

  /// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Initialize(::UnityEngine::Timeline::TrackAsset* parent);

  // Ctor Parameters [CppParam { name: "", ty: "IMarker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMarker(IMarker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMarker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMarker(IMarker const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IMarker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IMarker*, "UnityEngine.Timeline", "IMarker");
