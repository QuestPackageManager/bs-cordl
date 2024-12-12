#pragma once
// IWYU pragma private; include "System/Diagnostics/Process.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Process)
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
namespace System::Diagnostics {
class AsyncStreamReader;
}
namespace System::Diagnostics {
class ProcessInfo;
}
namespace System::Diagnostics {
class ProcessModuleCollection;
}
namespace System::Diagnostics {
class ProcessStartInfo;
}
namespace System::Diagnostics {
class ProcessThreadCollection;
}
namespace System::Diagnostics {
class ProcessThreadTimes;
}
namespace System::Diagnostics {
struct Process_ProcInfo;
}
namespace System::Diagnostics {
struct Process_State;
}
namespace System::Diagnostics {
struct Process_StreamReadMode;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class EventHandler;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
struct Process_State;
}
namespace System::Diagnostics {
struct Process_StreamReadMode;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Diagnostics {
struct Process_ProcInfo;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::Process_State);
MARK_VAL_T(::System::Diagnostics::Process_StreamReadMode);
MARK_REF_PTR_T(::System::Diagnostics::Process);
MARK_VAL_T(::System::Diagnostics::Process_ProcInfo);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.Process/StreamReadMode
struct CORDL_TYPE Process_StreamReadMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Process_StreamReadMode_Unwrapped
  enum struct __Process_StreamReadMode_Unwrapped : int32_t {
    __E_undefined = static_cast<int32_t>(0x0),
    __E_syncMode = static_cast<int32_t>(0x1),
    __E_asyncMode = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Process_StreamReadMode_Unwrapped() const noexcept {
    return static_cast<__Process_StreamReadMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Process_StreamReadMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Process_StreamReadMode(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9264 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field asyncMode value: I32(2)
  static ::System::Diagnostics::Process_StreamReadMode const asyncMode;

  /// @brief Field syncMode value: I32(1)
  static ::System::Diagnostics::Process_StreamReadMode const syncMode;

  /// @brief Field undefined value: I32(0)
  static ::System::Diagnostics::Process_StreamReadMode const undefined;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Process_StreamReadMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Process_StreamReadMode, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.Process/State
struct CORDL_TYPE Process_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Process_State_Unwrapped
  enum struct __Process_State_Unwrapped : int32_t {
    __E_HaveId = static_cast<int32_t>(0x1),
    __E_IsLocal = static_cast<int32_t>(0x2),
    __E_IsNt = static_cast<int32_t>(0x4),
    __E_HaveProcessInfo = static_cast<int32_t>(0x8),
    __E_Exited = static_cast<int32_t>(0x10),
    __E_Associated = static_cast<int32_t>(0x20),
    __E_IsWin2k = static_cast<int32_t>(0x40),
    __E_HaveNtProcessInfo = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Process_State_Unwrapped() const noexcept {
    return static_cast<__Process_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Process_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Process_State(int32_t value__) noexcept;

  /// @brief Field Associated value: I32(32)
  static ::System::Diagnostics::Process_State const Associated;

  /// @brief Field Exited value: I32(16)
  static ::System::Diagnostics::Process_State const Exited;

  /// @brief Field HaveId value: I32(1)
  static ::System::Diagnostics::Process_State const HaveId;

  /// @brief Field HaveNtProcessInfo value: I32(12)
  static ::System::Diagnostics::Process_State const HaveNtProcessInfo;

  /// @brief Field HaveProcessInfo value: I32(8)
  static ::System::Diagnostics::Process_State const HaveProcessInfo;

  /// @brief Field IsLocal value: I32(2)
  static ::System::Diagnostics::Process_State const IsLocal;

  /// @brief Field IsNt value: I32(4)
  static ::System::Diagnostics::Process_State const IsNt;

  /// @brief Field IsWin2k value: I32(64)
  static ::System::Diagnostics::Process_State const IsWin2k;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Process_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Process_State, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Dependencies System.IntPtr
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.Process/ProcInfo
struct CORDL_TYPE Process_ProcInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Process_ProcInfo();

  // Ctor Parameters [CppParam { name: "process_handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "envVariables", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "Domain", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Password", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "LoadUserProfile", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr Process_ProcInfo(::System::IntPtr process_handle, int32_t pid, ::ArrayW<::StringW, ::Array<::StringW>*> envVariables, ::StringW UserName, ::StringW Domain, ::System::IntPtr Password,
                             bool LoadUserProfile) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9266 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field process_handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr process_handle;

  /// @brief Field pid, offset: 0x8, size: 0x4, def value: None
  int32_t pid;

  /// @brief Field envVariables, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> envVariables;

  /// @brief Field UserName, offset: 0x18, size: 0x8, def value: None
  ::StringW UserName;

  /// @brief Field Domain, offset: 0x20, size: 0x8, def value: None
  ::StringW Domain;

  /// @brief Field Password, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr Password;

  /// @brief Field LoadUserProfile, offset: 0x30, size: 0x1, def value: None
  bool LoadUserProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, process_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, pid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, envVariables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, UserName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, Domain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, Password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process_ProcInfo, LoadUserProfile) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Process_ProcInfo, 0x38>, "Size mismatch!");

} // namespace System::Diagnostics
// Dependencies System.ComponentModel.Component, System.Diagnostics.Process::StreamReadMode
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.Process
class CORDL_TYPE Process : public ::System::ComponentModel::Component {
public:
  // Declarations
  using ProcInfo = ::System::Diagnostics::Process_ProcInfo;

