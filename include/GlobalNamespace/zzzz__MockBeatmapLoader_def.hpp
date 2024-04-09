#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapLoader)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__5;
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
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapLoader;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapLoader);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5);
// Type: ::<GetBeatmapData>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MockBeatmapLoader::<GetBeatmapData>d__5
struct CORDL_TYPE __MockBeatmapLoader___GetBeatmapData_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x25f9528, size 0x454, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25f997c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapLoader___GetBeatmapData_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmap", ty:
  // "::GlobalNamespace::BeatmapKeyNetSerializable*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapLoader*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __MockBeatmapLoader___GetBeatmapData_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> __t__builder,
                                                      ::GlobalNamespace::BeatmapKeyNetSerializable* beatmap, ::GlobalNamespace::MockBeatmapLoader* __4__this,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> __t__builder;

  /// @brief Field beatmap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapKeyNetSerializable* beatmap;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockBeatmapLoader* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, beatmap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MockBeatmapLoader
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockBeatmapLoader*
class CORDL_TYPE MockBeatmapLoader : public ::System::Object {
public:
  // Declarations
  using _GetBeatmapData_d__5 = ::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapDataLoader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader))::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _environmentsListModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel))::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Convert operator to "::GlobalNamespace::IMockBeatmapDataProvider"
  constexpr operator ::GlobalNamespace::IMockBeatmapDataProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x25f9524, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBeatmapData, addr 0x25f9428, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GetBeatmapData(::GlobalNamespace::BeatmapKeyNetSerializable* beatmap,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockBeatmapLoader* New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                                                               ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                               ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataLoader*> const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  /// @brief Method .ctor, addr 0x25f93e8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                    ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Convert to "::GlobalNamespace::IMockBeatmapDataProvider"
  constexpr ::GlobalNamespace::IMockBeatmapDataProvider* i___GlobalNamespace__IMockBeatmapDataProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapLoader(MockBeatmapLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapLoader(MockBeatmapLoader const&) = delete;

  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapDataLoader, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _environmentsListModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapLoader, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapLoader, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapLoader, ____beatmapDataLoader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapLoader, ____environmentsListModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapLoader, ____beatmapCharacteristicCollection) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapLoader*, "", "MockBeatmapLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__5, "", "MockBeatmapLoader/<GetBeatmapData>d__5");
