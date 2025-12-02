#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScreenFade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScreenFade)
namespace GlobalNamespace {
class OVRScreenFade__Fade_d__25;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScreenFade;
}
namespace GlobalNamespace {
class OVRScreenFade__Fade_d__25;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScreenFade);
MARK_REF_PTR_T(::GlobalNamespace::OVRScreenFade__Fade_d__25);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScreenFade/<Fade>d__25
class CORDL_TYPE OVRScreenFade__Fade_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRScreenFade> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field endAlpha, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_endAlpha, put = __cordl_internal_set_endAlpha)) float_t endAlpha;

  /// @brief Field startAlpha, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_startAlpha, put = __cordl_internal_set_startAlpha)) float_t startAlpha;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cf9020, size 0x12c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRScreenFade__Fade_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cf914c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cf9154, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cf918c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5cf901c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRScreenFade> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRScreenFade>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr float_t const& __cordl_internal_get_endAlpha() const;

  constexpr float_t& __cordl_internal_get_endAlpha();

  constexpr float_t const& __cordl_internal_get_startAlpha() const;

  constexpr float_t& __cordl_internal_get_startAlpha();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRScreenFade> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_endAlpha(float_t value);

  constexpr void __cordl_internal_set_startAlpha(float_t value);

  /// @brief Method .ctor, addr 0x5cf8fec, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRScreenFade__Fade_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade__Fade_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScreenFade__Fade_d__25(OVRScreenFade__Fade_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade__Fade_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScreenFade__Fade_d__25(OVRScreenFade__Fade_d__25 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7956 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRScreenFade> _____4__this;

  /// @brief Field startAlpha, offset: 0x28, size: 0x4, def value: None
  float_t ___startAlpha;

  /// @brief Field endAlpha, offset: 0x2c, size: 0x4, def value: None
  float_t ___endAlpha;

  /// @brief Field <elapsedTime>5__2, offset: 0x30, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, ___startAlpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, ___endAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade__Fade_d__25, ____elapsedTime_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScreenFade__Fade_d__25, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScreenFade
