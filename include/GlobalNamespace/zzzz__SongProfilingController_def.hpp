#pragma once
// IWYU pragma private; include "GlobalNamespace/SongProfilingController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongProfilingController)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class __SongProfilingController___ProfileCoroutine_d__8;
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
// Forward declare root types
namespace GlobalNamespace {
class SongProfilingController;
}
namespace GlobalNamespace {
class __SongProfilingController___ProfileCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongProfilingController);
MARK_REF_PTR_T(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8);
// Type: ::<ProfileCoroutine>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongProfilingController::<ProfileCoroutine>d__8*
class CORDL_TYPE __SongProfilingController___ProfileCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::SongProfilingController> __4__this;

  /// @brief Field <i>5__5, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__5, put = __cordl_internal_set__i_5__5)) int32_t _i_5__5;

  /// @brief Field <lastFileName>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lastFileName_5__3, put = __cordl_internal_set__lastFileName_5__3))::StringW _lastFileName_5__3;

  /// @brief Field <lowFPSCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lowFPSCount_5__4, put = __cordl_internal_set__lowFPSCount_5__4)) int32_t _lowFPSCount_5__4;

  /// @brief Field <startTime>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_5__2, put = __cordl_internal_set__startTime_5__2)) float_t _startTime_5__2;

  /// @brief Field folderName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_folderName, put = __cordl_internal_set_folderName))::StringW folderName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x262403c, size 0x2b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26242ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26242f4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2624334, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2624038, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SongProfilingController>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__5() const;

  constexpr int32_t& __cordl_internal_get__i_5__5();

  constexpr ::StringW const& __cordl_internal_get__lastFileName_5__3() const;

  constexpr ::StringW& __cordl_internal_get__lastFileName_5__3();

  constexpr int32_t const& __cordl_internal_get__lowFPSCount_5__4() const;

  constexpr int32_t& __cordl_internal_get__lowFPSCount_5__4();

  constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

  constexpr float_t& __cordl_internal_get__startTime_5__2();

  constexpr ::StringW const& __cordl_internal_get_folderName() const;

  constexpr ::StringW& __cordl_internal_get_folderName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SongProfilingController> value);

  constexpr void __cordl_internal_set__i_5__5(int32_t value);

  constexpr void __cordl_internal_set__lastFileName_5__3(::StringW value);

  constexpr void __cordl_internal_set__lowFPSCount_5__4(int32_t value);

  constexpr void __cordl_internal_set__startTime_5__2(float_t value);

  constexpr void __cordl_internal_set_folderName(::StringW value);

  /// @brief Method .ctor, addr 0x2623db0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __SongProfilingController___ProfileCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongProfilingController___ProfileCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongProfilingController___ProfileCoroutine_d__8(__SongProfilingController___ProfileCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongProfilingController___ProfileCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongProfilingController___ProfileCoroutine_d__8(__SongProfilingController___ProfileCoroutine_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongProfilingController> _____4__this;

  /// @brief Field folderName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___folderName;

  /// @brief Field <startTime>5__2, offset: 0x30, size: 0x4, def value: None
  float_t ____startTime_5__2;

  /// @brief Field <lastFileName>5__3, offset: 0x38, size: 0x8, def value: None
  ::StringW ____lastFileName_5__3;

  /// @brief Field <lowFPSCount>5__4, offset: 0x40, size: 0x4, def value: None
  int32_t ____lowFPSCount_5__4;

  /// @brief Field <i>5__5, offset: 0x44, size: 0x4, def value: None
  int32_t ____i_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, ___folderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, ____startTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, ____lastFileName_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, ____lowFPSCount_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8, ____i_5__5) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongProfilingController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongProfilingController*
class CORDL_TYPE SongProfilingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ProfileCoroutine_d__8 = ::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8;

  /// @brief Field _fps, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fps, put = __cordl_internal_set__fps))::ArrayW<int32_t, ::Array<int32_t>*> _fps;

  /// @brief Field _sceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Method CreateCaptureFolder, addr 0x2623cb8, size 0x74, virtual false, abstract: false, final false
  inline void CreateCaptureFolder(::StringW folderName);

  /// @brief Method CreateLogPath, addr 0x2623dd8, size 0x14c, virtual false, abstract: false, final false
  inline ::StringW CreateLogPath(::StringW folder, float_t startTime);

  /// @brief Method FinishProfiling, addr 0x2623b88, size 0x9c, virtual false, abstract: false, final false
  inline void FinishProfiling();

  static inline ::GlobalNamespace::SongProfilingController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2623dac, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ProfileCoroutine, addr 0x2623d38, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProfileCoroutine(::StringW folderName);

  /// @brief Method SetupProfiler, addr 0x2623d2c, size 0xc, virtual false, abstract: false, final false
  inline void SetupProfiler();

  /// @brief Method Start, addr 0x2623c24, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartProfilingToFile, addr 0x2623f24, size 0xbc, virtual false, abstract: false, final false
  inline void StartProfilingToFile(::StringW filePath);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__fps() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__fps();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__fps(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x2623fe0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongProfilingController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongProfilingController(SongProfilingController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongProfilingController(SongProfilingController const&) = delete;

  /// @brief Field _sceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _fps, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____fps;

  /// @brief Field kLowFPSCountLimit offset 0xffffffff size 0x4
  static constexpr int32_t kLowFPSCountLimit{ static_cast<int32_t>(0x6e) };

  /// @brief Field kProfileFramesPerLog offset 0xffffffff size 0x4
  static constexpr int32_t kProfileFramesPerLog{ static_cast<int32_t>(0x7d0) };

  /// @brief Field kProfilerMaxUsedMemory offset 0xffffffff size 0x4
  static constexpr int32_t kProfilerMaxUsedMemory{ static_cast<int32_t>(0x10000000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProfilingController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController, ____sceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController, ____fps) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProfilingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProfilingController*, "", "SongProfilingController");
NEED_NO_BOX(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8*, "", "SongProfilingController/<ProfileCoroutine>d__8");
