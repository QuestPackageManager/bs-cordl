#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PCAppInit)
namespace GlobalNamespace {
class MainSystemInit;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4035))
// CS Name: ::PCAppInit*
class CORDL_TYPE PCAppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __get__mainSystemInit, put = __set__mainSystemInit))::GlobalNamespace::MainSystemInit* _mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x50, size 0x8
  __declspec(property(get = __get__defaultScenesTransitionsFromInit,
                      put = __set__defaultScenesTransitionsFromInit))::GlobalNamespace::DefaultScenesTransitionsFromInit* _defaultScenesTransitionsFromInit;

  /// @brief Field _goStraightToMenuCommandArgument, offset 0x58, size 0x8
  __declspec(property(get = __get__goStraightToMenuCommandArgument, put = __set__goStraightToMenuCommandArgument))::StringW _goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset 0x60, size 0x8
  __declspec(property(get = __get__goStraightToEditorCommandArgument, put = __set__goStraightToEditorCommandArgument))::StringW _goStraightToEditorCommandArgument;

  constexpr ::GlobalNamespace::MainSystemInit*& __get__mainSystemInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& __get__mainSystemInit() const;

  constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit* value);

  constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& __get__defaultScenesTransitionsFromInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& __get__defaultScenesTransitionsFromInit() const;

  constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value);

  constexpr ::StringW& __get__goStraightToMenuCommandArgument();

  constexpr ::StringW const& __get__goStraightToMenuCommandArgument() const;

  constexpr void __set__goStraightToMenuCommandArgument(::StringW value);

  constexpr ::StringW& __get__goStraightToEditorCommandArgument();

  constexpr ::StringW const& __get__goStraightToEditorCommandArgument() const;

  constexpr void __set__goStraightToEditorCommandArgument(::StringW value);

  /// @brief Method AppStartAndMultiSceneEditorSetup addr 0x2229668 size 0x68 virtual true final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync addr 0x22296d0 size 0x9c virtual true final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene addr 0x222976c size 0xd4 virtual true final false
  inline void TransitionToNextScene();

  /// @brief Method InstallBindings addr 0x2229840 size 0x1ec virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PCAppInit* New_ctor();

  /// @brief Method .ctor addr 0x2229a2c size 0x8 virtual false final false
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
  ::GlobalNamespace::MainSystemInit* ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DefaultScenesTransitionsFromInit* ____defaultScenesTransitionsFromInit;

  /// @brief Field _goStraightToMenuCommandArgument, offset: 0x58, size: 0x8, def value: None
  ::StringW ____goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset: 0x60, size: 0x8, def value: None
  ::StringW ____goStraightToEditorCommandArgument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PCAppInit, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PCAppInit*, "", "PCAppInit");
