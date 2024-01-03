#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightColorGroupEffectManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class LightColorGroupEffect;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroupEffectManager);
// Type: ::LightColorGroupEffectManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4924))
// CS Name: ::LightColorGroupEffectManager*
class CORDL_TYPE LightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroups, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroups, put = __set__lightGroups))::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> _lightGroups;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0x30, size 0x8
  __declspec(property(get = __get__colorBoostBeatmapDataCallbackWrapper,
                      put = __set__colorBoostBeatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _lightColorGroupEffects, offset 0x38, size 0x8
  __declspec(property(get = __get__lightColorGroupEffects,
                      put = __set__lightColorGroupEffects))::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>* _lightColorGroupEffects;

  __declspec(property(get = get_lightGroups))::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup*>* lightGroups;

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroups();

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroups() const;

  constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr void __set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>*& __get__lightColorGroupEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>*> const& __get__lightColorGroupEffects() const;

  constexpr void __set__lightColorGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>* value);

  /// @brief Method get_lightGroups, addr 0x23a8d80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup*>* get_lightGroups();

  /// @brief Method Start, addr 0x23a8d88, size 0x2a0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23a9028, size 0x15c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleColorBoostBeatmapEvent, addr 0x23a9184, size 0x15c, virtual false, abstract: false, final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);

  static inline ::GlobalNamespace::LightColorGroupEffectManager* New_ctor();

  /// @brief Method .ctor, addr 0x23a92e0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroupEffectManager(LightColorGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroupEffectManager(LightColorGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroupEffectManager();

public:
  /// @brief Field _lightGroups, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> ____lightGroups;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _lightColorGroupEffects, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>* ____lightColorGroupEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroupEffectManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffectManager, ____lightGroups) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffectManager, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffectManager, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffectManager, ____colorBoostBeatmapDataCallbackWrapper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroupEffectManager, ____lightColorGroupEffects) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffectManager*, "", "LightColorGroupEffectManager");
