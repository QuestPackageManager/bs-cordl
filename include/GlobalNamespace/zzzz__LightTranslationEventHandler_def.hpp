#pragma once
// IWYU pragma private; include "GlobalNamespace\LightTranslationEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightTranslationEventHandler)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace GlobalNamespace {
class LightTranslationEventHandler_InitData;
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
class LightTranslationEventHandler;
}
namespace GlobalNamespace {
class LightTranslationEventHandler_InitData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightTranslationEventHandler*);
MARK_REF_T(::GlobalNamespace::LightTranslationEventHandler_InitData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightTranslationEventHandler*, "", "LightTranslationEventHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightTranslationEventHandler_InitData*, "", "LightTranslationEventHandler/InitData");
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationEventHandler/InitData
class CORDL_TYPE LightTranslationEventHandler_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field xDistributionLimits, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xDistributionLimits, put = __cordl_internal_set_xDistributionLimits)) ::UnityEngine::Vector2 xDistributionLimits;

  /// @brief Field xMirrored, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_xMirrored, put = __cordl_internal_set_xMirrored)) bool xMirrored;

  /// @brief Field xTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xTransform, put = __cordl_internal_set_xTransform)) ::UnityW<::UnityEngine::Transform> xTransform;

  /// @brief Field xTranslationLimits, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xTranslationLimits, put = __cordl_internal_set_xTranslationLimits)) ::UnityEngine::Vector2 xTranslationLimits;

  /// @brief Field yDistributionLimits, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_yDistributionLimits, put = __cordl_internal_set_yDistributionLimits)) ::UnityEngine::Vector2 yDistributionLimits;

  /// @brief Field yMirrored, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_yMirrored, put = __cordl_internal_set_yMirrored)) bool yMirrored;

  /// @brief Field yTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_yTransform, put = __cordl_internal_set_yTransform)) ::UnityW<::UnityEngine::Transform> yTransform;

  /// @brief Field yTranslationLimits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_yTranslationLimits, put = __cordl_internal_set_yTranslationLimits)) ::UnityEngine::Vector2 yTranslationLimits;

  /// @brief Field zDistributionLimits, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_zDistributionLimits, put = __cordl_internal_set_zDistributionLimits)) ::UnityEngine::Vector2 zDistributionLimits;

  /// @brief Field zMirrored, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_zMirrored, put = __cordl_internal_set_zMirrored)) bool zMirrored;

  /// @brief Field zTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_zTransform, put = __cordl_internal_set_zTransform)) ::UnityW<::UnityEngine::Transform> zTransform;

  /// @brief Field zTranslationLimits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_zTranslationLimits, put = __cordl_internal_set_zTranslationLimits)) ::UnityEngine::Vector2 zTranslationLimits;

  static inline ::GlobalNamespace::LightTranslationEventHandler_InitData* New_ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                                   ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform,
                                                                                   ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits,
                                                                                   ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                                   ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

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

  /// @brief Method .ctor, addr 0x5990800, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform,
                    ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                    ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventHandler_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventHandler_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationEventHandler_InitData(LightTranslationEventHandler_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventHandler_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationEventHandler_InitData(LightTranslationEventHandler_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5842 };

  /// @brief Field xMirrored, offset: 0x10, size: 0x1, def value: None
  bool ___xMirrored;

  /// @brief Field yMirrored, offset: 0x11, size: 0x1, def value: None
  bool ___yMirrored;

  /// @brief Field zMirrored, offset: 0x12, size: 0x1, def value: None
  bool ___zMirrored;

  /// @brief Field xTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___xTransform;

  /// @brief Field yTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___yTransform;

  /// @brief Field zTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zTransform;

  /// @brief Field xTranslationLimits, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___xTranslationLimits;

  /// @brief Field xDistributionLimits, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___xDistributionLimits;

  /// @brief Field yTranslationLimits, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___yTranslationLimits;

  /// @brief Field yDistributionLimits, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___yDistributionLimits;

  /// @brief Field zTranslationLimits, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___zTranslationLimits;

  /// @brief Field zDistributionLimits, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___zDistributionLimits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___xMirrored) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___yMirrored) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___zMirrored) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___xTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___yTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___zTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___xTranslationLimits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___xDistributionLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___yTranslationLimits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___yDistributionLimits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___zTranslationLimits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler_InitData, ___zDistributionLimits) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightTranslationEventHandler_InitData) == 0x60, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationEventHandler
class CORDL_TYPE LightTranslationEventHandler : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::LightTranslationEventHandler_InitData;

  /// @brief Field _transformMask, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__transformMask,
      put = __cordl_internal_set__transformMask)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* _transformMask;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _xDistributionLimits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__xDistributionLimits, put = __cordl_internal_set__xDistributionLimits)) ::UnityEngine::Vector2 _xDistributionLimits;

  /// @brief Field _xMirrored, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__xMirrored, put = __cordl_internal_set__xMirrored)) bool _xMirrored;

  /// @brief Field _xTranslationLimits, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__xTranslationLimits, put = __cordl_internal_set__xTranslationLimits)) ::UnityEngine::Vector2 _xTranslationLimits;

  /// @brief Field _xTranslationTween, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__xTranslationTween, put = __cordl_internal_set__xTranslationTween)) ::Tweening::FloatTween* _xTranslationTween;

  /// @brief Field _yDistributionLimits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__yDistributionLimits, put = __cordl_internal_set__yDistributionLimits)) ::UnityEngine::Vector2 _yDistributionLimits;

  /// @brief Field _yMirrored, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__yMirrored, put = __cordl_internal_set__yMirrored)) bool _yMirrored;

  /// @brief Field _yTranslationLimits, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__yTranslationLimits, put = __cordl_internal_set__yTranslationLimits)) ::UnityEngine::Vector2 _yTranslationLimits;

  /// @brief Field _yTranslationTween, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__yTranslationTween, put = __cordl_internal_set__yTranslationTween)) ::Tweening::FloatTween* _yTranslationTween;

  /// @brief Field _zDistributionLimits, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__zDistributionLimits, put = __cordl_internal_set__zDistributionLimits)) ::UnityEngine::Vector2 _zDistributionLimits;

  /// @brief Field _zMirrored, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get__zMirrored, put = __cordl_internal_set__zMirrored)) bool _zMirrored;

  /// @brief Field _zTranslationLimits, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__zTranslationLimits, put = __cordl_internal_set__zTranslationLimits)) ::UnityEngine::Vector2 _zTranslationLimits;

  /// @brief Field _zTranslationTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__zTranslationTween, put = __cordl_internal_set__zTranslationTween)) ::Tweening::FloatTween* _zTranslationTween;

  /// @brief Method Cleanup, addr 0x598f75c, size 0x1c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ComputeTranslation, addr 0x5994144, size 0x4c, virtual false, abstract: false, final false
  static inline float_t ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution, ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  /// @brief Method HandleTranslationEvent, addr 0x59920bc, size 0x9c, virtual false, abstract: false, final false
  inline void HandleTranslationEvent(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData);

  static inline ::GlobalNamespace::LightTranslationEventHandler* New_ctor(::GlobalNamespace::LightTranslationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager);

  /// @brief Method ProcessAxisEvent, addr 0x5993fb0, size 0x194, virtual false, abstract: false, final false
  inline void ProcessAxisEvent(::Tweening::FloatTween* translationTween, ::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData, ::UnityEngine::Vector2 translationLimits,
                               ::UnityEngine::Vector2 distributionLimits, bool mirrored);

  /// @brief Method SetTranslation, addr 0x59941b0, size 0x194, virtual false, abstract: false, final false
  inline void SetTranslation(float_t _);

  /// @brief Method SetTweenData, addr 0x5994190, size 0x20, virtual false, abstract: false, final false
  static inline void SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime, ::GlobalNamespace::EaseType easeType);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* const& __cordl_internal_get__transformMask() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*& __cordl_internal_get__transformMask();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xDistributionLimits();

  constexpr bool const& __cordl_internal_get__xMirrored() const;

  constexpr bool& __cordl_internal_get__xMirrored();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xTranslationLimits();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__xTranslationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__xTranslationTween();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yDistributionLimits();

  constexpr bool const& __cordl_internal_get__yMirrored() const;

  constexpr bool& __cordl_internal_get__yMirrored();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yTranslationLimits();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__yTranslationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__yTranslationTween();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zDistributionLimits();

  constexpr bool const& __cordl_internal_get__zMirrored() const;

  constexpr bool& __cordl_internal_get__zMirrored();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zTranslationLimits();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__zTranslationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__zTranslationTween();

  constexpr void __cordl_internal_set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__xDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__xMirrored(bool value);

  constexpr void __cordl_internal_set__xTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__xTranslationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__yDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yMirrored(bool value);

  constexpr void __cordl_internal_set__yTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yTranslationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__zDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zMirrored(bool value);

  constexpr void __cordl_internal_set__zTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zTranslationTween(::Tweening::FloatTween* value);

  /// @brief Method .ctor, addr 0x5990830, size 0xb9c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightTranslationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationEventHandler(LightTranslationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationEventHandler(LightTranslationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5843 };

  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _transformMask, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* ____transformMask;

  /// @brief Field _xTranslationTween, offset: 0x20, size: 0x8, def value: None
  ::Tweening::FloatTween* ____xTranslationTween;

  /// @brief Field _yTranslationTween, offset: 0x28, size: 0x8, def value: None
  ::Tweening::FloatTween* ____yTranslationTween;

  /// @brief Field _zTranslationTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::FloatTween* ____zTranslationTween;

  /// @brief Field _xTranslationLimits, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xTranslationLimits;

  /// @brief Field _xDistributionLimits, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xDistributionLimits;

  /// @brief Field _yTranslationLimits, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yTranslationLimits;

  /// @brief Field _yDistributionLimits, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yDistributionLimits;

  /// @brief Field _zTranslationLimits, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zTranslationLimits;

  /// @brief Field _zDistributionLimits, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zDistributionLimits;

  /// @brief Field _xMirrored, offset: 0x68, size: 0x1, def value: None
  bool ____xMirrored;

  /// @brief Field _yMirrored, offset: 0x69, size: 0x1, def value: None
  bool ____yMirrored;

  /// @brief Field _zMirrored, offset: 0x6a, size: 0x1, def value: None
  bool ____zMirrored;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____transformMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____xTranslationTween) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____yTranslationTween) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____zTranslationTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____xTranslationLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____xDistributionLimits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____yTranslationLimits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____yDistributionLimits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____zTranslationLimits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____zDistributionLimits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____xMirrored) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____yMirrored) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationEventHandler, ____zMirrored) == 0x6a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightTranslationEventHandler) == 0x70, "Size mismatch!");

} // namespace GlobalNamespace
