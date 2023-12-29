#pragma once
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
class __HologramRays___FadingCoroutine_d__28;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace System::Collections {
class IEnumerator;
}
namespace Tweening {
class FloatTween;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace Tweening {
class TimeTweeningManager;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15944))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5219))
// CS Name: ::HologramRays::<FadingCoroutine>d__28*
class CORDL_TYPE __HologramRays___FadingCoroutine_d__28 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field turningOn, offset 0x20, size 0x1
  __declspec(property(get = __get_turningOn, put = __set_turningOn)) bool turningOn;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::HologramRays* __4__this;

  /// @brief Field easeType, offset 0x30, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field duration, offset 0x34, size 0x4
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

  constexpr bool& __get_turningOn();

  constexpr bool const& __get_turningOn() const;

  constexpr void __set_turningOn(bool value);

  constexpr ::GlobalNamespace::HologramRays*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HologramRays*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::HologramRays* value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  static inline ::GlobalNamespace::__HologramRays___FadingCoroutine_d__28* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x20efb88 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x20efd04 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x20efd08 size 0x188 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20efe90 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x20efe98 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x20efed8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HologramRays___FadingCoroutine_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HologramRays___FadingCoroutine_d__28(__HologramRays___FadingCoroutine_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HologramRays___FadingCoroutine_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HologramRays___FadingCoroutine_d__28(__HologramRays___FadingCoroutine_d__28 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HologramRays___FadingCoroutine_d__28();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field turningOn, offset: 0x20, size: 0x1, def value: None
  bool ___turningOn;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HologramRays* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5220))
