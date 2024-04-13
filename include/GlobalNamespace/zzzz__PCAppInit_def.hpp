#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
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
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PCAppInit*
class CORDL_TYPE PCAppInit : public ::BeatSaber::Init::BSAppInit {
public:
  // Declarations
  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultScenesTransitionsFromInit,
                      put = __cordl_internal_set__defaultScenesTransitionsFromInit))::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSystemInit, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit))::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x250b71c, size 0x68, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method InstallBindings, addr 0x250b980, size 0x1cc, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PCAppInit* New_ctor();

  /// @brief Method RepeatableSetupAsync, addr 0x250b784, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x250b820, size 0x160, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  /// @brief Method .ctor, addr 0x250bb4c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PCAppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PCAppInit(PCAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PCAppInit(PCAppInit const&) = delete;

  /// @brief Field _mainSystemInit, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> ____defaultScenesTransitionsFromInit;

  /// @brief Field kMissingOpenXRRuntimeErrorSubtitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorSubtitle{ u"LABEL_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field kMissingOpenXRRuntimeErrorTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorTitle{ u"TITLE_MISSING_OPEN_XR_RUNTIME_ERROR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PCAppInit, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____mainSystemInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____defaultScenesTransitionsFromInit) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PCAppInit*, "", "PCAppInit");
