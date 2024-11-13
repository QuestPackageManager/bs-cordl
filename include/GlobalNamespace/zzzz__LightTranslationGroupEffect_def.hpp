#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationGroupEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect__InitData;
}
namespace GlobalNamespace {
class __LightTranslationGroupEffect____c__DisplayClass12_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
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
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationGroupEffect::InitData*
class CORDL_TYPE __LightTranslationGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field xDistributionLimits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_xDistributionLimits, put = __cordl_internal_set_xDistributionLimits)) ::UnityEngine::Vector2 xDistributionLimits;

  /// @brief Field xMirrored, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_xMirrored, put = __cordl_internal_set_xMirrored)) bool xMirrored;

  /// @brief Field xTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xTransform, put = __cordl_internal_set_xTransform)) ::UnityW<::UnityEngine::Transform> xTransform;

  /// @brief Field xTranslationLimits, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xTranslationLimits, put = __cordl_internal_set_xTranslationLimits)) ::UnityEngine::Vector2 xTranslationLimits;

  /// @brief Field yDistributionLimits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_yDistributionLimits, put = __cordl_internal_set_yDistributionLimits)) ::UnityEngine::Vector2 yDistributionLimits;

  /// @brief Field yMirrored, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_yMirrored, put = __cordl_internal_set_yMirrored)) bool yMirrored;

  /// @brief Field yTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_yTransform, put = __cordl_internal_set_yTransform)) ::UnityW<::UnityEngine::Transform> yTransform;

  /// @brief Field yTranslationLimits, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_yTranslationLimits, put = __cordl_internal_set_yTranslationLimits)) ::UnityEngine::Vector2 yTranslationLimits;

  /// @brief Field zDistributionLimits, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_zDistributionLimits, put = __cordl_internal_set_zDistributionLimits)) ::UnityEngine::Vector2 zDistributionLimits;

  /// @brief Field zMirrored, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_zMirrored, put = __cordl_internal_set_zMirrored)) bool zMirrored;

  /// @brief Field zTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_zTransform, put = __cordl_internal_set_zTransform)) ::UnityW<::UnityEngine::Transform> zTransform;

  /// @brief Field zTranslationLimits, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_zTranslationLimits, put = __cordl_internal_set_zTranslationLimits)) ::UnityEngine::Vector2 zTranslationLimits;

  static inline ::GlobalNamespace::__LightTranslationGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored,
                                                                                     ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform,
                                                                                     ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits,
                                                                                     ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                                     ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_xDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_xDistributionLimits();

  constexpr bool const& __cordl_internal_get_xMirrored() const;

  constexpr bool& __cordl_internal_get_xMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_xTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_xTransform();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_xTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_xTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_yDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_yDistributionLimits();

  constexpr bool const& __cordl_internal_get_yMirrored() const;

  constexpr bool& __cordl_internal_get_yMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_yTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_yTransform();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_yTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_yTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_zDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_zDistributionLimits();

  constexpr bool const& __cordl_internal_get_zMirrored() const;

  constexpr bool& __cordl_internal_get_zMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zTransform();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_zTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_zTranslationLimits();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_xDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_xMirrored(bool value);

  constexpr void __cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_xTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_yDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_yMirrored(bool value);

  constexpr void __cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_yTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_zDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_zMirrored(bool value);

  constexpr void __cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_zTranslationLimits(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x3b2dfdc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform,
                    ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits,
                    ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightTranslationGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightTranslationGroupEffect__InitData(__LightTranslationGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightTranslationGroupEffect__InitData(__LightTranslationGroupEffect__InitData const&) = delete;

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
  ::UnityW<::UnityEngine::Transform> ___xTransform;

  /// @brief Field yTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___yTransform;

  /// @brief Field zTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zTransform;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightTranslationGroupEffect__InitData, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___xMirrored) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___yMirrored) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___zMirrored) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___xTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___yTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___zTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___xTranslationLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___xDistributionLimits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___yTranslationLimits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___yDistributionLimits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___zTranslationLimits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect__InitData, ___zDistributionLimits) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationGroupEffect::<>c__DisplayClass12_0*
class CORDL_TYPE __LightTranslationGroupEffect____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::LightTranslationGroupEffect* __4__this;

  /// @brief Field distributionLimits, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_distributionLimits, put = __cordl_internal_set_distributionLimits)) ::UnityEngine::Vector2 distributionLimits;

  /// @brief Field mirrored, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_mirrored, put = __cordl_internal_set_mirrored)) bool mirrored;

  /// @brief Field translationLimits, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_translationLimits, put = __cordl_internal_set_translationLimits)) ::UnityEngine::Vector2 translationLimits;

  /// @brief Field translationTween, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_translationTween, put = __cordl_internal_set_translationTween)) ::Tweening::FloatTween* translationTween;

  static inline ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0* New_ctor();

  /// @brief Method <GetTranslationEventHandler>b__0, addr 0x3b2e0b4, size 0x1cc, virtual false, abstract: false, final false
  inline void _GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData);

  constexpr ::GlobalNamespace::LightTranslationGroupEffect*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightTranslationGroupEffect*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_distributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_distributionLimits();

  constexpr bool const& __cordl_internal_get_mirrored() const;

  constexpr bool& __cordl_internal_get_mirrored();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_translationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_translationLimits();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get_translationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get_translationTween() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::LightTranslationGroupEffect* value);

  constexpr void __cordl_internal_set_distributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_mirrored(bool value);

  constexpr void __cordl_internal_set_translationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_translationTween(::Tweening::FloatTween* value);

  /// @brief Method .ctor, addr 0x3b2dd84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightTranslationGroupEffect____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightTranslationGroupEffect____c__DisplayClass12_0(__LightTranslationGroupEffect____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightTranslationGroupEffect____c__DisplayClass12_0(__LightTranslationGroupEffect____c__DisplayClass12_0 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, ___translationTween) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, ___translationLimits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, ___distributionLimits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, ___mirrored) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0, _____4__this) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightTranslationGroupEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationGroupEffect*
