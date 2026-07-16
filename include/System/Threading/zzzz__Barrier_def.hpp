#pragma once
// IWYU pragma private; include "System/Threading/Barrier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Barrier)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class ManualResetEventSlim;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Barrier;
}
// Write type traits
MARK_REF_T(::System::Threading::Barrier*);
DEFINE_IL2CPP_CLASS(::System::Threading::Barrier*, "System.Threading", "Barrier");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Barrier
class CORDL_TYPE Barrier : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentPhaseNumber, put = set_CurrentPhaseNumber)) int64_t CurrentPhaseNumber;

  /// @brief Field m_actionCallerID, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_actionCallerID, put = __cordl_internal_set_m_actionCallerID)) int32_t m_actionCallerID;

  /// @brief Field m_currentPhase, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_currentPhase, put = __cordl_internal_set_m_currentPhase)) int64_t m_currentPhase;

  /// @brief Field m_currentTotalCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentTotalCount, put = __cordl_internal_set_m_currentTotalCount)) int32_t m_currentTotalCount;

  /// @brief Field m_disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field m_evenEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_evenEvent, put = __cordl_internal_set_m_evenEvent)) ::System::Threading::ManualResetEventSlim* m_evenEvent;

  /// @brief Field m_exception, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_exception, put = __cordl_internal_set_m_exception)) ::System::Exception* m_exception;

  /// @brief Field m_oddEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_oddEvent, put = __cordl_internal_set_m_oddEvent)) ::System::Threading::ManualResetEventSlim* m_oddEvent;

  /// @brief Field m_ownerThreadContext, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ownerThreadContext, put = __cordl_internal_set_m_ownerThreadContext)) ::System::Threading::ExecutionContext* m_ownerThreadContext;

  /// @brief Field m_postPhaseAction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_postPhaseAction, put = __cordl_internal_set_m_postPhaseAction)) ::System::Action_1<::System::Threading::Barrier*>* m_postPhaseAction;

  /// @brief Field s_invokePostPhaseAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invokePostPhaseAction, put = setStaticF_s_invokePostPhaseAction)) ::System::Threading::ContextCallback* s_invokePostPhaseAction;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method DiscontinuousWait, addr 0x6376524, size 0x13c, virtual false, abstract: false, final false
  inline bool DiscontinuousWait(::System::Threading::ManualResetEventSlim* currentPhaseEvent, int32_t totalTimeout, ::System::Threading::CancellationToken token, int64_t observedPhase);

  /// @brief Method Dispose, addr 0x6376814, size 0xe4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x63768f8, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FinishPhase, addr 0x6376230, size 0x2f4, virtual false, abstract: false, final false
  inline void FinishPhase(bool observedSense);

  /// @brief Method GetCurrentTotal, addr 0x6375c80, size 0x20, virtual false, abstract: false, final false
  inline void GetCurrentTotal(int32_t currentTotal, ::by_ref<int32_t> current, ::by_ref<int32_t> total, ::by_ref<bool> sense);

  /// @brief Method InvokePostPhaseAction, addr 0x637677c, size 0x98, virtual false, abstract: false, final false
  static inline void InvokePostPhaseAction(::System::Object* obj);

  static inline ::System::Threading::Barrier* New_ctor(int32_t participantCount);

  static inline ::System::Threading::Barrier* New_ctor(int32_t participantCount, ::System::Action_1<::System::Threading::Barrier*>* postPhaseAction);

  /// @brief Method SetCurrentTotal, addr 0x6375ca0, size 0x3c, virtual false, abstract: false, final false
  inline bool SetCurrentTotal(int32_t currentTotal, int32_t current, int32_t total, bool sense);

  /// @brief Method SetResetEvents, addr 0x6376718, size 0x64, virtual false, abstract: false, final false
  inline void SetResetEvents(bool observedSense);

  /// @brief Method SignalAndWait, addr 0x6375cf4, size 0x4cc, virtual false, abstract: false, final false
  inline bool SignalAndWait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SignalAndWait, addr 0x6375cdc, size 0xc, virtual false, abstract: false, final false
  inline void SignalAndWait();

  /// @brief Method SignalAndWait, addr 0x6375ce8, size 0xc, virtual false, abstract: false, final false
  inline void SignalAndWait(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ThrowIfDisposed, addr 0x63761c0, size 0x70, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  /// @brief Method WaitCurrentPhase, addr 0x6376660, size 0xb8, virtual false, abstract: false, final false
  inline void WaitCurrentPhase(::System::Threading::ManualResetEventSlim* currentPhaseEvent, int64_t observedPhase);

  constexpr int32_t const& __cordl_internal_get_m_actionCallerID() const;

  constexpr int32_t& __cordl_internal_get_m_actionCallerID();

  constexpr int64_t const& __cordl_internal_get_m_currentPhase() const;

  constexpr int64_t& __cordl_internal_get_m_currentPhase();

  constexpr int32_t const& __cordl_internal_get_m_currentTotalCount() const;

  constexpr int32_t& __cordl_internal_get_m_currentTotalCount();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_m_evenEvent() const;

  constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_m_evenEvent();

  constexpr ::System::Exception* const& __cordl_internal_get_m_exception() const;

  constexpr ::System::Exception*& __cordl_internal_get_m_exception();

  constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_m_oddEvent() const;

  constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_m_oddEvent();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_ownerThreadContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_ownerThreadContext();

  constexpr ::System::Action_1<::System::Threading::Barrier*>* const& __cordl_internal_get_m_postPhaseAction() const;

  constexpr ::System::Action_1<::System::Threading::Barrier*>*& __cordl_internal_get_m_postPhaseAction();

  constexpr void __cordl_internal_set_m_actionCallerID(int32_t value);

  constexpr void __cordl_internal_set_m_currentPhase(int64_t value);

  constexpr void __cordl_internal_set_m_currentTotalCount(int32_t value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_m_evenEvent(::System::Threading::ManualResetEventSlim* value);

  constexpr void __cordl_internal_set_m_exception(::System::Exception* value);

  constexpr void __cordl_internal_set_m_oddEvent(::System::Threading::ManualResetEventSlim* value);

  constexpr void __cordl_internal_set_m_ownerThreadContext(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_postPhaseAction(::System::Action_1<::System::Threading::Barrier*>* value);

  /// @brief Method .ctor, addr 0x6375b00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t participantCount);

  /// @brief Method .ctor, addr 0x6375b08, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(int32_t participantCount, ::System::Action_1<::System::Threading::Barrier*>* postPhaseAction);

  static inline ::System::Threading::ContextCallback* getStaticF_s_invokePostPhaseAction();

  /// @brief Method get_CurrentPhaseNumber, addr 0x6375ae8, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_CurrentPhaseNumber();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_invokePostPhaseAction(::System::Threading::ContextCallback* value);

  /// @brief Method set_CurrentPhaseNumber, addr 0x6375af4, size 0xc, virtual false, abstract: false, final false
  inline void set_CurrentPhaseNumber(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Barrier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Barrier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Barrier(Barrier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Barrier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Barrier(Barrier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11065 };

  /// @brief Field m_currentTotalCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_currentTotalCount;

  /// @brief Field m_currentPhase, offset: 0x18, size: 0x8, def value: None
  int64_t ___m_currentPhase;

  /// @brief Field m_disposed, offset: 0x20, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field m_oddEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEventSlim* ___m_oddEvent;

  /// @brief Field m_evenEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::ManualResetEventSlim* ___m_evenEvent;

  /// @brief Field m_ownerThreadContext, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_ownerThreadContext;

  /// @brief Field m_postPhaseAction, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::System::Threading::Barrier*>* ___m_postPhaseAction;

  /// @brief Field m_exception, offset: 0x48, size: 0x8, def value: None
  ::System::Exception* ___m_exception;

  /// @brief Field m_actionCallerID, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_actionCallerID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Barrier, ___m_currentTotalCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_currentPhase) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_oddEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_evenEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_ownerThreadContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_postPhaseAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_exception) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Barrier, ___m_actionCallerID) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Threading::Barrier) == 0x58, "Size mismatch!");

} // namespace System::Threading
