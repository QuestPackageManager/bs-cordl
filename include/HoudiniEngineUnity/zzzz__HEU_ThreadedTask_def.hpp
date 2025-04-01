#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ThreadedTask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_ThreadedTask)
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ThreadedTask);
// Dependencies System.Object, System.Threading.ThreadPriority
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ThreadedTask
class CORDL_TYPE HEU_ThreadedTask : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsActive, put = set_IsActive)) bool IsActive;

  __declspec(property(get = get_IsBackground, put = set_IsBackground)) bool IsBackground;

  __declspec(property(get = get_IsComplete, put = set_IsComplete)) bool IsComplete;

  __declspec(property(get = get_Priority, put = set_Priority)) ::System::Threading::ThreadPriority Priority;

  __declspec(property(get = get_StopRequested, put = set_StopRequested)) bool StopRequested;

  __declspec(property(get = get_TaskName)) ::StringW TaskName;

  /// @brief Field _isActive, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive, put = __cordl_internal_set__isActive)) bool _isActive;

  /// @brief Field _isBackground, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isBackground, put = __cordl_internal_set__isBackground)) bool _isBackground;

  /// @brief Field _isComplete, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isComplete, put = __cordl_internal_set__isComplete)) bool _isComplete;

  /// @brief Field _lockHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lockHandle, put = __cordl_internal_set__lockHandle)) ::System::Object* _lockHandle;

  /// @brief Field _name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _priority, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) ::System::Threading::ThreadPriority _priority;

  /// @brief Field _stopRequested, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__stopRequested, put = __cordl_internal_set__stopRequested)) bool _stopRequested;

  /// @brief Field _thread, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__thread, put = __cordl_internal_set__thread)) ::System::Threading::Thread* _thread;

  /// @brief Method Abort, addr 0x3a5d8b8, size 0x34, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method CleanUp, addr 0x3a5db64, size 0x4, virtual true, abstract: false, final false
  inline void CleanUp();

  /// @brief Method DoWork, addr 0x3a5db58, size 0x4, virtual true, abstract: false, final false
  inline void DoWork();

  static inline ::HoudiniEngineUnity::HEU_ThreadedTask* New_ctor();

  /// @brief Method OnComplete, addr 0x3a5db5c, size 0x4, virtual true, abstract: false, final false
  inline void OnComplete();

  /// @brief Method OnStopped, addr 0x3a5db60, size 0x4, virtual true, abstract: false, final false
  inline void OnStopped();

  /// @brief Method Reset, addr 0x3a5d8ec, size 0x84, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Run, addr 0x3a5db68, size 0x24, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method Start, addr 0x3a5d43c, size 0x138, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x3a5d6f4, size 0x3c, virtual true, abstract: false, final false
  inline void Stop();

  /// @brief Method Update, addr 0x3a5d970, size 0x58, virtual true, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isActive() const;

  constexpr bool& __cordl_internal_get__isActive();

  constexpr bool const& __cordl_internal_get__isBackground() const;

  constexpr bool& __cordl_internal_get__isBackground();

  constexpr bool const& __cordl_internal_get__isComplete() const;

  constexpr bool& __cordl_internal_get__isComplete();

  constexpr ::System::Object* const& __cordl_internal_get__lockHandle() const;

  constexpr ::System::Object*& __cordl_internal_get__lockHandle();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Threading::ThreadPriority const& __cordl_internal_get__priority() const;

  constexpr ::System::Threading::ThreadPriority& __cordl_internal_get__priority();

  constexpr bool const& __cordl_internal_get__stopRequested() const;

  constexpr bool& __cordl_internal_get__stopRequested();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__thread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__thread();

  constexpr void __cordl_internal_set__isActive(bool value);

  constexpr void __cordl_internal_set__isBackground(bool value);

  constexpr void __cordl_internal_set__isComplete(bool value);

  constexpr void __cordl_internal_set__lockHandle(::System::Object* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__priority(::System::Threading::ThreadPriority value);

  constexpr void __cordl_internal_set__stopRequested(bool value);

  constexpr void __cordl_internal_set__thread(::System::Threading::Thread* value);

  /// @brief Method .ctor, addr 0x3a5dbb8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsActive, addr 0x3a5d9c8, size 0xc8, virtual false, abstract: false, final false
  inline bool get_IsActive();

  /// @brief Method get_IsBackground, addr 0x3a5dba4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsBackground();

  /// @brief Method get_IsComplete, addr 0x3a5d730, size 0xc8, virtual false, abstract: false, final false
  inline bool get_IsComplete();

  /// @brief Method get_Priority, addr 0x3a5db94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadPriority get_Priority();

  /// @brief Method get_StopRequested, addr 0x3a5da90, size 0xc8, virtual false, abstract: false, final false
  inline bool get_StopRequested();

  /// @brief Method get_TaskName, addr 0x3a5db8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TaskName();

  /// @brief Method set_IsActive, addr 0x3a5d574, size 0xc0, virtual false, abstract: false, final false
  inline void set_IsActive(bool value);

  /// @brief Method set_IsBackground, addr 0x3a5dbac, size 0xc, virtual false, abstract: false, final false
  inline void set_IsBackground(bool value);

  /// @brief Method set_IsComplete, addr 0x3a5d634, size 0xc0, virtual false, abstract: false, final false
  inline void set_IsComplete(bool value);

  /// @brief Method set_Priority, addr 0x3a5db9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Priority(::System::Threading::ThreadPriority value);

  /// @brief Method set_StopRequested, addr 0x3a5d7f8, size 0xc0, virtual false, abstract: false, final false
  inline void set_StopRequested(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ThreadedTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ThreadedTask(HEU_ThreadedTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ThreadedTask(HEU_ThreadedTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11796 };

  /// @brief Field _isComplete, offset: 0x10, size: 0x1, def value: None
  bool ____isComplete;

  /// @brief Field _isActive, offset: 0x11, size: 0x1, def value: None
  bool ____isActive;

  /// @brief Field _stopRequested, offset: 0x12, size: 0x1, def value: None
  bool ____stopRequested;

  /// @brief Field _lockHandle, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____lockHandle;

  /// @brief Field _thread, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Thread* ____thread;

  /// @brief Field _priority, offset: 0x28, size: 0x4, def value: None
  ::System::Threading::ThreadPriority ____priority;

  /// @brief Field _isBackground, offset: 0x2c, size: 0x1, def value: None
  bool ____isBackground;

  /// @brief Field _name, offset: 0x30, size: 0x8, def value: None
  ::StringW ____name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isComplete) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isActive) == 0x11, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____stopRequested) == 0x12, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____lockHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____thread) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____priority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isBackground) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____name) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadedTask, 0x38>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadedTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadedTask*, "HoudiniEngineUnity", "HEU_ThreadedTask");
