#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationGroupEffect)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallback_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect____c__DisplayClass12_0;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect__InitData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroupEffect;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect__InitData;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightTranslationGroupEffect__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0);
// Type: ::InitData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4945))
// CS Name: ::LightTranslationGroupEffect::InitData*
class CORDL_TYPE __LightTranslationGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field xMirrored, offset 0x18, size 0x1
  __declspec(property(get = __get_xMirrored, put = __set_xMirrored)) bool xMirrored;

  /// @brief Field yMirrored, offset 0x19, size 0x1
  __declspec(property(get = __get_yMirrored, put = __set_yMirrored)) bool yMirrored;

  /// @brief Field zMirrored, offset 0x1a, size 0x1
  __declspec(property(get = __get_zMirrored, put = __set_zMirrored)) bool zMirrored;

  /// @brief Field xTransform, offset 0x20, size 0x8
  __declspec(property(get = __get_xTransform, put = __set_xTransform))::UnityEngine::Transform* xTransform;

  /// @brief Field yTransform, offset 0x28, size 0x8
  __declspec(property(get = __get_yTransform, put = __set_yTransform))::UnityEngine::Transform* yTransform;

  /// @brief Field zTransform, offset 0x30, size 0x8
  __declspec(property(get = __get_zTransform, put = __set_zTransform))::UnityEngine::Transform* zTransform;

  /// @brief Field xTranslationLimits, offset 0x38, size 0x8
  __declspec(property(get = __get_xTranslationLimits, put = __set_xTranslationLimits))::UnityEngine::Vector2 xTranslationLimits;

  /// @brief Field xDistributionLimits, offset 0x40, size 0x8
  __declspec(property(get = __get_xDistributionLimits, put = __set_xDistributionLimits))::UnityEngine::Vector2 xDistributionLimits;

  /// @brief Field yTranslationLimits, offset 0x48, size 0x8
  __declspec(property(get = __get_yTranslationLimits, put = __set_yTranslationLimits))::UnityEngine::Vector2 yTranslationLimits;

  /// @brief Field yDistributionLimits, offset 0x50, size 0x8
  __declspec(property(get = __get_yDistributionLimits, put = __set_yDistributionLimits))::UnityEngine::Vector2 yDistributionLimits;

  /// @brief Field zTranslationLimits, offset 0x58, size 0x8
  __declspec(property(get = __get_zTranslationLimits, put = __set_zTranslationLimits))::UnityEngine::Vector2 zTranslationLimits;

  /// @brief Field zDistributionLimits, offset 0x60, size 0x8
  __declspec(property(get = __get_zDistributionLimits, put = __set_zDistributionLimits))::UnityEngine::Vector2 zDistributionLimits;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr bool& __get_xMirrored();

  constexpr bool const& __get_xMirrored() const;

  constexpr void __set_xMirrored(bool value);

  constexpr bool& __get_yMirrored();

  constexpr bool const& __get_yMirrored() const;

  constexpr void __set_yMirrored(bool value);

  constexpr bool& __get_zMirrored();

  constexpr bool const& __get_zMirrored() const;

  constexpr void __set_zMirrored(bool value);

  constexpr ::UnityEngine::Transform*& __get_xTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_xTransform() const;

  constexpr void __set_xTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_yTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_yTransform() const;

  constexpr void __set_yTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_zTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_zTransform() const;

  constexpr void __set_zTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector2& __get_xTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get_xTranslationLimits() const;

  constexpr void __set_xTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_xDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get_xDistributionLimits() const;

  constexpr void __set_xDistributionLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_yTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get_yTranslationLimits() const;

  constexpr void __set_yTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_yDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get_yDistributionLimits() const;

  constexpr void __set_yDistributionLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_zTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get_zTranslationLimits() const;

  constexpr void __set_zTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_zDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get_zDistributionLimits() const;

  constexpr void __set_zDistributionLimits(::UnityEngine::Vector2 value);

  static inline ::GlobalNamespace::__LightTranslationGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored,
                                                                                     ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform,
                                                                                     ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits,
                                                                                     ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                                     ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

  /// @brief Method .ctor addr 0x23ab8ec size 0xd8 virtual false final false
  inline void _ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                    ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits,
                    ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightTranslationGroupEffect__InitData(__LightTranslationGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightTranslationGroupEffect__InitData(__LightTranslationGroupEffect__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightTranslationGroupEffect__InitData();

public:
  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field xMirrored, offset: 0x18, size: 0x1, def value: None
  bool ___xMirrored;

  /// @brief Field yMirrored, offset: 0x19, size: 0x1, def value: None
  bool ___yMirrored;

  /// @brief Field zMirrored, offset: 0x1a, size: 0x1, def value: None
  bool ___zMirrored;

  /// @brief Field xTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___xTransform;

  /// @brief Field yTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___yTransform;

  /// @brief Field zTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ___zTransform;

  /// @brief Field xTranslationLimits, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___xTranslationLimits;

  /// @brief Field xDistributionLimits, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___xDistributionLimits;

  /// @brief Field yTranslationLimits, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___yTranslationLimits;

  /// @brief Field yDistributionLimits, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___yDistributionLimits;

  /// @brief Field zTranslationLimits, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___zTranslationLimits;

  /// @brief Field zDistributionLimits, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___zDistributionLimits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightTranslationGroupEffect__InitData, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4946))
// CS Name: ::LightTranslationGroupEffect::<>c__DisplayClass12_0*
class CORDL_TYPE __LightTranslationGroupEffect____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field translationTween, offset 0x10, size 0x8
  __declspec(property(get = __get_translationTween, put = __set_translationTween))::Tweening::FloatTween* translationTween;

  /// @brief Field translationLimits, offset 0x18, size 0x8
  __declspec(property(get = __get_translationLimits, put = __set_translationLimits))::UnityEngine::Vector2 translationLimits;

  /// @brief Field distributionLimits, offset 0x20, size 0x8
  __declspec(property(get = __get_distributionLimits, put = __set_distributionLimits))::UnityEngine::Vector2 distributionLimits;

  /// @brief Field mirrored, offset 0x28, size 0x1
  __declspec(property(get = __get_mirrored, put = __set_mirrored)) bool mirrored;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LightTranslationGroupEffect* __4__this;

  constexpr ::Tweening::FloatTween*& __get_translationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get_translationTween() const;

  constexpr void __set_translationTween(::Tweening::FloatTween* value);

  constexpr ::UnityEngine::Vector2& __get_translationLimits();

  constexpr ::UnityEngine::Vector2 const& __get_translationLimits() const;

  constexpr void __set_translationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_distributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get_distributionLimits() const;

  constexpr void __set_distributionLimits(::UnityEngine::Vector2 value);

  constexpr bool& __get_mirrored();

  constexpr bool const& __get_mirrored() const;

  constexpr void __set_mirrored(bool value);

  constexpr ::GlobalNamespace::LightTranslationGroupEffect*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightTranslationGroupEffect*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LightTranslationGroupEffect* value);

  static inline ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x23ab694 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetTranslationEventHandler>b__0 addr 0x23ab9c4 size 0x1c0 virtual false final false
  inline void _GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData);

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightTranslationGroupEffect____c__DisplayClass12_0(__LightTranslationGroupEffect____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightTranslationGroupEffect____c__DisplayClass12_0(__LightTranslationGroupEffect____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightTranslationGroupEffect____c__DisplayClass12_0();

public:
  /// @brief Field translationTween, offset: 0x10, size: 0x8, def value: None
  ::Tweening::FloatTween* ___translationTween;

  /// @brief Field translationLimits, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___translationLimits;

  /// @brief Field distributionLimits, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___distributionLimits;

  /// @brief Field mirrored, offset: 0x28, size: 0x1, def value: None
  bool ___mirrored;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LightTranslationGroupEffect* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightTranslationGroupEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4947))
