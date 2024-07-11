#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/LegacyModelConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyModelConverter)
namespace BeatSaber::GameSettings {
class GraphicSettings;
}
namespace BeatSaber::GameSettings {
class LegacySettingsModel;
}
namespace BeatSaber::GameSettings {
class MainSettings;
}
namespace BeatSaber::GameSettings {
struct __LegacyModelConverter___AttemptConversionAsync_d__5;
}
namespace BeatSaber::GameSettings {
struct __LegacyModelConverter___RequiresUpdateAsync_d__4;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class IFileStorage;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class LegacyModelConverter;
}
namespace BeatSaber::GameSettings {
struct __LegacyModelConverter___AttemptConversionAsync_d__5;
}
namespace BeatSaber::GameSettings {
struct __LegacyModelConverter___RequiresUpdateAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::LegacyModelConverter);
MARK_VAL_T(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5);
MARK_VAL_T(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4);
// Type: ::<RequiresUpdateAsync>d__4
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::LegacyModelConverter::<RequiresUpdateAsync>d__4
struct CORDL_TYPE __LegacyModelConverter___RequiresUpdateAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106d94c, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106db80, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacyModelConverter___RequiresUpdateAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::LegacyModelConverter*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*>", modifiers: "", def_value:
  // None }]
  constexpr __LegacyModelConverter___RequiresUpdateAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                              ::BeatSaber::GameSettings::LegacyModelConverter* __4__this,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::LegacyModelConverter* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, __u__1) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: ::<AttemptConversionAsync>d__5
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::LegacyModelConverter::<AttemptConversionAsync>d__5
struct CORDL_TYPE __LegacyModelConverter___AttemptConversionAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106dbd8, size 0x828, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106e77c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LegacyModelConverter___AttemptConversionAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*,::BeatSaber::GameSettings::GraphicSettings*>>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::LegacyModelConverter*", modifiers: "", def_value: None }, CppParam { name: "_legacyModel_5__2", ty:
  // "::BeatSaber::GameSettings::LegacySettingsModel*", modifiers: "", def_value: None }, CppParam { name: "_mainSettings_5__3", ty: "::BeatSaber::GameSettings::MainSettings*", modifiers: "",
  // def_value: None }, CppParam { name: "_graphicSettings_5__4", ty: "::BeatSaber::GameSettings::GraphicSettings*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LegacyModelConverter___AttemptConversionAsync_d__5(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>> __t__builder,
      ::BeatSaber::GameSettings::LegacyModelConverter* __4__this, ::BeatSaber::GameSettings::LegacySettingsModel* _legacyModel_5__2, ::BeatSaber::GameSettings::MainSettings* _mainSettings_5__3,
      ::BeatSaber::GameSettings::GraphicSettings* _graphicSettings_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::LegacyModelConverter* __4__this;

  /// @brief Field <legacyModel>5__2, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::GameSettings::LegacySettingsModel* _legacyModel_5__2;

  /// @brief Field <mainSettings>5__3, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettings* _mainSettings_5__3;

  /// @brief Field <graphicSettings>5__4, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettings* _graphicSettings_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, _legacyModel_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, _mainSettings_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, _graphicSettings_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, __u__3) == 0x50, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
// Type: BeatSaber.GameSettings::LegacyModelConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::LegacyModelConverter*
class CORDL_TYPE LegacyModelConverter : public ::System::Object {
public:
  // Declarations
  using _AttemptConversionAsync_d__5 = ::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5;

  using _RequiresUpdateAsync_d__4 = ::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4;

  /// @brief Field _fileStorage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _legacyModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__legacyModel, put = __cordl_internal_set__legacyModel))::BeatSaber::GameSettings::LegacySettingsModel* _legacyModel;

  /// @brief Method AttemptConversionAsync, addr 0x106d854, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>>* AttemptConversionAsync();

  static inline ::BeatSaber::GameSettings::LegacyModelConverter* New_ctor(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method RequiresUpdateAsync, addr 0x106d75c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RequiresUpdateAsync();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::BeatSaber::GameSettings::LegacySettingsModel*& __cordl_internal_get__legacyModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::LegacySettingsModel*> const& __cordl_internal_get__legacyModel() const;

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__legacyModel(::BeatSaber::GameSettings::LegacySettingsModel* value);

  /// @brief Method .ctor, addr 0x106d734, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegacyModelConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LegacyModelConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegacyModelConverter(LegacyModelConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegacyModelConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegacyModelConverter(LegacyModelConverter const&) = delete;

  /// @brief Field _fileStorage, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _legacyModel, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::LegacySettingsModel* ____legacyModel;

  /// @brief Field kFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kFileName{ u"settings.cfg" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::LegacyModelConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacyModelConverter, ____fileStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::LegacyModelConverter, ____legacyModel) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::LegacyModelConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::LegacyModelConverter*, "BeatSaber.GameSettings", "LegacyModelConverter");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5, "BeatSaber.GameSettings", "LegacyModelConverter/<AttemptConversionAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4, "BeatSaber.GameSettings", "LegacyModelConverter/<RequiresUpdateAsync>d__4");