class CORDL_TYPE OVRScreenFade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Fade_d__25 = ::GlobalNamespace::OVRScreenFade__Fade_d__25;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::OVRScreenFade> _instance_k__BackingField;

  /// @brief Field animatedFadeAlpha, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_animatedFadeAlpha, put = __cordl_internal_set_animatedFadeAlpha)) float_t animatedFadeAlpha;

  __declspec(property(get = get_currentAlpha)) float_t currentAlpha;

  /// @brief Field explicitFadeAlpha, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_explicitFadeAlpha, put = __cordl_internal_set_explicitFadeAlpha)) float_t explicitFadeAlpha;

  /// @brief Field fadeColor, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_fadeColor, put = __cordl_internal_set_fadeColor)) ::UnityEngine::Color fadeColor;

  /// @brief Field fadeMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeMaterial, put = __cordl_internal_set_fadeMaterial)) ::UnityW<::UnityEngine::Material> fadeMaterial;

  /// @brief Field fadeMesh, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeMesh, put = __cordl_internal_set_fadeMesh)) ::UnityW<::UnityEngine::MeshFilter> fadeMesh;

  /// @brief Field fadeOnStart, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_fadeOnStart, put = __cordl_internal_set_fadeOnStart)) bool fadeOnStart;

  /// @brief Field fadeRenderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeRenderer, put = __cordl_internal_set_fadeRenderer)) ::UnityW<::UnityEngine::MeshRenderer> fadeRenderer;

  /// @brief Field fadeTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeTime, put = __cordl_internal_set_fadeTime)) float_t fadeTime;

  /// @brief Field isFading, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isFading, put = __cordl_internal_set_isFading)) bool isFading;

  /// @brief Field renderQueue, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_renderQueue, put = __cordl_internal_set_renderQueue)) int32_t renderQueue;

  /// @brief Field uiFadeAlpha, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_uiFadeAlpha, put = __cordl_internal_set_uiFadeAlpha)) float_t uiFadeAlpha;

  /// @brief Method Fade, addr 0x5cf8c2c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Fade(float_t startAlpha, float_t endAlpha);

  /// @brief Method FadeIn, addr 0x5cf8c04, size 0x28, virtual false, abstract: false, final false
  inline void FadeIn();

  /// @brief Method FadeOut, addr 0x5cf8c94, size 0x28, virtual false, abstract: false, final false
  inline void FadeOut();

  static inline ::GlobalNamespace::OVRScreenFade* New_ctor();

  /// @brief Method OnDestroy, addr 0x5cf8cfc, size 0x1c0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x5cf8ce4, size 0x18, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnLevelFinishedLoading, addr 0x5cf8cbc, size 0x28, virtual false, abstract: false, final false
  inline void OnLevelFinishedLoading(int32_t level);

  /// @brief Method SetExplicitFade, addr 0x5cf8fe4, size 0x8, virtual false, abstract: false, final false
  inline void SetExplicitFade(float_t level);

  /// @brief Method SetMaterialAlpha, addr 0x5cf8edc, size 0x108, virtual false, abstract: false, final false
  inline void SetMaterialAlpha();

  /// @brief Method SetUIFade, addr 0x5cf8ebc, size 0x20, virtual false, abstract: false, final false
  inline void SetUIFade(float_t level);

  /// @brief Method Start, addr 0x5cf873c, size 0x4c8, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_animatedFadeAlpha() const;

  constexpr float_t& __cordl_internal_get_animatedFadeAlpha();

  constexpr float_t const& __cordl_internal_get_explicitFadeAlpha() const;

  constexpr float_t& __cordl_internal_get_explicitFadeAlpha();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_fadeColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_fadeColor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_fadeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_fadeMaterial();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_fadeMesh() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_fadeMesh();

  constexpr bool const& __cordl_internal_get_fadeOnStart() const;

  constexpr bool& __cordl_internal_get_fadeOnStart();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_fadeRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_fadeRenderer();

  constexpr float_t const& __cordl_internal_get_fadeTime() const;

  constexpr float_t& __cordl_internal_get_fadeTime();

  constexpr bool const& __cordl_internal_get_isFading() const;

  constexpr bool& __cordl_internal_get_isFading();

  constexpr int32_t const& __cordl_internal_get_renderQueue() const;

  constexpr int32_t& __cordl_internal_get_renderQueue();

  constexpr float_t const& __cordl_internal_get_uiFadeAlpha() const;

  constexpr float_t& __cordl_internal_get_uiFadeAlpha();

  constexpr void __cordl_internal_set_animatedFadeAlpha(float_t value);

  constexpr void __cordl_internal_set_explicitFadeAlpha(float_t value);

  constexpr void __cordl_internal_set_fadeColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_fadeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_fadeMesh(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_fadeOnStart(bool value);

  constexpr void __cordl_internal_set_fadeRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_fadeTime(float_t value);

  constexpr void __cordl_internal_set_isFading(bool value);

  constexpr void __cordl_internal_set_renderQueue(int32_t value);

  constexpr void __cordl_internal_set_uiFadeAlpha(float_t value);

  /// @brief Method .ctor, addr 0x5cf8ff4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::OVRScreenFade> getStaticF__instance_k__BackingField();

  /// @brief Method get_currentAlpha, addr 0x5cf868c, size 0xb0, virtual false, abstract: false, final false
  inline float_t get_currentAlpha();

  /// @brief Method get_instance, addr 0x5cf85f0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRScreenFade> get_instance();

  static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::OVRScreenFade> value);

  /// @brief Method set_instance, addr 0x5cf863c, size 0x50, virtual false, abstract: false, final false
  static inline void set_instance(::GlobalNamespace::OVRScreenFade* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScreenFade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScreenFade(OVRScreenFade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScreenFade(OVRScreenFade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7957 };

  /// @brief Field fadeTime, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeTime;

  /// @brief Field fadeColor, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ___fadeColor;

  /// @brief Field fadeOnStart, offset: 0x34, size: 0x1, def value: None
  bool ___fadeOnStart;

  /// @brief Field renderQueue, offset: 0x38, size: 0x4, def value: None
  int32_t ___renderQueue;

  /// @brief Field explicitFadeAlpha, offset: 0x3c, size: 0x4, def value: None
  float_t ___explicitFadeAlpha;

  /// @brief Field animatedFadeAlpha, offset: 0x40, size: 0x4, def value: None
  float_t ___animatedFadeAlpha;

  /// @brief Field uiFadeAlpha, offset: 0x44, size: 0x4, def value: None
  float_t ___uiFadeAlpha;

  /// @brief Field fadeRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___fadeRenderer;

  /// @brief Field fadeMesh, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___fadeMesh;

  /// @brief Field fadeMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___fadeMaterial;

  /// @brief Field isFading, offset: 0x60, size: 0x1, def value: None
  bool ___isFading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeOnStart) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___renderQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___explicitFadeAlpha) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___animatedFadeAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___uiFadeAlpha) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___fadeMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScreenFade, ___isFading) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScreenFade, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScreenFade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScreenFade*, "", "OVRScreenFade");
NEED_NO_BOX(::GlobalNamespace::OVRScreenFade__Fade_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScreenFade__Fade_d__25*, "", "OVRScreenFade/<Fade>d__25");
