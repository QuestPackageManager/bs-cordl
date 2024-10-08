#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneLoader)
namespace GlobalNamespace {
struct __OVRSceneLoader__SceneInfo;
}
namespace GlobalNamespace {
class __OVRSceneLoader___DelayCanvasPosUpdate_d__24;
}
namespace GlobalNamespace {
class __OVRSceneLoader___onCheckSceneCoroutine_d__25;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneLoader;
}
namespace GlobalNamespace {
class __OVRSceneLoader___DelayCanvasPosUpdate_d__24;
}
namespace GlobalNamespace {
class __OVRSceneLoader___onCheckSceneCoroutine_d__25;
}
namespace GlobalNamespace {
struct __OVRSceneLoader__SceneInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneLoader);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25);
MARK_VAL_T(::GlobalNamespace::__OVRSceneLoader__SceneInfo);
// Type: ::SceneInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneLoader::SceneInfo
struct CORDL_TYPE __OVRSceneLoader__SceneInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3f932c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneLoader__SceneInfo();

  // Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr __OVRSceneLoader__SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes, int64_t version) noexcept;

  /// @brief Field scenes, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* scenes;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  int64_t version;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader__SceneInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader__SceneInfo, scenes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader__SceneInfo, version) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DelayCanvasPosUpdate>d__24
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneLoader::<DelayCanvasPosUpdate>d__24*
class CORDL_TYPE __OVRSceneLoader___DelayCanvasPosUpdate_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSceneLoader> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3f932cc, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3f9336c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3f93374, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3f933ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3f932c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  /// @brief Method .ctor, addr 0x3f930bc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __OVRSceneLoader___DelayCanvasPosUpdate_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneLoader___DelayCanvasPosUpdate_d__24(__OVRSceneLoader___DelayCanvasPosUpdate_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneLoader___DelayCanvasPosUpdate_d__24(__OVRSceneLoader___DelayCanvasPosUpdate_d__24 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<onCheckSceneCoroutine>d__25
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneLoader::<onCheckSceneCoroutine>d__25*
class CORDL_TYPE __OVRSceneLoader___onCheckSceneCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSceneLoader> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3f933b8, size 0x348, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3f93700, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3f93708, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3f93740, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3f933b4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  /// @brief Method .ctor, addr 0x3f930e4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __OVRSceneLoader___onCheckSceneCoroutine_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneLoader___onCheckSceneCoroutine_d__25(__OVRSceneLoader___onCheckSceneCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneLoader___onCheckSceneCoroutine_d__25(__OVRSceneLoader___onCheckSceneCoroutine_d__25 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneLoader
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneLoader*
class CORDL_TYPE OVRSceneLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SceneInfo = ::GlobalNamespace::__OVRSceneLoader__SceneInfo;

  using _DelayCanvasPosUpdate_d__24 = ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24;

  using _onCheckSceneCoroutine_d__25 = ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25;

  /// @brief Field canvasPosUpdated, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_canvasPosUpdated, put = __cordl_internal_set_canvasPosUpdated)) bool canvasPosUpdated;

  /// @brief Field closeLogDialogue, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_closeLogDialogue, put = __cordl_internal_set_closeLogDialogue)) bool closeLogDialogue;

  /// @brief Field closeLogTimer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_closeLogTimer, put = __cordl_internal_set_closeLogTimer)) float_t closeLogTimer;

  /// @brief Field currentSceneInfo, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_currentSceneInfo, put = __cordl_internal_set_currentSceneInfo)) ::GlobalNamespace::__OVRSceneLoader__SceneInfo currentSceneInfo;

  /// @brief Field formattedLogText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_formattedLogText, put = __cordl_internal_set_formattedLogText)) ::StringW formattedLogText;

  /// @brief Field loadSceneOperation, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_loadSceneOperation, put = __cordl_internal_set_loadSceneOperation)) ::UnityEngine::AsyncOperation* loadSceneOperation;

  /// @brief Field loadedAssetBundles, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_loadedAssetBundles,
                      put = __cordl_internal_set_loadedAssetBundles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* loadedAssetBundles;

  /// @brief Field logCloseTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_logCloseTime, put = __cordl_internal_set_logCloseTime)) float_t logCloseTime;

  /// @brief Field logTextBox, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_logTextBox, put = __cordl_internal_set_logTextBox)) ::UnityW<::UnityEngine::UI::Text> logTextBox;

  /// @brief Field mainCanvas, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mainCanvas, put = __cordl_internal_set_mainCanvas)) ::UnityW<::UnityEngine::Canvas> mainCanvas;

  /// @brief Field sceneCheckIntervalSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sceneCheckIntervalSeconds, put = __cordl_internal_set_sceneCheckIntervalSeconds)) float_t sceneCheckIntervalSeconds;

  /// @brief Field sceneLoadDataPath, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneLoadDataPath, put = __cordl_internal_set_sceneLoadDataPath)) ::StringW sceneLoadDataPath;

  /// @brief Field scenePath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_scenePath, put = __cordl_internal_set_scenePath)) ::StringW scenePath;

  /// @brief Method Awake, addr 0x3f91db8, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DelayCanvasPosUpdate, addr 0x3f91f94, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayCanvasPosUpdate();

  /// @brief Method DestroyAllGameObjects, addr 0x3f9310c, size 0x110, virtual false, abstract: false, final false
  inline void DestroyAllGameObjects();

  /// @brief Method GetSceneInfo, addr 0x3f91ff4, size 0x284, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSceneLoader__SceneInfo GetSceneInfo();

  /// @brief Method LoadScene, addr 0x3f92278, size 0x8a4, virtual false, abstract: false, final false
  inline void LoadScene(::GlobalNamespace::__OVRSceneLoader__SceneInfo sceneInfo);

  /// @brief Method LoadSceneOperation_completed, addr 0x3f92b1c, size 0xdc, virtual false, abstract: false, final false
  inline void LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj);

  static inline ::GlobalNamespace::OVRSceneLoader* New_ctor();

  /// @brief Method Start, addr 0x3f91e24, size 0x170, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3f92c58, size 0x264, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCanvasPosition, addr 0x3f92ebc, size 0x200, virtual false, abstract: false, final false
  inline void UpdateCanvasPosition();

  constexpr bool const& __cordl_internal_get_canvasPosUpdated() const;

  constexpr bool& __cordl_internal_get_canvasPosUpdated();

  constexpr bool const& __cordl_internal_get_closeLogDialogue() const;

  constexpr bool& __cordl_internal_get_closeLogDialogue();

  constexpr float_t const& __cordl_internal_get_closeLogTimer() const;

  constexpr float_t& __cordl_internal_get_closeLogTimer();

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo const& __cordl_internal_get_currentSceneInfo() const;

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo& __cordl_internal_get_currentSceneInfo();

  constexpr ::StringW const& __cordl_internal_get_formattedLogText() const;

  constexpr ::StringW& __cordl_internal_get_formattedLogText();

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_loadSceneOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __cordl_internal_get_loadSceneOperation() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get_loadedAssetBundles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*> const& __cordl_internal_get_loadedAssetBundles() const;

  constexpr float_t const& __cordl_internal_get_logCloseTime() const;

  constexpr float_t& __cordl_internal_get_logCloseTime();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_logTextBox() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_logTextBox();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_mainCanvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_mainCanvas();

  constexpr float_t const& __cordl_internal_get_sceneCheckIntervalSeconds() const;

  constexpr float_t& __cordl_internal_get_sceneCheckIntervalSeconds();

  constexpr ::StringW const& __cordl_internal_get_sceneLoadDataPath() const;

  constexpr ::StringW& __cordl_internal_get_sceneLoadDataPath();

  constexpr ::StringW const& __cordl_internal_get_scenePath() const;

  constexpr ::StringW& __cordl_internal_get_scenePath();

  constexpr void __cordl_internal_set_canvasPosUpdated(bool value);

  constexpr void __cordl_internal_set_closeLogDialogue(bool value);

  constexpr void __cordl_internal_set_closeLogTimer(float_t value);

  constexpr void __cordl_internal_set_currentSceneInfo(::GlobalNamespace::__OVRSceneLoader__SceneInfo value);

  constexpr void __cordl_internal_set_formattedLogText(::StringW value);

  constexpr void __cordl_internal_set_loadSceneOperation(::UnityEngine::AsyncOperation* value);

  constexpr void __cordl_internal_set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* value);

  constexpr void __cordl_internal_set_logCloseTime(float_t value);

  constexpr void __cordl_internal_set_logTextBox(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_mainCanvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_sceneCheckIntervalSeconds(float_t value);

  constexpr void __cordl_internal_set_sceneLoadDataPath(::StringW value);

  constexpr void __cordl_internal_set_scenePath(::StringW value);

  /// @brief Method .ctor, addr 0x3f9321c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method onCheckSceneCoroutine, addr 0x3f92bf8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* onCheckSceneCoroutine();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneLoader(OVRSceneLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneLoader(OVRSceneLoader const&) = delete;

  /// @brief Field sceneCheckIntervalSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___sceneCheckIntervalSeconds;

  /// @brief Field logCloseTime, offset: 0x24, size: 0x4, def value: None
  float_t ___logCloseTime;

  /// @brief Field mainCanvas, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___mainCanvas;

  /// @brief Field logTextBox, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___logTextBox;

  /// @brief Field loadSceneOperation, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ___loadSceneOperation;

  /// @brief Field formattedLogText, offset: 0x40, size: 0x8, def value: None
  ::StringW ___formattedLogText;

  /// @brief Field closeLogTimer, offset: 0x48, size: 0x4, def value: None
  float_t ___closeLogTimer;

  /// @brief Field closeLogDialogue, offset: 0x4c, size: 0x1, def value: None
  bool ___closeLogDialogue;

  /// @brief Field canvasPosUpdated, offset: 0x4d, size: 0x1, def value: None
  bool ___canvasPosUpdated;

  /// @brief Field scenePath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___scenePath;

  /// @brief Field sceneLoadDataPath, offset: 0x58, size: 0x8, def value: None
  ::StringW ___sceneLoadDataPath;

  /// @brief Field loadedAssetBundles, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* ___loadedAssetBundles;

  /// @brief Field currentSceneInfo, offset: 0x68, size: 0x10, def value: None
  ::GlobalNamespace::__OVRSceneLoader__SceneInfo ___currentSceneInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8241 };

  /// @brief Field externalStoragePath offset 0xffffffff size 0x8
  static constexpr ::ConstString externalStoragePath{ u"/sdcard/Android/data" };

  /// @brief Field resourceBundleName offset 0xffffffff size 0x8
  static constexpr ::ConstString resourceBundleName{ u"asset_resources" };

  /// @brief Field sceneLoadDataName offset 0xffffffff size 0x8
  static constexpr ::ConstString sceneLoadDataName{ u"SceneLoadData.txt" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___sceneCheckIntervalSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___logCloseTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___mainCanvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___logTextBox) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___loadSceneOperation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___formattedLogText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___closeLogTimer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___closeLogDialogue) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___canvasPosUpdated) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___scenePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___sceneLoadDataPath) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___loadedAssetBundles) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___currentSceneInfo) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader__SceneInfo, "", "OVRSceneLoader/SceneInfo");
