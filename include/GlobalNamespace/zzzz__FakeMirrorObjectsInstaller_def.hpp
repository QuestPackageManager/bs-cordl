#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FakeMirrorObjectsInstaller)
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class __FakeMirrorObjectsInstaller____c;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace Zenject {
struct BindingId;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5391))
// CS Name: ::FakeMirrorObjectsInstaller::<>c*
class CORDL_TYPE __FakeMirrorObjectsInstaller____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__FakeMirrorObjectsInstaller____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::Zenject::BindingId, bool>* __9__11_0;

  static inline void setStaticF___9(::GlobalNamespace::__FakeMirrorObjectsInstaller____c* value);

  static inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* getStaticF___9();

  static inline void setStaticF___9__11_0(::System::Func_2<::Zenject::BindingId, bool>* value);

  static inline ::System::Func_2<::Zenject::BindingId, bool>* getStaticF___9__11_0();

  static inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* New_ctor();

  /// @brief Method .ctor addr 0x226fea0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InstallBindings>b__11_0 addr 0x226fea8 size 0x94 virtual false final false
  inline bool _InstallBindings_b__11_0(::Zenject::BindingId t);

  // Ctor Parameters [CppParam { name: "", ty: "__FakeMirrorObjectsInstaller____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FakeMirrorObjectsInstaller____c(__FakeMirrorObjectsInstaller____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FakeMirrorObjectsInstaller____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FakeMirrorObjectsInstaller____c(__FakeMirrorObjectsInstaller____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FakeMirrorObjectsInstaller____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FakeMirrorObjectsInstaller____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FakeMirrorObjectsInstaller
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5392))
// CS Name: ::FakeMirrorObjectsInstaller*
class CORDL_TYPE FakeMirrorObjectsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using __c = ::GlobalNamespace::__FakeMirrorObjectsInstaller____c;

  /// @brief Field _mirroredGameNoteControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__mirroredGameNoteControllerPrefab, put = __set__mirroredGameNoteControllerPrefab))::GlobalNamespace::MirroredGameNoteController* _mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__mirroredBurstSliderHeadGameNoteControllerPrefab,
                      put = __set__mirroredBurstSliderHeadGameNoteControllerPrefab))::GlobalNamespace::MirroredGameNoteController* _mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__mirroredBurstSliderGameNoteControllerPrefab,
                      put = __set__mirroredBurstSliderGameNoteControllerPrefab))::GlobalNamespace::MirroredGameNoteController* _mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderFillControllerPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__mirroredBurstSliderFillControllerPrefab,
                      put = __set__mirroredBurstSliderFillControllerPrefab))::GlobalNamespace::MirroredGameNoteController* _mirroredBurstSliderFillControllerPrefab;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__mirroredBombNoteControllerPrefab, put = __set__mirroredBombNoteControllerPrefab))::GlobalNamespace::MirroredBombNoteController* _mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__mirroredObstacleControllerPrefab, put = __set__mirroredObstacleControllerPrefab))::GlobalNamespace::MirroredObstacleController* _mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __get__mirroredSliderControllerPrefab, put = __set__mirroredSliderControllerPrefab))::GlobalNamespace::MirroredSliderController* _mirroredSliderControllerPrefab;

  /// @brief Field _mirrorGraphicsSettings, offset 0x58, size 0x8
  __declspec(property(get = __get__mirrorGraphicsSettings, put = __set__mirrorGraphicsSettings))::GlobalNamespace::IntSO* _mirrorGraphicsSettings;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x60, size 0x8
  __declspec(property(get = __get__mirrorRendererGraphicsSettingsPresets,
                      put = __set__mirrorRendererGraphicsSettingsPresets))::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* _mirrorRendererGraphicsSettingsPresets;

  __declspec(property(get = get_mirroredGameNoteControllerPrefab))::GlobalNamespace::MirroredGameNoteController* mirroredGameNoteControllerPrefab;

  constexpr ::GlobalNamespace::MirroredGameNoteController*& __get__mirroredGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& __get__mirroredGameNoteControllerPrefab() const;

  constexpr void __set__mirroredGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value);

  constexpr ::GlobalNamespace::MirroredGameNoteController*& __get__mirroredBurstSliderHeadGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& __get__mirroredBurstSliderHeadGameNoteControllerPrefab() const;

  constexpr void __set__mirroredBurstSliderHeadGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value);

  constexpr ::GlobalNamespace::MirroredGameNoteController*& __get__mirroredBurstSliderGameNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& __get__mirroredBurstSliderGameNoteControllerPrefab() const;

  constexpr void __set__mirroredBurstSliderGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value);

  constexpr ::GlobalNamespace::MirroredGameNoteController*& __get__mirroredBurstSliderFillControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& __get__mirroredBurstSliderFillControllerPrefab() const;

  constexpr void __set__mirroredBurstSliderFillControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value);

  constexpr ::GlobalNamespace::MirroredBombNoteController*& __get__mirroredBombNoteControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredBombNoteController*> const& __get__mirroredBombNoteControllerPrefab() const;

  constexpr void __set__mirroredBombNoteControllerPrefab(::GlobalNamespace::MirroredBombNoteController* value);

  constexpr ::GlobalNamespace::MirroredObstacleController*& __get__mirroredObstacleControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredObstacleController*> const& __get__mirroredObstacleControllerPrefab() const;

  constexpr void __set__mirroredObstacleControllerPrefab(::GlobalNamespace::MirroredObstacleController* value);

  constexpr ::GlobalNamespace::MirroredSliderController*& __get__mirroredSliderControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredSliderController*> const& __get__mirroredSliderControllerPrefab() const;

  constexpr void __set__mirroredSliderControllerPrefab(::GlobalNamespace::MirroredSliderController* value);

  constexpr ::GlobalNamespace::IntSO*& __get__mirrorGraphicsSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& __get__mirrorGraphicsSettings() const;

  constexpr void __set__mirrorGraphicsSettings(::GlobalNamespace::IntSO* value);

  constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*& __get__mirrorRendererGraphicsSettingsPresets();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> const& __get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr void __set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* value);

  /// @brief Method get_mirroredGameNoteControllerPrefab addr 0x226f8ac size 0x8 virtual false final false
  inline ::GlobalNamespace::MirroredGameNoteController* get_mirroredGameNoteControllerPrefab();

  /// @brief Method InstallBindings addr 0x226f8b4 size 0x580 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FakeMirrorObjectsInstaller* New_ctor();

  /// @brief Method .ctor addr 0x226fe34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorObjectsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FakeMirrorObjectsInstaller(FakeMirrorObjectsInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeMirrorObjectsInstaller();

