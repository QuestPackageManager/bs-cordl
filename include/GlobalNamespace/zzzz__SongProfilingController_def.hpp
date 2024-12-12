#pragma once
// IWYU pragma private; include "GlobalNamespace/SongProfilingController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongProfilingController)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class SongProfilingController__ProfileCoroutine_d__8;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SongProfilingController;
}
namespace GlobalNamespace {
class SongProfilingController__ProfileCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongProfilingController);
MARK_REF_PTR_T(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongProfilingController/<ProfileCoroutine>d__8
class CORDL_TYPE SongProfilingController__ProfileCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SongProfilingController> __4__this;

  /// @brief Field <i>5__5, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__5, put = __cordl_internal_set__i_5__5)) int32_t _i_5__5;

  /// @brief Field <lastFileName>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lastFileName_5__3, put = __cordl_internal_set__lastFileName_5__3)) ::StringW _lastFileName_5__3;

  /// @brief Field <lowFPSCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lowFPSCount_5__4, put = __cordl_internal_set__lowFPSCount_5__4)) int32_t _lowFPSCount_5__4;

  /// @brief Field <startTime>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_5__2, put = __cordl_internal_set__startTime_5__2)) float_t _startTime_5__2;

  /// @brief Field folderName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_folderName, put = __cordl_internal_set_folderName)) ::StringW folderName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3ad5788, size 0x2b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3ad5a38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3ad5a40, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3ad5a78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3ad5784, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

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

  /// @brief Method .ctor, addr 0x3ad54f8, size 0x28, virtual false, abstract: false, final false
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
  constexpr SongProfilingController__ProfileCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController__ProfileCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongProfilingController__ProfileCoroutine_d__8(SongProfilingController__ProfileCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController__ProfileCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongProfilingController__ProfileCoroutine_d__8(SongProfilingController__ProfileCoroutine_d__8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4033 };

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
static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, ___folderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, ____startTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, ____lastFileName_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, ____lowFPSCount_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, ____i_5__5) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongProfilingController
class CORDL_TYPE SongProfilingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ProfileCoroutine_d__8 = ::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8;

  /// @brief Field _fps, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fps, put = __cordl_internal_set__fps)) ::ArrayW<int32_t, ::Array<int32_t>*> _fps;

  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Method CreateCaptureFolder, addr 0x3ad5404, size 0x78, virtual false, abstract: false, final false
  inline void CreateCaptureFolder(::StringW folderName);

  /// @brief Method CreateLogPath, addr 0x3ad5520, size 0x150, virtual false, abstract: false, final false
  inline ::StringW CreateLogPath(::StringW folder, float_t startTime);

  /// @brief Method FinishProfiling, addr 0x3ad52d4, size 0x9c, virtual false, abstract: false, final false
  inline void FinishProfiling();

  static inline ::GlobalNamespace::SongProfilingController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad54f4, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ProfileCoroutine, addr 0x3ad5488, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProfileCoroutine(::StringW folderName);

  /// @brief Method SetupProfiler, addr 0x3ad547c, size 0xc, virtual false, abstract: false, final false
  inline void SetupProfiler();

  /// @brief Method Start, addr 0x3ad5370, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartProfilingToFile, addr 0x3ad5670, size 0xbc, virtual false, abstract: false, final false
  inline void StartProfilingToFile(::StringW filePath);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__fps() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__fps();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__fps(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3ad572c, size 0x58, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4034 };

  /// @brief Field kLowFPSCountLimit offset 0xffffffff size 0x4
  static constexpr int32_t kLowFPSCountLimit{ static_cast<int32_t>(0x6e) };

  /// @brief Field kProfileFramesPerLog offset 0xffffffff size 0x4
  static constexpr int32_t kProfileFramesPerLog{ static_cast<int32_t>(0x7d0) };

  /// @brief Field kProfilerMaxUsedMemory offset 0xffffffff size 0x4
  static constexpr int32_t kProfilerMaxUsedMemory{ static_cast<int32_t>(0x10000000) };

  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _fps, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____fps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongProfilingController, ____sceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProfilingController, ____fps) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProfilingController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProfilingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProfilingController*, "", "SongProfilingController");
NEED_NO_BOX(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProfilingController__ProfileCoroutine_d__8*, "", "SongProfilingController/<ProfileCoroutine>d__8");
