#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataFlushingService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveDataFlushingService)
namespace BGLib::SaveDataCore {
class ISaveDataHandler;
}
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BGLib::SaveDataCore {
struct __SaveDataFlushingService___FlushSaveFilesAsync_d__3;
}
namespace BGLib::SaveDataCore {
struct __SaveDataFlushingService___ResetChangesAsync_d__4;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace BGLib::SaveDataCore {
class SaveDataFlushingService;
}
namespace BGLib::SaveDataCore {
struct __SaveDataFlushingService___FlushSaveFilesAsync_d__3;
}
namespace BGLib::SaveDataCore {
struct __SaveDataFlushingService___ResetChangesAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::SaveDataCore::SaveDataFlushingService);
MARK_VAL_T(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3);
MARK_VAL_T(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4);
// Type: ::<FlushSaveFilesAsync>d__3
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: true
// CS Name: ::SaveDataFlushingService::<FlushSaveFilesAsync>d__3
struct CORDL_TYPE __SaveDataFlushingService___FlushSaveFilesAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1088314, size 0x640, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1088960, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataFlushingService___FlushSaveFilesAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::SaveDataCore::SaveDataFlushingService*",
  // modifiers: "", def_value: None }, CppParam { name: "_allSavesSucceeded_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*>", modifiers: "", def_value: None }, CppParam { name: "_handler_5__4", ty:
  // "::BGLib::SaveDataCore::ISaveDataHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __SaveDataFlushingService___FlushSaveFilesAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                 ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this, bool _allSavesSucceeded_5__2,
                                                                 ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2,
                                                                 ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this;

  /// @brief Field <allSavesSucceeded>5__2, offset: 0x28, size: 0x1, def value: None
  bool _allSavesSucceeded_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2;

  /// @brief Field <handler>5__4, offset: 0x48, size: 0x8, def value: None
  ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, _allSavesSucceeded_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, _handler_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, __u__1) == 0x50, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
// Type: ::<ResetChangesAsync>d__4
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: true
// CS Name: ::SaveDataFlushingService::<ResetChangesAsync>d__4
struct CORDL_TYPE __SaveDataFlushingService___ResetChangesAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10889b8, size 0x590, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1088f48, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SaveDataFlushingService___ResetChangesAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::SaveDataCore::SaveDataFlushingService*",
  // modifiers: "", def_value: None }, CppParam { name: "_success_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*>", modifiers: "", def_value: None }, CppParam { name: "_handler_5__4", ty:
  // "::BGLib::SaveDataCore::ISaveDataHandler*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: None }]
  constexpr __SaveDataFlushingService___ResetChangesAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                               ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this, bool _success_5__2,
                                                               ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2,
                                                               ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this;

  /// @brief Field <success>5__2, offset: 0x28, size: 0x1, def value: None
  bool _success_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2;

  /// @brief Field <handler>5__4, offset: 0x48, size: 0x8, def value: None
  ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, _success_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, _handler_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, __u__1) == 0x50, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
// Type: BGLib.SaveDataCore::SaveDataFlushingService
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::SaveDataFlushingService*
class CORDL_TYPE SaveDataFlushingService : public ::System::Object {
public:
  // Declarations
  using _FlushSaveFilesAsync_d__3 = ::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3;

  using _ResetChangesAsync_d__4 = ::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4;

  /// @brief Field _handlers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handlers, put = __cordl_internal_set__handlers))::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>* _handlers;

  /// @brief Field blockingObjects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blockingObjects,
                      put = __cordl_internal_set_blockingObjects))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* blockingObjects;

  /// @brief Method FlushSaveFilesAsync, addr 0x1087fa4, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* FlushSaveFilesAsync();

  static inline ::BGLib::SaveDataCore::SaveDataFlushingService* New_ctor();

  /// @brief Method Register, addr 0x1087efc, size 0xa8, virtual false, abstract: false, final false
  inline void Register(::BGLib::SaveDataCore::ISaveDataHandler* handler);

  /// @brief Method ReleaseSaveBlocker, addr 0x10881fc, size 0x58, virtual false, abstract: false, final false
  inline bool ReleaseSaveBlocker(::UnityEngine::Object* o);

  /// @brief Method ResetChangesAsync, addr 0x10880a4, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ResetChangesAsync();

  /// @brief Method TrackSaveBlocker, addr 0x10881a4, size 0x58, virtual false, abstract: false, final false
  inline bool TrackSaveBlocker(::UnityEngine::Object* o);

  constexpr ::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>*& __cordl_internal_get__handlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>*> const& __cordl_internal_get__handlers() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_blockingObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_blockingObjects() const;

  constexpr void __cordl_internal_set__handlers(::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>* value);

  constexpr void __cordl_internal_set_blockingObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method .ctor, addr 0x1088254, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveDataFlushingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaveDataFlushingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaveDataFlushingService(SaveDataFlushingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaveDataFlushingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaveDataFlushingService(SaveDataFlushingService const&) = delete;

  /// @brief Field blockingObjects, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* ___blockingObjects;

  /// @brief Field _handlers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>* ____handlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::SaveDataFlushingService, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::SaveDataFlushingService, ___blockingObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::SaveDataFlushingService, ____handlers) == 0x18, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
NEED_NO_BOX(::BGLib::SaveDataCore::SaveDataFlushingService);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::SaveDataFlushingService*, "BGLib.SaveDataCore", "SaveDataFlushingService");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3, "BGLib.SaveDataCore", "SaveDataFlushingService/<FlushSaveFilesAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4, "BGLib.SaveDataCore", "SaveDataFlushingService/<ResetChangesAsync>d__4");
