#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelsModel)
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsRepository;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IBeatmapLevelLoader;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IPlayerDataModel;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel___SelectPacks_d__25;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass27_0;
}
namespace GlobalNamespace {
struct __PackDefinitionSO__Tags;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel___SelectPacks_d__25;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass27_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23);
// Type: ::<LoadBeatmapLevelDataAsync>d__23
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::<LoadBeatmapLevelDataAsync>d__23
struct CORDL_TYPE __BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14cfe70, size 0x404, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14d0274, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "",
  // def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23(int32_t __1__state,
                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder,
                                                                   ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <beatmapLevel>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, _beatmapLevel_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, __u__2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataExistsAsync>d__24
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::<CheckBeatmapLevelDataExistsAsync>d__24
struct CORDL_TYPE __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14d02cc, size 0x3cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14d0698, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                          ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
                                                                          ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <beatmapLevel>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, _beatmapLevel_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, __u__2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SelectPacks>d__25
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel::<SelectPacks>d__25*
class CORDL_TYPE __BeatmapLevelsModel___SelectPacks_d__25 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current))::UnityW<::GlobalNamespace::PackDefinitionSO> System_Collections_Generic_IEnumerator_PackDefinitionSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::GlobalNamespace::PackDefinitionSO> __2__current;

  /// @brief Field <>3__exclude, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__exclude, put = __cordl_internal_set___3__exclude))::GlobalNamespace::__PackDefinitionSO__Tags __3__exclude;

  /// @brief Field <>3__include, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__include, put = __cordl_internal_set___3__include))::GlobalNamespace::__PackDefinitionSO__Tags __3__include;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field exclude, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_exclude, put = __cordl_internal_set_exclude))::GlobalNamespace::__PackDefinitionSO__Tags exclude;

  /// @brief Field include, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_include, put = __cordl_internal_set_include))::GlobalNamespace::__PackDefinitionSO__Tags include;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x14d06f4, size 0xd8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator, addr 0x14d081c, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current, addr 0x14d07cc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PackDefinitionSO> System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x14d08d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x14d07d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x14d0814, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x14d06f0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get___3__exclude() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get___3__exclude();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get___3__include() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get___3__include();

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get_exclude() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get_exclude();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get_include() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get_include();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PackDefinitionSO> value);

  constexpr void __cordl_internal_set___3__exclude(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set___3__include(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_exclude(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set_include(::GlobalNamespace::__PackDefinitionSO__Tags value);

  /// @brief Method .ctor, addr 0x14cfcac, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___SelectPacks_d__25();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel___SelectPacks_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel___SelectPacks_d__25(__BeatmapLevelsModel___SelectPacks_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel___SelectPacks_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel___SelectPacks_d__25(__BeatmapLevelsModel___SelectPacks_d__25 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* _____4__this;

  /// @brief Field include, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ___include;

  /// @brief Field <>3__include, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags _____3__include;

  /// @brief Field exclude, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ___exclude;

  /// @brief Field <>3__exclude, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags _____3__exclude;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, ___include) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____3__include) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, ___exclude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____3__exclude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25, _____7__wrap2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel::<>c__DisplayClass27_0*
class CORDL_TYPE __BeatmapLevelsModel____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field censoredLocalizedSongName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_censoredLocalizedSongName, put = __cordl_internal_set_censoredLocalizedSongName))::StringW censoredLocalizedSongName;

  /// @brief Field desiredSensitivityFlag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_desiredSensitivityFlag, put = __cordl_internal_set_desiredSensitivityFlag))::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag;

  /// @brief Field pack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pack, put = __cordl_internal_set_pack))::UnityW<::GlobalNamespace::PackDefinitionSO> pack;

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0* New_ctor();

  /// @brief Method <CreateBeatmapLevelPack>b__0, addr 0x14d08d4, size 0x64, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* _CreateBeatmapLevelPack_b__0(::GlobalNamespace::BeatmapLevelSO* l);

  constexpr ::StringW const& __cordl_internal_get_censoredLocalizedSongName() const;

  constexpr ::StringW& __cordl_internal_get_censoredLocalizedSongName();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_desiredSensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_desiredSensitivityFlag();

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& __cordl_internal_get_pack() const;

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& __cordl_internal_get_pack();

  constexpr void __cordl_internal_set_censoredLocalizedSongName(::StringW value);

  constexpr void __cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_pack(::UnityW<::GlobalNamespace::PackDefinitionSO> value);

  /// @brief Method .ctor, addr 0x14cfe68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel____c__DisplayClass27_0(__BeatmapLevelsModel____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel____c__DisplayClass27_0(__BeatmapLevelsModel____c__DisplayClass27_0 const&) = delete;

  /// @brief Field desiredSensitivityFlag, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___desiredSensitivityFlag;

  /// @brief Field pack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> ___pack;

  /// @brief Field censoredLocalizedSongName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___censoredLocalizedSongName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0, ___desiredSensitivityFlag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0, ___pack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0, ___censoredLocalizedSongName) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelsModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel*
class CORDL_TYPE BeatmapLevelsModel : public ::System::Object {
public:
  // Declarations
  using _CheckBeatmapLevelDataExistsAsync_d__24 = ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24;

  using _LoadBeatmapLevelDataAsync_d__23 = ::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23;

  using _SelectPacks_d__25 = ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25;

  using __c__DisplayClass27_0 = ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0;

  /// @brief Field _allExistingBeatmapLevelsRepository, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__allExistingBeatmapLevelsRepository,
                      put = __cordl_internal_set__allExistingBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* _allExistingBeatmapLevelsRepository;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__allLoadedBeatmapLevelsRepository,
                      put = __cordl_internal_set__allLoadedBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* _allLoadedBeatmapLevelsRepository;

  /// @brief Field _entitlements, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlements, put = __cordl_internal_set__entitlements))::GlobalNamespace::BeatmapLevelsEntitlementModel* _entitlements;

  /// @brief Field _localizationModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationModel, put = __cordl_internal_set__localizationModel))::BGLib::Polyglot::LocalizationModel* _localizationModel;

  /// @brief Field _packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions))::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> _packDefinitions;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::GlobalNamespace::IPlayerDataModel* _playerDataModel;

  /// @brief Field allPacksCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_allPacksCount, put = __cordl_internal_set_allPacksCount)) int32_t allPacksCount;

  /// @brief Field dlcBeatmapLevelsRepository, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dlcBeatmapLevelsRepository,
                      put = __cordl_internal_set_dlcBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* dlcBeatmapLevelsRepository;

  __declspec(property(get = get_entitlements))::GlobalNamespace::IEntitlementModel* entitlements;

  /// @brief Field levelLoader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoader, put = __cordl_internal_set_levelLoader))::GlobalNamespace::IBeatmapLevelLoader* levelLoader;

  /// @brief Field ostAndExtrasBeatmapLevelsRepository, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository,
                      put = __cordl_internal_set_ostAndExtrasBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* ostAndExtrasBeatmapLevelsRepository;

  __declspec(property(get = get_packDefinitions))::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x14cfb00, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ClearLoadedBeatmapLevelsCaches, addr 0x14cf88c, size 0xa4, virtual false, abstract: false, final false
  inline void ClearLoadedBeatmapLevelsCaches();

  /// @brief Method CreateBeatmapLevelPack, addr 0x14cfce0, size 0x188, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPack(::GlobalNamespace::PackDefinitionSO* pack, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
                                                                            ::StringW censoredLocalizedSongName);

  /// @brief Method Dispose, addr 0x14cf7ec, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAllPacks, addr 0x14cf9c8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* GetAllPacks();

  /// @brief Method GetBeatmapLevel, addr 0x14b88c0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* GetBeatmapLevel(::StringW levelId);

  /// @brief Method GetLevelPack, addr 0x14cf9b0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPack(::StringW levelPackId);

  /// @brief Method GetLevelPackForLevelId, addr 0x14cf998, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPackForLevelId(::StringW levelId);

  /// @brief Method LoadAllBeatmapLevelPacks, addr 0x14cf348, size 0x4a4, virtual false, abstract: false, final false
  inline void LoadAllBeatmapLevelPacks();

  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x14cf9e4, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*
  LoadBeatmapLevelDataAsync(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::BeatmapLevelsModel* New_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                                                ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                                                                ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method ReloadCustomLevelPackCollectionAsync, addr 0x14cf930, size 0x68, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>* ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SelectPacks, addr 0x14cfc1c, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* SelectPacks(::GlobalNamespace::__PackDefinitionSO__Tags include,
                                                                                                                   ::GlobalNamespace::__PackDefinitionSO__Tags exclude);

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allExistingBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get__allExistingBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allLoadedBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get__allLoadedBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__entitlements();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsEntitlementModel*> const& __cordl_internal_get__entitlements() const;

  constexpr ::BGLib::Polyglot::LocalizationModel*& __cordl_internal_get__localizationModel();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::Polyglot::LocalizationModel*> const& __cordl_internal_get__localizationModel() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get__packDefinitions() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get__packDefinitions();

  constexpr ::GlobalNamespace::IPlayerDataModel*& __cordl_internal_get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlayerDataModel*> const& __cordl_internal_get__playerDataModel() const;

  constexpr int32_t const& __cordl_internal_get_allPacksCount() const;

  constexpr int32_t& __cordl_internal_get_allPacksCount();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_dlcBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get_dlcBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::IBeatmapLevelLoader*& __cordl_internal_get_levelLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelLoader*> const& __cordl_internal_get_levelLoader() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() const;

  constexpr void __cordl_internal_set__allExistingBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__allLoadedBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__entitlements(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value);

  constexpr void __cordl_internal_set__packDefinitions(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set__playerDataModel(::GlobalNamespace::IPlayerDataModel* value);

  constexpr void __cordl_internal_set_allPacksCount(int32_t value);

  constexpr void __cordl_internal_set_dlcBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set_levelLoader(::GlobalNamespace::IBeatmapLevelLoader* value);

  constexpr void __cordl_internal_set_ostAndExtrasBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  /// @brief Method .ctor, addr 0x14cf08c, size 0x2bc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                    ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method get_entitlements, addr 0x14cf084, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IEntitlementModel* get_entitlements();

  /// @brief Method get_packDefinitions, addr 0x14cf07c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* get_packDefinitions();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsModel(BeatmapLevelsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsModel(BeatmapLevelsModel const&) = delete;

  /// @brief Field ostAndExtrasBeatmapLevelsRepository, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___ostAndExtrasBeatmapLevelsRepository;

  /// @brief Field dlcBeatmapLevelsRepository, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___dlcBeatmapLevelsRepository;

  /// @brief Field allPacksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___allPacksCount;

  /// @brief Field levelLoader, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelLoader* ___levelLoader;

  /// @brief Field _packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> ____packDefinitions;

  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IPlayerDataModel* ____playerDataModel;

  /// @brief Field _localizationModel, offset: 0x40, size: 0x8, def value: None
  ::BGLib::Polyglot::LocalizationModel* ____localizationModel;

  /// @brief Field _entitlements, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____entitlements;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allLoadedBeatmapLevelsRepository;

  /// @brief Field _allExistingBeatmapLevelsRepository, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allExistingBeatmapLevelsRepository;

  /// @brief Field kExplicitSongLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kExplicitSongLocalizationKey{ u"EXPLICIT_SONG" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___ostAndExtrasBeatmapLevelsRepository) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___dlcBeatmapLevelsRepository) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___allPacksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___levelLoader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____localizationModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____entitlements) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelsRepository) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allExistingBeatmapLevelsRepository) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__25*, "", "BeatmapLevelsModel/<SelectPacks>d__25");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass27_0*, "", "BeatmapLevelsModel/<>c__DisplayClass27_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__24, "", "BeatmapLevelsModel/<CheckBeatmapLevelDataExistsAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__23, "", "BeatmapLevelsModel/<LoadBeatmapLevelDataAsync>d__23");
