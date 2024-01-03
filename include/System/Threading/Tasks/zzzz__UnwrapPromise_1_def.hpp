#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnwrapPromise_1)
namespace System::Threading::Tasks {
template <typename TResult> class __UnwrapPromise_1____c;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace System::Threading {
class WaitCallback;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename TResult> class UnwrapPromise_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class __UnwrapPromise_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::UnwrapPromise_1);
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__UnwrapPromise_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2796))
// CS Name: ::UnwrapPromise`1::<>c<TResult>*
class CORDL_TYPE __UnwrapPromise_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Threading::WaitCallback* __9__8_0;

  static inline void setStaticF___9(::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* value);

  static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF___9__8_0();

  static inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InvokeCoreAsync>b__8_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InvokeCoreAsync_b__8_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnwrapPromise_1____c(__UnwrapPromise_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnwrapPromise_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnwrapPromise_1____c(__UnwrapPromise_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnwrapPromise_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::UnwrapPromise`1
// SizeInfo { instance_size: 96, native_size: 90, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5111 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2797))
// CS Name: ::System.Threading.Tasks::UnwrapPromise`1<TResult>*
class CORDL_TYPE UnwrapPromise_1 : public ::System::Threading::Tasks::Task_1<TResult> {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>;

  /// @brief Field _state, offset 0x58, size 0x1
  __declspec(property(get = __get__state, put = __set__state)) uint8_t _state;

  /// @brief Field _lookForOce, offset 0x59, size 0x1
  __declspec(property(get = __get__lookForOce, put = __set__lookForOce)) bool _lookForOce;

  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  constexpr uint8_t& __get__state();

  constexpr uint8_t const& __get__state() const;

  constexpr void __set__state(uint8_t value);

  constexpr bool& __get__lookForOce();

  constexpr bool const& __get__lookForOce() const;

  constexpr void __set__lookForOce(bool value);

  static inline ::System::Threading::Tasks::UnwrapPromise_1<TResult>* New_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method InvokeCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeCore(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method InvokeCoreAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InvokeCoreAsync(::System::Threading::Tasks::Task* completingTask);

  /// @brief Method ProcessCompletedOuterTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessCompletedOuterTask(::System::Threading::Tasks::Task* task);

  /// @brief Method TrySetFromTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetFromTask(::System::Threading::Tasks::Task* task, bool lookForOce);

  /// @brief Method ProcessInnerTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessInnerTask(::System::Threading::Tasks::Task* task);

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  // Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnwrapPromise_1(UnwrapPromise_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnwrapPromise_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnwrapPromise_1(UnwrapPromise_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnwrapPromise_1();

public:
  /// @brief Field _state, offset: 0x58, size: 0x1, def value: None
  uint8_t ____state;

  /// @brief Field _lookForOce, offset: 0x59, size: 0x1, def value: None
  bool ____lookForOce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::UnwrapPromise_1, "System.Threading.Tasks", "UnwrapPromise`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__UnwrapPromise_1____c, "System.Threading.Tasks", "UnwrapPromise`1/<>c");
