#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedSpatialAnchorErrorHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SharedSpatialAnchorErrorHandler)
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SharedSpatialAnchorErrorHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SharedSpatialAnchorErrorHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedSpatialAnchorErrorHandler
class CORDL_TYPE SharedSpatialAnchorErrorHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AlertViewHUDPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_AlertViewHUDPrefab, put = __cordl_internal_set_AlertViewHUDPrefab)) ::UnityW<::UnityEngine::GameObject> AlertViewHUDPrefab;

  /// @brief Field DisableRuntimeGUIAlerts, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableRuntimeGUIAlerts, put = __cordl_internal_set_DisableRuntimeGUIAlerts)) bool DisableRuntimeGUIAlerts;

  /// @brief Field cloudPermissionMsg, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cloudPermissionMsg, put = __cordl_internal_set_cloudPermissionMsg)) ::StringW cloudPermissionMsg;

  /// @brief Method Awake, addr 0x581d114, size 0xa8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LogWarning, addr 0x581d238, size 0xac, virtual false, abstract: false, final false
  inline void LogWarning(::StringW msg);

  static inline ::GlobalNamespace::SharedSpatialAnchorErrorHandler* New_ctor();

  /// @brief Method OnAnchorCreate, addr 0x581d1bc, size 0x7c, virtual false, abstract: false, final false
  inline void OnAnchorCreate(::GlobalNamespace::OVRSpatialAnchor* _, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnAnchorErase, addr 0x581d470, size 0xb4, virtual false, abstract: false, final false
  inline void OnAnchorErase(::GlobalNamespace::OVRSpatialAnchor* anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnAnchorEraseAll, addr 0x581d400, size 0x70, virtual false, abstract: false, final false
  inline void OnAnchorEraseAll(::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnAnchorShare, addr 0x581d2e4, size 0x7c, virtual false, abstract: false, final false
  inline void OnAnchorShare(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  /// @brief Method OnSharedSpatialAnchorLoad, addr 0x581d360, size 0xa0, virtual false, abstract: false, final false
  inline void OnSharedSpatialAnchorLoad(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors,
                                        ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AlertViewHUDPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AlertViewHUDPrefab();

  constexpr bool const& __cordl_internal_get_DisableRuntimeGUIAlerts() const;

  constexpr bool& __cordl_internal_get_DisableRuntimeGUIAlerts();

  constexpr ::StringW const& __cordl_internal_get_cloudPermissionMsg() const;

  constexpr ::StringW& __cordl_internal_get_cloudPermissionMsg();

  constexpr void __cordl_internal_set_AlertViewHUDPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_DisableRuntimeGUIAlerts(bool value);

  constexpr void __cordl_internal_set_cloudPermissionMsg(::StringW value);

  /// @brief Method .ctor, addr 0x581d524, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorErrorHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorErrorHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedSpatialAnchorErrorHandler(SharedSpatialAnchorErrorHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorErrorHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedSpatialAnchorErrorHandler(SharedSpatialAnchorErrorHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21129 };

  /// @brief Field DisableRuntimeGUIAlerts, offset: 0x20, size: 0x1, def value: None
  bool ___DisableRuntimeGUIAlerts;

  /// @brief Field AlertViewHUDPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___AlertViewHUDPrefab;

  /// @brief Field cloudPermissionMsg, offset: 0x30, size: 0x8, def value: None
  ::StringW ___cloudPermissionMsg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorErrorHandler, ___DisableRuntimeGUIAlerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorErrorHandler, ___AlertViewHUDPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorErrorHandler, ___cloudPermissionMsg) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SharedSpatialAnchorErrorHandler, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SharedSpatialAnchorErrorHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SharedSpatialAnchorErrorHandler*, "", "SharedSpatialAnchorErrorHandler");
