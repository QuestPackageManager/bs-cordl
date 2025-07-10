#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenCaptureAfterDelay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCaptureAfterDelay)
namespace GlobalNamespace {
class MainEffectController;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay_InitData;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay__Start_d__6;
}
namespace GlobalNamespace {
struct ScreenCaptureCache_ScreenshotType;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay_InitData;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay__Start_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureAfterDelay);
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureAfterDelay_InitData);
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6);
// Dependencies ScreenCaptureCache::ScreenshotType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenCaptureAfterDelay/InitData
class CORDL_TYPE ScreenCaptureAfterDelay_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field pixelsHeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelsHeight, put = __cordl_internal_set_pixelsHeight)) int32_t pixelsHeight;

  /// @brief Field pixelsWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelsWidth, put = __cordl_internal_set_pixelsWidth)) int32_t pixelsWidth;

  /// @brief Field screenCaptureTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_screenCaptureTime, put = __cordl_internal_set_screenCaptureTime)) float_t screenCaptureTime;

  /// @brief Field screenshotType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotType, put = __cordl_internal_set_screenshotType)) ::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType;

  static inline ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* New_ctor(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth,
                                                                              int32_t pixelsHeight);

  constexpr int32_t const& __cordl_internal_get_pixelsHeight() const;

  constexpr int32_t& __cordl_internal_get_pixelsHeight();

  constexpr int32_t const& __cordl_internal_get_pixelsWidth() const;

  constexpr int32_t& __cordl_internal_get_pixelsWidth();

  constexpr float_t const& __cordl_internal_get_screenCaptureTime() const;

  constexpr float_t& __cordl_internal_get_screenCaptureTime();

  constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType const& __cordl_internal_get_screenshotType() const;

  constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType& __cordl_internal_get_screenshotType();

  constexpr void __cordl_internal_set_pixelsHeight(int32_t value);

  constexpr void __cordl_internal_set_pixelsWidth(int32_t value);

  constexpr void __cordl_internal_set_screenCaptureTime(float_t value);

  constexpr void __cordl_internal_set_screenshotType(::GlobalNamespace::ScreenCaptureCache_ScreenshotType value);

  /// @brief Method .ctor, addr 0x4086084, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCaptureAfterDelay_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCaptureAfterDelay_InitData(ScreenCaptureAfterDelay_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCaptureAfterDelay_InitData(ScreenCaptureAfterDelay_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17890 };

  /// @brief Field screenshotType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ScreenCaptureCache_ScreenshotType ___screenshotType;

  /// @brief Field screenCaptureTime, offset: 0x14, size: 0x4, def value: None
  float_t ___screenCaptureTime;

  /// @brief Field pixelsWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___pixelsWidth;

  /// @brief Field pixelsHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t ___pixelsHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay_InitData, ___screenshotType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay_InitData, ___screenCaptureTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay_InitData, ___pixelsWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay_InitData, ___pixelsHeight) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureAfterDelay_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenCaptureAfterDelay/<Start>d__6
class CORDL_TYPE ScreenCaptureAfterDelay__Start_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x40860e8, size 0x1d0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x40862b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x40862c0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x40862f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x40860e4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value);

  /// @brief Method .ctor, addr 0x4085cd4, size 0x28, virtual false, abstract: false, final false
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
  constexpr ScreenCaptureAfterDelay__Start_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay__Start_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCaptureAfterDelay__Start_d__6(ScreenCaptureAfterDelay__Start_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay__Start_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCaptureAfterDelay__Start_d__6(ScreenCaptureAfterDelay__Start_d__6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17891 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenCaptureAfterDelay
class CORDL_TYPE ScreenCaptureAfterDelay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::ScreenCaptureAfterDelay_InitData;

  using _Start_d__6 = ::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6;

  /// @brief Field _captureRenderTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__captureRenderTexture, put = __cordl_internal_set__captureRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _captureRenderTexture;

  /// @brief Field _captureTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__captureTexture, put = __cordl_internal_set__captureTexture)) ::UnityW<::UnityEngine::Texture2D> _captureTexture;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* _initData;

  /// @brief Field _mainEffectController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectController, put = __cordl_internal_set__mainEffectController)) ::UnityW<::GlobalNamespace::MainEffectController> _mainEffectController;

  /// @brief Field _screenCaptureCache, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__screenCaptureCache, put = __cordl_internal_set__screenCaptureCache)) ::GlobalNamespace::ScreenCaptureCache* _screenCaptureCache;

  /// @brief Method HandleMainEffectControllerAfterImageEffectEvent, addr 0x4085dd8, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleMainEffectControllerAfterImageEffectEvent(::UnityEngine::RenderTexture* renderTexture);

  static inline ::GlobalNamespace::ScreenCaptureAfterDelay* New_ctor();

  /// @brief Method OnDestroy, addr 0x4085cfc, size 0xdc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x4085c74, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__captureRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__captureRenderTexture();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__captureTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__captureTexture();

  constexpr ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::ScreenCaptureAfterDelay_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::MainEffectController> const& __cordl_internal_get__mainEffectController() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectController>& __cordl_internal_get__mainEffectController();

  constexpr ::GlobalNamespace::ScreenCaptureCache* const& __cordl_internal_get__screenCaptureCache() const;

  constexpr ::GlobalNamespace::ScreenCaptureCache*& __cordl_internal_get__screenCaptureCache();

  constexpr void __cordl_internal_set__captureRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__captureTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::ScreenCaptureAfterDelay_InitData* value);

  constexpr void __cordl_internal_set__mainEffectController(::UnityW<::GlobalNamespace::MainEffectController> value);

  constexpr void __cordl_internal_set__screenCaptureCache(::GlobalNamespace::ScreenCaptureCache* value);

  /// @brief Method .ctor, addr 0x408607c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCaptureAfterDelay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCaptureAfterDelay(ScreenCaptureAfterDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCaptureAfterDelay(ScreenCaptureAfterDelay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17892 };

  /// @brief Field _mainEffectController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectController> ____mainEffectController;

  /// @brief Field _screenCaptureCache, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ScreenCaptureCache* ____screenCaptureCache;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ScreenCaptureAfterDelay_InitData* ____initData;

  /// @brief Field _captureTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____captureTexture;

  /// @brief Field _captureRenderTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____captureRenderTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____mainEffectController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____screenCaptureCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____captureTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____captureRenderTexture) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureAfterDelay, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureAfterDelay*, "", "ScreenCaptureAfterDelay");
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureAfterDelay_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureAfterDelay_InitData*, "", "ScreenCaptureAfterDelay/InitData");
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureAfterDelay__Start_d__6*, "", "ScreenCaptureAfterDelay/<Start>d__6");
