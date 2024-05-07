#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataHandler_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__LoaderState_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveDataHandler_1)
namespace BGLib::SaveDataCore {
class ISaveDataHandler;
}
namespace BGLib::SaveDataCore {
struct LoaderState;
}
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BGLib::SaveDataCore {
class VersionableSaveData;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___InternalLoadAsync_d__26;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___LoadAsync_d__22;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___ResetChangesAsync_d__25;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___SaveAsync_d__24;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
struct StoragePreference;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Version;
}
// Forward declare root types
namespace BGLib::SaveDataCore {
template <typename T> class SaveDataHandler_1;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___InternalLoadAsync_d__26;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___LoadAsync_d__22;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___ResetChangesAsync_d__25;
}
namespace BGLib::SaveDataCore {
template <typename T> struct __SaveDataHandler_1___SaveAsync_d__24;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::SaveDataCore::SaveDataHandler_1);
MARK_GEN_VAL_T(::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26);
MARK_GEN_VAL_T(::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22);
MARK_GEN_VAL_T(::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25);
MARK_GEN_VAL_T(::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24);
// Type: ::<LoadAsync>d__22
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::SaveDataHandler`1::<LoadAsync>d__22<T>
struct CORDL_TYPE __SaveDataHandler_1___LoadAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataHandler_1___LoadAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __SaveDataHandler_1___LoadAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
// Type: ::<SaveAsync>d__24
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::SaveDataHandler`1::<SaveAsync>d__24<T>
struct CORDL_TYPE __SaveDataHandler_1___SaveAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataHandler_1___SaveAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "force", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __SaveDataHandler_1___SaveAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this, bool force, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this;

  /// @brief Field force, offset: 0x28, size: 0x1, def value: None
  bool force;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
// Type: ::<ResetChangesAsync>d__25
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::SaveDataHandler`1::<ResetChangesAsync>d__25<T>
struct CORDL_TYPE __SaveDataHandler_1___ResetChangesAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataHandler_1___ResetChangesAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __SaveDataHandler_1___ResetChangesAsync_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                          ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
// Type: ::<InternalLoadAsync>d__26
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::SaveDataHandler`1::<InternalLoadAsync>d__26<T>
struct CORDL_TYPE __SaveDataHandler_1___InternalLoadAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataHandler_1___InternalLoadAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::SaveDataCore::SaveDataHandler_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
  constexpr __SaveDataHandler_1___InternalLoadAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder,
                                                          ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataHandler_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
// Type: BGLib.SaveDataCore::SaveDataHandler`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::SaveDataHandler`1<T>*
class CORDL_TYPE SaveDataHandler_1 : public ::System::Object {
public:
  // Declarations
  using _InternalLoadAsync_d__26 = ::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26<T>;

  using _LoadAsync_d__22 = ::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22<T>;

  using _ResetChangesAsync_d__25 = ::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25<T>;

  using _SaveAsync_d__24 = ::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24<T>;

  __declspec(property(get = BGLib_SaveDataCore_ISaveDataHandler_get_instance))::BGLib::SaveDataCore::VersionableSaveData* BGLib_SaveDataCore_ISaveDataHandler_instance;

  /// @brief Field _fileStorage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _instance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) T _instance;

  /// @brief Field _loadFileTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadFileTask, put = __cordl_internal_set__loadFileTask))::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* _loadFileTask;

  /// @brief Field _saveFileTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saveFileTask, put = __cordl_internal_set__saveFileTask))::System::Threading::Tasks::Task* _saveFileTask;

  /// @brief Field <state>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__state_k__BackingField, put = __cordl_internal_set__state_k__BackingField))::BGLib::SaveDataCore::LoaderState _state_k__BackingField;

  __declspec(property(get = get_fileNameWithExtension))::StringW fileNameWithExtension;

  __declspec(property(get = get_firstVersion))::System::Version* firstVersion;

  __declspec(property(get = get_instance)) T instance;

  __declspec(property(get = get_preferredStorageLocation))::GlobalNamespace::StoragePreference preferredStorageLocation;

  __declspec(property(get = get_state, put = set_state))::BGLib::SaveDataCore::LoaderState state;

  __declspec(property(get = get_version))::System::Version* version;

