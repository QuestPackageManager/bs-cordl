#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfilesModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerProfilesModel)
namespace BeatSaber::GameSettings {
class ControllerProfileFileModel;
}
namespace BeatSaber::GameSettings {
class ControllerProfileSaveData;
}
namespace BeatSaber::GameSettings {
class ControllerProfile;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesModel__GetBuiltInProfiles_d__21;
}
namespace BeatSaber::GameSettings {
struct ControllerProfilesModel__Initialize_d__16;
}
namespace BeatSaber::GameSettings {
struct ControllerProfilesModel__LoadAsync_d__17;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesModel___c;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesSaveData;
}
namespace BeatSaber::GameSettings {
struct Controller;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfilesModel;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesModel__GetBuiltInProfiles_d__21;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesModel___c;
}
namespace BeatSaber::GameSettings {
struct ControllerProfilesModel__Initialize_d__16;
}
namespace BeatSaber::GameSettings {
struct ControllerProfilesModel__LoadAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfilesModel);
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21);
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfilesModel___c);
MARK_VAL_T(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16);
MARK_VAL_T(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17);
// Dependencies System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfilesModel/<>c
class CORDL_TYPE ControllerProfilesModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::GameSettings::ControllerProfilesModel___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* __9__23_0;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_1,
                      put = setStaticF___9__23_1)) ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>* __9__23_1;

  static inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* New_ctor();

  /// @brief Method <GetControllerProfilesSaveData>b__23_0, addr 0x2273600, size 0x18, virtual false, abstract: false, final false
  inline bool _GetControllerProfilesSaveData_b__23_0(::BeatSaber::GameSettings::ControllerProfile* profile);

  /// @brief Method <GetControllerProfilesSaveData>b__23_1, addr 0x2273618, size 0x14, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfileSaveData* _GetControllerProfilesSaveData_b__23_1(::BeatSaber::GameSettings::ControllerProfile* profile);

  /// @brief Method .ctor, addr 0x22735f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* getStaticF___9();

  static inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* getStaticF___9__23_0();

  static inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>* getStaticF___9__23_1();

  static inline void setStaticF___9(::BeatSaber::GameSettings::ControllerProfilesModel___c* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* value);

  static inline void setStaticF___9__23_1(::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfilesModel___c(ControllerProfilesModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfilesModel___c(ControllerProfilesModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesModel___c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfilesModel/<GetBuiltInProfiles>d__21
class CORDL_TYPE ControllerProfilesModel__GetBuiltInProfiles_d__21 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current)) ::BeatSaber::GameSettings::ControllerProfile*
      System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::BeatSaber::GameSettings::ControllerProfile* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22736d8, size 0x84, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatSaber.GameSettings.ControllerProfile>.GetEnumerator, addr 0x22737a4, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>* System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatSaber.GameSettings.ControllerProfile>.get_Current, addr 0x227375c, size 0x8, virtual true, abstract: false, final true
  inline ::BeatSaber::GameSettings::ControllerProfile* System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2273834, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2273764, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x227379c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22736d4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::BeatSaber::GameSettings::ControllerProfile* const& __cordl_internal_get___2__current() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfile*& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::BeatSaber::GameSettings::ControllerProfile* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x227321c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*
  i___System__Collections__Generic__IEnumerable_1___BeatSaber__GameSettings__ControllerProfile__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*
  i___System__Collections__Generic__IEnumerator_1___BeatSaber__GameSettings__ControllerProfile__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesModel__GetBuiltInProfiles_d__21();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel__GetBuiltInProfiles_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfilesModel__GetBuiltInProfiles_d__21(ControllerProfilesModel__GetBuiltInProfiles_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel__GetBuiltInProfiles_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfilesModel__GetBuiltInProfiles_d__21(ControllerProfilesModel__GetBuiltInProfiles_d__21 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18088 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfile* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21, 0x28>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: BeatSaber.GameSettings.ControllerProfilesModel/<Initialize>d__16
struct CORDL_TYPE ControllerProfilesModel__Initialize_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2273838, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2273a60, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesModel__Initialize_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr ControllerProfilesModel__Initialize_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, 0x38>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: BeatSaber.GameSettings.ControllerProfilesModel/<LoadAsync>d__17
struct CORDL_TYPE ControllerProfilesModel__LoadAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2273a6c, size 0x4d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2274078, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesModel__LoadAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "",
  // def_value: None }]
  constexpr ControllerProfilesModel__LoadAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                     ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18090 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, 0x30>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
// Dependencies System.Object, Zenject.IInitializable
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfilesModel
class CORDL_TYPE ControllerProfilesModel : public ::System::Object {
public:
  // Declarations
  using _GetBuiltInProfiles_d__21 = ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21;

  using _Initialize_d__16 = ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16;

  using _LoadAsync_d__17 = ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17;

  using __c = ::BeatSaber::GameSettings::ControllerProfilesModel___c;

  /// @brief Field _fileModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fileModel, put = __cordl_internal_set__fileModel)) ::BeatSaber::GameSettings::ControllerProfileFileModel* _fileModel;

  /// @brief Field _profiles, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__profiles, put = __cordl_internal_set__profiles)) ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* _profiles;

  /// @brief Field <selectedProfileIndex>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedProfileIndex_k__BackingField,
                      put = __cordl_internal_set__selectedProfileIndex_k__BackingField)) int32_t _selectedProfileIndex_k__BackingField;

  /// @brief Field _settingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _vrPlatformHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_profiles)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* profiles;

  __declspec(property(get = get_selectedProfile)) ::BeatSaber::GameSettings::ControllerProfile* selectedProfile;

  __declspec(property(get = get_selectedProfileIndex, put = set_selectedProfileIndex)) int32_t selectedProfileIndex;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetBuiltInProfiles, addr 0x2272aa8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>* GetBuiltInProfiles();

  /// @brief Method GetControllerProfilesSaveData, addr 0x2272f48, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* GetControllerProfilesSaveData();

  /// @brief Method GetDefaultController, addr 0x2273540, size 0x5c, virtual false, abstract: false, final false
  static inline ::BeatSaber::GameSettings::Controller GetDefaultController();

  /// @brief Method GetDefaultControllersProfile, addr 0x2273464, size 0xdc, virtual false, abstract: false, final false
  static inline ::BeatSaber::GameSettings::ControllerProfile* GetDefaultControllersProfile(::StringW localizationKey, int32_t index, bool modifiable);

  /// @brief Method GetDefaultCustomControllerProfile, addr 0x2273250, size 0x198, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfile* GetDefaultCustomControllerProfile(int32_t profileIndex);

  /// @brief Method GetSelectedProfileIndexFromSettings, addr 0x22731c8, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetSelectedProfileIndexFromSettings(int32_t builtInProfilesCount);

  /// @brief Method Initialize, addr 0x2272b10, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method LoadAsync, addr 0x2272ba0, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadAsync();

  static inline ::BeatSaber::GameSettings::ControllerProfilesModel* New_ctor();

  /// @brief Method RefreshControllersReference, addr 0x2272e2c, size 0xa4, virtual false, abstract: false, final false
  inline void RefreshControllersReference();

  /// @brief Method SaveAsync, addr 0x2272ed0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  /// @brief Method UpdateSelectedProfile, addr 0x2272c60, size 0x1c4, virtual false, abstract: false, final false
  inline void UpdateSelectedProfile(int32_t newSelectedProfileIndex, bool forceUpdate);

  constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel* const& __cordl_internal_get__fileModel() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel*& __cordl_internal_get__fileModel();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* const& __cordl_internal_get__profiles() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>*& __cordl_internal_get__profiles();

  constexpr int32_t const& __cordl_internal_get__selectedProfileIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__selectedProfileIndex_k__BackingField();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__fileModel(::BeatSaber::GameSettings::ControllerProfileFileModel* value);

  constexpr void __cordl_internal_set__profiles(::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* value);

  constexpr void __cordl_internal_set__selectedProfileIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x22729c8, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_profiles, addr 0x227295c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* get_profiles();

  /// @brief Method get_selectedProfile, addr 0x2272974, size 0x54, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfile* get_selectedProfile();

  /// @brief Method get_selectedProfileIndex, addr 0x2272964, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectedProfileIndex();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method set_selectedProfileIndex, addr 0x227296c, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedProfileIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfilesModel(ControllerProfilesModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfilesModel(ControllerProfilesModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18091 };

  /// @brief Field kCustomLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCustomLocalizationKey{ u"CONTROLLER_PROFILES_LABEL_CUSTOM" };

  /// @brief Field kCustomProfilesCount offset 0xffffffff size 0x4
  static constexpr int32_t kCustomProfilesCount{ static_cast<int32_t>(0x5) };

  /// @brief Field kDefaultLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultLocalizationKey{ u"CONTROLLER_PROFILES_LABEL_DEFAULT" };

  /// @brief Field _fileModel, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfileFileModel* ____fileModel;

  /// @brief Field _vrPlatformHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field <selectedProfileIndex>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____selectedProfileIndex_k__BackingField;

  /// @brief Field _profiles, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* ____profiles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel, ____fileModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel, ____vrPlatformHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel, ____settingsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel, ____selectedProfileIndex_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesModel, ____profiles) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesModel, 0x38>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfilesModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesModel*, "BeatSaber.GameSettings", "ControllerProfilesModel");
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*, "BeatSaber.GameSettings", "ControllerProfilesModel/<GetBuiltInProfiles>d__21");
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfilesModel___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesModel___c*, "BeatSaber.GameSettings", "ControllerProfilesModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16, "BeatSaber.GameSettings", "ControllerProfilesModel/<Initialize>d__16");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17, "BeatSaber.GameSettings", "ControllerProfilesModel/<LoadAsync>d__17");
