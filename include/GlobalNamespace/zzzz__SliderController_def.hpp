#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderController)
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SliderMeshController;
}
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class ISliderTailDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
class SliderIntensityEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderMovement;
}
namespace GlobalNamespace {
class __SliderController___DissolveCoroutine_d__70;
}
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
class __SliderController__Pool__Short;
}
namespace GlobalNamespace {
class __SliderController__Pool__Medium;
}
namespace Zenject {
template <typename TValue> class MonoMemoryPool_1;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __SliderController__Pool__Long;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SliderController__LengthType;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class __SliderController__Pool;
}
namespace GlobalNamespace {
class __SliderController__Pool__Long;
}
namespace GlobalNamespace {
class __SliderController__Pool__Medium;
}
namespace GlobalNamespace {
class __SliderController__Pool__Short;
}
namespace GlobalNamespace {
class __SliderController___DissolveCoroutine_d__70;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SliderController__LengthType);
MARK_REF_PTR_T(::GlobalNamespace::SliderController);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Long);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Medium);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController__Pool__Short);
MARK_REF_PTR_T(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70);
// Type: ::LengthType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4805))
// CS Name: ::SliderController::LengthType
struct CORDL_TYPE __SliderController__LengthType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SliderController__LengthType_Unwrapped
  enum struct ____SliderController__LengthType_Unwrapped : int32_t {
    __E_Short = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_Long = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SliderController__LengthType_Unwrapped() const noexcept {
    return static_cast<____SliderController__LengthType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SliderController__LengthType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__LengthType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Short value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SliderController__LengthType const Short;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SliderController__LengthType const Medium;

  /// @brief Field Long value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SliderController__LengthType const Long;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__LengthType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__LengthType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(4805)), TypeDefinitionIndex(TypeDefinitionIndex(4812))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4811))
// CS Name: ::SliderController*
class CORDL_TYPE SliderController : public ::GlobalNamespace::SliderControllerBase {
public:
  // Declarations
  using _DissolveCoroutine_d__70 = ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70;

  using Pool = ::GlobalNamespace::__SliderController__Pool;

  using LengthType = ::GlobalNamespace::__SliderController__LengthType;

  /// @brief Field _sliderIntensityEffect, offset 0x30, size 0x8
  __declspec(property(get = __get__sliderIntensityEffect, put = __set__sliderIntensityEffect))::GlobalNamespace::SliderIntensityEffect* _sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset 0x38, size 0x8
  __declspec(property(get = __get__sliderMeshController, put = __set__sliderMeshController))::GlobalNamespace::SliderMeshController* _sliderMeshController;

  /// @brief Field _sliderMovement, offset 0x40, size 0x8
  __declspec(property(get = __get__sliderMovement, put = __set__sliderMovement))::GlobalNamespace::SliderMovement* _sliderMovement;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset 0x48, size 0x4
  __declspec(property(get = __get__closeInteractionSaberPosSmoothParam, put = __set__closeInteractionSaberPosSmoothParam)) float_t _closeInteractionSaberPosSmoothParam;

  /// @brief Field _beatmapObjectSpawnController, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _colorManager, offset 0x58, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _beatmapObjectManager, offset 0x60, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _saberManager, offset 0x68, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _sliderDidFinishMovement, offset 0x70, size 0x8
  __declspec(property(get = __get__sliderDidFinishMovement,
                      put = __set__sliderDidFinishMovement))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* _sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset 0x78, size 0x8
  __declspec(property(get = __get__sliderDidStartDissolving,
                      put = __set__sliderDidStartDissolving))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* _sliderDidStartDissolving;

  /// @brief Field _sliderDidDissolve, offset 0x80, size 0x8
  __declspec(property(get = __get__sliderDidDissolve, put = __set__sliderDidDissolve))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* _sliderDidDissolve;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset 0x88, size 0x8
  __declspec(property(get = __get__sliderHeadDidMovePastCutMark,
                      put = __set__sliderHeadDidMovePastCutMark))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* _sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderTailDidMovePastCutMark, offset 0x90, size 0x8
  __declspec(property(get = __get__sliderTailDidMovePastCutMark,
                      put = __set__sliderTailDidMovePastCutMark))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* _sliderTailDidMovePastCutMark;

  /// @brief Field _lengthType, offset 0x98, size 0x4
  __declspec(property(get = __get__lengthType, put = __set__lengthType))::GlobalNamespace::__SliderController__LengthType _lengthType;

  /// @brief Field _sliderData, offset 0xa0, size 0x8
  __declspec(property(get = __get__sliderData, put = __set__sliderData))::GlobalNamespace::SliderData* _sliderData;

  /// @brief Field _saber, offset 0xa8, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::Saber* _saber;

  /// @brief Field _headJumpOffsetY, offset 0xb0, size 0x4
  __declspec(property(get = __get__headJumpOffsetY, put = __set__headJumpOffsetY)) float_t _headJumpOffsetY;

  /// @brief Field _sliderDuration, offset 0xb4, size 0x4
  __declspec(property(get = __get__sliderDuration, put = __set__sliderDuration)) float_t _sliderDuration;

  /// @brief Field _initColor, offset 0xb8, size 0x10
  __declspec(property(get = __get__initColor, put = __set__initColor))::UnityEngine::Color _initColor;

  /// @brief Field _attractingSaber, offset 0xc8, size 0x1
  __declspec(property(get = __get__attractingSaber, put = __set__attractingSaber)) bool _attractingSaber;

  /// @brief Field _randomValue, offset 0xcc, size 0x4
  __declspec(property(get = __get__randomValue, put = __set__randomValue)) float_t _randomValue;

  /// @brief Field _zDistanceBetweenNotes, offset 0xd0, size 0x4
  __declspec(property(get = __get__zDistanceBetweenNotes, put = __set__zDistanceBetweenNotes)) float_t _zDistanceBetweenNotes;

  /// @brief Field _jumpDistance, offset 0xd4, size 0x4
  __declspec(property(get = __get__jumpDistance, put = __set__jumpDistance)) float_t _jumpDistance;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset 0xd8, size 0x8
  __declspec(property(get = __get__closeSmoothedSaberInteractionPos, put = __set__closeSmoothedSaberInteractionPos))::GlobalNamespace::FixedUpdateVector3SmoothValue* _closeSmoothedSaberInteractionPos;

  __declspec(property(get = get_sliderDidFinishJumpEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* sliderDidFinishJumpEvent;

  __declspec(property(get = get_sliderDidStartDissolvingEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* sliderDidStartDissolvingEvent;

  __declspec(property(get = get_sliderDidDissolveEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* sliderDidDissolveEvent;

  __declspec(property(get = get_sliderHeadDidMovePastCutMark))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* sliderHeadDidMovePastCutMark;

  __declspec(property(get = get_sliderTailDidMovePastCutMark))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* sliderTailDidMovePastCutMark;

  __declspec(property(get = get_lengthType))::GlobalNamespace::__SliderController__LengthType lengthType;

  __declspec(property(get = get_sliderData))::GlobalNamespace::SliderData* sliderData;

  __declspec(property(get = get_saberInteractionParam)) float_t saberInteractionParam;

  __declspec(property(get = get_sliderMeshController))::GlobalNamespace::SliderMeshController* sliderMeshController;

  __declspec(property(get = get_sliderMovement))::GlobalNamespace::SliderMovement* sliderMovement;

  __declspec(property(get = get_initColor))::UnityEngine::Color initColor;

  __declspec(property(get = get_randomValue)) float_t randomValue;

  __declspec(property(get = get_zDistanceBetweenNotes)) float_t zDistanceBetweenNotes;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_headJumpOffsetY)) float_t headJumpOffsetY;

  __declspec(property(get = get_sliderDuration)) float_t sliderDuration;

  __declspec(property(get = get_closeSmoothedSaberInteractionPos))::GlobalNamespace::FixedUpdateVector3SmoothValue* closeSmoothedSaberInteractionPos;

  __declspec(property(get = get_sliderIntensityEffect))::GlobalNamespace::SliderIntensityEffect* sliderIntensityEffect;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  constexpr ::GlobalNamespace::SliderIntensityEffect*& __get__sliderIntensityEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderIntensityEffect*> const& __get__sliderIntensityEffect() const;

  constexpr void __set__sliderIntensityEffect(::GlobalNamespace::SliderIntensityEffect* value);

  constexpr ::GlobalNamespace::SliderMeshController*& __get__sliderMeshController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshController*> const& __get__sliderMeshController() const;

  constexpr void __set__sliderMeshController(::GlobalNamespace::SliderMeshController* value);

  constexpr ::GlobalNamespace::SliderMovement*& __get__sliderMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMovement*> const& __get__sliderMovement() const;

  constexpr void __set__sliderMovement(::GlobalNamespace::SliderMovement* value);

  constexpr float_t& __get__closeInteractionSaberPosSmoothParam();

  constexpr float_t const& __get__closeInteractionSaberPosSmoothParam() const;

  constexpr void __set__closeInteractionSaberPosSmoothParam(float_t value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& __get__sliderDidFinishMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*> const& __get__sliderDidFinishMovement() const;

  constexpr void __set__sliderDidFinishMovement(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& __get__sliderDidStartDissolving();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*> const& __get__sliderDidStartDissolving() const;

  constexpr void __set__sliderDidStartDissolving(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& __get__sliderDidDissolve();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*> const& __get__sliderDidDissolve() const;

  constexpr void __set__sliderDidDissolve(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& __get__sliderHeadDidMovePastCutMark();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*> const& __get__sliderHeadDidMovePastCutMark() const;

  constexpr void __set__sliderHeadDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& __get__sliderTailDidMovePastCutMark();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*> const& __get__sliderTailDidMovePastCutMark() const;

  constexpr void __set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value);

  constexpr ::GlobalNamespace::__SliderController__LengthType& __get__lengthType();

  constexpr ::GlobalNamespace::__SliderController__LengthType const& __get__lengthType() const;

  constexpr void __set__lengthType(::GlobalNamespace::__SliderController__LengthType value);

  constexpr ::GlobalNamespace::SliderData*& __get__sliderData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& __get__sliderData() const;

  constexpr void __set__sliderData(::GlobalNamespace::SliderData* value);

  constexpr ::GlobalNamespace::Saber*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::Saber* value);

  constexpr float_t& __get__headJumpOffsetY();

  constexpr float_t const& __get__headJumpOffsetY() const;

  constexpr void __set__headJumpOffsetY(float_t value);

  constexpr float_t& __get__sliderDuration();

  constexpr float_t const& __get__sliderDuration() const;

  constexpr void __set__sliderDuration(float_t value);

  constexpr ::UnityEngine::Color& __get__initColor();

  constexpr ::UnityEngine::Color const& __get__initColor() const;

  constexpr void __set__initColor(::UnityEngine::Color value);

  constexpr bool& __get__attractingSaber();

  constexpr bool const& __get__attractingSaber() const;

  constexpr void __set__attractingSaber(bool value);

  constexpr float_t& __get__randomValue();

  constexpr float_t const& __get__randomValue() const;

  constexpr void __set__randomValue(float_t value);

  constexpr float_t& __get__zDistanceBetweenNotes();

  constexpr float_t const& __get__zDistanceBetweenNotes() const;

  constexpr void __set__zDistanceBetweenNotes(float_t value);

  constexpr float_t& __get__jumpDistance();

  constexpr float_t const& __get__jumpDistance() const;

  constexpr void __set__jumpDistance(float_t value);

  constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& __get__closeSmoothedSaberInteractionPos();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FixedUpdateVector3SmoothValue*> const& __get__closeSmoothedSaberInteractionPos() const;

  constexpr void __set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value);

  /// @brief Method get_sliderDidFinishJumpEvent, addr 0x238fa74, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* get_sliderDidFinishJumpEvent();

  /// @brief Method get_sliderDidStartDissolvingEvent, addr 0x238fa7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* get_sliderDidStartDissolvingEvent();

  /// @brief Method get_sliderDidDissolveEvent, addr 0x238fa84, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* get_sliderDidDissolveEvent();

  /// @brief Method get_sliderHeadDidMovePastCutMark, addr 0x238fa8c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* get_sliderHeadDidMovePastCutMark();

  /// @brief Method get_sliderTailDidMovePastCutMark, addr 0x238fa94, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* get_sliderTailDidMovePastCutMark();

  /// @brief Method get_lengthType, addr 0x238fa9c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SliderController__LengthType get_lengthType();

  /// @brief Method get_sliderData, addr 0x238faa4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderData* get_sliderData();

  /// @brief Method get_saberInteractionParam, addr 0x238faac, size 0x40, virtual false, abstract: false, final false
  inline float_t get_saberInteractionParam();

  /// @brief Method get_sliderMeshController, addr 0x238fb14, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderMeshController* get_sliderMeshController();

  /// @brief Method get_sliderMovement, addr 0x238fb1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderMovement* get_sliderMovement();

  /// @brief Method get_initColor, addr 0x238fb24, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_initColor();

  /// @brief Method get_randomValue, addr 0x238fb30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_randomValue();

  /// @brief Method get_zDistanceBetweenNotes, addr 0x238fb38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_zDistanceBetweenNotes();

  /// @brief Method get_jumpDistance, addr 0x238fb40, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpDistance();

  /// @brief Method get_headJumpOffsetY, addr 0x238fb48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headJumpOffsetY();

  /// @brief Method get_sliderDuration, addr 0x238fb50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sliderDuration();

  /// @brief Method get_closeSmoothedSaberInteractionPos, addr 0x238fb58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* get_closeSmoothedSaberInteractionPos();

  /// @brief Method get_sliderIntensityEffect, addr 0x238fb60, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderIntensityEffect* get_sliderIntensityEffect();

  /// @brief Method Init, addr 0x238fb68, size 0x3d0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__SliderController__LengthType lengthType, ::GlobalNamespace::SliderData* sliderData, float_t worldRotation, ::UnityEngine::Vector3 headNoteJumpStartPos,
                   ::UnityEngine::Vector3 tailNoteJumpStartPos, ::UnityEngine::Vector3 headNoteJumpEndPos, ::UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration,
                   float_t startNoteJumpGravity, float_t endNoteJumpGravity, float_t noteUniformScale);

  /// @brief Method Awake, addr 0x2390bf0, size 0x160, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x2390f24, size 0x150, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2391110, size 0x2a8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x2391628, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x23916a0, size 0x58, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method ManualUpdate, addr 0x239162c, size 0x74, virtual false, abstract: false, final false
  inline void ManualUpdate();

  /// @brief Method UpdateMaterialPropertyBlock, addr 0x2390ab0, size 0x118, virtual false, abstract: false, final false
  inline void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump);

  /// @brief Method DissolveCoroutine, addr 0x2391aa0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method Dissolve, addr 0x2391b40, size 0x60, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method Hide, addr 0x2391bc8, size 0x2c, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Pause, addr 0x2391bf4, size 0x10, virtual true, abstract: false, final true
  inline void Pause(bool pause);

  /// @brief Method IsNoteStartOfThisSlider, addr 0x2391c04, size 0xe8, virtual false, abstract: false, final false
  inline bool IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleMovementDidFinish, addr 0x2391cec, size 0x1d4, virtual false, abstract: false, final false
  inline void HandleMovementDidFinish();

  /// @brief Method HandleHeadDidMovePastCutMark, addr 0x2391ec0, size 0x1f0, virtual false, abstract: false, final false
  inline void HandleHeadDidMovePastCutMark();

  /// @brief Method HandleTailDidMovePastCutMark, addr 0x23920e0, size 0x1e0, virtual false, abstract: false, final false
  inline void HandleTailDidMovePastCutMark();

  /// @brief Method HandleNoteWasMissed, addr 0x23922c0, size 0x4c, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasCut, addr 0x239233c, size 0x80, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleFadeInDidStart, addr 0x23923bc, size 0x8, virtual false, abstract: false, final false
  inline void HandleFadeInDidStart();

  /// @brief Method SetSaberAttraction, addr 0x23909d4, size 0x88, virtual false, abstract: false, final false
  inline void SetSaberAttraction(bool saberAttraction);

  /// @brief Method GetSaberInteractionPoint, addr 0x2390a5c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSaberInteractionPoint(::GlobalNamespace::Saber* saber);

  static inline ::GlobalNamespace::SliderController* New_ctor();

  /// @brief Method .ctor, addr 0x239244c, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderController(SliderController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderController(SliderController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderController();

public:
  /// @brief Field _sliderIntensityEffect, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SliderIntensityEffect* ____sliderIntensityEffect;

  /// @brief Field _sliderMeshController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SliderMeshController* ____sliderMeshController;

  /// @brief Field _sliderMovement, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SliderMovement* ____sliderMovement;

  /// @brief Field _closeInteractionSaberPosSmoothParam, offset: 0x48, size: 0x4, def value: None
  float_t ____closeInteractionSaberPosSmoothParam;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _colorManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _beatmapObjectManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _saberManager, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _sliderDidFinishMovement, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* ____sliderDidFinishMovement;

  /// @brief Field _sliderDidStartDissolving, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* ____sliderDidStartDissolving;

  /// @brief Field _sliderDidDissolve, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* ____sliderDidDissolve;

  /// @brief Field _sliderHeadDidMovePastCutMark, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* ____sliderHeadDidMovePastCutMark;

  /// @brief Field _sliderTailDidMovePastCutMark, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* ____sliderTailDidMovePastCutMark;

  /// @brief Field _lengthType, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::__SliderController__LengthType ____lengthType;

  /// @brief Field _sliderData, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ____sliderData;

  /// @brief Field _saber, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____saber;

  /// @brief Field _headJumpOffsetY, offset: 0xb0, size: 0x4, def value: None
  float_t ____headJumpOffsetY;

  /// @brief Field _sliderDuration, offset: 0xb4, size: 0x4, def value: None
  float_t ____sliderDuration;

  /// @brief Field _initColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____initColor;

  /// @brief Field _attractingSaber, offset: 0xc8, size: 0x1, def value: None
  bool ____attractingSaber;

  /// @brief Field _randomValue, offset: 0xcc, size: 0x4, def value: None
  float_t ____randomValue;

  /// @brief Field _zDistanceBetweenNotes, offset: 0xd0, size: 0x4, def value: None
  float_t ____zDistanceBetweenNotes;

  /// @brief Field _jumpDistance, offset: 0xd4, size: 0x4, def value: None
  float_t ____jumpDistance;

  /// @brief Field _closeSmoothedSaberInteractionPos, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::FixedUpdateVector3SmoothValue* ____closeSmoothedSaberInteractionPos;

  /// @brief Field kSaberAttractPointNormalizedPosition offset 0xffffffff size 0x4
  static constexpr float_t kSaberAttractPointNormalizedPosition{ 0.7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderController, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderIntensityEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMeshController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderMovement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeInteractionSaberPosSmoothParam) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____beatmapObjectSpawnController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____colorManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____beatmapObjectManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saberManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidFinishMovement) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidStartDissolving) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDidDissolve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderHeadDidMovePastCutMark) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderTailDidMovePastCutMark) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____lengthType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____saber) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____headJumpOffsetY) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____sliderDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____initColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____attractingSaber) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____randomValue) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____zDistanceBetweenNotes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____jumpDistance) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderController, ____closeSmoothedSaberInteractionPos) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Short
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 393 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4811))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4806)) CS Name: ::SliderController::Pool::Short*
class CORDL_TYPE __SliderController__Pool__Short : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Short* New_ctor();

  /// @brief Method .ctor, addr 0x239271c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Short", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Short(__SliderController__Pool__Short&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Short", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Short(__SliderController__Pool__Short const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Short();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Short, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Medium
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 393 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4811))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4807)) CS Name: ::SliderController::Pool::Medium*
class CORDL_TYPE __SliderController__Pool__Medium : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Medium* New_ctor();

  /// @brief Method .ctor, addr 0x2392764, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Medium", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Medium(__SliderController__Pool__Medium&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Medium", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Medium(__SliderController__Pool__Medium const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Medium();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Medium, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Long
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), TypeDefinitionIndex(TypeDefinitionIndex(4811)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 393 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4808)) CS Name: ::SliderController::Pool::Long*
class CORDL_TYPE __SliderController__Pool__Long : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SliderController__Pool__Long* New_ctor();

  /// @brief Method .ctor, addr 0x23927ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Long", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool__Long(__SliderController__Pool__Long&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool__Long", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool__Long(__SliderController__Pool__Long const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool__Long();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool__Long, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4809))