  using State = ::System::Diagnostics::Process_State;

  using StreamReadMode = ::System::Diagnostics::Process_StreamReadMode;

  __declspec(property(get = get_Associated)) bool Associated;

  __declspec(property(get = get_ExitCode)) int32_t ExitCode;

  __declspec(property(get = get_Handle)) ::System::IntPtr Handle;

  __declspec(property(get = get_HasExited)) bool HasExited;

  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_ProcessName)) ::StringW ProcessName;

  __declspec(property(get = get_StandardError)) ::System::IO::StreamReader* StandardError;

  __declspec(property(get = get_StandardOutput)) ::System::IO::StreamReader* StandardOutput;

  __declspec(property(get = get_StartInfo, put = set_StartInfo)) ::System::Diagnostics::ProcessStartInfo* StartInfo;

  __declspec(property(get = get_SynchronizingObject)) ::System::ComponentModel::ISynchronizeInvoke* SynchronizingObject;

  __declspec(property(get = get_TotalProcessorTime)) ::System::TimeSpan TotalProcessorTime;

  /// @brief Field disposed, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field error, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::System::Diagnostics::AsyncStreamReader* error;

  /// @brief Field errorStreamReadMode, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_errorStreamReadMode, put = __cordl_internal_set_errorStreamReadMode)) ::System::Diagnostics::Process_StreamReadMode errorStreamReadMode;

  /// @brief Field exitCode, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_exitCode, put = __cordl_internal_set_exitCode)) int32_t exitCode;

  /// @brief Field exited, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_exited, put = __cordl_internal_set_exited)) bool exited;

  /// @brief Field haveExitTime, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_haveExitTime, put = __cordl_internal_set_haveExitTime)) bool haveExitTime;

  /// @brief Field havePriorityClass, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_havePriorityClass, put = __cordl_internal_set_havePriorityClass)) bool havePriorityClass;

  /// @brief Field haveProcessHandle, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_haveProcessHandle, put = __cordl_internal_set_haveProcessHandle)) bool haveProcessHandle;

  /// @brief Field haveProcessId, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_haveProcessId, put = __cordl_internal_set_haveProcessId)) bool haveProcessId;

  /// @brief Field haveWorkingSetLimits, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_haveWorkingSetLimits, put = __cordl_internal_set_haveWorkingSetLimits)) bool haveWorkingSetLimits;

  /// @brief Field inputStreamReadMode, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_inputStreamReadMode, put = __cordl_internal_set_inputStreamReadMode)) ::System::Diagnostics::Process_StreamReadMode inputStreamReadMode;

  /// @brief Field isRemoteMachine, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isRemoteMachine, put = __cordl_internal_set_isRemoteMachine)) bool isRemoteMachine;

  /// @brief Field m_processAccess, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_processAccess, put = __cordl_internal_set_m_processAccess)) int32_t m_processAccess;

  /// @brief Field m_processHandle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_processHandle, put = __cordl_internal_set_m_processHandle)) ::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;

  /// @brief Field machineName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_machineName, put = __cordl_internal_set_machineName)) ::StringW machineName;

  /// @brief Field modules, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_modules, put = __cordl_internal_set_modules)) ::System::Diagnostics::ProcessModuleCollection* modules;

  /// @brief Field onExited, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_onExited, put = __cordl_internal_set_onExited)) ::System::EventHandler* onExited;

