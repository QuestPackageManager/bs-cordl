#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarSystemCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystemCollection)
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
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;
}
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;
}
namespace BeatSaber::AvatarCore {
class __AvatarSystemCollection____c;
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
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class __AvatarSystemCollection____c;
}
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;
}
namespace BeatSaber::AvatarCore {
struct __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSystemCollection);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__AvatarSystemCollection____c);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::AvatarSystemCollection::<>c*
class CORDL_TYPE __AvatarSystemCollection____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BeatSaber::AvatarCore::__AvatarSystemCollection____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* __9__14_0;

  static inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* New_ctor();

  /// @brief Method .ctor, addr 0x1050338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_anyAvatarCreated>b__14_0, addr 0x1050340, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* _get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem* avatarSystem);

  static inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* getStaticF___9();

  static inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* getStaticF___9__14_0();

  static inline void setStaticF___9(::BeatSaber::AvatarCore::__AvatarSystemCollection____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarSystemCollection____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AvatarSystemCollection____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarSystemCollection____c(__AvatarSystemCollection____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarSystemCollection____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarSystemCollection____c(__AvatarSystemCollection____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarSystemCollection____c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: ::<GetMultiplayerAvatarsData>d__16
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: ::AvatarSystemCollection::<GetMultiplayerAvatarsData>d__16
struct CORDL_TYPE __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10503e0, size 0x89c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1050c7c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: None }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>", modifiers: "",
  // def_value: None }]
  constexpr __AvatarSystemCollection___GetMultiplayerAvatarsData_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder,
      ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this, ::StringW selectedAvatarTypeIdentifier,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData, ::Array<::GlobalNamespace::MultiplayerAvatarData>*>> __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, selectedAvatarTypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, __u__1) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: ::<CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync>d__18
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: ::AvatarSystemCollection::<CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync>d__18
struct CORDL_TYPE __AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1050cd4, size 0x410, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x10510e4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers:
  // "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::__List_1__Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this,
      ::System::Collections::Generic::__List_1__Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, __u__1) == 0x48, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarSystemCollection
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::AvatarSystemCollection*
class CORDL_TYPE AvatarSystemCollection : public ::System::Object {
public:
  // Declarations
  using _CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18 =
      ::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18;

  using _GetMultiplayerAvatarsData_d__16 = ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16;

  using __c = ::BeatSaber::AvatarCore::__AvatarSystemCollection____c;

  /// @brief Field _availableAvatarSystemList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__availableAvatarSystemList,
                      put = __cordl_internal_set__availableAvatarSystemList))::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* _availableAvatarSystemList;

  /// @brief Field _availableAvatarSystems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__availableAvatarSystems,
                      put = __cordl_internal_set__availableAvatarSystems))::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* _availableAvatarSystems;

  /// @brief Field _availableUserSelectableAvatarSystems, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__availableUserSelectableAvatarSystems,
               put = __cordl_internal_set__availableUserSelectableAvatarSystems))::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* _availableUserSelectableAvatarSystems;

  /// @brief Field _fallbackAvatarSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackAvatarSystem, put = __cordl_internal_set__fallbackAvatarSystem))::BeatSaber::AvatarCore::IAvatarSystem* _fallbackAvatarSystem;

  /// @brief Field _supportedOptionalAvatarDataTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__supportedOptionalAvatarDataTypes,
                      put = __cordl_internal_set__supportedOptionalAvatarDataTypes))::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* _supportedOptionalAvatarDataTypes;

  __declspec(property(get = get_anyAvatarCreated))::System::Threading::Tasks::Task_1<bool>* anyAvatarCreated;

  __declspec(property(get = get_availableAvatarSystems))::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* availableAvatarSystems;

  __declspec(property(get = get_selectableAvatarSystems))::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* selectableAvatarSystems;

  __declspec(property(get = get_supportedOptionalAvatarDataType))::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataType;

  /// @brief Method AvatarSystemBySelectionSortOrder, addr 0x104fd50, size 0x128, virtual false, abstract: false, final false
  static inline int32_t AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem* system1, ::BeatSaber::AvatarCore::IAvatarSystem* system2);

  /// @brief Method CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync, addr 0x1050188, size 0x94, virtual false, abstract: false, final false
  inline void CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync();

  /// @brief Method GetAvatarSystem, addr 0x10502c4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier avatarSystemIdentifier);

  /// @brief Method GetAvatarSystem, addr 0x105021c, size 0xa8, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata);

  /// @brief Method GetAvatarSystem, addr 0x1050158, size 0x30, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(::StringW avatarTypeIdentifier);

  /// @brief Method GetAvatarSystem, addr 0x104da94, size 0x128, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IAvatarSystem* GetAvatarSystem(uint32_t avatarTypeIdentifierHash);

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0x105009c, size 0xbc, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider(::StringW selectedAvatarTypeIdentifier);

  /// @brief Method GetMultiplayerAvatarsData, addr 0x104ff98, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* GetMultiplayerAvatarsData(::StringW selectedAvatarTypeIdentifier);

  /// @brief Method HasAvatarSystem, addr 0x104da3c, size 0x58, virtual false, abstract: false, final false
  inline bool HasAvatarSystem(uint32_t avatarTypeIdentifierHash);

  static inline ::BeatSaber::AvatarCore::AvatarSystemCollection* New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableAvatarSystemList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
  __cordl_internal_get__availableAvatarSystemList() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableAvatarSystems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
  __cordl_internal_get__availableAvatarSystems() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& __cordl_internal_get__availableUserSelectableAvatarSystems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
  __cordl_internal_get__availableUserSelectableAvatarSystems() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarSystem*& __cordl_internal_get__fallbackAvatarSystem();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystem*> const& __cordl_internal_get__fallbackAvatarSystem() const;

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& __cordl_internal_get__supportedOptionalAvatarDataTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*> const& __cordl_internal_get__supportedOptionalAvatarDataTypes() const;

  constexpr void __cordl_internal_set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value);

  constexpr void __cordl_internal_set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem* value);

  constexpr void __cordl_internal_set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x104f268, size 0xae8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems);

  /// @brief Method get_anyAvatarCreated, addr 0x104fe78, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_anyAvatarCreated();

  /// @brief Method get_availableAvatarSystems, addr 0x104f258, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_availableAvatarSystems();

  /// @brief Method get_selectableAvatarSystems, addr 0x104f250, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* get_selectableAvatarSystems();

  /// @brief Method get_supportedOptionalAvatarDataType, addr 0x104f260, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSystemCollection, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableAvatarSystems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableUserSelectableAvatarSystems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____supportedOptionalAvatarDataTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____fallbackAvatarSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarSystemCollection, ____availableAvatarSystemList) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSystemCollection);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSystemCollection*, "BeatSaber.AvatarCore", "AvatarSystemCollection");
NEED_NO_BOX(::BeatSaber::AvatarCore::__AvatarSystemCollection____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "BeatSaber.AvatarCore", "AvatarSystemCollection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarSystemCollection___CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18, "BeatSaber.AvatarCore",
                       "AvatarSystemCollection/<CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16, "BeatSaber.AvatarCore", "AvatarSystemCollection/<GetMultiplayerAvatarsData>d__16");
