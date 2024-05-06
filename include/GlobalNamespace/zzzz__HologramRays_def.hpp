#pragma once
// IWYU pragma private; include "GlobalNamespace/HologramRays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HologramRays)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __HologramRays___FadingCoroutine_d__28;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HologramRays;
}
namespace GlobalNamespace {
class __HologramRays___FadingCoroutine_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HologramRays);
MARK_REF_PTR_T(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28);
// Type: ::<FadingCoroutine>d__28
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HologramRays::<FadingCoroutine>d__28*
class CORDL_TYPE __HologramRays___FadingCoroutine_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::HologramRays> __4__this;

  /// @brief Field duration, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field easeType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field turningOn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_turningOn, put = __cordl_internal_set_turningOn)) bool turningOn;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26ed628, size 0x188, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HologramRays___FadingCoroutine_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26ed7b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26ed7b8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26ed7f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26ed624, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HologramRays> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HologramRays>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr bool const& __cordl_internal_get_turningOn() const;

  constexpr bool& __cordl_internal_get_turningOn();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HologramRays> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_turningOn(bool value);

  /// @brief Method .ctor, addr 0x26ed4a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HologramRays___FadingCoroutine_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HologramRays___FadingCoroutine_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HologramRays___FadingCoroutine_d__28(__HologramRays___FadingCoroutine_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HologramRays___FadingCoroutine_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HologramRays___FadingCoroutine_d__28(__HologramRays___FadingCoroutine_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field turningOn, offset: 0x20, size: 0x1, def value: None
  bool ___turningOn;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HologramRays> _____4__this;

  /// @brief Field easeType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field duration, offset: 0x34, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, ___turningOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, ___easeType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28, ___duration) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HologramRays
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 157, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HologramRays*
class CORDL_TYPE HologramRays : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FadingCoroutine_d__28 = ::GlobalNamespace::__HologramRays___FadingCoroutine_d__28;

  /// @brief Field _alpha, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) float_t _alpha;

  /// @brief Field _bloomColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__bloomColor, put = __cordl_internal_set__bloomColor))::UnityEngine::Color _bloomColor;

  /// @brief Field _bloomLight, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomLight, put = __cordl_internal_set__bloomLight))::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _bloomLight;

  /// @brief Field _bloomTransparentColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__bloomTransparentColor, put = __cordl_internal_set__bloomTransparentColor))::UnityEngine::Color _bloomTransparentColor;

  /// @brief Field _bottomYPosition, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__bottomYPosition, put = __cordl_internal_set__bottomYPosition)) float_t _bottomYPosition;

  /// @brief Field _hologramRaysMesh, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hologramRaysMesh, put = __cordl_internal_set__hologramRaysMesh))::UnityW<::UnityEngine::Mesh> _hologramRaysMesh;

  /// @brief Field _hologramRaysTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hologramRaysTransform, put = __cordl_internal_set__hologramRaysTransform))::UnityW<::UnityEngine::Transform> _hologramRaysTransform;

  /// @brief Field _laserHolderTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__laserHolderTransform, put = __cordl_internal_set__laserHolderTransform))::UnityW<::UnityEngine::Transform> _laserHolderTransform;

  /// @brief Field _materialAlphaID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialAlphaID, put = setStaticF__materialAlphaID)) int32_t _materialAlphaID;

  /// @brief Field _materialBottomPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialBottomPositionID, put = setStaticF__materialBottomPositionID)) int32_t _materialBottomPositionID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _materialTopPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialTopPositionID, put = setStaticF__materialTopPositionID)) int32_t _materialTopPositionID;

  /// @brief Field _raysDistance, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__raysDistance, put = __cordl_internal_set__raysDistance)) float_t _raysDistance;

  /// @brief Field _raysLocalScale, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__raysLocalScale, put = __cordl_internal_set__raysLocalScale))::UnityEngine::Vector3 _raysLocalScale;

  /// @brief Field _raysMeshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__raysMeshRenderer, put = __cordl_internal_set__raysMeshRenderer))::UnityW<::UnityEngine::MeshRenderer> _raysMeshRenderer;

  /// @brief Field _targetTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTransform, put = __cordl_internal_set__targetTransform))::UnityW<::UnityEngine::Transform> _targetTransform;

  /// @brief Field _topYPosition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__topYPosition, put = __cordl_internal_set__topYPosition)) float_t _topYPosition;

  /// @brief Field _transitionTween, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__transitionTween, put = __cordl_internal_set__transitionTween))::Tweening::FloatTween* _transitionTween;

  /// @brief Field _tweeningManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Field boundsInitialized, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_boundsInitialized, put = __cordl_internal_set_boundsInitialized)) bool boundsInitialized;

  /// @brief Field cachedExtent, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedExtent, put = __cordl_internal_set_cachedExtent)) float_t cachedExtent;

  /// @brief Method Animate, addr 0x26ed270, size 0xc8, virtual false, abstract: false, final false
  inline void Animate(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method Awake, addr 0x26ece20, size 0x13c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FadingCoroutine, addr 0x26ed338, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadingCoroutine(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType);

  static inline ::GlobalNamespace::HologramRays* New_ctor();

  /// @brief Method OnDisable, addr 0x26ecf5c, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x26ecf7c, size 0x7c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Refresh, addr 0x26ecff8, size 0x274, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method RuntimeInit, addr 0x26ecdc8, size 0x58, virtual false, abstract: false, final false
  static inline void RuntimeInit();

  /// @brief Method Update, addr 0x26ed26c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateBounds, addr 0x26ed3cc, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateBounds();

  /// @brief Method <Awake>b__22_0, addr 0x26ed5bc, size 0x68, virtual false, abstract: false, final false
  inline void _Awake_b__22_0(float_t f);

  constexpr float_t const& __cordl_internal_get__alpha() const;

  constexpr float_t& __cordl_internal_get__alpha();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bloomColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bloomColor();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__bloomLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__bloomLight();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bloomTransparentColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bloomTransparentColor();

  constexpr float_t const& __cordl_internal_get__bottomYPosition() const;

  constexpr float_t& __cordl_internal_get__bottomYPosition();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__hologramRaysMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__hologramRaysMesh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hologramRaysTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hologramRaysTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__laserHolderTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__laserHolderTransform();

  constexpr float_t const& __cordl_internal_get__raysDistance() const;

  constexpr float_t& __cordl_internal_get__raysDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__raysLocalScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__raysLocalScale();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__raysMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__raysMeshRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform();

  constexpr float_t const& __cordl_internal_get__topYPosition() const;

  constexpr float_t& __cordl_internal_get__topYPosition();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__transitionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__transitionTween() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get_boundsInitialized() const;

  constexpr bool& __cordl_internal_get_boundsInitialized();

  constexpr float_t const& __cordl_internal_get_cachedExtent() const;

  constexpr float_t& __cordl_internal_get_cachedExtent();

  constexpr void __cordl_internal_set__alpha(float_t value);

  constexpr void __cordl_internal_set__bloomColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__bloomLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__bloomTransparentColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__bottomYPosition(float_t value);

  constexpr void __cordl_internal_set__hologramRaysMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__hologramRaysTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__laserHolderTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__raysDistance(float_t value);

  constexpr void __cordl_internal_set__raysLocalScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__raysMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__topYPosition(float_t value);

  constexpr void __cordl_internal_set__transitionTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_boundsInitialized(bool value);

  constexpr void __cordl_internal_set_cachedExtent(float_t value);

  /// @brief Method .ctor, addr 0x26ed4d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__materialAlphaID();

  static inline int32_t getStaticF__materialBottomPositionID();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline int32_t getStaticF__materialTopPositionID();

  static inline void setStaticF__materialAlphaID(int32_t value);

  static inline void setStaticF__materialBottomPositionID(int32_t value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__materialTopPositionID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HologramRays();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HologramRays(HologramRays&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HologramRays(HologramRays const&) = delete;

  /// @brief Field _bloomLight, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____bloomLight;

  /// @brief Field _raysMeshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____raysMeshRenderer;

  /// @brief Field _targetTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____targetTransform;

  /// @brief Field _laserHolderTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____laserHolderTransform;

  /// @brief Field _hologramRaysTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____hologramRaysTransform;

  /// @brief Field _hologramRaysMesh, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____hologramRaysMesh;

  /// @brief Field _topYPosition, offset: 0x48, size: 0x4, def value: None
  float_t ____topYPosition;

  /// @brief Field _bottomYPosition, offset: 0x4c, size: 0x4, def value: None
  float_t ____bottomYPosition;

  /// @brief Field cachedExtent, offset: 0x50, size: 0x4, def value: None
  float_t ___cachedExtent;

  /// @brief Field _tweeningManager, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _transitionTween, offset: 0x60, size: 0x8, def value: None
  ::Tweening::FloatTween* ____transitionTween;

  /// @brief Field _bloomColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____bloomColor;

  /// @brief Field _bloomTransparentColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____bloomTransparentColor;

  /// @brief Field _alpha, offset: 0x88, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _raysDistance, offset: 0x8c, size: 0x4, def value: None
  float_t ____raysDistance;

  /// @brief Field _raysLocalScale, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____raysLocalScale;

  /// @brief Field boundsInitialized, offset: 0x9c, size: 0x1, def value: None
  bool ___boundsInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HologramRays, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____bloomLight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____raysMeshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____targetTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____laserHolderTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____hologramRaysTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____hologramRaysMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____topYPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____bottomYPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ___cachedExtent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____tweeningManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____transitionTween) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____bloomColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____bloomTransparentColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____alpha) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____raysDistance) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ____raysLocalScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HologramRays, ___boundsInitialized) == 0x9c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HologramRays);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HologramRays*, "", "HologramRays");
NEED_NO_BOX(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HologramRays___FadingCoroutine_d__28*, "", "HologramRays/<FadingCoroutine>d__28");
