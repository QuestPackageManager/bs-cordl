#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarSystemCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystemCollection)
namespace BeatSaber::AvatarCore {
struct AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemCollection__GetMultiplayerAvatarsData_d__16;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection___c;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystem;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection___c;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemCollection__GetMultiplayerAvatarsData_d__16;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSystemCollection);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSystemCollection___c);
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18);
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16);
// Dependencies System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarSystemCollection/<>c
class CORDL_TYPE AvatarSystemCollection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::AvatarCore::AvatarSystemCollection___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* __9__14_0;

  static inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* New_ctor();

  /// @brief Method .ctor, addr 0x224a188, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_anyAvatarCreated>b__14_0, addr 0x224a190, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* _get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem* avatarSystem);

  static inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* getStaticF___9();

  static inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* getStaticF___9__14_0();

  static inline void setStaticF___9(::BeatSaber::AvatarCore::AvatarSystemCollection___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemCollection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSystemCollection___c(AvatarSystemCollection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSystemCollection___c(AvatarSystemCollection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection___c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: BeatSaber.AvatarCore.AvatarSystemCollection/<CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync>d__18
struct CORDL_TYPE AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x224a230, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x224a69c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers:
  // "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*>", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this,
      ::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17571 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, 0x48>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies MultiplayerAvatarsData, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: BeatSaber.AvatarCore.AvatarSystemCollection/<GetMultiplayerAvatarsData>d__16
struct CORDL_TYPE AvatarSystemCollection__GetMultiplayerAvatarsData_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x224a704, size 0x910, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x224b014, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemCollection__GetMultiplayerAvatarsData_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: None }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>", modifiers: "",
  // def_value: None }]
  constexpr AvatarSystemCollection__GetMultiplayerAvatarsData_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder,
      ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this, ::StringW selectedAvatarTypeIdentifier,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData, ::Array<::GlobalNamespace::MultiplayerAvatarData>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this;

  /// @brief Field selectedAvatarTypeIdentifier, offset: 0x28, size: 0x8, def value: None
  ::StringW selectedAvatarTypeIdentifier;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData, ::Array<::GlobalNamespace::MultiplayerAvatarData>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, selectedAvatarTypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarSystemCollection
class CORDL_TYPE AvatarSystemCollection : public ::System::Object {
public:
  // Declarations
  using _CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18 =
      ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;

  using _GetMultiplayerAvatarsData_d__16 = ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16;

  using __c = ::BeatSaber::AvatarCore::AvatarSystemCollection___c;

  /// @brief Field _availableAvatarSystemList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__availableAvatarSystemList,
                      put = __cordl_internal_set__availableAvatarSystemList)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* _availableAvatarSystemList;

  /// @brief Field _availableAvatarSystems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__availableAvatarSystems,
                      put = __cordl_internal_set__availableAvatarSystems)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* _availableAvatarSystems;

  /// @brief Field _availableUserSelectableAvatarSystems, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__availableUserSelectableAvatarSystems,
      put = __cordl_internal_set__availableUserSelectableAvatarSystems)) ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* _availableUserSelectableAvatarSystems;

  /// @brief Field _fallbackAvatarSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackAvatarSystem, put = __cordl_internal_set__fallbackAvatarSystem)) ::BeatSaber::AvatarCore::IAvatarSystem* _fallbackAvatarSystem;

  /// @brief Field _supportedOptionalAvatarDataTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__supportedOptionalAvatarDataTypes,
                      put = __cordl_internal_set__supportedOptionalAvatarDataTypes)) ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* _supportedOptionalAvatarDataTypes;

  __declspec(property(get = get_anyAvatarCreated)) ::System::Threading::Tasks::Task_1<bool>* anyAvatarCreated;

  __declspec(property(get = get_availableAvatarSystems)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* availableAvatarSystems;

  __declspec(property(get = get_selectableAvatarSystems)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* selectableAvatarSystems;

  __declspec(property(get = get_supportedOptionalAvatarDataType)) ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataType;

  /// @brief Method AvatarSystemBySelectionSortOrder, addr 0x2249b80, size 0x128, virtual false, abstract: false, final false
  static inline int32_t AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem* system1, ::BeatSaber::AvatarCore::IAvatarSystem* system2);

  /// @brief Method CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync, addr 0x2249fb0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync();

  /// @brief Method GetAvatarSystem, addr 0x224a11c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier avatarSystemIdentifier);

  /// @brief Method GetAvatarSystem, addr 0x224a074, size 0xa8, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata);

  /// @brief Method GetAvatarSystem, addr 0x2249f80, size 0x30, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::StringW avatarTypeIdentifier);

  /// @brief Method GetAvatarSystem, addr 0x2247928, size 0x124, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(uint32_t avatarTypeIdentifierHash);

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0x2249ec4, size 0xbc, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider(::StringW selectedAvatarTypeIdentifier);

  /// @brief Method GetMultiplayerAvatarsData, addr 0x2249dc8, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* GetMultiplayerAvatarsData(::StringW selectedAvatarTypeIdentifier);

  /// @brief Method HasAvatarSystem, addr 0x22478d0, size 0x58, virtual false, abstract: false, final false
  inline bool HasAvatarSystem(uint32_t avatarTypeIdentifierHash);

  static inline ::BeatSaber::AvatarCore::AvatarSystemCollection* New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const& __cordl_internal_get__availableAvatarSystemList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableAvatarSystemList();

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* const& __cordl_internal_get__availableAvatarSystems() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableAvatarSystems();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const& __cordl_internal_get__availableUserSelectableAvatarSystems() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableUserSelectableAvatarSystems();

  constexpr ::BeatSaber::AvatarCore::IAvatarSystem* const& __cordl_internal_get__fallbackAvatarSystem() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarSystem*& __cordl_internal_get__fallbackAvatarSystem();

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* const& __cordl_internal_get__supportedOptionalAvatarDataTypes() const;

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& __cordl_internal_get__supportedOptionalAvatarDataTypes();

  constexpr void __cordl_internal_set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem* value);

  constexpr void __cordl_internal_set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x22490e4, size 0xa9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems);

  /// @brief Method get_anyAvatarCreated, addr 0x2249ca8, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_anyAvatarCreated();

  /// @brief Method get_availableAvatarSystems, addr 0x22490d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_availableAvatarSystems();

  /// @brief Method get_selectableAvatarSystems, addr 0x22490cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_selectableAvatarSystems();

  /// @brief Method get_supportedOptionalAvatarDataType, addr 0x22490dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* get_supportedOptionalAvatarDataType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSystemCollection(AvatarSystemCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSystemCollection(AvatarSystemCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17573 };

  /// @brief Field _availableAvatarSystems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* ____availableAvatarSystems;

  /// @brief Field _availableUserSelectableAvatarSystems, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* ____availableUserSelectableAvatarSystems;

  /// @brief Field _supportedOptionalAvatarDataTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* ____supportedOptionalAvatarDataTypes;

  /// @brief Field _fallbackAvatarSystem, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystem* ____fallbackAvatarSystem;

  /// @brief Field _availableAvatarSystemList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* ____availableAvatarSystemList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableAvatarSystems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableUserSelectableAvatarSystems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____supportedOptionalAvatarDataTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____fallbackAvatarSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableAvatarSystemList) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSystemCollection);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection*, "BeatSaber.AvatarCore", "AvatarSystemCollection");
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSystemCollection___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection___c*, "BeatSaber.AvatarCore", "AvatarSystemCollection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, "BeatSaber.AvatarCore",
                       "AvatarSystemCollection/<CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16, "BeatSaber.AvatarCore", "AvatarSystemCollection/<GetMultiplayerAvatarsData>d__16");
