#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthCheckService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HealthCheckService)
namespace System::Net {
class HttpListener;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthCheckService;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthCheckService);
// Dependencies IHealthCheckService, IPollable, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthCheckService
class CORDL_TYPE HealthCheckService : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _listener, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__listener, put = __cordl_internal_set__listener)) ::System::Net::HttpListener* _listener;

  /// @brief Field _manualResetEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__manualResetEvent, put = __cordl_internal_set__manualResetEvent)) ::System::Threading::ManualResetEvent* _manualResetEvent;

  /// @brief Field _port, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__port, put = __cordl_internal_set__port)) int32_t _port;

  /// @brief Field _runThread, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__runThread, put = __cordl_internal_set__runThread)) ::System::Threading::Thread* _runThread;

  /// @brief Convert operator to "::GlobalNamespace::IHealthCheckService"
  constexpr operator ::GlobalNamespace::IHealthCheckService*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x22d015c, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::HealthCheckService* New_ctor(int32_t port);

  /// @brief Method PollUpdate, addr 0x22d0200, size 0x94, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method Run, addr 0x22d0294, size 0x4a0, virtual false, abstract: false, final false
  inline void Run();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Net::HttpListener* const& __cordl_internal_get__listener() const;

  constexpr ::System::Net::HttpListener*& __cordl_internal_get__listener();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get__manualResetEvent() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__manualResetEvent();

  constexpr int32_t const& __cordl_internal_get__port() const;

  constexpr int32_t& __cordl_internal_get__port();

  constexpr ::System::Threading::Thread* const& __cordl_internal_get__runThread() const;

  constexpr ::System::Threading::Thread*& __cordl_internal_get__runThread();

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__listener(::System::Net::HttpListener* value);

  constexpr void __cordl_internal_set__manualResetEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set__port(int32_t value);

  constexpr void __cordl_internal_set__runThread(::System::Threading::Thread* value);

  /// @brief Method .ctor, addr 0x22d0068, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(int32_t port);

  /// @brief Convert to "::GlobalNamespace::IHealthCheckService"
  constexpr ::GlobalNamespace::IHealthCheckService* i___GlobalNamespace__IHealthCheckService() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthCheckService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthCheckService(HealthCheckService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthCheckService(HealthCheckService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14778 };

  /// @brief Field kTimeoutLengthMs offset 0xffffffff size 0x4
  static constexpr int32_t kTimeoutLengthMs{ static_cast<int32_t>(0x3e8) };

  /// @brief Field _port, offset: 0x10, size: 0x4, def value: None
  int32_t ____port;

  /// @brief Field _runThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____runThread;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _manualResetEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____manualResetEvent;

  /// @brief Field _listener, offset: 0x30, size: 0x8, def value: None
  ::System::Net::HttpListener* ____listener;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthCheckService, ____port) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthCheckService, ____runThread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthCheckService, ____disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthCheckService, ____manualResetEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthCheckService, ____listener) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthCheckService, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthCheckService*, "", "HealthCheckService");
