#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationEventHandler)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace GlobalNamespace {
class LightRotationEventHandler_InitData;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationEventHandler;
}
namespace GlobalNamespace {
class LightRotationEventHandler_InitData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightRotationEventHandler*);
MARK_REF_T(::GlobalNamespace::LightRotationEventHandler_InitData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightRotationEventHandler*, "", "LightRotationEventHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightRotationEventHandler_InitData*, "", "LightRotationEventHandler/InitData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationEventHandler/InitData
class CORDL_TYPE LightRotationEventHandler_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field xMirrored, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_xMirrored, put = __cordl_internal_set_xMirrored)) bool xMirrored;

  /// @brief Field xTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xTransform, put = __cordl_internal_set_xTransform)) ::UnityW<::UnityEngine::Transform> xTransform;

  /// @brief Field yMirrored, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_yMirrored, put = __cordl_internal_set_yMirrored)) bool yMirrored;

  /// @brief Field yTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_yTransform, put = __cordl_internal_set_yTransform)) ::UnityW<::UnityEngine::Transform> yTransform;

  /// @brief Field zMirrored, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_zMirrored, put = __cordl_internal_set_zMirrored)) bool zMirrored;

  /// @brief Field zTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_zTransform, put = __cordl_internal_set_zTransform)) ::UnityW<::UnityEngine::Transform> zTransform;

  static inline ::GlobalNamespace::LightRotationEventHandler_InitData* New_ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                                ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform);

  constexpr bool const& __cordl_internal_get_xMirrored() const;

  constexpr bool& __cordl_internal_get_xMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_xTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_xTransform();

  constexpr bool const& __cordl_internal_get_yMirrored() const;

  constexpr bool& __cordl_internal_get_yMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_yTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_yTransform();

  constexpr bool const& __cordl_internal_get_zMirrored() const;

  constexpr bool& __cordl_internal_get_zMirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zTransform();

  constexpr void __cordl_internal_set_xMirrored(bool value);

  constexpr void __cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_yMirrored(bool value);

  constexpr void __cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_zMirrored(bool value);

  constexpr void __cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x598f960, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform, ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventHandler_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventHandler_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventHandler_InitData(LightRotationEventHandler_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventHandler_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventHandler_InitData(LightRotationEventHandler_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5840 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___xMirrored) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___yMirrored) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___zMirrored) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___xTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___yTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler_InitData, ___zTransform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightRotationEventHandler_InitData) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationEventHandler
class CORDL_TYPE LightRotationEventHandler : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::LightRotationEventHandler_InitData;

  /// @brief Field _transformMask, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__transformMask,
      put = __cordl_internal_set__transformMask)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* _transformMask;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Field _xMirrored, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__xMirrored, put = __cordl_internal_set__xMirrored)) bool _xMirrored;

  /// @brief Field _xRotationTween, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__xRotationTween, put = __cordl_internal_set__xRotationTween)) ::Tweening::FloatTween* _xRotationTween;

  /// @brief Field _yMirrored, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__yMirrored, put = __cordl_internal_set__yMirrored)) bool _yMirrored;

  /// @brief Field _yRotationTween, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__yRotationTween, put = __cordl_internal_set__yRotationTween)) ::Tweening::FloatTween* _yRotationTween;

  /// @brief Field _zMirrored, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__zMirrored, put = __cordl_internal_set__zMirrored)) bool _zMirrored;

  /// @brief Field _zRotationTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__zRotationTween, put = __cordl_internal_set__zRotationTween)) ::Tweening::FloatTween* _zRotationTween;

  /// @brief Method Cleanup, addr 0x598f6d0, size 0x8c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ComputeTargetAngle, addr 0x5993930, size 0xd0, virtual false, abstract: false, final false
  static inline float_t ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationOrientation);

  /// @brief Method HandleRotationEvent, addr 0x5991f18, size 0x48, virtual false, abstract: false, final false
  inline void HandleRotationEvent(::GlobalNamespace::LightRotationBeatmapEventData* currentEventData);

  /// @brief Method MaybeMirror, addr 0x5993fa0, size 0x10, virtual false, abstract: false, final false
  static inline float_t MaybeMirror(float_t value, bool mirrored);

  static inline ::GlobalNamespace::LightRotationEventHandler* New_ctor(::GlobalNamespace::LightRotationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager);

  /// @brief Method ProcessAxisEvent, addr 0x59937c8, size 0x148, virtual false, abstract: false, final false
  inline void ProcessAxisEvent(::Tweening::FloatTween* rotationTween, ::GlobalNamespace::LightRotationBeatmapEventData* currentEventData);

  /// @brief Method SetRotation, addr 0x5993a00, size 0x5a0, virtual false, abstract: false, final false
  inline void SetRotation(float_t _);

  /// @brief Method SetTweenData, addr 0x5993910, size 0x20, virtual false, abstract: false, final false
  static inline void SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime, ::GlobalNamespace::EaseType easeType);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* const& __cordl_internal_get__transformMask() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>*& __cordl_internal_get__transformMask();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get__xMirrored() const;

  constexpr bool& __cordl_internal_get__xMirrored();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__xRotationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__xRotationTween();

  constexpr bool const& __cordl_internal_get__yMirrored() const;

  constexpr bool& __cordl_internal_get__yMirrored();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__yRotationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__yRotationTween();

  constexpr bool const& __cordl_internal_get__zMirrored() const;

  constexpr bool& __cordl_internal_get__zMirrored();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__zRotationTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__zRotationTween();

  constexpr void __cordl_internal_set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  constexpr void __cordl_internal_set__xMirrored(bool value);

  constexpr void __cordl_internal_set__xRotationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__yMirrored(bool value);

  constexpr void __cordl_internal_set__yRotationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__zMirrored(bool value);

  constexpr void __cordl_internal_set__zRotationTween(::Tweening::FloatTween* value);

  /// @brief Method .ctor, addr 0x598f978, size 0xb78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightRotationEventHandler_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventHandler(LightRotationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventHandler(LightRotationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5841 };

  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _transformMask, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>, ::UnityEngine::Vector3>>* ____transformMask;

  /// @brief Field _xRotationTween, offset: 0x20, size: 0x8, def value: None
  ::Tweening::FloatTween* ____xRotationTween;

  /// @brief Field _yRotationTween, offset: 0x28, size: 0x8, def value: None
  ::Tweening::FloatTween* ____yRotationTween;

  /// @brief Field _zRotationTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::FloatTween* ____zRotationTween;

  /// @brief Field _xMirrored, offset: 0x38, size: 0x1, def value: None
  bool ____xMirrored;

  /// @brief Field _yMirrored, offset: 0x39, size: 0x1, def value: None
  bool ____yMirrored;

  /// @brief Field _zMirrored, offset: 0x3a, size: 0x1, def value: None
  bool ____zMirrored;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____transformMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____xRotationTween) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____yRotationTween) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____zRotationTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____xMirrored) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____yMirrored) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventHandler, ____zMirrored) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightRotationEventHandler) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
