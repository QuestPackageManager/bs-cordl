#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBuildInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRBuildInfo)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBuildInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBuildInfo);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRBuildInfo
class CORDL_TYPE OVRBuildInfo : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field BuildInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_BuildInfo, put = __cordl_internal_set_BuildInfo)) ::UnityW<::UnityEngine::UI::Text> BuildInfo;

  /// @brief Method LoadBuildInfo, addr 0x5c0406c, size 0xb4, virtual false, abstract: false, final false
  inline void LoadBuildInfo();

  static inline ::GlobalNamespace::OVRBuildInfo* New_ctor();

  /// @brief Method OnEnable, addr 0x5c04068, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x5c04120, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_BuildInfo() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_BuildInfo();

  constexpr void __cordl_internal_set_BuildInfo(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x5c04124, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBuildInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRBuildInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRBuildInfo(OVRBuildInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRBuildInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRBuildInfo(OVRBuildInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7103 };

  /// @brief Field BuildInfo, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___BuildInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBuildInfo, ___BuildInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBuildInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBuildInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBuildInfo*, "", "OVRBuildInfo");