class CORDL_TYPE LightTranslationGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__LightTranslationGroupEffect__InitData;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightTranslationXBeatmapEventCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightTranslationXBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationXBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationYBeatmapEventCallbackWrapper, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightTranslationYBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationYBeatmapEventCallbackWrapper;

  /// @brief Field _lightTranslationZBeatmapEventCallbackWrapper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightTranslationZBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _lightTranslationZBeatmapEventCallbackWrapper;

  /// @brief Field _transformMask, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__transformMask,
      put = __cordl_internal_set__transformMask)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* _transformMask;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _xTranslationTween, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__xTranslationTween, put = __cordl_internal_set__xTranslationTween)) ::Tweening::FloatTween* _xTranslationTween;

  /// @brief Field _yTranslationTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__yTranslationTween, put = __cordl_internal_set__yTranslationTween)) ::Tweening::FloatTween* _yTranslationTween;

  /// @brief Field _zTranslationTween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__zTranslationTween, put = __cordl_internal_set__zTranslationTween)) ::Tweening::FloatTween* _zTranslationTween;

  /// @brief Method Cleanup, addr 0x3b2dd1c, size 0x68, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ComputeTranslation, addr 0x3b2df90, size 0x4c, virtual false, abstract: false, final false
  static inline float_t ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution, ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  /// @brief Method GetTranslationEventHandler, addr 0x3b2dc30, size 0xec, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*
  GetTranslationEventHandler(::Tweening::FloatTween* translationTween, ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  static inline ::GlobalNamespace::LightTranslationGroupEffect* New_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                         ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method SetTranslation, addr 0x3b2dd8c, size 0x1c8, virtual false, abstract: false, final false
  inline void SetTranslation(float_t _);

  /// @brief Method SetTweenData, addr 0x3b2df54, size 0x3c, virtual false, abstract: false, final false
  static inline void SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime, ::GlobalNamespace::EaseType easeType);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*& __cordl_internal_get__transformMask();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*> const&
  __cordl_internal_get__transformMask() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__xTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__xTranslationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__yTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__yTranslationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__zTranslationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__zTranslationTween() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__xTranslationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__yTranslationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__zTranslationTween(::Tweening::FloatTween* value);

  /// @brief Method .ctor, addr 0x3b2d05c, size 0xbd4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroupEffect(LightTranslationGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroupEffect(LightTranslationGroupEffect const&) = delete;

  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _transformMask, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* ____transformMask;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4300 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroupEffect, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____transformMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____xTranslationTween) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____yTranslationTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____zTranslationTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____lightTranslationXBeatmapEventCallbackWrapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____lightTranslationYBeatmapEventCallbackWrapper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroupEffect, ____lightTranslationZBeatmapEventCallbackWrapper) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffect*, "", "LightTranslationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightTranslationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightTranslationGroupEffect__InitData*, "", "LightTranslationGroupEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*, "", "LightTranslationGroupEffect/<>c__DisplayClass12_0");