  /// @brief Field output, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_output, put = __cordl_internal_set_output)) ::System::Diagnostics::AsyncStreamReader* output;

  /// @brief Field outputStreamReadMode, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_outputStreamReadMode, put = __cordl_internal_set_outputStreamReadMode)) ::System::Diagnostics::Process_StreamReadMode outputStreamReadMode;

  /// @brief Field processId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_processId, put = __cordl_internal_set_processId)) int32_t processId;

  /// @brief Field process_name, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_process_name, put = __cordl_internal_set_process_name)) ::StringW process_name;

  /// @brief Field raisedOnExited, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_raisedOnExited, put = __cordl_internal_set_raisedOnExited)) bool raisedOnExited;

  /// @brief Field registeredWaitHandle, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredWaitHandle, put = __cordl_internal_set_registeredWaitHandle)) ::System::Threading::RegisteredWaitHandle* registeredWaitHandle;

  /// @brief Field signaled, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_signaled, put = __cordl_internal_set_signaled)) bool signaled;

  /// @brief Field standardError, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_standardError, put = __cordl_internal_set_standardError)) ::System::IO::StreamReader* standardError;

  /// @brief Field standardInput, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_standardInput, put = __cordl_internal_set_standardInput)) ::System::IO::StreamWriter* standardInput;

  /// @brief Field standardOutput, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_standardOutput, put = __cordl_internal_set_standardOutput)) ::System::IO::StreamReader* standardOutput;

  /// @brief Field startInfo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_startInfo, put = __cordl_internal_set_startInfo)) ::System::Diagnostics::ProcessStartInfo* startInfo;

  /// @brief Field synchronizingObject, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_synchronizingObject, put = __cordl_internal_set_synchronizingObject)) ::System::ComponentModel::ISynchronizeInvoke* synchronizingObject;

  /// @brief Field threads, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_threads, put = __cordl_internal_set_threads)) ::System::Diagnostics::ProcessThreadCollection* threads;

  /// @brief Field waitHandle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_waitHandle, put = __cordl_internal_set_waitHandle)) ::System::Threading::WaitHandle* waitHandle;

  /// @brief Field watchForExit, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_watchForExit, put = __cordl_internal_set_watchForExit)) bool watchForExit;

  /// @brief Field watchingForExit, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_watchingForExit, put = __cordl_internal_set_watchingForExit)) bool watchingForExit;

  /// @brief Method Close, addr 0x442dd88, size 0x158, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method CompletionCallback, addr 0x442dc10, size 0x18, virtual false, abstract: false, final false
  inline void CompletionCallback(::System::Object* context, bool wasSignaled);

  /// @brief Method CreatePipe, addr 0x44300b8, size 0x1b0, virtual false, abstract: false, final false
  static inline void CreatePipe(::ByRef<::System::IntPtr> read, ::ByRef<::System::IntPtr> write, bool writeDirection);

