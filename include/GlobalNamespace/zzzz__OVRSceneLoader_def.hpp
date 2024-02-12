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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7976))
// CS Name: ::OVRSceneLoader::SceneInfo
struct CORDL_TYPE __OVRSceneLoader__SceneInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x279fa44, size 0x8, virtual false, abstract: false, final false
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

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader__SceneInfo, scenes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader__SceneInfo, version) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DelayCanvasPosUpdate>d__24
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7977))
// CS Name: ::OVRSceneLoader::<DelayCanvasPosUpdate>d__24*
class CORDL_TYPE __OVRSceneLoader___DelayCanvasPosUpdate_d__24 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRSceneLoader> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  static inline ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x279f838, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x279fa4c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x279fa50, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x279faf4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x279fafc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x279fb3c, size 0x8, virtual true, abstract: false, final true
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
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<onCheckSceneCoroutine>d__25
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7978))
// CS Name: ::OVRSceneLoader::<onCheckSceneCoroutine>d__25*
class CORDL_TYPE __OVRSceneLoader___onCheckSceneCoroutine_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRSceneLoader> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value);

  static inline ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x279f860, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x279fb44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x279fb48, size 0x34c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x279fe94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x279fe9c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x279fedc, size 0x8, virtual true, abstract: false, final true
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
  ::UnityW<::GlobalNamespace::OVRSceneLoader> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneLoader
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7976)), TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7979))
// CS Name: ::OVRSceneLoader*
class CORDL_TYPE OVRSceneLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _onCheckSceneCoroutine_d__25 = ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25;

  using _DelayCanvasPosUpdate_d__24 = ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24;

  using SceneInfo = ::GlobalNamespace::__OVRSceneLoader__SceneInfo;

  /// @brief Field sceneCheckIntervalSeconds, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sceneCheckIntervalSeconds, put = __cordl_internal_set_sceneCheckIntervalSeconds)) float_t sceneCheckIntervalSeconds;

  /// @brief Field logCloseTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_logCloseTime, put = __cordl_internal_set_logCloseTime)) float_t logCloseTime;

  /// @brief Field mainCanvas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mainCanvas, put = __cordl_internal_set_mainCanvas))::UnityW<::UnityEngine::Canvas> mainCanvas;

  /// @brief Field logTextBox, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_logTextBox, put = __cordl_internal_set_logTextBox))::UnityW<::UnityEngine::UI::Text> logTextBox;

  /// @brief Field loadSceneOperation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_loadSceneOperation, put = __cordl_internal_set_loadSceneOperation))::UnityEngine::AsyncOperation* loadSceneOperation;

  /// @brief Field formattedLogText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_formattedLogText, put = __cordl_internal_set_formattedLogText))::StringW formattedLogText;

  /// @brief Field closeLogTimer, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_closeLogTimer, put = __cordl_internal_set_closeLogTimer)) float_t closeLogTimer;

  /// @brief Field closeLogDialogue, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_closeLogDialogue, put = __cordl_internal_set_closeLogDialogue)) bool closeLogDialogue;

  /// @brief Field canvasPosUpdated, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_canvasPosUpdated, put = __cordl_internal_set_canvasPosUpdated)) bool canvasPosUpdated;

  /// @brief Field scenePath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_scenePath, put = __cordl_internal_set_scenePath))::StringW scenePath;

  /// @brief Field sceneLoadDataPath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneLoadDataPath, put = __cordl_internal_set_sceneLoadDataPath))::StringW sceneLoadDataPath;

  /// @brief Field loadedAssetBundles, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_loadedAssetBundles,
                      put = __cordl_internal_set_loadedAssetBundles))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* loadedAssetBundles;

  /// @brief Field currentSceneInfo, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_currentSceneInfo, put = __cordl_internal_set_currentSceneInfo))::GlobalNamespace::__OVRSceneLoader__SceneInfo currentSceneInfo;

  constexpr float_t& __cordl_internal_get_sceneCheckIntervalSeconds();

  constexpr float_t const& __cordl_internal_get_sceneCheckIntervalSeconds() const;

  constexpr void __cordl_internal_set_sceneCheckIntervalSeconds(float_t value);

  constexpr float_t& __cordl_internal_get_logCloseTime();

  constexpr float_t const& __cordl_internal_get_logCloseTime() const;

  constexpr void __cordl_internal_set_logCloseTime(float_t value);

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_mainCanvas();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_mainCanvas() const;

  constexpr void __cordl_internal_set_mainCanvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_logTextBox();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_logTextBox() const;

  constexpr void __cordl_internal_set_logTextBox(::UnityW<::UnityEngine::UI::Text> value);

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_loadSceneOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __cordl_internal_get_loadSceneOperation() const;

  constexpr void __cordl_internal_set_loadSceneOperation(::UnityEngine::AsyncOperation* value);

  constexpr ::StringW& __cordl_internal_get_formattedLogText();

  constexpr ::StringW const& __cordl_internal_get_formattedLogText() const;

  constexpr void __cordl_internal_set_formattedLogText(::StringW value);

  constexpr float_t& __cordl_internal_get_closeLogTimer();

  constexpr float_t const& __cordl_internal_get_closeLogTimer() const;

  constexpr void __cordl_internal_set_closeLogTimer(float_t value);

  constexpr bool& __cordl_internal_get_closeLogDialogue();

  constexpr bool const& __cordl_internal_get_closeLogDialogue() const;

  constexpr void __cordl_internal_set_closeLogDialogue(bool value);

  constexpr bool& __cordl_internal_get_canvasPosUpdated();

  constexpr bool const& __cordl_internal_get_canvasPosUpdated() const;

  constexpr void __cordl_internal_set_canvasPosUpdated(bool value);

  constexpr ::StringW& __cordl_internal_get_scenePath();

  constexpr ::StringW const& __cordl_internal_get_scenePath() const;

  constexpr void __cordl_internal_set_scenePath(::StringW value);

  constexpr ::StringW& __cordl_internal_get_sceneLoadDataPath();

  constexpr ::StringW const& __cordl_internal_get_sceneLoadDataPath() const;

  constexpr void __cordl_internal_set_sceneLoadDataPath(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get_loadedAssetBundles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*> const& __cordl_internal_get_loadedAssetBundles() const;

  constexpr void __cordl_internal_set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* value);

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo& __cordl_internal_get_currentSceneInfo();

  constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo const& __cordl_internal_get_currentSceneInfo() const;

  constexpr void __cordl_internal_set_currentSceneInfo(::GlobalNamespace::__OVRSceneLoader__SceneInfo value);

  /// @brief Method Awake, addr 0x279e528, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x279e594, size 0x14c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method LoadScene, addr 0x279e9d4, size 0x8ac, virtual false, abstract: false, final false
  inline void LoadScene(::GlobalNamespace::__OVRSceneLoader__SceneInfo sceneInfo);

  /// @brief Method LoadSceneOperation_completed, addr 0x279f280, size 0xdc, virtual false, abstract: false, final false
  inline void LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj);

  /// @brief Method Update, addr 0x279f3c4, size 0x274, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCanvasPosition, addr 0x279f638, size 0x200, virtual false, abstract: false, final false
  inline void UpdateCanvasPosition();

  /// @brief Method GetSceneInfo, addr 0x279e748, size 0x28c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSceneLoader__SceneInfo GetSceneInfo();

  /// @brief Method DelayCanvasPosUpdate, addr 0x279e6e0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayCanvasPosUpdate();

  /// @brief Method onCheckSceneCoroutine, addr 0x279f35c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* onCheckSceneCoroutine();

  /// @brief Method DestroyAllGameObjects, addr 0x279f888, size 0x110, virtual false, abstract: false, final false
  inline void DestroyAllGameObjects();

  static inline ::GlobalNamespace::OVRSceneLoader* New_ctor();

  /// @brief Method .ctor, addr 0x279f998, size 0xac, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Canvas> ___mainCanvas;

  /// @brief Field logTextBox, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___logTextBox;

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
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* ___loadedAssetBundles;

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

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___sceneCheckIntervalSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___logCloseTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___mainCanvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___logTextBox) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___loadSceneOperation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___formattedLogText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___closeLogTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___closeLogDialogue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___canvasPosUpdated) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___scenePath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___sceneLoadDataPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___loadedAssetBundles) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader, ___currentSceneInfo) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneLoader*, "", "OVRSceneLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*, "", "OVRSceneLoader/<DelayCanvasPosUpdate>d__24");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*, "", "OVRSceneLoader/<onCheckSceneCoroutine>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneLoader__SceneInfo, "", "OVRSceneLoader/SceneInfo");