// CS Name: ::LightTranslationGroupEffect*
class CORDL_TYPE LightTranslationGroupEffect : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0;

  using InitData = ::GlobalNamespace::__LightTranslationGroupEffect__InitData;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::SongTimeTweeningManager* _tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _transformMask, offset 0x20, size 0x8
  __declspec(property(get = __get__transformMask,
                      put = __set__transformMask))::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>* _transformMask;

  /// @brief Field _xTranslationTween, offset 0x28, size 0x8
  __declspec(property(get = __get__xTranslationTween, put = __set__xTranslationTween))::Tweening::FloatTween* _xTranslationTween;

  /// @brief Field _yTranslationTween, offset 0x30, size 0x8
  __declspec(property(get = __get__yTranslationTween, put = __set__yTranslationTween))::Tweening::FloatTween* _yTranslationTween;

  /// @brief Field _zTranslationTween, offset 0x38, size 0x8
  __declspec(property(get = __get__zTranslationTween, put = __set__zTranslationTween))::Tweening::FloatTween* _zTranslationTween;

  /// @brief Field _lightTranslationXBeatmapEventCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __get__lightTranslationXBeatmapEventCallbackWrapper,
                      put = __set__lightTranslationXBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationXBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationYBeatmapEventCallbackWrapper, offset 0x48, size 0x8
  __declspec(property(get = __get__lightTranslationYBeatmapEventCallbackWrapper,
                      put = __set__lightTranslationYBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationYBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationZBeatmapEventCallbackWrapper, offset 0x50, size 0x8
  __declspec(property(get = __get__lightTranslationZBeatmapEventCallbackWrapper,
                      put = __set__lightTranslationZBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationZBeatmapEventCallbackWrapper;

  constexpr ::Tweening::SongTimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>*& __get__transformMask();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>*> const& __get__transformMask() const;

  constexpr void __set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>* value);

  constexpr ::Tweening::FloatTween*& __get__xTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__xTranslationTween() const;

  constexpr void __set__xTranslationTween(::Tweening::FloatTween* value);

  constexpr ::Tweening::FloatTween*& __get__yTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__yTranslationTween() const;

  constexpr void __set__yTranslationTween(::Tweening::FloatTween* value);

  constexpr ::Tweening::FloatTween*& __get__zTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__zTranslationTween() const;

  constexpr void __set__zTranslationTween(::Tweening::FloatTween* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__lightTranslationXBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__lightTranslationXBeatmapEventCallbackWrapper() const;

  constexpr void __set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__lightTranslationYBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__lightTranslationYBeatmapEventCallbackWrapper() const;

  constexpr void __set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__lightTranslationZBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__lightTranslationZBeatmapEventCallbackWrapper() const;

  constexpr void __set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  static inline ::GlobalNamespace::LightTranslationGroupEffect* New_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                         ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor addr 0x23aaa7c size 0xac0 virtual false final false
  inline void _ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Cleanup addr 0x23ab62c size 0x68 virtual false final false
  inline void Cleanup();

  /// @brief Method GetTranslationEventHandler addr 0x23ab53c size 0xf0 virtual false final false
  inline ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*
  GetTranslationEventHandler(::Tweening::FloatTween* translationTween, ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  /// @brief Method SetTranslation addr 0x23ab69c size 0x1c8 virtual false final false
  inline void SetTranslation(float_t _);

  /// @brief Method SetTweenData addr 0x23ab864 size 0x3c virtual false final false
  static inline void SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime, ::GlobalNamespace::EaseType easeType);

  /// @brief Method ComputeTranslation addr 0x23ab8a0 size 0x4c virtual false final false
  static inline float_t ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution, ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroupEffect(LightTranslationGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroupEffect(LightTranslationGroupEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroupEffect();

public:
  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _transformMask, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>* ____transformMask;

  /// @brief Field _xTranslationTween, offset: 0x28, size: 0x8, def value: None
  ::Tweening::FloatTween* ____xTranslationTween;

  /// @brief Field _yTranslationTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::FloatTween* ____yTranslationTween;

  /// @brief Field _zTranslationTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::FloatTween* ____zTranslationTween;

  /// @brief Field _lightTranslationXBeatmapEventCallbackWrapper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightTranslationXBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationYBeatmapEventCallbackWrapper, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightTranslationYBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationZBeatmapEventCallbackWrapper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightTranslationZBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroupEffect, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffect*, "", "LightTranslationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightTranslationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightTranslationGroupEffect__InitData*, "", "LightTranslationGroupEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*, "", "LightTranslationGroupEffect/<>c__DisplayClass12_0");