// CS Name: ::SliderController::Pool*
class CORDL_TYPE __SliderController__Pool : public ::System::Object {
public:
  // Declarations
  using Long = ::GlobalNamespace::__SliderController__Pool__Long;

  using Medium = ::GlobalNamespace::__SliderController__Pool__Medium;

  using Short = ::GlobalNamespace::__SliderController__Pool__Short;

  /// @brief Field _shortPool, offset 0x10, size 0x8
  __declspec(property(get = __get__shortPool, put = __set__shortPool))::GlobalNamespace::__SliderController__Pool__Short* _shortPool;

  /// @brief Field _mediumPool, offset 0x18, size 0x8
  __declspec(property(get = __get__mediumPool, put = __set__mediumPool))::GlobalNamespace::__SliderController__Pool__Medium* _mediumPool;

  /// @brief Field _longPool, offset 0x20, size 0x8
  __declspec(property(get = __get__longPool, put = __set__longPool))::GlobalNamespace::__SliderController__Pool__Long* _longPool;

  constexpr ::GlobalNamespace::__SliderController__Pool__Short*& __get__shortPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Short*> const& __get__shortPool() const;

  constexpr void __set__shortPool(::GlobalNamespace::__SliderController__Pool__Short* value);

  constexpr ::GlobalNamespace::__SliderController__Pool__Medium*& __get__mediumPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Medium*> const& __get__mediumPool() const;

