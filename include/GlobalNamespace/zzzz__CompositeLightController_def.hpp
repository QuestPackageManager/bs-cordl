#pragma once
// IWYU pragma private; include "GlobalNamespace/CompositeLightController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeLightController)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class CompositeLayoutBase;
}
namespace GlobalNamespace {
class CompositeLightControllerSet;
}
namespace GlobalNamespace {
class CompositeLightController_AxisTargetRegistration;
}
namespace GlobalNamespace {
class CompositeLightController___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class CompositeLightController___c__DisplayClass21_1;
}
namespace GlobalNamespace {
struct CompositeModificationFlags;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class FloatFxEventHandler;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class LightColorEventHandler;
}
namespace GlobalNamespace {
class LightGroupTranslationLimits;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
namespace GlobalNamespace {
class LightRotationEventHandler;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace GlobalNamespace {
class LightTranslationEventHandler;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLightController;
}
namespace GlobalNamespace {
class CompositeLightController_AxisTargetRegistration;
}
namespace GlobalNamespace {
class CompositeLightController___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class CompositeLightController___c__DisplayClass21_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeLightController*);
MARK_REF_T(::GlobalNamespace::CompositeLightController_AxisTargetRegistration*);
MARK_REF_T(::GlobalNamespace::CompositeLightController___c__DisplayClass21_0*);
MARK_REF_T(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightController*, "", "CompositeLightController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightController_AxisTargetRegistration*, "", "CompositeLightController/AxisTargetRegistration");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightController___c__DisplayClass21_0*, "", "CompositeLightController/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1*, "", "CompositeLightController/<>c__DisplayClass21_1");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightController/AxisTargetRegistration
class CORDL_TYPE CompositeLightController_AxisTargetRegistration : public ::System::Object {
public:
  // Declarations
  /// @brief Field subtypeIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_subtypeIds, put = __cordl_internal_set_subtypeIds)) ::System::Collections::Generic::List_1<int32_t>* subtypeIds;

  /// @brief Field xTransform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xTransform, put = __cordl_internal_set_xTransform)) ::UnityW<::UnityEngine::Transform> xTransform;

  /// @brief Field yTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_yTransform, put = __cordl_internal_set_yTransform)) ::UnityW<::UnityEngine::Transform> yTransform;

  /// @brief Field zTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_zTransform, put = __cordl_internal_set_zTransform)) ::UnityW<::UnityEngine::Transform> zTransform;

  /// @brief Method AssignAxis, addr 0x5daa8f8, size 0x30, virtual false, abstract: false, final false
  inline void AssignAxis(::GlobalNamespace::LightAxis axis, ::UnityEngine::Transform* target);

  static inline ::GlobalNamespace::CompositeLightController_AxisTargetRegistration* New_ctor();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_subtypeIds() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_subtypeIds();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_xTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_xTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_yTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_yTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zTransform();

  constexpr void __cordl_internal_set_subtypeIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5daa884, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightController_AxisTargetRegistration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController_AxisTargetRegistration", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightController_AxisTargetRegistration(CompositeLightController_AxisTargetRegistration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController_AxisTargetRegistration", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightController_AxisTargetRegistration(CompositeLightController_AxisTargetRegistration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5941 };

  /// @brief Field xTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___xTransform;

  /// @brief Field yTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___yTransform;

  /// @brief Field zTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zTransform;

  /// @brief Field subtypeIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___subtypeIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightController_AxisTargetRegistration, ___xTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController_AxisTargetRegistration, ___yTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController_AxisTargetRegistration, ___zTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController_AxisTargetRegistration, ___subtypeIds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightController_AxisTargetRegistration) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightController/<>c__DisplayClass21_0
class CORDL_TYPE CompositeLightController___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  static inline ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0* New_ctor();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr void __cordl_internal_set_groupId(int32_t value);

  /// @brief Method .ctor, addr 0x5dac4b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightController___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightController___c__DisplayClass21_0(CompositeLightController___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightController___c__DisplayClass21_0(CompositeLightController___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5942 };

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_0, ___groupId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies FloatFxGroupEffectTarget, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightController/<>c__DisplayClass21_1
class CORDL_TYPE CompositeLightController___c__DisplayClass21_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0* CS$__8__locals1;

  /// @brief Field bucketTargets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bucketTargets, put = __cordl_internal_set_bucketTargets)) ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> bucketTargets;

  /// @brief Field elementId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  static inline ::GlobalNamespace::CompositeLightController___c__DisplayClass21_1* New_ctor();

  /// @brief Method <RegisterFloatFxCallbacks>b__0, addr 0x5dae000, size 0xe0, virtual false, abstract: false, final false
  inline void _RegisterFloatFxCallbacks_b__0(float_t value);

  constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& __cordl_internal_get_bucketTargets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& __cordl_internal_get_bucketTargets();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CompositeLightController___c__DisplayClass21_0* value);

  constexpr void __cordl_internal_set_bucketTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  /// @brief Method .ctor, addr 0x5dac4b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightController___c__DisplayClass21_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController___c__DisplayClass21_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightController___c__DisplayClass21_1(CompositeLightController___c__DisplayClass21_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController___c__DisplayClass21_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightController___c__DisplayClass21_1(CompositeLightController___c__DisplayClass21_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5943 };

  /// @brief Field bucketTargets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> ___bucketTargets;

  /// @brief Field elementId, offset: 0x18, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1, ___bucketTargets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1, ___elementId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightController___c__DisplayClass21_1) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// [RequireComponent(typeof(CompositeColorGroup))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightController
class CORDL_TYPE CompositeLightController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AxisTargetRegistration = ::GlobalNamespace::CompositeLightController_AxisTargetRegistration;

  using __c__DisplayClass21_0 = ::GlobalNamespace::CompositeLightController___c__DisplayClass21_0;

  using __c__DisplayClass21_1 = ::GlobalNamespace::CompositeLightController___c__DisplayClass21_1;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper,
                      put = __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _colorHandlersBySet, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorHandlersBySet, put = __cordl_internal_set__colorHandlersBySet)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>* _colorHandlersBySet;

  /// @brief Field _colorManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _floatFxHandlersBySet, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxHandlersBySet, put = __cordl_internal_set__floatFxHandlersBySet)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* _floatFxHandlersBySet;

  /// @brief Field _layout, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__layout, put = __cordl_internal_set__layout)) ::GlobalNamespace::CompositeLayoutBase* _layout;

  /// @brief Field _registeredCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__registeredCallbacks,
                      put = __cordl_internal_set__registeredCallbacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* _registeredCallbacks;

  /// @brief Field _rotationHandlersBySet, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationHandlersBySet, put = __cordl_internal_set__rotationHandlersBySet)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* _rotationHandlersBySet;

  /// @brief Field _sets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sets, put = __cordl_internal_set__sets)) ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* _sets;

  /// @brief Field _translationHandlersBySet, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__translationHandlersBySet, put = __cordl_internal_set__translationHandlersBySet)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* _translationHandlersBySet;

  __declspec(property(get = get_layout)) ::GlobalNamespace::CompositeLayoutBase* layout;

  __declspec(property(get = get_sets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CompositeLightControllerSet*>* sets;

  /// @brief Method CollectAxisTargets, addr 0x5daa5dc, size 0x2a8, virtual false, abstract: false, final false
  static inline void
  CollectAxisTargets(::ArrayW<::UnityEngine::Transform*> axisTargets, ::GlobalNamespace::LightAxis axis, int32_t groupId, bool isRotation,
                     ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::GlobalNamespace::CompositeLightController_AxisTargetRegistration*>* registrationsByTarget);

  /// @brief Method HandleColorBoostBeatmapEvent, addr 0x5dad8ac, size 0x2dc, virtual false, abstract: false, final false
  inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);

  /// @brief Method HandleColorTargetsChangeBeatmapEvent, addr 0x5dad254, size 0x210, virtual false, abstract: false, final false
  inline void HandleColorTargetsChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* data);

  /// @brief Method HandleFloatFxChangeBeatmapEvent, addr 0x5dad040, size 0x15c, virtual false, abstract: false, final false
  inline void HandleFloatFxChangeBeatmapEvent(::GlobalNamespace::FloatFxBeatmapEventData* data);

