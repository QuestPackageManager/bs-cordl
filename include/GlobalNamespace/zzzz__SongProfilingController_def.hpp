#pragma once
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
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __SongProfilingController___ProfileCoroutine_d__8;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5380))
// CS Name: ::SongProfilingController::<ProfileCoroutine>d__8*
class CORDL_TYPE __SongProfilingController___ProfileCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SongProfilingController* __4__this;

  /// @brief Field folderName, offset 0x28, size 0x8
  __declspec(property(get = __get_folderName, put = __set_folderName))::StringW folderName;

  /// @brief Field <startTime>5__2, offset 0x30, size 0x4
  __declspec(property(get = __get__startTime_5__2, put = __set__startTime_5__2)) float_t _startTime_5__2;

  /// @brief Field <lastFileName>5__3, offset 0x38, size 0x8
  __declspec(property(get = __get__lastFileName_5__3, put = __set__lastFileName_5__3))::StringW _lastFileName_5__3;

  /// @brief Field <lowFPSCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __get__lowFPSCount_5__4, put = __set__lowFPSCount_5__4)) int32_t _lowFPSCount_5__4;

  /// @brief Field <i>5__5, offset 0x44, size 0x4
  __declspec(property(get = __get__i_5__5, put = __set__i_5__5)) int32_t _i_5__5;

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

  constexpr ::GlobalNamespace::SongProfilingController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongProfilingController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SongProfilingController* value);

  constexpr ::StringW& __get_folderName();

  constexpr ::StringW const& __get_folderName() const;

  constexpr void __set_folderName(::StringW value);

  constexpr float_t& __get__startTime_5__2();

  constexpr float_t const& __get__startTime_5__2() const;

  constexpr void __set__startTime_5__2(float_t value);

  constexpr ::StringW& __get__lastFileName_5__3();

  constexpr ::StringW const& __get__lastFileName_5__3() const;

  constexpr void __set__lastFileName_5__3(::StringW value);

  constexpr int32_t& __get__lowFPSCount_5__4();

  constexpr int32_t const& __get__lowFPSCount_5__4() const;

  constexpr void __set__lowFPSCount_5__4(int32_t value);

  constexpr int32_t& __get__i_5__5();

  constexpr int32_t const& __get__i_5__5() const;

  constexpr void __set__i_5__5(int32_t value);

  static inline ::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x226ddd8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x226e060 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x226e064 size 0x2dc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x226e340 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x226e348 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x226e388 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__SongProfilingController___ProfileCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongProfilingController___ProfileCoroutine_d__8(__SongProfilingController___ProfileCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongProfilingController___ProfileCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongProfilingController___ProfileCoroutine_d__8(__SongProfilingController___ProfileCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongProfilingController___ProfileCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongProfilingController* _____4__this;

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

} // namespace GlobalNamespace
// Type: ::SongProfilingController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5381))
// CS Name: ::SongProfilingController*
class CORDL_TYPE SongProfilingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ProfileCoroutine_d__8 = ::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8;

  /// @brief Field _sceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _fps, offset 0x20, size 0x8
  __declspec(property(get = __get__fps, put = __set__fps))::ArrayW<int32_t, ::Array<int32_t>*> _fps;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__fps();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__fps() const;

  constexpr void __set__fps(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method FinishProfiling addr 0x226dbb0 size 0x9c virtual false final false
  inline void FinishProfiling();

  /// @brief Method Start addr 0x226dc4c size 0x94 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x226ddd4 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method ProfileCoroutine addr 0x226dd60 size 0x74 virtual false final false
  inline ::System::Collections::IEnumerator* ProfileCoroutine(::StringW folderName);

  /// @brief Method CreateCaptureFolder addr 0x226dce0 size 0x74 virtual false final false
  inline void CreateCaptureFolder(::StringW folderName);

  /// @brief Method SetupProfiler addr 0x226dd54 size 0xc virtual false final false
  inline void SetupProfiler();

  /// @brief Method CreateLogPath addr 0x226de00 size 0x14c virtual false final false
  inline ::StringW CreateLogPath(::StringW folder, float_t startTime);

  /// @brief Method StartProfilingToFile addr 0x226df4c size 0xbc virtual false final false
  inline void StartProfilingToFile(::StringW filePath);

  static inline ::GlobalNamespace::SongProfilingController* New_ctor();

  /// @brief Method .ctor addr 0x226e008 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongProfilingController(SongProfilingController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongProfilingController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongProfilingController(SongProfilingController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongProfilingController();

public:
  /// @brief Field _sceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _fps, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____fps;

  /// @brief Field kProfileFramesPerLog offset 0xffffffff size 0x4
  static constexpr int32_t kProfileFramesPerLog{ static_cast<int32_t>(0x7d0) };

  /// @brief Field kLowFPSCountLimit offset 0xffffffff size 0x4
  static constexpr int32_t kLowFPSCountLimit{ static_cast<int32_t>(0x6e) };

  /// @brief Field kProfilerMaxUsedMemory offset 0xffffffff size 0x4
  static constexpr int32_t kProfilerMaxUsedMemory{ static_cast<int32_t>(0x10000000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProfilingController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProfilingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProfilingController*, "", "SongProfilingController");
NEED_NO_BOX(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongProfilingController___ProfileCoroutine_d__8*, "", "SongProfilingController/<ProfileCoroutine>d__8");