  constexpr void __set__mediumPool(::GlobalNamespace::__SliderController__Pool__Medium* value);

  constexpr ::GlobalNamespace::__SliderController__Pool__Long*& __get__longPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Long*> const& __get__longPool() const;

  constexpr void __set__longPool(::GlobalNamespace::__SliderController__Pool__Long* value);

  static inline ::GlobalNamespace::__SliderController__Pool* New_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                                      ::GlobalNamespace::__SliderController__Pool__Long* longPool);

  /// @brief Method .ctor, addr 0x23925e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                    ::GlobalNamespace::__SliderController__Pool__Long* longPool);

  /// @brief Method GetPool, addr 0x2392624, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*>* GetPool(::GlobalNamespace::__SliderController__LengthType lengthType);

  /// @brief Method GetLengthFromSliderData, addr 0x23926c4, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__SliderController__LengthType GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData,
                                                                                          ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData);

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController__Pool(__SliderController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController__Pool(__SliderController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController__Pool();

public:
  /// @brief Field _shortPool, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Short* ____shortPool;

  /// @brief Field _mediumPool, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Medium* ____mediumPool;

  /// @brief Field _longPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__SliderController__Pool__Long* ____longPool;

  /// @brief Field kMinDistanceToUseMedium offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseMedium{ 5.0 };

  /// @brief Field kMinDistanceToUseLong offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToUseLong{ 15.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController__Pool, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____shortPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____mediumPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController__Pool, ____longPool) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DissolveCoroutine>d__70
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4810))
// CS Name: ::SliderController::<DissolveCoroutine>d__70*
class CORDL_TYPE __SliderController___DissolveCoroutine_d__70 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SliderController* __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::SliderController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SliderController* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  static inline ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2391b18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x23927f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x23927f8, size 0x3ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2392be4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2392bec, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2392c2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController___DissolveCoroutine_d__70", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderController___DissolveCoroutine_d__70(__SliderController___DissolveCoroutine_d__70&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderController___DissolveCoroutine_d__70", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderController___DissolveCoroutine_d__70(__SliderController___DissolveCoroutine_d__70 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderController___DissolveCoroutine_d__70();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SliderController* _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70, ___duration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__LengthType, "", "SliderController/LengthType");
NEED_NO_BOX(::GlobalNamespace::SliderController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController*, "", "SliderController");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool*, "", "SliderController/Pool");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Long);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Long*, "", "SliderController/Pool/Long");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Medium);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Medium*, "", "SliderController/Pool/Medium");
NEED_NO_BOX(::GlobalNamespace::__SliderController__Pool__Short);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController__Pool__Short*, "", "SliderController/Pool/Short");
NEED_NO_BOX(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*, "", "SliderController/<DissolveCoroutine>d__70");
