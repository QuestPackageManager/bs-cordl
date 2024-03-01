#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenCaptureAfterDelay)
namespace GlobalNamespace {
class MainEffectController;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
namespace GlobalNamespace {
class __ScreenCaptureAfterDelay__InitData;
}
namespace GlobalNamespace {
class __ScreenCaptureAfterDelay___Start_d__6;
}
namespace GlobalNamespace {
struct __ScreenCaptureCache__ScreenshotType;
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
class __ScreenCaptureAfterDelay__InitData;
}
namespace GlobalNamespace {
class __ScreenCaptureAfterDelay___Start_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenCaptureAfterDelay);
MARK_REF_PTR_T(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScreenCaptureAfterDelay::InitData*
class CORDL_TYPE __ScreenCaptureAfterDelay__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field pixelsHeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelsHeight, put = __cordl_internal_set_pixelsHeight)) int32_t pixelsHeight;

  /// @brief Field pixelsWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelsWidth, put = __cordl_internal_set_pixelsWidth)) int32_t pixelsWidth;

  /// @brief Field screenCaptureTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_screenCaptureTime, put = __cordl_internal_set_screenCaptureTime)) float_t screenCaptureTime;

  /// @brief Field screenshotType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotType, put = __cordl_internal_set_screenshotType))::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType;

  static inline ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* New_ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth,
                                                                                 int32_t pixelsHeight);

  constexpr int32_t const& __cordl_internal_get_pixelsHeight() const;

  constexpr int32_t& __cordl_internal_get_pixelsHeight();

  constexpr int32_t const& __cordl_internal_get_pixelsWidth() const;

  constexpr int32_t& __cordl_internal_get_pixelsWidth();

  constexpr float_t const& __cordl_internal_get_screenCaptureTime() const;

  constexpr float_t& __cordl_internal_get_screenCaptureTime();

  constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const& __cordl_internal_get_screenshotType() const;

  constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType& __cordl_internal_get_screenshotType();

  constexpr void __cordl_internal_set_pixelsHeight(int32_t value);

  constexpr void __cordl_internal_set_pixelsWidth(int32_t value);

  constexpr void __cordl_internal_set_screenCaptureTime(float_t value);

  constexpr void __cordl_internal_set_screenshotType(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType value);

  /// @brief Method .ctor, addr 0x28f4580, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenCaptureAfterDelay__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenCaptureAfterDelay__InitData(__ScreenCaptureAfterDelay__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenCaptureAfterDelay__InitData(__ScreenCaptureAfterDelay__InitData const&) = delete;

  /// @brief Field screenshotType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType ___screenshotType;

  /// @brief Field screenCaptureTime, offset: 0x14, size: 0x4, def value: None
  float_t ___screenCaptureTime;

  /// @brief Field pixelsWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ___pixelsWidth;

  /// @brief Field pixelsHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t ___pixelsHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData, ___screenshotType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData, ___screenCaptureTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData, ___pixelsWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData, ___pixelsHeight) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__6
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScreenCaptureAfterDelay::<Start>d__6*
class CORDL_TYPE __ScreenCaptureAfterDelay___Start_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x28f45e4, size 0x1dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x28f47c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x28f47c8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x28f4808, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x28f45e0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value);

  /// @brief Method .ctor, addr 0x28f41b4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ScreenCaptureAfterDelay___Start_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay___Start_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenCaptureAfterDelay___Start_d__6(__ScreenCaptureAfterDelay___Start_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay___Start_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenCaptureAfterDelay___Start_d__6(__ScreenCaptureAfterDelay___Start_d__6 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScreenCaptureAfterDelay
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScreenCaptureAfterDelay*
class CORDL_TYPE ScreenCaptureAfterDelay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData;

  using _Start_d__6 = ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6;

  /// @brief Field _captureRenderTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__captureRenderTexture, put = __cordl_internal_set__captureRenderTexture))::UnityW<::UnityEngine::RenderTexture> _captureRenderTexture;

  /// @brief Field _captureTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__captureTexture, put = __cordl_internal_set__captureTexture))::UnityW<::UnityEngine::Texture2D> _captureTexture;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* _initData;

  /// @brief Field _mainEffectController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectController, put = __cordl_internal_set__mainEffectController))::UnityW<::GlobalNamespace::MainEffectController> _mainEffectController;

  /// @brief Field _screenCaptureCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__screenCaptureCache, put = __cordl_internal_set__screenCaptureCache))::GlobalNamespace::ScreenCaptureCache* _screenCaptureCache;

  /// @brief Method HandleMainEffectControllerAfterImageEffectEvent, addr 0x28f42bc, size 0x210, virtual false, abstract: false, final false
  inline void HandleMainEffectControllerAfterImageEffectEvent(::UnityEngine::RenderTexture* renderTexture);

  static inline ::GlobalNamespace::ScreenCaptureAfterDelay* New_ctor();

  /// @brief Method OnDestroy, addr 0x28f41dc, size 0xe0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x28f414c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__captureRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__captureRenderTexture();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__captureTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__captureTexture();

  constexpr ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectController> const& __cordl_internal_get__mainEffectController() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectController>& __cordl_internal_get__mainEffectController();

  constexpr ::GlobalNamespace::ScreenCaptureCache*& __cordl_internal_get__screenCaptureCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScreenCaptureCache*> const& __cordl_internal_get__screenCaptureCache() const;

  constexpr void __cordl_internal_set__captureRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__captureTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* value);

  constexpr void __cordl_internal_set__mainEffectController(::UnityW<::GlobalNamespace::MainEffectController> value);

  constexpr void __cordl_internal_set__screenCaptureCache(::GlobalNamespace::ScreenCaptureCache* value);

  /// @brief Method .ctor, addr 0x28f4578, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _mainEffectController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectController> ____mainEffectController;

  /// @brief Field _screenCaptureCache, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenCaptureCache* ____screenCaptureCache;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* ____initData;

  /// @brief Field _captureTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____captureTexture;

  /// @brief Field _captureRenderTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____captureRenderTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenCaptureAfterDelay, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____mainEffectController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____screenCaptureCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____captureTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenCaptureAfterDelay, ____captureRenderTexture) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenCaptureAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenCaptureAfterDelay*, "", "ScreenCaptureAfterDelay");
NEED_NO_BOX(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*, "", "ScreenCaptureAfterDelay/InitData");
NEED_NO_BOX(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*, "", "ScreenCaptureAfterDelay/<Start>d__6");
