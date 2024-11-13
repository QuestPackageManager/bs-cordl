#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateMenuControllersOnFocusCaptureOrTrackingLost.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeactivateMenuControllersOnFocusCaptureOrTrackingLost)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class VRController;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateMenuControllersOnFocusCaptureOrTrackingLost;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost);
// Type: ::DeactivateMenuControllersOnFocusCaptureOrTrackingLost
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DeactivateMenuControllersOnFocusCaptureOrTrackingLost*
class CORDL_TYPE DeactivateMenuControllersOnFocusCaptureOrTrackingLost : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _vrControllers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrControllers,
                      put = __cordl_internal_set__vrControllers)) ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*>
      _vrControllers;

  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method Awake, addr 0x396a430, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleInputFocusCaptured, addr 0x396a6d8, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusCaptured();

  /// @brief Method Init, addr 0x396a33c, size 0xf4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method LateUpdate, addr 0x396a6d4, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost* New_ctor();

  /// @brief Method OnDestroy, addr 0x396a5d4, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetActiveMenuController, addr 0x396a6dc, size 0x70, virtual false, abstract: false, final false
  inline void SetActiveMenuController(bool active, ::GlobalNamespace::VRController* vrController);

  /// @brief Method UpdateMenuControllersState, addr 0x396a434, size 0x1a0, virtual false, abstract: false, final false
  inline void UpdateMenuControllersState();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> const& __cordl_internal_get__vrControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*>& __cordl_internal_get__vrControllers();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrControllers(::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x396a74c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_loggerPrefix, addr 0x396a2fc, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateMenuControllersOnFocusCaptureOrTrackingLost();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateMenuControllersOnFocusCaptureOrTrackingLost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateMenuControllersOnFocusCaptureOrTrackingLost(DeactivateMenuControllersOnFocusCaptureOrTrackingLost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateMenuControllersOnFocusCaptureOrTrackingLost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateMenuControllersOnFocusCaptureOrTrackingLost(DeactivateMenuControllersOnFocusCaptureOrTrackingLost const&) = delete;

  /// @brief Field _vrControllers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> ____vrControllers;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost, ____vrControllers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateMenuControllersOnFocusCaptureOrTrackingLost*, "", "DeactivateMenuControllersOnFocusCaptureOrTrackingLost");
