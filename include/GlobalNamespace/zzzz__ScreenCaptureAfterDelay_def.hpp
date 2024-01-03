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
class __ScreenCaptureAfterDelay__InitData;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
namespace GlobalNamespace {
class __ScreenCaptureAfterDelay___Start_d__6;
}
namespace GlobalNamespace {
class MainEffectController;
}
namespace GlobalNamespace {
struct __ScreenCaptureCache__ScreenshotType;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15306))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15303))
// CS Name: ::ScreenCaptureAfterDelay::InitData*
class CORDL_TYPE __ScreenCaptureAfterDelay__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field screenshotType, offset 0x10, size 0x4
  __declspec(property(get = __get_screenshotType, put = __set_screenshotType))::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType;

  /// @brief Field screenCaptureTime, offset 0x14, size 0x4
  __declspec(property(get = __get_screenCaptureTime, put = __set_screenCaptureTime)) float_t screenCaptureTime;

  /// @brief Field pixelsWidth, offset 0x18, size 0x4
  __declspec(property(get = __get_pixelsWidth, put = __set_pixelsWidth)) int32_t pixelsWidth;

  /// @brief Field pixelsHeight, offset 0x1c, size 0x4
  __declspec(property(get = __get_pixelsHeight, put = __set_pixelsHeight)) int32_t pixelsHeight;

  constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType& __get_screenshotType();

  constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const& __get_screenshotType() const;

  constexpr void __set_screenshotType(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType value);

  constexpr float_t& __get_screenCaptureTime();

  constexpr float_t const& __get_screenCaptureTime() const;

  constexpr void __set_screenCaptureTime(float_t value);

  constexpr int32_t& __get_pixelsWidth();

  constexpr int32_t const& __get_pixelsWidth() const;

  constexpr void __set_pixelsWidth(int32_t value);

  constexpr int32_t& __get_pixelsHeight();

  constexpr int32_t const& __get_pixelsHeight() const;

  constexpr void __set_pixelsHeight(int32_t value);

  static inline ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* New_ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth,
                                                                                 int32_t pixelsHeight);

  /// @brief Method .ctor, addr 0x280b91c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight);

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenCaptureAfterDelay__InitData(__ScreenCaptureAfterDelay__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenCaptureAfterDelay__InitData(__ScreenCaptureAfterDelay__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenCaptureAfterDelay__InitData();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15304))
// CS Name: ::ScreenCaptureAfterDelay::<Start>d__6*
class CORDL_TYPE __ScreenCaptureAfterDelay___Start_d__6 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ScreenCaptureAfterDelay* __4__this;

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

  constexpr ::GlobalNamespace::ScreenCaptureAfterDelay*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScreenCaptureAfterDelay*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ScreenCaptureAfterDelay* value);

  static inline ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x280b550, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x280b97c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x280b980, size 0x1dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x280bb5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x280bb64, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x280bba4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay___Start_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenCaptureAfterDelay___Start_d__6(__ScreenCaptureAfterDelay___Start_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenCaptureAfterDelay___Start_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenCaptureAfterDelay___Start_d__6(__ScreenCaptureAfterDelay___Start_d__6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenCaptureAfterDelay___Start_d__6();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenCaptureAfterDelay* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15305))
// CS Name: ::ScreenCaptureAfterDelay*
class CORDL_TYPE ScreenCaptureAfterDelay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__6 = ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6;

  using InitData = ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData;

  /// @brief Field _mainEffectController, offset 0x18, size 0x8
  __declspec(property(get = __get__mainEffectController, put = __set__mainEffectController))::GlobalNamespace::MainEffectController* _mainEffectController;

  /// @brief Field _screenCaptureCache, offset 0x20, size 0x8
  __declspec(property(get = __get__screenCaptureCache, put = __set__screenCaptureCache))::GlobalNamespace::ScreenCaptureCache* _screenCaptureCache;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* _initData;

  /// @brief Field _captureTexture, offset 0x30, size 0x8
  __declspec(property(get = __get__captureTexture, put = __set__captureTexture))::UnityEngine::Texture2D* _captureTexture;

  /// @brief Field _captureRenderTexture, offset 0x38, size 0x8
  __declspec(property(get = __get__captureRenderTexture, put = __set__captureRenderTexture))::UnityEngine::RenderTexture* _captureRenderTexture;

  constexpr ::GlobalNamespace::MainEffectController*& __get__mainEffectController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectController*> const& __get__mainEffectController() const;

  constexpr void __set__mainEffectController(::GlobalNamespace::MainEffectController* value);

  constexpr ::GlobalNamespace::ScreenCaptureCache*& __get__screenCaptureCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScreenCaptureCache*> const& __get__screenCaptureCache() const;

  constexpr void __set__screenCaptureCache(::GlobalNamespace::ScreenCaptureCache* value);

  constexpr ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* value);

  constexpr ::UnityEngine::Texture2D*& __get__captureTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__captureTexture() const;

  constexpr void __set__captureTexture(::UnityEngine::Texture2D* value);

  constexpr ::UnityEngine::RenderTexture*& __get__captureRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__captureRenderTexture() const;

  constexpr void __set__captureRenderTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method Start, addr 0x280b4e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method OnDestroy, addr 0x280b578, size 0xe0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleMainEffectControllerAfterImageEffectEvent, addr 0x280b658, size 0x210, virtual false, abstract: false, final false
  inline void HandleMainEffectControllerAfterImageEffectEvent(::UnityEngine::RenderTexture* renderTexture);

  static inline ::GlobalNamespace::ScreenCaptureAfterDelay* New_ctor();

  /// @brief Method .ctor, addr 0x280b914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenCaptureAfterDelay(ScreenCaptureAfterDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenCaptureAfterDelay(ScreenCaptureAfterDelay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenCaptureAfterDelay();

public:
  /// @brief Field _mainEffectController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectController* ____mainEffectController;

  /// @brief Field _screenCaptureCache, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenCaptureCache* ____screenCaptureCache;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* ____initData;

  /// @brief Field _captureTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____captureTexture;

  /// @brief Field _captureRenderTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____captureRenderTexture;

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
