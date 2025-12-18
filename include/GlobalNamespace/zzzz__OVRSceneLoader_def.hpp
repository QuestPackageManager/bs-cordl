#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneLoader)
namespace GlobalNamespace {
struct OVRSceneLoader_SceneInfo;
}
namespace GlobalNamespace {
class OVRSceneLoader__DelayCanvasPosUpdate_d__24;
}
namespace GlobalNamespace {
class OVRSceneLoader__onCheckSceneCoroutine_d__25;
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
class OVRSceneLoader__DelayCanvasPosUpdate_d__24;
}
namespace GlobalNamespace {
class OVRSceneLoader__onCheckSceneCoroutine_d__25;
}
namespace GlobalNamespace {
struct OVRSceneLoader_SceneInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneLoader);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25);
MARK_VAL_T(::GlobalNamespace::OVRSceneLoader_SceneInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneLoader/SceneInfo
struct CORDL_TYPE OVRSceneLoader_SceneInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5d13b34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneLoader_SceneInfo();

  // Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr OVRSceneLoader_SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes, int64_t version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7637 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field scenes, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* scenes;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  int64_t version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneLoader_SceneInfo, scenes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader_SceneInfo, version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader_SceneInfo, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneLoader/<DelayCanvasPosUpdate>d__24
class CORDL_TYPE OVRSceneLoader__DelayCanvasPosUpdate_d__24 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x5d13b48, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d13bec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d13bf4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d13c2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5d13b44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  /// @brief Method .ctor, addr 0x5d13b3c, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRSceneLoader__DelayCanvasPosUpdate_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader__DelayCanvasPosUpdate_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneLoader__DelayCanvasPosUpdate_d__24(OVRSceneLoader__DelayCanvasPosUpdate_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader__DelayCanvasPosUpdate_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneLoader__DelayCanvasPosUpdate_d__24(OVRSceneLoader__DelayCanvasPosUpdate_d__24 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7638 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneLoader/<onCheckSceneCoroutine>d__25
class CORDL_TYPE OVRSceneLoader__onCheckSceneCoroutine_d__25 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x5d13c40, size 0x330, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d13f70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d13f78, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d13fb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5d13c3c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  /// @brief Method .ctor, addr 0x5d13c34, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRSceneLoader__onCheckSceneCoroutine_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader__onCheckSceneCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneLoader__onCheckSceneCoroutine_d__25(OVRSceneLoader__onCheckSceneCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader__onCheckSceneCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneLoader__onCheckSceneCoroutine_d__25(OVRSceneLoader__onCheckSceneCoroutine_d__25 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7639 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSceneLoader::SceneInfo, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneLoader
class CORDL_TYPE OVRSceneLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SceneInfo = ::GlobalNamespace::OVRSceneLoader_SceneInfo;

  using _DelayCanvasPosUpdate_d__24 = ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24;

  using _onCheckSceneCoroutine_d__25 = ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25;

  /// @brief Field canvasPosUpdated, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_canvasPosUpdated, put = __cordl_internal_set_canvasPosUpdated)) bool canvasPosUpdated;

  /// @brief Field closeLogDialogue, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_closeLogDialogue, put = __cordl_internal_set_closeLogDialogue)) bool closeLogDialogue;

  /// @brief Field closeLogTimer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_closeLogTimer, put = __cordl_internal_set_closeLogTimer)) float_t closeLogTimer;

  /// @brief Field currentSceneInfo, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_currentSceneInfo, put = __cordl_internal_set_currentSceneInfo)) ::GlobalNamespace::OVRSceneLoader_SceneInfo currentSceneInfo;

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

  /// @brief Method Awake, addr 0x5d124d0, size 0x70, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DelayCanvasPosUpdate, addr 0x5d126bc, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayCanvasPosUpdate();

  /// @brief Method DestroyAllGameObjects, addr 0x5d138b4, size 0x10c, virtual false, abstract: false, final false
  inline void DestroyAllGameObjects();

  /// @brief Method GetSceneInfo, addr 0x5d12710, size 0x2a8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSceneLoader_SceneInfo GetSceneInfo();

  /// @brief Method LoadScene, addr 0x5d129b8, size 0x914, virtual false, abstract: false, final false
  inline void LoadScene(::GlobalNamespace::OVRSceneLoader_SceneInfo sceneInfo);

  /// @brief Method LoadSceneOperation_completed, addr 0x5d132cc, size 0xe0, virtual false, abstract: false, final false
  inline void LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj);

  static inline ::GlobalNamespace::OVRSceneLoader* New_ctor();

  /// @brief Method Start, addr 0x5d12540, size 0x17c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5d13400, size 0x2b0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCanvasPosition, addr 0x5d136b0, size 0x204, virtual false, abstract: false, final false
  inline void UpdateCanvasPosition();

  constexpr bool const& __cordl_internal_get_canvasPosUpdated() const;

  constexpr bool& __cordl_internal_get_canvasPosUpdated();

  constexpr bool const& __cordl_internal_get_closeLogDialogue() const;

  constexpr bool& __cordl_internal_get_closeLogDialogue();

  constexpr float_t const& __cordl_internal_get_closeLogTimer() const;

  constexpr float_t& __cordl_internal_get_closeLogTimer();

  constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo const& __cordl_internal_get_currentSceneInfo() const;

  constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo& __cordl_internal_get_currentSceneInfo();

  constexpr ::StringW const& __cordl_internal_get_formattedLogText() const;

  constexpr ::StringW& __cordl_internal_get_formattedLogText();

  constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_loadSceneOperation() const;

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_loadSceneOperation();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* const& __cordl_internal_get_loadedAssetBundles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get_loadedAssetBundles();

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

  constexpr void __cordl_internal_set_currentSceneInfo(::GlobalNamespace::OVRSceneLoader_SceneInfo value);

  constexpr void __cordl_internal_set_formattedLogText(::StringW value);

  constexpr void __cordl_internal_set_loadSceneOperation(::UnityEngine::AsyncOperation* value);

  constexpr void __cordl_internal_set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* value);

  constexpr void __cordl_internal_set_logCloseTime(float_t value);

  constexpr void __cordl_internal_set_logTextBox(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_mainCanvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_sceneCheckIntervalSeconds(float_t value);

  constexpr void __cordl_internal_set_sceneLoadDataPath(::StringW value);

  constexpr void __cordl_internal_set_scenePath(::StringW value);

  /// @brief Method .ctor, addr 0x5d139c0, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method onCheckSceneCoroutine, addr 0x5d133ac, size 0x54, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7640 };

  /// @brief Field externalStoragePath offset 0xffffffff size 0x8
  static constexpr ::ConstString externalStoragePath{ u"/sdcard/Android/data" };

  /// @brief Field resourceBundleName offset 0xffffffff size 0x8
  static constexpr ::ConstString resourceBundleName{ u"asset_resources" };

  /// @brief Field sceneLoadDataName offset 0xffffffff size 0x8
  static constexpr ::ConstString sceneLoadDataName{ u"SceneLoadData.txt" };

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
  ::GlobalNamespace::OVRSceneLoader_SceneInfo ___currentSceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader_SceneInfo, "", "OVRSceneLoader/SceneInfo");