  /// @brief Method CreateProcess_internal, addr 0x442ff38, size 0x4, virtual false, abstract: false, final false
  static inline bool CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::System::IntPtr stdin, ::System::IntPtr stdout, ::System::IntPtr stderr,
                                            ::ByRef<::System::Diagnostics::Process_ProcInfo> procInfo);

  /// @brief Method Dispose, addr 0x442dd38, size 0x50, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureState, addr 0x442c9d4, size 0x128, virtual false, abstract: false, final false
  inline void EnsureState(::System::Diagnostics::Process_State state);

  /// @brief Method EnsureWatchingForExit, addr 0x442def4, size 0x20c, virtual false, abstract: false, final false
  inline void EnsureWatchingForExit();

  /// @brief Method FillUserInfo, addr 0x442ff90, size 0x128, virtual false, abstract: false, final false
  static inline void FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ::ByRef<::System::Diagnostics::Process_ProcInfo> procInfo);

  /// @brief Method GetCurrentProcess, addr 0x442a87c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::Process* GetCurrentProcess();

  /// @brief Method GetProcessById, addr 0x442e100, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::Process* GetProcessById(int32_t processId);

  /// @brief Method GetProcessById, addr 0x442e148, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::Process* GetProcessById(int32_t processId, ::StringW machineName);

  /// @brief Method GetProcessHandle, addr 0x442e518, size 0x8, virtual false, abstract: false, final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access);

  /// @brief Method GetProcessHandle, addr 0x442ce58, size 0x490, virtual false, abstract: false, final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access, bool throwIfExited);

  /// @brief Method GetProcessTimes, addr 0x442d41c, size 0x2b0, virtual false, abstract: false, final false
  inline ::System::Diagnostics::ProcessThreadTimes* GetProcessTimes();

  /// @brief Method GetProcess_internal, addr 0x442fea0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetProcess_internal(int32_t pid);

  /// @brief Method IsLocalMachine, addr 0x442fea4, size 0x90, virtual false, abstract: false, final false
  static inline bool IsLocalMachine(::StringW machineName);

  static inline ::System::Diagnostics::Process* New_ctor();

  static inline ::System::Diagnostics::Process* New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id);

  static inline ::System::Diagnostics::Process* New_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo);

  /// @brief Method OnExited, addr 0x442e2dc, size 0x23c, virtual false, abstract: false, final false
  inline void OnExited();

  /// @brief Method OpenProcessHandle, addr 0x442d704, size 0xb4, virtual false, abstract: false, final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle(int32_t access);

  /// @brief Method ProcessName_icall, addr 0x442fdac, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW ProcessName_icall(::System::IntPtr handle);

  /// @brief Method ProcessName_internal, addr 0x442fdb0, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);

  /// @brief Method RaiseOnExited, addr 0x442d340, size 0xdc, virtual false, abstract: false, final false
  inline void RaiseOnExited();

  /// @brief Method Refresh, addr 0x442dee0, size 0x14, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method ReleaseProcessHandle, addr 0x442dbe8, size 0x28, virtual false, abstract: false, final false
  inline void ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);

  /// @brief Method SetProcessHandle, addr 0x442e520, size 0x1c, virtual false, abstract: false, final false
  inline void SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle);

  /// @brief Method SetProcessId, addr 0x442e53c, size 0x10, virtual false, abstract: false, final false
  inline void SetProcessId(int32_t processId);

  /// @brief Method ShellExecuteEx_internal, addr 0x442ff34, size 0x4, virtual false, abstract: false, final false
  static inline bool ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::ByRef<::System::Diagnostics::Process_ProcInfo> procInfo);

  /// @brief Method Start, addr 0x442e54c, size 0xf4, virtual false, abstract: false, final false
  inline bool Start();

  /// @brief Method StartWithCreateProcess, addr 0x442ea04, size 0x11ac, virtual false, abstract: false, final false
  inline bool StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo);

  /// @brief Method StartWithShellExecuteEx, addr 0x442e694, size 0x370, virtual false, abstract: false, final false
  inline bool StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo);

  /// @brief Method StopWatchingForExit, addr 0x442dc28, size 0x110, virtual false, abstract: false, final false
  inline void StopWatchingForExit();

  /// @brief Method ToString, addr 0x442fbb0, size 0x16c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Diagnostics::AsyncStreamReader* const& __cordl_internal_get_error() const;

  constexpr ::System::Diagnostics::AsyncStreamReader*& __cordl_internal_get_error();

  constexpr ::System::Diagnostics::Process_StreamReadMode const& __cordl_internal_get_errorStreamReadMode() const;

  constexpr ::System::Diagnostics::Process_StreamReadMode& __cordl_internal_get_errorStreamReadMode();

  constexpr int32_t const& __cordl_internal_get_exitCode() const;

  constexpr int32_t& __cordl_internal_get_exitCode();

  constexpr bool const& __cordl_internal_get_exited() const;

  constexpr bool& __cordl_internal_get_exited();

  constexpr bool const& __cordl_internal_get_haveExitTime() const;

  constexpr bool& __cordl_internal_get_haveExitTime();

  constexpr bool const& __cordl_internal_get_havePriorityClass() const;

  constexpr bool& __cordl_internal_get_havePriorityClass();

  constexpr bool const& __cordl_internal_get_haveProcessHandle() const;

  constexpr bool& __cordl_internal_get_haveProcessHandle();

  constexpr bool const& __cordl_internal_get_haveProcessId() const;

  constexpr bool& __cordl_internal_get_haveProcessId();

  constexpr bool const& __cordl_internal_get_haveWorkingSetLimits() const;

  constexpr bool& __cordl_internal_get_haveWorkingSetLimits();

  constexpr ::System::Diagnostics::Process_StreamReadMode const& __cordl_internal_get_inputStreamReadMode() const;

  constexpr ::System::Diagnostics::Process_StreamReadMode& __cordl_internal_get_inputStreamReadMode();

  constexpr bool const& __cordl_internal_get_isRemoteMachine() const;

  constexpr bool& __cordl_internal_get_isRemoteMachine();

  constexpr int32_t const& __cordl_internal_get_m_processAccess() const;

  constexpr int32_t& __cordl_internal_get_m_processAccess();

  constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle* const& __cordl_internal_get_m_processHandle() const;

  constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& __cordl_internal_get_m_processHandle();

  constexpr ::StringW const& __cordl_internal_get_machineName() const;

  constexpr ::StringW& __cordl_internal_get_machineName();

  constexpr ::System::Diagnostics::ProcessModuleCollection* const& __cordl_internal_get_modules() const;

  constexpr ::System::Diagnostics::ProcessModuleCollection*& __cordl_internal_get_modules();

  constexpr ::System::EventHandler* const& __cordl_internal_get_onExited() const;

  constexpr ::System::EventHandler*& __cordl_internal_get_onExited();

  constexpr ::System::Diagnostics::AsyncStreamReader* const& __cordl_internal_get_output() const;

  constexpr ::System::Diagnostics::AsyncStreamReader*& __cordl_internal_get_output();

  constexpr ::System::Diagnostics::Process_StreamReadMode const& __cordl_internal_get_outputStreamReadMode() const;

  constexpr ::System::Diagnostics::Process_StreamReadMode& __cordl_internal_get_outputStreamReadMode();

  constexpr int32_t const& __cordl_internal_get_processId() const;

  constexpr int32_t& __cordl_internal_get_processId();

  constexpr ::StringW const& __cordl_internal_get_process_name() const;

  constexpr ::StringW& __cordl_internal_get_process_name();

  constexpr bool const& __cordl_internal_get_raisedOnExited() const;

  constexpr bool& __cordl_internal_get_raisedOnExited();

  constexpr ::System::Threading::RegisteredWaitHandle* const& __cordl_internal_get_registeredWaitHandle() const;

  constexpr ::System::Threading::RegisteredWaitHandle*& __cordl_internal_get_registeredWaitHandle();

  constexpr bool const& __cordl_internal_get_signaled() const;

  constexpr bool& __cordl_internal_get_signaled();

  constexpr ::System::IO::StreamReader* const& __cordl_internal_get_standardError() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_standardError();

  constexpr ::System::IO::StreamWriter* const& __cordl_internal_get_standardInput() const;

  constexpr ::System::IO::StreamWriter*& __cordl_internal_get_standardInput();

  constexpr ::System::IO::StreamReader* const& __cordl_internal_get_standardOutput() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_standardOutput();

  constexpr ::System::Diagnostics::ProcessStartInfo* const& __cordl_internal_get_startInfo() const;

  constexpr ::System::Diagnostics::ProcessStartInfo*& __cordl_internal_get_startInfo();

  constexpr ::System::ComponentModel::ISynchronizeInvoke* const& __cordl_internal_get_synchronizingObject() const;

  constexpr ::System::ComponentModel::ISynchronizeInvoke*& __cordl_internal_get_synchronizingObject();

  constexpr ::System::Diagnostics::ProcessThreadCollection* const& __cordl_internal_get_threads() const;

  constexpr ::System::Diagnostics::ProcessThreadCollection*& __cordl_internal_get_threads();

  constexpr ::System::Threading::WaitHandle* const& __cordl_internal_get_waitHandle() const;

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get_waitHandle();

  constexpr bool const& __cordl_internal_get_watchForExit() const;

  constexpr bool& __cordl_internal_get_watchForExit();

  constexpr bool const& __cordl_internal_get_watchingForExit() const;

  constexpr bool& __cordl_internal_get_watchingForExit();

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_error(::System::Diagnostics::AsyncStreamReader* value);

  constexpr void __cordl_internal_set_errorStreamReadMode(::System::Diagnostics::Process_StreamReadMode value);

  constexpr void __cordl_internal_set_exitCode(int32_t value);

  constexpr void __cordl_internal_set_exited(bool value);

  constexpr void __cordl_internal_set_haveExitTime(bool value);

  constexpr void __cordl_internal_set_havePriorityClass(bool value);

  constexpr void __cordl_internal_set_haveProcessHandle(bool value);

  constexpr void __cordl_internal_set_haveProcessId(bool value);

  constexpr void __cordl_internal_set_haveWorkingSetLimits(bool value);

  constexpr void __cordl_internal_set_inputStreamReadMode(::System::Diagnostics::Process_StreamReadMode value);

  constexpr void __cordl_internal_set_isRemoteMachine(bool value);

  constexpr void __cordl_internal_set_m_processAccess(int32_t value);

  constexpr void __cordl_internal_set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value);

  constexpr void __cordl_internal_set_machineName(::StringW value);

  constexpr void __cordl_internal_set_modules(::System::Diagnostics::ProcessModuleCollection* value);

  constexpr void __cordl_internal_set_onExited(::System::EventHandler* value);

  constexpr void __cordl_internal_set_output(::System::Diagnostics::AsyncStreamReader* value);

  constexpr void __cordl_internal_set_outputStreamReadMode(::System::Diagnostics::Process_StreamReadMode value);

  constexpr void __cordl_internal_set_processId(int32_t value);

  constexpr void __cordl_internal_set_process_name(::StringW value);

  constexpr void __cordl_internal_set_raisedOnExited(bool value);

  constexpr void __cordl_internal_set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle* value);

  constexpr void __cordl_internal_set_signaled(bool value);

  constexpr void __cordl_internal_set_standardError(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set_standardInput(::System::IO::StreamWriter* value);

  constexpr void __cordl_internal_set_standardOutput(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set_startInfo(::System::Diagnostics::ProcessStartInfo* value);

  constexpr void __cordl_internal_set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value);

  constexpr void __cordl_internal_set_threads(::System::Diagnostics::ProcessThreadCollection* value);

  constexpr void __cordl_internal_set_waitHandle(::System::Threading::WaitHandle* value);

  constexpr void __cordl_internal_set_watchForExit(bool value);

  constexpr void __cordl_internal_set_watchingForExit(bool value);

  /// @brief Method .ctor, addr 0x442c764, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x442fd1c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id);

  /// @brief Method .ctor, addr 0x442c7ec, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo);

  /// @brief Method get_Associated, addr 0x442c88c, size 0x20, virtual false, abstract: false, final false
  inline bool get_Associated();

  /// @brief Method get_ExitCode, addr 0x442c8ac, size 0x128, virtual false, abstract: false, final false
  inline int32_t get_ExitCode();

  /// @brief Method get_Handle, addr 0x442d6d4, size 0x30, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Handle();

  /// @brief Method get_HasExited, addr 0x442cafc, size 0x35c, virtual false, abstract: false, final false
  inline bool get_HasExited();

  /// @brief Method get_Id, addr 0x442a8fc, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_IsWindows, addr 0x4430268, size 0x34, virtual false, abstract: false, final false
  static inline bool get_IsWindows();

  /// @brief Method get_ProcessName, addr 0x442a918, size 0x220, virtual false, abstract: false, final false
  inline ::StringW get_ProcessName();

  /// @brief Method get_StandardError, addr 0x442db54, size 0x94, virtual false, abstract: false, final false
  inline ::System::IO::StreamReader* get_StandardError();

  /// @brief Method get_StandardOutput, addr 0x442dac0, size 0x94, virtual false, abstract: false, final false
  inline ::System::IO::StreamReader* get_StandardOutput();

  /// @brief Method get_StartInfo, addr 0x442d7b8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Diagnostics::ProcessStartInfo* get_StartInfo();

  /// @brief Method get_SynchronizingObject, addr 0x442d8f4, size 0x1a0, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject();

  /// @brief Method get_TotalProcessorTime, addr 0x442da94, size 0x20, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_TotalProcessorTime();

  /// @brief Method set_StartInfo, addr 0x442d898, size 0x5c, virtual false, abstract: false, final false
  inline void set_StartInfo(::System::Diagnostics::ProcessStartInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Process();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Process(Process&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Process(Process const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9267 };

  /// @brief Field haveProcessId, offset: 0x28, size: 0x1, def value: None
  bool ___haveProcessId;

  /// @brief Field processId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___processId;

  /// @brief Field haveProcessHandle, offset: 0x30, size: 0x1, def value: None
  bool ___haveProcessHandle;

  /// @brief Field m_processHandle, offset: 0x38, size: 0x8, def value: None
  ::Microsoft::Win32::SafeHandles::SafeProcessHandle* ___m_processHandle;

  /// @brief Field isRemoteMachine, offset: 0x40, size: 0x1, def value: None
  bool ___isRemoteMachine;

  /// @brief Field machineName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___machineName;

  /// @brief Field m_processAccess, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_processAccess;

  /// @brief Field threads, offset: 0x58, size: 0x8, def value: None
  ::System::Diagnostics::ProcessThreadCollection* ___threads;

  /// @brief Field modules, offset: 0x60, size: 0x8, def value: None
  ::System::Diagnostics::ProcessModuleCollection* ___modules;

  /// @brief Field haveWorkingSetLimits, offset: 0x68, size: 0x1, def value: None
  bool ___haveWorkingSetLimits;

  /// @brief Field havePriorityClass, offset: 0x69, size: 0x1, def value: None
  bool ___havePriorityClass;

  /// @brief Field startInfo, offset: 0x70, size: 0x8, def value: None
  ::System::Diagnostics::ProcessStartInfo* ___startInfo;

  /// @brief Field watchForExit, offset: 0x78, size: 0x1, def value: None
  bool ___watchForExit;

  /// @brief Field watchingForExit, offset: 0x79, size: 0x1, def value: None
  bool ___watchingForExit;

  /// @brief Field onExited, offset: 0x80, size: 0x8, def value: None
  ::System::EventHandler* ___onExited;

  /// @brief Field exited, offset: 0x88, size: 0x1, def value: None
  bool ___exited;

  /// @brief Field exitCode, offset: 0x8c, size: 0x4, def value: None
  int32_t ___exitCode;

  /// @brief Field signaled, offset: 0x90, size: 0x1, def value: None
  bool ___signaled;

  /// @brief Field haveExitTime, offset: 0x91, size: 0x1, def value: None
  bool ___haveExitTime;

  /// @brief Field raisedOnExited, offset: 0x92, size: 0x1, def value: None
  bool ___raisedOnExited;

  /// @brief Field registeredWaitHandle, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::RegisteredWaitHandle* ___registeredWaitHandle;

  /// @brief Field waitHandle, offset: 0xa0, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ___waitHandle;

  /// @brief Field synchronizingObject, offset: 0xa8, size: 0x8, def value: None
  ::System::ComponentModel::ISynchronizeInvoke* ___synchronizingObject;

  /// @brief Field standardOutput, offset: 0xb0, size: 0x8, def value: None
  ::System::IO::StreamReader* ___standardOutput;

  /// @brief Field standardInput, offset: 0xb8, size: 0x8, def value: None
  ::System::IO::StreamWriter* ___standardInput;

  /// @brief Field standardError, offset: 0xc0, size: 0x8, def value: None
  ::System::IO::StreamReader* ___standardError;

  /// @brief Field disposed, offset: 0xc8, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field outputStreamReadMode, offset: 0xcc, size: 0x4, def value: None
  ::System::Diagnostics::Process_StreamReadMode ___outputStreamReadMode;

  /// @brief Field errorStreamReadMode, offset: 0xd0, size: 0x4, def value: None
  ::System::Diagnostics::Process_StreamReadMode ___errorStreamReadMode;

  /// @brief Field inputStreamReadMode, offset: 0xd4, size: 0x4, def value: None
  ::System::Diagnostics::Process_StreamReadMode ___inputStreamReadMode;

  /// @brief Field output, offset: 0xd8, size: 0x8, def value: None
  ::System::Diagnostics::AsyncStreamReader* ___output;

  /// @brief Field error, offset: 0xe0, size: 0x8, def value: None
  ::System::Diagnostics::AsyncStreamReader* ___error;

  /// @brief Field process_name, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___process_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Process, ___haveProcessId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___processId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___haveProcessHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___m_processHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___isRemoteMachine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___machineName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___m_processAccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___threads) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___modules) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___haveWorkingSetLimits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___havePriorityClass) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___startInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___watchForExit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___watchingForExit) == 0x79, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___onExited) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___exited) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___exitCode) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___signaled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___haveExitTime) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___raisedOnExited) == 0x92, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___registeredWaitHandle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___waitHandle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___synchronizingObject) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___standardOutput) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___standardInput) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___standardError) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___disposed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___outputStreamReadMode) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___errorStreamReadMode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___inputStreamReadMode) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___output) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___error) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Process, ___process_name) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Process, 0xf0>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Process_State, "System.Diagnostics", "Process/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Process_StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
NEED_NO_BOX(::System::Diagnostics::Process);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Process*, "System.Diagnostics", "Process");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Process_ProcInfo, "System.Diagnostics", "Process/ProcInfo");
