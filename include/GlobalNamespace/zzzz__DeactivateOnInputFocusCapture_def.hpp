#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DeactivateOnInputFocusCapture)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateOnInputFocusCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateOnInputFocusCapture);
// Type: ::DeactivateOnInputFocusCapture
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13801))
// CS Name: ::DeactivateOnInputFocusCapture*
class CORDL_TYPE DeactivateOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _vrPlatformHelper, offset 0x18, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method OnEnable addr 0x1f8f62c size 0x204 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x1f8f9d4 size 0x1a4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleInputFocusCaptured addr 0x1f8fb78 size 0x15c virtual false final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased addr 0x1f8fcd4 size 0x15c virtual false final false
  inline void HandleInputFocusReleased();

  /// @brief Method ActivateGameObject addr 0x1f8fe30 size 0x1a0 virtual false final false
  inline void ActivateGameObject();

  /// @brief Method DeactivateGameObject addr 0x1f8f830 size 0x1a4 virtual false final false
  inline void DeactivateGameObject();

  static inline ::GlobalNamespace::DeactivateOnInputFocusCapture* New_ctor();

  /// @brief Method .ctor addr 0x1f8ffd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateOnInputFocusCapture();

public:
  /// @brief Field _vrPlatformHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateOnInputFocusCapture, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateOnInputFocusCapture, ____vrPlatformHelper) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateOnInputFocusCapture*, "", "DeactivateOnInputFocusCapture");
