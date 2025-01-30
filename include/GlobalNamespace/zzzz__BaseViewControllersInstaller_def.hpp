#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseViewControllersInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(BaseViewControllersInstaller)
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseViewControllersInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseViewControllersInstaller);
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseViewControllersInstaller
class CORDL_TYPE BaseViewControllersInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab,
                      put = __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab)) ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>
      _safeAreaFocusedSimpleDialogPromptViewControllerPrefab;

  /// @brief Field _simpleDialogPromptViewControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleDialogPromptViewControllerPrefab,
                      put = __cordl_internal_set__simpleDialogPromptViewControllerPrefab)) ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>
      _simpleDialogPromptViewControllerPrefab;

  /// @brief Method InstallBindings, addr 0x3bf5304, size 0xac, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BaseViewControllersInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> const& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& __cordl_internal_get__simpleDialogPromptViewControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& __cordl_internal_get__simpleDialogPromptViewControllerPrefab();

  constexpr void __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set__simpleDialogPromptViewControllerPrefab(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value);

  /// @brief Method .ctor, addr 0x3bf53b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseViewControllersInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseViewControllersInstaller(BaseViewControllersInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseViewControllersInstaller(BaseViewControllersInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4716 };

  /// @brief Field _simpleDialogPromptViewControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> ____simpleDialogPromptViewControllerPrefab;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> ____safeAreaFocusedSimpleDialogPromptViewControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseViewControllersInstaller, ____simpleDialogPromptViewControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseViewControllersInstaller, ____safeAreaFocusedSimpleDialogPromptViewControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseViewControllersInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseViewControllersInstaller*, "", "BaseViewControllersInstaller");
