#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableGCWhileEnabled)
// Forward declare root types
namespace GlobalNamespace {
class DisableGCWhileEnabled;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableGCWhileEnabled);
// Type: ::DisableGCWhileEnabled
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableGCWhileEnabled*
class CORDL_TYPE DisableGCWhileEnabled : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::DisableGCWhileEnabled* New_ctor();

  /// @brief Method OnDisable, addr 0x23dcf28, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x23dcf1c, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x23dcf34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableGCWhileEnabled();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableGCWhileEnabled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableGCWhileEnabled(DisableGCWhileEnabled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableGCWhileEnabled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableGCWhileEnabled(DisableGCWhileEnabled const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableGCWhileEnabled, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableGCWhileEnabled);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableGCWhileEnabled*, "", "DisableGCWhileEnabled");
