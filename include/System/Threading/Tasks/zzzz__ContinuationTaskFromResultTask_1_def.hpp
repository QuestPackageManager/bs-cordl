#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
CORDL_MODULE_EXPORT(ContinuationTaskFromResultTask_1)
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
template <typename TAntecedentResult> class ContinuationTaskFromResultTask_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::ContinuationTaskFromResultTask_1);
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TAntecedentResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2787))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2799))
// CS Name: ::System.Threading.Tasks::ContinuationTaskFromResultTask`1<TAntecedentResult>*
class CORDL_TYPE ContinuationTaskFromResultTask_1 : public ::System::Threading::Tasks::Task {
public:
  // Declarations
  /// @brief Field m_antecedent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_antecedent, put = __cordl_internal_set_m_antecedent))::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;

  constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& __cordl_internal_get_m_antecedent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> const& __cordl_internal_get_m_antecedent() const;

  constexpr void __cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value);

  static inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>* New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                                          ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                          ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action, ::System::Object* state,
                    ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions);

  /// @brief Method InnerInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InnerInvoke();

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuationTaskFromResultTask_1();

public:
  /// @brief Field m_antecedent, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TAntecedentResult>* ___m_antecedent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::ContinuationTaskFromResultTask_1, "System.Threading.Tasks", "ContinuationTaskFromResultTask`1");