  /// @brief Convert operator to "::BGLib::SaveDataCore::ISaveDataHandler"
  constexpr operator ::BGLib::SaveDataCore::ISaveDataHandler*() noexcept;

  /// @brief Method BGLib.SaveDataCore.ISaveDataHandler.get_instance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::BGLib::SaveDataCore::VersionableSaveData* BGLib_SaveDataCore_ISaveDataHandler_get_instance();

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DeleteAsync();

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::BGLib::SaveDataCore::LoaderState GetState();

  /// @brief Method InternalLoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* InternalLoadAsync();

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BGLib::SaveDataCore::SaveDataResult Load();

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* LoadAsync();

  static inline ::BGLib::SaveDataCore::SaveDataHandler_1<T>* New_ctor(::GlobalNamespace::IFileStorage* fileStorage);

  static inline ::BGLib::SaveDataCore::SaveDataHandler_1<T>* New_ctor(::GlobalNamespace::IFileStorage* fileStorage, T instance);

  /// @brief Method ResetChangesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* ResetChangesAsync();

  /// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::BGLib::SaveDataCore::SaveDataResult Save(bool force);

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* SaveAsync(bool force);

  /// @brief Method TestFullUpdateLoop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TestFullUpdateLoop();

  /// @brief Method UpdateVersionLoop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::BGLib::SaveDataCore::SaveDataResult UpdateVersionLoop(ByRef<T> deserializedJson);

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr T const& __cordl_internal_get__instance() const;

  constexpr T& __cordl_internal_get__instance();

  constexpr ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*& __cordl_internal_get__loadFileTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*> const& __cordl_internal_get__loadFileTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__saveFileTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__saveFileTask() const;

  constexpr ::BGLib::SaveDataCore::LoaderState const& __cordl_internal_get__state_k__BackingField() const;

  constexpr ::BGLib::SaveDataCore::LoaderState& __cordl_internal_get__state_k__BackingField();

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__instance(T value);

  constexpr void __cordl_internal_set__loadFileTask(::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* value);

  constexpr void __cordl_internal_set__saveFileTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__state_k__BackingField(::BGLib::SaveDataCore::LoaderState value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IFileStorage* fileStorage, T instance);

  /// @brief Method get_fileNameWithExtension, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_fileNameWithExtension();

  /// @brief Method get_firstVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Version* get_firstVersion();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_instance();

  /// @brief Method get_preferredStorageLocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::StoragePreference get_preferredStorageLocation();

  /// @brief Method get_state, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::BGLib::SaveDataCore::LoaderState get_state();

  /// @brief Method get_version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Version* get_version();

  /// @brief Convert to "::BGLib::SaveDataCore::ISaveDataHandler"
  constexpr ::BGLib::SaveDataCore::ISaveDataHandler* i___BGLib__SaveDataCore__ISaveDataHandler() noexcept;

  /// @brief Method set_state, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_state(::BGLib::SaveDataCore::LoaderState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveDataHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaveDataHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaveDataHandler_1(SaveDataHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaveDataHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaveDataHandler_1(SaveDataHandler_1 const&) = delete;

  /// @brief Field <state>k__BackingField, offset: 0x10, size: 0x1, def value: None
  ::BGLib::SaveDataCore::LoaderState ____state_k__BackingField;

  /// @brief Field _fileStorage, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _loadFileTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* ____loadFileTask;

  /// @brief Field _saveFileTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____saveFileTask;

  /// @brief Field _instance, offset: 0x30, size: 0x8, def value: None
  T ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::SaveDataCore::SaveDataHandler_1, "BGLib.SaveDataCore", "SaveDataHandler`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::SaveDataCore::__SaveDataHandler_1___InternalLoadAsync_d__26, "BGLib.SaveDataCore", "SaveDataHandler`1/<InternalLoadAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::SaveDataCore::__SaveDataHandler_1___LoadAsync_d__22, "BGLib.SaveDataCore", "SaveDataHandler`1/<LoadAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::SaveDataCore::__SaveDataHandler_1___ResetChangesAsync_d__25, "BGLib.SaveDataCore", "SaveDataHandler`1/<ResetChangesAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::SaveDataCore::__SaveDataHandler_1___SaveAsync_d__24, "BGLib.SaveDataCore", "SaveDataHandler`1/<SaveAsync>d__24");
