#pragma once
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
class __OVRSceneLoader___onCheckSceneCoroutine_d__25;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
struct __OVRSceneLoader__SceneInfo;
}
namespace UnityEngine {
class AssetBundle;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Canvas;
}
namespace GlobalNamespace {
class __OVRSceneLoader___DelayCanvasPosUpdate_d__24;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7957))
// CS Name: ::OVRSceneLoader::SceneInfo
struct CORDL_TYPE __OVRSceneLoader__SceneInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x27818b4 size 0x8 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion);

  // Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr __OVRSceneLoader__SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes, int64_t version) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneLoader__SceneInfo();

  /// @brief Field scenes, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* scenes;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  int64_t version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader__SceneInfo, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DelayCanvasPosUpdate>d__24
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7958))
// CS Name: ::OVRSceneLoader::<DelayCanvasPosUpdate>d__24*
class CORDL_TYPE __OVRSceneLoader___DelayCanvasPosUpdate_d__24 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OVRSceneLoader* __4__this;

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

  constexpr ::GlobalNamespace::OVRSceneLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OVRSceneLoader* value);

  static inline ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x27816a8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x27818bc size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x27818c0 size 0xa4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2781964 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x278196c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x27819ac size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneLoader___DelayCanvasPosUpdate_d__24(__OVRSceneLoader___DelayCanvasPosUpdate_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___DelayCanvasPosUpdate_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneLoader___DelayCanvasPosUpdate_d__24(__OVRSceneLoader___DelayCanvasPosUpdate_d__24 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneLoader___DelayCanvasPosUpdate_d__24();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneLoader* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<onCheckSceneCoroutine>d__25
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7959))
// CS Name: ::OVRSceneLoader::<onCheckSceneCoroutine>d__25*
class CORDL_TYPE __OVRSceneLoader___onCheckSceneCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OVRSceneLoader* __4__this;

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

  constexpr ::GlobalNamespace::OVRSceneLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OVRSceneLoader* value);

  static inline ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x27816d0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x27819b4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x27819b8 size 0x34c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2781d04 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2781d0c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2781d4c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneLoader___onCheckSceneCoroutine_d__25(__OVRSceneLoader___onCheckSceneCoroutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneLoader___onCheckSceneCoroutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneLoader___onCheckSceneCoroutine_d__25(__OVRSceneLoader___onCheckSceneCoroutine_d__25 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneLoader___onCheckSceneCoroutine_d__25();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneLoader* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneLoader
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(7957))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7960))
// CS Name: ::OVRSceneLoader*
class CORDL_TYPE OVRSceneLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _onCheckSceneCoroutine_d__25 = ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25;

  using _DelayCanvasPosUpdate_d__24 = ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24;

  using SceneInfo = ::GlobalNamespace::__OVRSceneLoader__SceneInfo;

  /// @brief Field sceneCheckIntervalSeconds, offset 0x18, size 0x4
  __declspec(property(get = __get_sceneCheckIntervalSeconds, put = __set_sceneCheckIntervalSeconds)) float_t sceneCheckIntervalSeconds;

  /// @brief Field logCloseTime, offset 0x1c, size 0x4
  __declspec(property(get = __get_logCloseTime, put = __set_logCloseTime)) float_t logCloseTime;

  /// @brief Field mainCanvas, offset 0x20, size 0x8
  __declspec(property(get = __get_mainCanvas, put = __set_mainCanvas))::UnityEngine::Canvas* mainCanvas;

  /// @brief Field logTextBox, offset 0x28, size 0x8
  __declspec(property(get = __get_logTextBox, put = __set_logTextBox))::UnityEngine::UI::Text* logTextBox;

  /// @brief Field loadSceneOperation, offset 0x30, size 0x8
  __declspec(property(get = __get_loadSceneOperation, put = __set_loadSceneOperation))::UnityEngine::AsyncOperation* loadSceneOperation;

  /// @brief Field formattedLogText, offset 0x38, size 0x8
  __declspec(property(get = __get_formattedLogText, put = __set_formattedLogText))::StringW formattedLogText;

  /// @brief Field closeLogTimer, offset 0x40, size 0x4
  __declspec(property(get = __get_closeLogTimer, put = __set_closeLogTimer)) float_t closeLogTimer;

  /// @brief Field closeLogDialogue, offset 0x44, size 0x1
  __declspec(property(get = __get_closeLogDialogue, put = __set_closeLogDialogue)) bool closeLogDialogue;

  /// @brief Field canvasPosUpdated, offset 0x45, size 0x1
  __declspec(property(get = __get_canvasPosUpdated, put = __set_canvasPosUpdated)) bool canvasPosUpdated;

  /// @brief Field scenePath, offset 0x48, size 0x8
  __declspec(property(get = __get_scenePath, put = __set_scenePath))::StringW scenePath;

  /// @brief Field sceneLoadDataPath, offset 0x50, size 0x8
  __declspec(property(get = __get_sceneLoadDataPath, put = __set_sceneLoadDataPath))::StringW sceneLoadDataPath;

  /// @brief Field loadedAssetBundles, offset 0x58, size 0x8
  __declspec(property(get = __get_loadedAssetBundles, put = __set_loadedAssetBundles))::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* loadedAssetBundles;

  /// @brief Field currentSceneInfo, offset 0x60, size 0x10
  __declspec(property(get = __get_currentSceneInfo, put = __set_currentSceneInfo))::GlobalNamespace::__OVRSceneLoader__SceneInfo currentSceneInfo;

  constexpr float_t& __get_sceneCheckIntervalSeconds();

  constexpr float_t const& __get_sceneCheckIntervalSeconds() const;

  constexpr void __set_sceneCheckIntervalSeconds(float_t value);

  constexpr float_t& __get_logCloseTime();

  constexpr float_t const& __get_logCloseTime() const;

  constexpr void __set_logCloseTime(float_t value);

  constexpr ::UnityEngine::Canvas*& __get_mainCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_mainCanvas() const;

  constexpr void __set_mainCanvas(::UnityEngine::Canvas* value);

  constexpr ::UnityEngine::UI::Text*& __get_logTextBox();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_logTextBox() const;

  constexpr void __set_logTextBox(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::AsyncOperation*& __get_loadSceneOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __get_loadSceneOperation() const;

  constexpr void __set_loadSceneOperation(::UnityEngine::AsyncOperation* value);

  constexpr ::StringW& __get_formattedLogText();

  constexpr ::StringW const& __get_formattedLogText() const;

  constexpr void __set_formattedLogText(::StringW value);

  constexpr float_t& __get_closeLogTimer();

  constexpr float_t const& __get_closeLogTimer() const;

  constexpr void __set_closeLogTimer(float_t value);

  constexpr bool& __get_closeLogDialogue();

  constexpr bool const& __get_closeLogDialogue() const;

  constexpr void __set_closeLogDialogue(bool value);

  constexpr bool& __get_canvasPosUpdated();

  constexpr bool const& __get_canvasPosUpdated() const;

  constexpr void __set_canvasPosUpdated(bool value);

  constexpr ::StringW& __get_scenePath();

  constexpr ::StringW const& __get_scenePath() const;

  constexpr void __set_scenePath(::StringW value);

  constexpr ::StringW& __get_sceneLoadDataPath();

  constexpr ::StringW const& __get_sceneLoadDataPath() const;

  constexpr void __set_sceneLoadDataPath(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*& __get_loadedAssetBundles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*> const& __get_loadedAssetBundles() const;

  constexpr void __set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* value);

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo& __get_currentSceneInfo();

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo const& __get_currentSceneInfo() const;

  constexpr void __set_currentSceneInfo(::GlobalNamespace::__OVRSceneLoader__SceneInfo value);

  /// @brief Method Awake addr 0x2780398 size 0x6c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2780404 size 0x14c virtual false final false
  inline void Start();

  /// @brief Method LoadScene addr 0x2780844 size 0x8ac virtual false final false
  inline void LoadScene(::GlobalNamespace::__OVRSceneLoader__SceneInfo sceneInfo);

  /// @brief Method LoadSceneOperation_completed addr 0x27810f0 size 0xdc virtual false final false
  inline void LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj);

  /// @brief Method Update addr 0x2781234 size 0x274 virtual false final false
  inline void Update();

  /// @brief Method UpdateCanvasPosition addr 0x27814a8 size 0x200 virtual false final false
  inline void UpdateCanvasPosition();

  /// @brief Method GetSceneInfo addr 0x27805b8 size 0x28c virtual false final false
  inline ::GlobalNamespace::__OVRSceneLoader__SceneInfo GetSceneInfo();

  /// @brief Method DelayCanvasPosUpdate addr 0x2780550 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* DelayCanvasPosUpdate();

  /// @brief Method onCheckSceneCoroutine addr 0x27811cc size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* onCheckSceneCoroutine();

  /// @brief Method DestroyAllGameObjects addr 0x27816f8 size 0x110 virtual false final false
  inline void DestroyAllGameObjects();

  static inline ::GlobalNamespace::OVRSceneLoader* New_ctor();

  /// @brief Method .ctor addr 0x2781808 size 0xac virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneLoader(OVRSceneLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneLoader(OVRSceneLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneLoader();