  /// @brief Method HandleRotationChangeBeatmapEvent, addr 0x5dacca4, size 0x15c, virtual false, abstract: false, final false
  inline void HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData* data);

  /// @brief Method HandleTranslationChangeBeatmapEvent, addr 0x5dace48, size 0x15c, virtual false, abstract: false, final false
  inline void HandleTranslationChangeBeatmapEvent(::GlobalNamespace::LightTranslationBeatmapEventData* data);

  /// [Inject]
  /// [UsedImplicitly]
  /// @brief Method Initialize, addr 0x5da824c, size 0x770, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::ColorManager* colorManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                         ::GlobalNamespace::LightWithIdManager* lightManager, ::GlobalNamespace::IBpmController* bpmController);

  static inline ::GlobalNamespace::CompositeLightController* New_ctor();

  /// @brief Method OnDestroy, addr 0x5da9b08, size 0x8e0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RegisterColorBoostCallbacks, addr 0x5da9a50, size 0xb8, virtual false, abstract: false, final false
  inline void RegisterColorBoostCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method RegisterColorTargetsCallbacks, addr 0x5da98a0, size 0x1b0, virtual false, abstract: false, final false
  inline void
  RegisterColorTargetsCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::CompositeLightControllerSet* set,
                                ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::LightWithIdManager* lightManager, ::GlobalNamespace::IBpmController* bpmController,
                                ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>* handlersByElementId);

  /// @brief Method RegisterFloatFxCallbacks, addr 0x5da94d4, size 0x3cc, virtual false, abstract: false, final false
  inline void RegisterFloatFxCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::CompositeLightControllerSet* set,
                                       ::Tweening::SongTimeTweeningManager* tweeningManager, ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>* handlers);

  /// @brief Method RegisterOneColorHandler, addr 0x5dac5a0, size 0x3d0, virtual false, abstract: false, final false
  inline void RegisterOneColorHandler(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                      ::GlobalNamespace::LightWithIdManager* lightManager, ::GlobalNamespace::IBpmController* bpmController,
                                      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>* handlersByElementId,
                                      int32_t groupId, int32_t elementId);

  /// @brief Method RegisterRotationCallbacks, addr 0x5da89bc, size 0x56c, virtual false, abstract: false, final false
  inline void RegisterRotationCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::CompositeLightControllerSet* set,
                                        ::GlobalNamespace::CompositeModificationFlags flags, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                        ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>* handlers);

  /// @brief Method RegisterTranslationCallbacks, addr 0x5da8f28, size 0x5ac, virtual false, abstract: false, final false
  inline void RegisterTranslationCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::CompositeLightControllerSet* set,
                                           ::GlobalNamespace::CompositeModificationFlags flags, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                           ::GlobalNamespace::LightGroupTranslationLimits* limits,
                                           ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>* handlers);

  /// @brief Method ResolveColor, addr 0x5daa5a8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ResolveColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__colorBoostBeatmapDataCallbackWrapper();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>* const&
  __cordl_internal_get__colorHandlersBySet() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>*&
  __cordl_internal_get__colorHandlersBySet();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* const&
  __cordl_internal_get__floatFxHandlersBySet() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>*& __cordl_internal_get__floatFxHandlersBySet();

  constexpr ::GlobalNamespace::CompositeLayoutBase* const& __cordl_internal_get__layout() const;

  constexpr ::GlobalNamespace::CompositeLayoutBase*& __cordl_internal_get__layout();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* const& __cordl_internal_get__registeredCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*& __cordl_internal_get__registeredCallbacks();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* const&
  __cordl_internal_get__rotationHandlersBySet() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>*&
  __cordl_internal_get__rotationHandlersBySet();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* const& __cordl_internal_get__sets() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>*& __cordl_internal_get__sets();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* const&
  __cordl_internal_get__translationHandlersBySet() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>*&
  __cordl_internal_get__translationHandlersBySet();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__colorHandlersBySet(
      ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void
  __cordl_internal_set__floatFxHandlersBySet(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* value);

  constexpr void __cordl_internal_set__layout(::GlobalNamespace::CompositeLayoutBase* value);

  constexpr void __cordl_internal_set__registeredCallbacks(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* value);

  constexpr void
  __cordl_internal_set__rotationHandlersBySet(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* value);

  constexpr void __cordl_internal_set__sets(::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* value);

  constexpr void __cordl_internal_set__translationHandlersBySet(
      ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* value);

  /// @brief Method .ctor, addr 0x5dadce8, size 0x27c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_layout, addr 0x5da8244, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CompositeLayoutBase* get_layout();

  /// @brief Method get_sets, addr 0x5da823c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CompositeLightControllerSet*>* get_sets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightController(CompositeLightController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightController", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightController(CompositeLightController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5944 };

  /// [SerializeField]
  /// @brief Field _sets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* ____sets;

  /// [SerializeReference]
  /// @brief Field _layout, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CompositeLayoutBase* ____layout;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _registeredCallbacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* ____registeredCallbacks;

  /// @brief Field _rotationHandlersBySet, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* ____rotationHandlersBySet;

  /// @brief Field _translationHandlersBySet, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* ____translationHandlersBySet;

  /// @brief Field _floatFxHandlersBySet, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* ____floatFxHandlersBySet;

  /// @brief Field _colorHandlersBySet, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>*
      ____colorHandlersBySet;

  /// @brief Field _colorBoostBeatmapDataCallbackWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____colorBoostBeatmapDataCallbackWrapper;

  /// @brief Field _colorManager, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____sets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____layout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____registeredCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____rotationHandlersBySet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____translationHandlersBySet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____floatFxHandlersBySet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____colorHandlersBySet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____colorBoostBeatmapDataCallbackWrapper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightController, ____colorManager) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightController) == 0x70, "Size mismatch!");

} // namespace GlobalNamespace
