#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
CORDL_MODULE_EXPORT(ContinuationResultTaskFromResultTask_2)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename TAntecedentResult, typename TResult> class ContinuationResultTaskFromResultTask_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2);
// Type: System.Threading.Tasks::ContinuationResultTaskFromResultTask`2
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TAntecedentResult, typename TResult>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5126 }), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2800))
// CS Name: ::System.Threading.Tasks::ContinuationResultTaskFromResultTask`2<TAntecedentResult,TResult>*
class CORDL_TYPE ContinuationResultTaskFromResultTask_2 : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  /// @brief Field m_antecedent, offset 0x58, size 0x8
  __declspec(property(get = __get_m_antecedent, put = __set_m_antecedent))::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;

  constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& __get_m_antecedent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> const& __get_m_antecedent() const;

  constexpr void __set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value);

  static inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent,
                                                                                                                         ::System::Delegate* function, ::System::Object* state,
                                                                                                                         ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                                         ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* function, ::System::Object* state,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void InnerInvoke();

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationResultTaskFromResultTask_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuationResultTaskFromResultTask_2(ContinuationResultTaskFromResultTask_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuationResultTaskFromResultTask_2();

public:
  /// @brief Field m_antecedent, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TAntecedentResult>* ___m_antecedent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