public:
  /// @brief Field sceneCheckIntervalSeconds, offset: 0x18, size: 0x4, def value: None
  float_t ___sceneCheckIntervalSeconds;

  /// @brief Field logCloseTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___logCloseTime;

  /// @brief Field mainCanvas, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Canvas* ___mainCanvas;

  /// @brief Field logTextBox, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___logTextBox;

  /// @brief Field loadSceneOperation, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ___loadSceneOperation;

  /// @brief Field formattedLogText, offset: 0x38, size: 0x8, def value: None
  ::StringW ___formattedLogText;

  /// @brief Field closeLogTimer, offset: 0x40, size: 0x4, def value: None
  float_t ___closeLogTimer;

  /// @brief Field closeLogDialogue, offset: 0x44, size: 0x1, def value: None
  bool ___closeLogDialogue;

  /// @brief Field canvasPosUpdated, offset: 0x45, size: 0x1, def value: None
  bool ___canvasPosUpdated;

  /// @brief Field scenePath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___scenePath;

  /// @brief Field sceneLoadDataPath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___sceneLoadDataPath;

  /// @brief Field loadedAssetBundles, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* ___loadedAssetBundles;

  /// @brief Field currentSceneInfo, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::__OVRSceneLoader__SceneInfo ___currentSceneInfo;

  /// @brief Field externalStoragePath offset 0xffffffff size 0x8
  static constexpr ::ConstString externalStoragePath{ u"/sdcard/Android/data" };

  /// @brief Field sceneLoadDataName offset 0xffffffff size 0x8
  static constexpr ::ConstString sceneLoadDataName{ u"SceneLoadData.txt" };

  /// @brief Field resourceBundleName offset 0xffffffff size 0x8
  static constexpr ::ConstString resourceBundleName{ u"asset_resources" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneLoader, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader__SceneInfo, "", "OVRSceneLoader/SceneInfo");
