#pragma once
// IWYU pragma private; include "GlobalNamespace/FirstPersonFlyingControllerEnableHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FirstPersonFlyingControllerEnableHandler)
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonFlyingControllerEnableHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FirstPersonFlyingControllerEnableHandler);
// Dependencies BGLib.DotnetExtension.CommandLine.CommandLineParserResult, UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirstPersonFlyingControllerEnableHandler
class CORDL_TYPE FirstPersonFlyingControllerEnableHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _commandLineParserResult, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineParserResult,
                      put = __cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineParserResult;

  /// @brief Field _flyingController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingController, put = __cordl_internal_set__flyingController)) ::UnityW<::GlobalNamespace::FirstPersonFlyingController> _flyingController;

  __declspec(property(get = get_flyingControllerEnabled, put = set_flyingControllerEnabled)) bool flyingControllerEnabled;

  /// @brief Method InstallDependencies, addr 0x3b0e334, size 0xb0, virtual false, abstract: false, final false
  inline void InstallDependencies(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineParserResult);

  static inline ::GlobalNamespace::FirstPersonFlyingControllerEnableHandler* New_ctor();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

  constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController> const& __cordl_internal_get__flyingController() const;

  constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController>& __cordl_internal_get__flyingController();

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__flyingController(::UnityW<::GlobalNamespace::FirstPersonFlyingController> value);

  /// @brief Method .ctor, addr 0x3b0e3e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_flyingControllerEnabled, addr 0x3b0e2f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_flyingControllerEnabled();

  /// @brief Method set_flyingControllerEnabled, addr 0x3b0e314, size 0x20, virtual false, abstract: false, final false
  inline void set_flyingControllerEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FirstPersonFlyingControllerEnableHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingControllerEnableHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FirstPersonFlyingControllerEnableHandler(FirstPersonFlyingControllerEnableHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingControllerEnableHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FirstPersonFlyingControllerEnableHandler(FirstPersonFlyingControllerEnableHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5035 };

  /// @brief Field kKeyToToggleFPFC value: I32(292)
  static ::UnityEngine::KeyCode const kKeyToToggleFPFC;

  /// @brief Field _flyingController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FirstPersonFlyingController> ____flyingController;

  /// @brief Field _commandLineParserResult, offset: 0x28, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineParserResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingControllerEnableHandler, ____flyingController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingControllerEnableHandler, ____commandLineParserResult) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirstPersonFlyingControllerEnableHandler, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FirstPersonFlyingControllerEnableHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirstPersonFlyingControllerEnableHandler*, "", "FirstPersonFlyingControllerEnableHandler");
