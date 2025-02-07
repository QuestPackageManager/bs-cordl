#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateOnPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActivateOnPlatform)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateOnPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActivateOnPlatform);
// Dependencies UnityEngine.MonoBehaviour, VRPlatformSDK
namespace GlobalNamespace {
// Is value type: false
// CS Name: ActivateOnPlatform
class CORDL_TYPE ActivateOnPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _vrPlatformSdk, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__vrPlatformSdk, put = __cordl_internal_set__vrPlatformSdk)) ::GlobalNamespace::VRPlatformSDK _vrPlatformSdk;

  /// @brief Method Awake, addr 0x39c3da4, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ActivateOnPlatform* New_ctor();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::GlobalNamespace::VRPlatformSDK const& __cordl_internal_get__vrPlatformSdk() const;

  constexpr ::GlobalNamespace::VRPlatformSDK& __cordl_internal_get__vrPlatformSdk();

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__vrPlatformSdk(::GlobalNamespace::VRPlatformSDK value);

  /// @brief Method .ctor, addr 0x39c3e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivateOnPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivateOnPlatform(ActivateOnPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivateOnPlatform(ActivateOnPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16386 };

  /// @brief Field _vrPlatformSdk, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::VRPlatformSDK ____vrPlatformSdk;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActivateOnPlatform, ____vrPlatformSdk) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateOnPlatform, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActivateOnPlatform, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActivateOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActivateOnPlatform*, "", "ActivateOnPlatform");
