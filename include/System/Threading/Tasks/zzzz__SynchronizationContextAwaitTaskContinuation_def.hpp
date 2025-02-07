#pragma once
// IWYU pragma private; include "System/Threading/Tasks/SynchronizationContextAwaitTaskContinuation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SynchronizationContextAwaitTaskContinuation)
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation___c;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
class CORDL_TYPE SynchronizationContextAwaitTaskContinuation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* __9;

  static inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* New_ctor();

  /// @brief Method <.cctor>b__7_0, addr 0x3e6e7b4, size 0x6c, virtual false, abstract: false, final false
  inline void __cctor_b__7_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x3e6e7ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContextAwaitTaskContinuation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContextAwaitTaskContinuation___c(SynchronizationContextAwaitTaskContinuation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContextAwaitTaskContinuation___c(SynchronizationContextAwaitTaskContinuation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2806 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Threading.Tasks.AwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
class CORDL_TYPE SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c;

  /// @brief Field m_syncContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_syncContext, put = __cordl_internal_set_m_syncContext)) ::System::Threading::SynchronizationContext* m_syncContext;

  /// @brief Field s_postActionCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_postActionCallback, put = setStaticF_s_postActionCallback)) ::System::Threading::ContextCallback* s_postActionCallback;

  /// @brief Field s_postCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_postCallback, put = setStaticF_s_postCallback)) ::System::Threading::SendOrPostCallback* s_postCallback;

  /// @brief Method GetPostActionCallback, addr 0x3e6e5cc, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Threading::ContextCallback* GetPostActionCallback();

  static inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation* New_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action,
                                                                                                  bool flowExecutionContext);

  /// @brief Method PostAction, addr 0x3e6e538, size 0x94, virtual false, abstract: false, final false
  static inline void PostAction(::System::Object* state);

  /// @brief Method Run, addr 0x3e6e260, size 0x164, virtual true, abstract: false, final true
  inline void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);

  constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get_m_syncContext() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_m_syncContext();

  constexpr void __cordl_internal_set_m_syncContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0x3e69330, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext);

  static inline ::System::Threading::ContextCallback* getStaticF_s_postActionCallback();

  static inline ::System::Threading::SendOrPostCallback* getStaticF_s_postCallback();

  static inline void setStaticF_s_postActionCallback(::System::Threading::ContextCallback* value);

  static inline void setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContextAwaitTaskContinuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2807 };

  /// @brief Field m_syncContext, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ___m_syncContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, ___m_syncContext) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
