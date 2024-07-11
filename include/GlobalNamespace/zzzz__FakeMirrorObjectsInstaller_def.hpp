#pragma once
// IWYU pragma private; include "GlobalNamespace/FakeMirrorObjectsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FakeMirrorObjectsInstaller)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
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
class __FakeMirrorObjectsInstaller____c;
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
class __FakeMirrorObjectsInstaller____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FakeMirrorObjectsInstaller);
MARK_REF_PTR_T(::GlobalNamespace::__FakeMirrorObjectsInstaller____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FakeMirrorObjectsInstaller::<>c*
class CORDL_TYPE __FakeMirrorObjectsInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__FakeMirrorObjectsInstaller____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::Zenject::BindingId, bool>* __9__10_0;

  static inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* New_ctor();

  /// @brief Method <InstallBindings>b__10_0, addr 0x275bbd0, size 0x94, virtual false, abstract: false, final false
  inline bool _InstallBindings_b__10_0(::Zenject::BindingId t);

  /// @brief Method .ctor, addr 0x275bbc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::BindingId, bool>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::__FakeMirrorObjectsInstaller____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::Zenject::BindingId, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FakeMirrorObjectsInstaller____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FakeMirrorObjectsInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FakeMirrorObjectsInstaller____c(__FakeMirrorObjectsInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FakeMirrorObjectsInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FakeMirrorObjectsInstaller____c(__FakeMirrorObjectsInstaller____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FakeMirrorObjectsInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FakeMirrorObjectsInstaller
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FakeMirrorObjectsInstaller*
class CORDL_TYPE FakeMirrorObjectsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using __c = ::GlobalNamespace::__FakeMirrorObjectsInstaller____c;

  /// @brief Field _graphicSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicSettings, put = __cordl_internal_set__graphicSettings))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicSettings;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBombNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredBombNoteControllerPrefab))::UnityW<::GlobalNamespace::MirroredBombNoteController> _mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredBurstSliderGameNoteControllerPrefab))::UnityW<::GlobalNamespace::MirroredGameNoteController> _mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab,
               put = __cordl_internal_set__mirroredBurstSliderHeadGameNoteControllerPrefab))::UnityW<::GlobalNamespace::MirroredGameNoteController> _mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredGameNoteControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredGameNoteControllerPrefab,
                      put = __cordl_internal_set__mirroredGameNoteControllerPrefab))::UnityW<::GlobalNamespace::MirroredGameNoteController> _mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredObstacleControllerPrefab,
                      put = __cordl_internal_set__mirroredObstacleControllerPrefab))::UnityW<::GlobalNamespace::MirroredObstacleController> _mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredSliderControllerPrefab,
                      put = __cordl_internal_set__mirroredSliderControllerPrefab))::UnityW<::GlobalNamespace::MirroredSliderController> _mirroredSliderControllerPrefab;

  __declspec(property(get = get_mirroredGameNoteControllerPrefab))::UnityW<::GlobalNamespace::MirroredGameNoteController> mirroredGameNoteControllerPrefab;

  /// @brief Method InstallBindings, addr 0x275b640, size 0x51c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FakeMirrorObjectsInstaller* New_ctor();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicSettings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicSettings() const;

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

  constexpr void __cordl_internal_set__graphicSettings(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr void __cordl_internal_set__mirroredBombNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredBombNoteController> value);

  constexpr void __cordl_internal_set__mirroredBurstSliderGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredBurstSliderHeadGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value);

  constexpr void __cordl_internal_set__mirroredObstacleControllerPrefab(::UnityW<::GlobalNamespace::MirroredObstacleController> value);

  constexpr void __cordl_internal_set__mirroredSliderControllerPrefab(::UnityW<::GlobalNamespace::MirroredSliderController> value);

  /// @brief Method .ctor, addr 0x275bb5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mirroredGameNoteControllerPrefab, addr 0x275b638, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _mirroredGameNoteControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredGameNoteController> ____mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredBombNoteController> ____mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredObstacleController> ____mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirroredSliderController> ____mirroredSliderControllerPrefab;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _graphicSettings, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorObjectsInstaller, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredGameNoteControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBurstSliderHeadGameNoteControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBurstSliderGameNoteControllerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredBombNoteControllerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredObstacleControllerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirroredSliderControllerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____mirrorRendererGraphicsSettingsPresets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorObjectsInstaller, ____graphicSettings) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller*, "", "FakeMirrorObjectsInstaller");
NEED_NO_BOX(::GlobalNamespace::__FakeMirrorObjectsInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FakeMirrorObjectsInstaller____c*, "", "FakeMirrorObjectsInstaller/<>c");
