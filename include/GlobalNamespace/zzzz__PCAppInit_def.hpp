#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PCAppInit)
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class PCAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PCAppInit);
// Type: ::PCAppInit
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15439))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3980))
// CS Name: ::PCAppInit*
class CORDL_TYPE PCAppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit))::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit))::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _defaultScenesTransitionsFromInit;

  /// @brief Field _goStraightToMenuCommandArgument, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__goStraightToMenuCommandArgument, put = __cordl_internal_set__goStraightToMenuCommandArgument))::StringW _goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__goStraightToEditorCommandArgument, put = __cordl_internal_set__goStraightToEditorCommandArgument))::StringW _goStraightToEditorCommandArgument;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr ::StringW& __cordl_internal_get__goStraightToMenuCommandArgument();

  constexpr ::StringW const& __cordl_internal_get__goStraightToMenuCommandArgument() const;

  constexpr void __cordl_internal_set__goStraightToMenuCommandArgument(::StringW value);

  constexpr ::StringW& __cordl_internal_get__goStraightToEditorCommandArgument();

  constexpr ::StringW const& __cordl_internal_get__goStraightToEditorCommandArgument() const;

  constexpr void __cordl_internal_set__goStraightToEditorCommandArgument(::StringW value);

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x22b2c50, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x22b2cb8, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x22b2d54, size 0xd4, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method InstallBindings, addr 0x22b2e28, size 0x19c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PCAppInit* New_ctor();

  /// @brief Method .ctor, addr 0x22b2fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PCAppInit(PCAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PCAppInit(PCAppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PCAppInit();

public:
  /// @brief Field _mainSystemInit, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field _goStraightToMenuCommandArgument, offset: 0x58, size: 0x8, def value: None
  ::StringW ____goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset: 0x60, size: 0x8, def value: None
  ::StringW ____goStraightToEditorCommandArgument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PCAppInit, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____defaultScenesTransitionsFromInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____goStraightToMenuCommandArgument) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____goStraightToEditorCommandArgument) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PCAppInit*, "", "PCAppInit");