// CS Name: ::HologramRays*
class CORDL_TYPE HologramRays : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _FadingCoroutine_d__28 = ::GlobalNamespace::__HologramRays___FadingCoroutine_d__28;

  /// @brief Field _bloomLight, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomLight, put = __set__bloomLight))::GlobalNamespace::TubeBloomPrePassLight* _bloomLight;

  /// @brief Field _raysMeshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __get__raysMeshRenderer, put = __set__raysMeshRenderer))::UnityEngine::MeshRenderer* _raysMeshRenderer;

  /// @brief Field _targetTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _laserHolderTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__laserHolderTransform, put = __set__laserHolderTransform))::UnityEngine::Transform* _laserHolderTransform;

  /// @brief Field _hologramRaysTransform, offset 0x38, size 0x8
  __declspec(property(get = __get__hologramRaysTransform, put = __set__hologramRaysTransform))::UnityEngine::Transform* _hologramRaysTransform;

  /// @brief Field _hologramRaysMesh, offset 0x40, size 0x8
  __declspec(property(get = __get__hologramRaysMesh, put = __set__hologramRaysMesh))::UnityEngine::Mesh* _hologramRaysMesh;

  /// @brief Field _topYPosition, offset 0x48, size 0x4
  __declspec(property(get = __get__topYPosition, put = __set__topYPosition)) float_t _topYPosition;

  /// @brief Field _bottomYPosition, offset 0x4c, size 0x4
  __declspec(property(get = __get__bottomYPosition, put = __set__bottomYPosition)) float_t _bottomYPosition;

  /// @brief Field cachedExtent, offset 0x50, size 0x4
  __declspec(property(get = __get_cachedExtent, put = __set_cachedExtent)) float_t cachedExtent;

  /// @brief Field _tweeningManager, offset 0x58, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _transitionTween, offset 0x60, size 0x8
  __declspec(property(get = __get__transitionTween, put = __set__transitionTween))::Tweening::FloatTween* _transitionTween;

  /// @brief Field _bloomColor, offset 0x68, size 0x10
  __declspec(property(get = __get__bloomColor, put = __set__bloomColor))::UnityEngine::Color _bloomColor;

  /// @brief Field _bloomTransparentColor, offset 0x78, size 0x10
  __declspec(property(get = __get__bloomTransparentColor, put = __set__bloomTransparentColor))::UnityEngine::Color _bloomTransparentColor;

  /// @brief Field _alpha, offset 0x88, size 0x4
  __declspec(property(get = __get__alpha, put = __set__alpha)) float_t _alpha;

  /// @brief Field _raysDistance, offset 0x8c, size 0x4
  __declspec(property(get = __get__raysDistance, put = __set__raysDistance)) float_t _raysDistance;

  /// @brief Field _raysLocalScale, offset 0x90, size 0xc
  __declspec(property(get = __get__raysLocalScale, put = __set__raysLocalScale))::UnityEngine::Vector3 _raysLocalScale;

  /// @brief Field boundsInitialized, offset 0x9c, size 0x1
  __declspec(property(get = __get_boundsInitialized, put = __set_boundsInitialized)) bool boundsInitialized;

  /// @brief Field _materialBottomPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialBottomPositionID, put = setStaticF__materialBottomPositionID)) int32_t _materialBottomPositionID;

  /// @brief Field _materialTopPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialTopPositionID, put = setStaticF__materialTopPositionID)) int32_t _materialTopPositionID;

  /// @brief Field _materialAlphaID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__materialAlphaID, put = setStaticF__materialAlphaID)) int32_t _materialAlphaID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  constexpr ::GlobalNamespace::TubeBloomPrePassLight*& __get__bloomLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& __get__bloomLight() const;

  constexpr void __set__bloomLight(::GlobalNamespace::TubeBloomPrePassLight* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__raysMeshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__raysMeshRenderer() const;

  constexpr void __set__raysMeshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__laserHolderTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__laserHolderTransform() const;

  constexpr void __set__laserHolderTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__hologramRaysTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__hologramRaysTransform() const;

  constexpr void __set__hologramRaysTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Mesh*& __get__hologramRaysMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__hologramRaysMesh() const;

  constexpr void __set__hologramRaysMesh(::UnityEngine::Mesh* value);

  constexpr float_t& __get__topYPosition();

  constexpr float_t const& __get__topYPosition() const;

  constexpr void __set__topYPosition(float_t value);

  constexpr float_t& __get__bottomYPosition();

  constexpr float_t const& __get__bottomYPosition() const;

  constexpr void __set__bottomYPosition(float_t value);

  constexpr float_t& __get_cachedExtent();

  constexpr float_t const& __get_cachedExtent() const;

  constexpr void __set_cachedExtent(float_t value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::Tweening::FloatTween*& __get__transitionTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__transitionTween() const;

  constexpr void __set__transitionTween(::Tweening::FloatTween* value);

  constexpr ::UnityEngine::Color& __get__bloomColor();

  constexpr ::UnityEngine::Color const& __get__bloomColor() const;

  constexpr void __set__bloomColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__bloomTransparentColor();

  constexpr ::UnityEngine::Color const& __get__bloomTransparentColor() const;

  constexpr void __set__bloomTransparentColor(::UnityEngine::Color value);

  constexpr float_t& __get__alpha();

  constexpr float_t const& __get__alpha() const;

  constexpr void __set__alpha(float_t value);

  constexpr float_t& __get__raysDistance();

  constexpr float_t const& __get__raysDistance() const;

  constexpr void __set__raysDistance(float_t value);

  constexpr ::UnityEngine::Vector3& __get__raysLocalScale();

  constexpr ::UnityEngine::Vector3 const& __get__raysLocalScale() const;

  constexpr void __set__raysLocalScale(::UnityEngine::Vector3 value);

  constexpr bool& __get_boundsInitialized();

  constexpr bool const& __get_boundsInitialized() const;

  constexpr void __set_boundsInitialized(bool value);

  static inline void setStaticF__materialBottomPositionID(int32_t value);

  static inline int32_t getStaticF__materialBottomPositionID();

  static inline void setStaticF__materialTopPositionID(int32_t value);

  static inline int32_t getStaticF__materialTopPositionID();

  static inline void setStaticF__materialAlphaID(int32_t value);

  static inline int32_t getStaticF__materialAlphaID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method RuntimeInit addr 0x20ef4a8 size 0x58 virtual false final false
  static inline void RuntimeInit();

  /// @brief Method Awake addr 0x20ef500 size 0x13c virtual false final false
  inline void Awake();

  /// @brief Method OnDisable addr 0x20ef63c size 0x20 virtual false final false
  inline void OnDisable();

  /// @brief Method OnValidate addr 0x20ef65c size 0x7c virtual false final false
  inline void OnValidate();

  /// @brief Method Update addr 0x20ef94c size 0x4 virtual false final false
  inline void Update();

  /// @brief Method Refresh addr 0x20ef6d8 size 0x274 virtual false final false
  inline void Refresh();

  /// @brief Method Animate addr 0x20ef950 size 0xc8 virtual false final false
  inline void Animate(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method FadingCoroutine addr 0x20efa18 size 0x94 virtual false final false
  inline ::System::Collections::IEnumerator* FadingCoroutine(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method UpdateBounds addr 0x20efaac size 0xdc virtual false final false
  inline void UpdateBounds();

  static inline ::GlobalNamespace::HologramRays* New_ctor();

  /// @brief Method .ctor addr 0x20efbb0 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__22_0 addr 0x20efc9c size 0x68 virtual false final false
  inline void _Awake_b__22_0(float_t f);

  // Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HologramRays(HologramRays&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HologramRays(HologramRays const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HologramRays();

public:
  /// @brief Field _bloomLight, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TubeBloomPrePassLight* ____bloomLight;

  /// @brief Field _raysMeshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____raysMeshRenderer;

  /// @brief Field _targetTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _laserHolderTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____laserHolderTransform;

  /// @brief Field _hologramRaysTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____hologramRaysTransform;

  /// @brief Field _hologramRaysMesh, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____hologramRaysMesh;

  /// @brief Field _topYPosition, offset: 0x48, size: 0x4, def value: None
  float_t ____topYPosition;

  /// @brief Field _bottomYPosition, offset: 0x4c, size: 0x4, def value: None
  float_t ____bottomYPosition;

  /// @brief Field cachedExtent, offset: 0x50, size: 0x4, def value: None
  float_t ___cachedExtent;

  /// @brief Field _tweeningManager, offset: 0x58, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

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
