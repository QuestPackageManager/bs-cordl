#pragma once
// IWYU pragma private; include "GlobalNamespace/FakeMirrorObjectsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FakeMirrorObjectsInstaller)
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller___c;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
struct BindingId;
}
// Forward declare root types
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FakeMirrorObjectsInstaller);
MARK_REF_PTR_T(::GlobalNamespace::FakeMirrorObjectsInstaller___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FakeMirrorObjectsInstaller/<>c
class CORDL_TYPE FakeMirrorObjectsInstaller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::FakeMirrorObjectsInstaller___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::Zenject::BindingId, bool>* __9__10_0;

  static inline ::GlobalNamespace::FakeMirrorObjectsInstaller___c* New_ctor();

  /// @brief Method <InstallBindings>b__10_0, addr 0x57e7328, size 0x80, virtual false, abstract: false, final false
  inline bool _InstallBindings_b__10_0(::Zenject::BindingId t);

  /// @brief Method .ctor, addr 0x57e7324, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::FakeMirrorObjectsInstaller___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::BindingId, bool>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::FakeMirrorObjectsInstaller___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::Zenject::BindingId, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeMirrorObjectsInstaller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FakeMirrorObjectsInstaller___c(FakeMirrorObjectsInstaller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FakeMirrorObjectsInstaller___c(FakeMirrorObjectsInstaller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorObjectsInstaller___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: FakeMirrorObjectsInstaller
class CORDL_TYPE FakeMirrorObjectsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using __c = ::GlobalNamespace::FakeMirrorObjectsInstaller___c;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets)) ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>
      _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBombNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredBombNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredBombNoteController>
      _mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredBurstSliderGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredGameNoteController>
      _mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredBurstSliderHeadGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredGameNoteController>
      _mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredGameNoteControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredGameNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredGameNoteController>
      _mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredObstacleControllerPrefab,
                      put = __cordl_internal_set__mirroredObstacleControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredObstacleController>
      _mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredSliderControllerPrefab, put = __cordl_internal_set__mirroredSliderControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredSliderController>
      _mirroredSliderControllerPrefab;

  /// @brief Field _settingsManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  __declspec(property(get = get_mirroredGameNoteControllerPrefab)) ::UnityW<::GlobalNamespace::MirroredGameNoteController> mirroredGameNoteControllerPrefab;

  /// @brief Method InstallBindings, addr 0x57e6d70, size 0x55c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FakeMirrorObjectsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MirroredBombNoteController> const& __cordl_internal_get__mirroredBombNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredBombNoteController>& __cordl_internal_get__mirroredBombNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& __cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& __cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& __cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& __cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& __cordl_internal_get__mirroredGameNoteControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& __cordl_internal_get__mirroredGameNoteControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirroredObstacleController> const& __cordl_internal_get__mirroredObstacleControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredObstacleController>& __cordl_internal_get__mirroredObstacleControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::MirroredSliderController> const& __cordl_internal_get__mirroredSliderControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MirroredSliderController>& __cordl_internal_get__mirroredSliderControllerPrefab();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr void __cordl_internal_set__mirroredBombNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredBombNoteController> value);

  constexpr void __cordl_internal_set__mirroredBurstSliderGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredBurstSliderHeadGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredObstacleControllerPrefab(::UnityW<::GlobalNamespace::MirroredObstacleController> value);

  constexpr void __cordl_internal_set__mirroredSliderControllerPrefab(::UnityW<::GlobalNamespace::MirroredSliderController> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x57e72cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mirroredGameNoteControllerPrefab, addr 0x57e6d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MirroredGameNoteController> get_mirroredGameNoteControllerPrefab();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeMirrorObjectsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6301 };

  /// @brief Field _mirroredGameNoteControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredBombNoteController> ____mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredObstacleController> ____mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredSliderController> ____mirroredSliderControllerPrefab;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _settingsManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredGameNoteControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBurstSliderHeadGameNoteControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBurstSliderGameNoteControllerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBombNoteControllerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredObstacleControllerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredSliderControllerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirrorRendererGraphicsSettingsPresets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____settingsManager) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorObjectsInstaller, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller*, "", "FakeMirrorObjectsInstaller");
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller___c*, "", "FakeMirrorObjectsInstaller/<>c");
