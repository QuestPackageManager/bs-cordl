#pragma once
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
// Type: HoudiniEngineUnity::HEU_ThreadedTask
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_ThreadedTask*
class CORDL_TYPE HEU_ThreadedTask : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsActive, put = set_IsActive)) bool IsActive;

  __declspec(property(get = get_IsBackground, put = set_IsBackground)) bool IsBackground;

  __declspec(property(get = get_IsComplete, put = set_IsComplete)) bool IsComplete;

  __declspec(property(get = get_Priority, put = set_Priority))::System::Threading::ThreadPriority Priority;

  __declspec(property(get = get_StopRequested, put = set_StopRequested)) bool StopRequested;

  __declspec(property(get = get_TaskName))::StringW TaskName;

  /// @brief Field _isActive, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive, put = __cordl_internal_set__isActive)) bool _isActive;

  /// @brief Field _isBackground, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isBackground, put = __cordl_internal_set__isBackground)) bool _isBackground;

  /// @brief Field _isComplete, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isComplete, put = __cordl_internal_set__isComplete)) bool _isComplete;

  /// @brief Field _lockHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lockHandle, put = __cordl_internal_set__lockHandle))::System::Object* _lockHandle;

  /// @brief Field _name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _priority, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority))::System::Threading::ThreadPriority _priority;

  /// @brief Field _stopRequested, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__stopRequested, put = __cordl_internal_set__stopRequested)) bool _stopRequested;

  /// @brief Field _thread, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__thread, put = __cordl_internal_set__thread))::System::Threading::Thread* _thread;

  /// @brief Method Abort, addr 0x236ff44, size 0x34, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method CleanUp, addr 0x23701f0, size 0x4, virtual true, abstract: false, final false
  inline void CleanUp();

  /// @brief Method DoWork, addr 0x23701e4, size 0x4, virtual true, abstract: false, final false
  inline void DoWork();

  static inline ::HoudiniEngineUnity::HEU_ThreadedTask* New_ctor();

  /// @brief Method OnComplete, addr 0x23701e8, size 0x4, virtual true, abstract: false, final false
  inline void OnComplete();

  /// @brief Method OnStopped, addr 0x23701ec, size 0x4, virtual true, abstract: false, final false
  inline void OnStopped();

  /// @brief Method Reset, addr 0x236ff78, size 0x84, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Run, addr 0x23701f4, size 0x24, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method Start, addr 0x236fac4, size 0x13c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0x236fd80, size 0x3c, virtual true, abstract: false, final false
  inline void Stop();

  /// @brief Method Update, addr 0x236fffc, size 0x58, virtual true, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isActive() const;

  constexpr bool& __cordl_internal_get__isActive();

  constexpr bool const& __cordl_internal_get__isBackground() const;

  constexpr bool& __cordl_internal_get__isBackground();

  constexpr bool const& __cordl_internal_get__isComplete() const;

  constexpr bool& __cordl_internal_get__isComplete();

  constexpr ::System::Object*& __cordl_internal_get__lockHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lockHandle() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Threading::ThreadPriority const& __cordl_internal_get__priority() const;

  constexpr ::System::Threading::ThreadPriority& __cordl_internal_get__priority();

  constexpr bool const& __cordl_internal_get__stopRequested() const;

  constexpr bool& __cordl_internal_get__stopRequested();

  constexpr ::System::Threading::Thread*& __cordl_internal_get__thread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get__thread() const;

  constexpr void __cordl_internal_set__isActive(bool value);

  constexpr void __cordl_internal_set__isBackground(bool value);

  constexpr void __cordl_internal_set__isComplete(bool value);

  constexpr void __cordl_internal_set__lockHandle(::System::Object* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__priority(::System::Threading::ThreadPriority value);

  constexpr void __cordl_internal_set__stopRequested(bool value);

  constexpr void __cordl_internal_set__thread(::System::Threading::Thread* value);

  /// @brief Method .ctor, addr 0x2370244, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsActive, addr 0x2370054, size 0xc8, virtual false, abstract: false, final false
  inline bool get_IsActive();

  /// @brief Method get_IsBackground, addr 0x2370230, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsBackground();

  /// @brief Method get_IsComplete, addr 0x236fdbc, size 0xc8, virtual false, abstract: false, final false
  inline bool get_IsComplete();

  /// @brief Method get_Priority, addr 0x2370220, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadPriority get_Priority();

  /// @brief Method get_StopRequested, addr 0x237011c, size 0xc8, virtual false, abstract: false, final false
  inline bool get_StopRequested();

  /// @brief Method get_TaskName, addr 0x2370218, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TaskName();

  /// @brief Method set_IsActive, addr 0x236fc00, size 0xc0, virtual false, abstract: false, final false
  inline void set_IsActive(bool value);

  /// @brief Method set_IsBackground, addr 0x2370238, size 0xc, virtual false, abstract: false, final false
  inline void set_IsBackground(bool value);

  /// @brief Method set_IsComplete, addr 0x236fcc0, size 0xc0, virtual false, abstract: false, final false
  inline void set_IsComplete(bool value);

  /// @brief Method set_Priority, addr 0x2370228, size 0x8, virtual false, abstract: false, final false
  inline void set_Priority(::System::Threading::ThreadPriority value);

  /// @brief Method set_StopRequested, addr 0x236fe84, size 0xc0, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadedTask, 0x38>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isComplete) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isActive) == 0x11, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____stopRequested) == 0x12, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____lockHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____thread) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____priority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____isBackground) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadedTask, ____name) == 0x30, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadedTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadedTask*, "HoudiniEngineUnity", "HEU_ThreadedTask");
