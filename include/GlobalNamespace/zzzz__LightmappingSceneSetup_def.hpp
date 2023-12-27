#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmappingSceneSetup)
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace GlobalNamespace {
class __LightmappingSceneSetup____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct __LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSceneSetup;
}
namespace GlobalNamespace {
class __LightmappingSceneSetup____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct __LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmappingSceneSetup);
MARK_REF_PTR_T(::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d);
// Type: ::<<InstallBindings>b__0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890 }), TypeDefinitionIndex(TypeDefinitionIndex(3401)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(4260))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6033)) CS Name:
// ::LightmappingSceneSetup::<>c__DisplayClass8_0::<<InstallBindings>b__0>d
struct CORDL_TYPE __LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x231ac64 size 0x2ac virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x231af10 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                     ::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0* __4__this,
                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6034))
// CS Name: ::LightmappingSceneSetup::<>c__DisplayClass8_0*
class CORDL_TYPE __LightmappingSceneSetup____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  using __InstallBindings_b__0_d = ::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LightmappingSceneSetup* __4__this;

  /// @brief Field beatmapData, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapData, put = __set_beatmapData))::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  constexpr ::GlobalNamespace::LightmappingSceneSetup*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmappingSceneSetup*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LightmappingSceneSetup* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_beatmapData() const;

  constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  static inline ::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x231ab8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InstallBindings>b__0 addr 0x231ab9c size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* _InstallBindings_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmappingSceneSetup____c__DisplayClass8_0(__LightmappingSceneSetup____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmappingSceneSetup____c__DisplayClass8_0(__LightmappingSceneSetup____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmappingSceneSetup____c__DisplayClass8_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightmappingSceneSetup* _____4__this;

  /// @brief Field beatmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightmappingSceneSetup
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6035))
// CS Name: ::LightmappingSceneSetup*
class CORDL_TYPE LightmappingSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0;

  /// @brief Field _beatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::BeatmapLevelSO* _beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x30, size 0x4
  __declspec(property(get = __get__beatmapDifficulty, put = __set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _colorScheme, offset 0x38, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorSchemeSO* _colorScheme;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset 0x40, size 0x8
  __declspec(property(get = __get__standardLevelNoTransitionInstallerData,
                      put = __set__standardLevelNoTransitionInstallerData))::GlobalNamespace::StandardLevelNoTransitionInstallerData* _standardLevelNoTransitionInstallerData;

  __declspec(property(get = get_colorScheme, put = set_colorScheme))::GlobalNamespace::ColorSchemeSO* colorScheme;

  constexpr ::GlobalNamespace::BeatmapLevelSO*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

  constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO* value);

  constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData*& __get__standardLevelNoTransitionInstallerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelNoTransitionInstallerData*> const& __get__standardLevelNoTransitionInstallerData() const;

  constexpr void __set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData* value);

  /// @brief Method get_colorScheme addr 0x2319e6c size 0x8 virtual false final false
  inline ::GlobalNamespace::ColorSchemeSO* get_colorScheme();

  /// @brief Method set_colorScheme addr 0x2319e74 size 0x8 virtual false final false
  inline void set_colorScheme(::GlobalNamespace::ColorSchemeSO* value);

  /// @brief Method InstallBindings addr 0x2319e7c size 0xd10 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LightmappingSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x231ab94 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingSceneSetup(LightmappingSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingSceneSetup(LightmappingSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingSceneSetup();

public:
  /// @brief Field _beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* ____beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____colorScheme;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelNoTransitionInstallerData* ____standardLevelNoTransitionInstallerData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingSceneSetup, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingSceneSetup*, "", "LightmappingSceneSetup");
NEED_NO_BOX(::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0*, "", "LightmappingSceneSetup/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d, "", "LightmappingSceneSetup/<>c__DisplayClass8_0/<<InstallBindings>b__0>d");
