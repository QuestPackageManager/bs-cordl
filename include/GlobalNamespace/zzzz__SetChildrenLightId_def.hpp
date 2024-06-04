#pragma once
// IWYU pragma private; include "GlobalNamespace/SetChildrenLightId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetChildrenLightId)
// Forward declare root types
namespace GlobalNamespace {
class SetChildrenLightId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetChildrenLightId);
// Type: ::SetChildrenLightId
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetChildrenLightId*
class CORDL_TYPE SetChildrenLightId : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::SetChildrenLightId* New_ctor();

  /// @brief Method .ctor, addr 0x250faf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetChildrenLightId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetChildrenLightId(SetChildrenLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetChildrenLightId(SetChildrenLightId const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetChildrenLightId, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetChildrenLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetChildrenLightId*, "", "SetChildrenLightId");
