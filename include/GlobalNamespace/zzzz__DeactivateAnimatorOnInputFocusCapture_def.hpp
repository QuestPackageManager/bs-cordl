#pragma once
// IWYU pragma private; include "GlobalNamespace\DeactivateAnimatorOnInputFocusCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DeactivateAnimatorOnInputFocusCapture)
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateAnimatorOnInputFocusCapture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*, "", "DeactivateAnimatorOnInputFocusCapture");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeactivateAnimatorOnInputFocusCapture
class CORDL_TYPE DeactivateAnimatorOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _systemState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__systemState, put = __cordl_internal_set__systemState)) ::GlobalNamespace::IXRSystemState* _systemState;

  /// @brief Field _wasEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__wasEnabled, put = __cordl_internal_set__wasEnabled)) bool _wasEnabled;

  /// @brief Method HandleSystemStateChange, addr 0x5854430, size 0x64, virtual false, abstract: false, final false
  inline void HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType);

  static inline ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture* New_ctor();

  /// @brief Method OnDestroy, addr 0x58542f4, size 0x13c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x58541d4, size 0x120, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__systemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__systemState();

  constexpr bool const& __cordl_internal_get__wasEnabled() const;

  constexpr bool& __cordl_internal_get__wasEnabled();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__systemState(::GlobalNamespace::IXRSystemState* value);

  constexpr void __cordl_internal_set__wasEnabled(bool value);

  /// @brief Method .ctor, addr 0x5854494, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21388 };

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _systemState, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____systemState;

  /// @brief Field _wasEnabled, offset: 0x30, size: 0x1, def value: None
  bool ____wasEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____systemState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture, ____wasEnabled) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