public:
  /// @brief Field _mirroredGameNoteControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MirroredGameNoteController* ____mirroredGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderHeadGameNoteControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MirroredGameNoteController* ____mirroredBurstSliderHeadGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderGameNoteControllerPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MirroredGameNoteController* ____mirroredBurstSliderGameNoteControllerPrefab;

  /// @brief Field _mirroredBurstSliderFillControllerPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MirroredGameNoteController* ____mirroredBurstSliderFillControllerPrefab;

  /// @brief Field _mirroredBombNoteControllerPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MirroredBombNoteController* ____mirroredBombNoteControllerPrefab;

  /// @brief Field _mirroredObstacleControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MirroredObstacleController* ____mirroredObstacleControllerPrefab;

  /// @brief Field _mirroredSliderControllerPrefab, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MirroredSliderController* ____mirroredSliderControllerPrefab;

  /// @brief Field _mirrorGraphicsSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IntSO* ____mirrorGraphicsSettings;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* ____mirrorRendererGraphicsSettingsPresets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorObjectsInstaller, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorObjectsInstaller*, "", "FakeMirrorObjectsInstaller");
NEED_NO_BOX(::GlobalNamespace::__FakeMirrorObjectsInstaller____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FakeMirrorObjectsInstaller____c*, "", "FakeMirrorObjectsInstaller/<>c");
