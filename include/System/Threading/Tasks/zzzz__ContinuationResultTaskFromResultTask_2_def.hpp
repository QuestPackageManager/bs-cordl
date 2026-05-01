#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationResultTaskFromResultTask_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
CORDL_MODULE_EXPORT(ContinuationResultTaskFromResultTask_2)
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename TAntecedentResult, typename TResult> class ContinuationResultTaskFromResultTask_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2);
// Dependencies System.Threading.Tasks.Task`1<TResult>
namespace System::Threading::Tasks {
// cpp template
template <typename TAntecedentResult, typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<TAntecedentResult,TResult>
class CORDL_TYPE ContinuationResultTaskFromResultTask_2 : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  /// @brief Field m_antecedent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_antecedent, put = __cordl_internal_set_m_antecedent)) ::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;

  /// @brief Method InnerInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InnerInvoke();

  static inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent,
                                                                                                                         ::System::Delegate* function, ::System::Object* state,
                                                                                                                         ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                                         ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* const& __cordl_internal_get_m_antecedent() const;

  constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& __cordl_internal_get_m_antecedent();

  constexpr void __cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* function, ::System::Object* state,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuationResultTaskFromResultTask_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2816 };

  /// @brief Field m_antecedent, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TAntecedentResult>* ___m_antecedent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
