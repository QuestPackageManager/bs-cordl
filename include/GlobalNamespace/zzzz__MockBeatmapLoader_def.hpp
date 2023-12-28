#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapLoader)
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__2;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapLoader;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c__DisplayClass2_0;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__2;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapLoader);
MARK_REF_PTR_T(::GlobalNamespace::__MockBeatmapLoader____c);
MARK_REF_PTR_T(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d);
// Type: ::<<GetBeatmapData>b__3>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890
// }), TypeDefinitionIndex(TypeDefinitionIndex(4260))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5172)) CS Name: ::MockBeatmapLoader::<>c__DisplayClass2_0::<<GetBeatmapData>b__3>d
struct CORDL_TYPE __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23dee64 size 0x264 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23df0c8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                               ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __4__this,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5173))
// CS Name: ::MockBeatmapLoader::<>c__DisplayClass2_0*
class CORDL_TYPE __MockBeatmapLoader____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  using __GetBeatmapData_b__3_d = ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;

  /// @brief Field beatmap, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmap, put = __set_beatmap))::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap;

  /// @brief Field difficultyBeatmap, offset 0x18, size 0x8
  __declspec(property(get = __get_difficultyBeatmap, put = __set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  /// @brief Field beatmapData, offset 0x20, size 0x8
  __declspec(property(get = __get_beatmapData, put = __set_beatmapData))::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializable*& __get_beatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapIdentifierNetSerializable*> const& __get_beatmap() const;

  constexpr void __set_beatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get_difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get_difficultyBeatmap() const;

  constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_beatmapData() const;

  constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  static inline ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor addr 0x23dec1c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetBeatmapData>b__0 addr 0x23dec24 size 0xbc virtual false final false
  inline bool _GetBeatmapData_b__0(::GlobalNamespace::IDifficultyBeatmapSet* bds);

  /// @brief Method <GetBeatmapData>b__2 addr 0x23dece0 size 0xbc virtual false final false
  inline bool _GetBeatmapData_b__2(::GlobalNamespace::IDifficultyBeatmap* dbm);

  /// @brief Method <GetBeatmapData>b__3 addr 0x23ded9c size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* _GetBeatmapData_b__3();

  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockBeatmapLoader____c__DisplayClass2_0(__MockBeatmapLoader____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockBeatmapLoader____c__DisplayClass2_0(__MockBeatmapLoader____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapLoader____c__DisplayClass2_0();

public:
  /// @brief Field beatmap, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapIdentifierNetSerializable* ___beatmap;

  /// @brief Field difficultyBeatmap, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ___difficultyBeatmap;

  /// @brief Field beatmapData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5174))
// CS Name: ::MockBeatmapLoader::<>c*
class CORDL_TYPE __MockBeatmapLoader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MockBeatmapLoader____c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__2_1,
               put = setStaticF___9__2_1))::System::Func_2<::GlobalNamespace::IDifficultyBeatmapSet*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>*>* __9__2_1;

  static inline void setStaticF___9(::GlobalNamespace::__MockBeatmapLoader____c* value);

  static inline ::GlobalNamespace::__MockBeatmapLoader____c* getStaticF___9();

  static inline void setStaticF___9__2_1(::System::Func_2<::GlobalNamespace::IDifficultyBeatmapSet*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>*>* value);

  static inline ::System::Func_2<::GlobalNamespace::IDifficultyBeatmapSet*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>*>* getStaticF___9__2_1();

  static inline ::GlobalNamespace::__MockBeatmapLoader____c* New_ctor();

  /// @brief Method .ctor addr 0x23df138 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetBeatmapData>b__2_1 addr 0x23df140 size 0xa0 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>* _GetBeatmapData_b__2_1(::GlobalNamespace::IDifficultyBeatmapSet* bds);

  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockBeatmapLoader____c(__MockBeatmapLoader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockBeatmapLoader____c(__MockBeatmapLoader____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapLoader____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapData>d__2
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 892 }), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(4358)), TypeDefinitionIndex(TypeDefinitionIndex(15509)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 906 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5175)) CS Name: ::MockBeatmapLoader::<GetBeatmapData>d__2
struct CORDL_TYPE __MockBeatmapLoader___GetBeatmapData_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23df1e0 size 0x620 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23df800 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmap", ty:
  // "::GlobalNamespace::BeatmapIdentifierNetSerializable*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapLoader*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
  constexpr __MockBeatmapLoader___GetBeatmapData_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> __t__builder,
                                                      ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap, ::GlobalNamespace::MockBeatmapLoader* __4__this,
                                                      ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __8__1,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapLoader___GetBeatmapData_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> __t__builder;

  /// @brief Field beatmap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockBeatmapLoader* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MockBeatmapLoader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5176))
// CS Name: ::MockBeatmapLoader*
class CORDL_TYPE MockBeatmapLoader : public ::System::Object {
public:
  // Declarations
  using _GetBeatmapData_d__2 = ::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2;

  using __c = ::GlobalNamespace::__MockBeatmapLoader____c;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0;

  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Convert operator to "::GlobalNamespace::IMockBeatmapDataProvider"
  constexpr operator ::GlobalNamespace::IMockBeatmapDataProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  static inline ::GlobalNamespace::MockBeatmapLoader* New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method .ctor addr 0x23deae8 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method GetBeatmapData addr 0x23deb10 size 0x108 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GetBeatmapData(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmap,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose addr 0x23dec18 size 0x4 virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapLoader(MockBeatmapLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapLoader(MockBeatmapLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapLoader();

public:
  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapLoader, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapLoader*, "", "MockBeatmapLoader");
NEED_NO_BOX(::GlobalNamespace::__MockBeatmapLoader____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c*, "", "MockBeatmapLoader/<>c");
NEED_NO_BOX(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*, "", "MockBeatmapLoader/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2, "", "MockBeatmapLoader/<GetBeatmapData>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d, "", "MockBeatmapLoader/<>c__DisplayClass2_0/<<GetBeatmapData>b__3>d");
