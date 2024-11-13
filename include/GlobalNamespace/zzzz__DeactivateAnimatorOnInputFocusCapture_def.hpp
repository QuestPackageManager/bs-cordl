#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateAnimatorOnInputFocusCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DeactivateAnimatorOnInputFocusCapture)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateAnimatorOnInputFocusCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture);
// Type: ::DeactivateAnimatorOnInputFocusCapture
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DeactivateAnimatorOnInputFocusCapture*
class CORDL_TYPE DeactivateAnimatorOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _wasEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__wasEnabled, put = __cordl_internal_set__wasEnabled)) bool _wasEnabled;

  /// @brief Method HandleInputFocusCaptured, addr 0x396a0e8, size 0x40, virtual false, abstract: false, final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased, addr 0x396a2d0, size 0x24, virtual false, abstract: false, final false
  inline void HandleInputFocusReleased();

  static inline ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture* New_ctor();

  /// @brief Method OnDestroy, addr 0x396a128, size 0x1a8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3969ed4, size 0x214, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr bool const& __cordl_internal_get__wasEnabled() const;

  constexpr bool& __cordl_internal_get__wasEnabled();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__wasEnabled(bool value);

  /// @brief Method .ctor, addr 0x396a2f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateAnimatorOnInputFocusCapture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAnimatorOnInputFocusCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateAnimatorOnInputFocusCapture(DeactivateAnimatorOnInputFocusCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAnimatorOnInputFocusCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateAnimatorOnInputFocusCapture(DeactivateAnimatorOnInputFocusCapture const&) = delete;

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _wasEnabled, offset: 0x30, size: 0x1, def value: None
  bool ____wasEnabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____wasEnabled) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*, "", "DeactivateAnimatorOnInputFocusCapture");
