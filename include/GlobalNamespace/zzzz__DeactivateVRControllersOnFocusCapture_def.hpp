#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateVRControllersOnFocusCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeactivateVRControllersOnFocusCapture)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateVRControllersOnFocusCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateVRControllersOnFocusCapture);
// Dependencies IVerboseLogger, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeactivateVRControllersOnFocusCapture
class CORDL_TYPE DeactivateVRControllersOnFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _vrControllerGameObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrControllerGameObjects,
                      put = __cordl_internal_set__vrControllerGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _vrControllerGameObjects;

  /// @brief Field _vrControllers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrControllers,
                      put = __cordl_internal_set__vrControllers)) ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*>
      _vrControllers;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method LateUpdate, addr 0x39c48fc, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::DeactivateVRControllersOnFocusCapture* New_ctor();

  /// @brief Method OnDestroy, addr 0x39c4768, size 0x194, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x39c42e4, size 0x224, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateVRControllerActiveState, addr 0x39c4508, size 0x260, virtual false, abstract: false, final false
  inline void UpdateVRControllerActiveState();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__vrControllerGameObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__vrControllerGameObjects();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> const& __cordl_internal_get__vrControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*>& __cordl_internal_get__vrControllers();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__vrControllerGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__vrControllers(::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x39c4900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_loggerPrefix, addr 0x39c42a4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateVRControllersOnFocusCapture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateVRControllersOnFocusCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateVRControllersOnFocusCapture(DeactivateVRControllersOnFocusCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateVRControllersOnFocusCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateVRControllersOnFocusCapture(DeactivateVRControllersOnFocusCapture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16388 };

  /// @brief Field _vrControllers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::VRController>, ::Array<::UnityW<::GlobalNamespace::VRController>>*> ____vrControllers;

  /// @brief Field _vrControllerGameObjects, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____vrControllerGameObjects;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeactivateVRControllersOnFocusCapture, ____vrControllers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateVRControllersOnFocusCapture, ____vrControllerGameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateVRControllersOnFocusCapture, ____vrPlatformHelper) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateVRControllersOnFocusCapture, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateVRControllersOnFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateVRControllersOnFocusCapture*, "", "DeactivateVRControllersOnFocusCapture");
