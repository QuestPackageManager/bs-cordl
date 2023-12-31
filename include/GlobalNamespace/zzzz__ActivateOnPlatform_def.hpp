#pragma once
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
// Type: ::ActivateOnPlatform
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14415)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14330))
// CS Name: ::ActivateOnPlatform*
class CORDL_TYPE ActivateOnPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _vrPlatformSdk, offset 0x18, size 0x4
  __declspec(property(get = __get__vrPlatformSdk, put = __set__vrPlatformSdk))::GlobalNamespace::VRPlatformSDK _vrPlatformSdk;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  constexpr ::GlobalNamespace::VRPlatformSDK& __get__vrPlatformSdk();

  constexpr ::GlobalNamespace::VRPlatformSDK const& __get__vrPlatformSdk() const;

  constexpr void __set__vrPlatformSdk(::GlobalNamespace::VRPlatformSDK value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method Awake, addr 0x20ee708, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ActivateOnPlatform* New_ctor();

  /// @brief Method .ctor, addr 0x20ee7d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivateOnPlatform(ActivateOnPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivateOnPlatform(ActivateOnPlatform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivateOnPlatform();

public:
  /// @brief Field _vrPlatformSdk, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::VRPlatformSDK ____vrPlatformSdk;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActivateOnPlatform, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateOnPlatform, ____vrPlatformSdk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateOnPlatform, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActivateOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActivateOnPlatform*, "", "ActivateOnPlatform");
