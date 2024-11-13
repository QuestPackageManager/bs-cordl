#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ITimeControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITimeControl)
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimeControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ITimeControl);
// Type: UnityEngine.Timeline::ITimeControl
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ITimeControl*
class CORDL_TYPE ITimeControl {
public:
  // Declarations
  /// @brief Method OnControlTimeStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnControlTimeStart();

  /// @brief Method OnControlTimeStop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnControlTimeStop();

  /// @brief Method SetTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetTime(double_t time);

  // Ctor Parameters [CppParam { name: "", ty: "ITimeControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITimeControl(ITimeControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITimeControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimeControl(ITimeControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15828 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ITimeControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimeControl*, "UnityEngine.Timeline", "ITimeControl");
