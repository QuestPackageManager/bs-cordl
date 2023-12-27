#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SynchronizedActionQueue)
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __SynchronizedActionQueue__SynchronizedAction;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SynchronizedActionQueue;
}
namespace GlobalNamespace {
struct __SynchronizedActionQueue__SynchronizedAction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SynchronizedActionQueue);
MARK_VAL_T(::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction);
// Type: ::SynchronizedAction
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12968))
// CS Name: ::SynchronizedActionQueue::SynchronizedAction
struct CORDL_TYPE __SynchronizedActionQueue__SynchronizedAction {
public:
  // Declarations
  /// @brief Method .ctor addr 0xe59548 size 0xc virtual false final false
  inline void _ctor(float_t time, ::System::Action* action);

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }]
  constexpr __SynchronizedActionQueue__SynchronizedAction(float_t time, ::System::Action* action) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SynchronizedActionQueue__SynchronizedAction();

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field action, offset: 0x8, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SynchronizedActionQueue
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12969))
// CS Name: ::SynchronizedActionQueue*
class CORDL_TYPE SynchronizedActionQueue : public ::System::Object {
public:
  // Declarations
  using SynchronizedAction = ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction;

  /// @brief Field _synchronizedActionQueue, offset 0x10, size 0x8
  __declspec(property(get = __get__synchronizedActionQueue,
                      put = __set__synchronizedActionQueue))::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>* _synchronizedActionQueue;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*& __get__synchronizedActionQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*> const&
  __get__synchronizedActionQueue() const;

  constexpr void __set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>* value);

  /// @brief Method Clear addr 0xe5941c size 0x70 virtual false final false
  inline void Clear();

  /// @brief Method EnqueueAction addr 0xe5948c size 0xbc virtual false final false
  inline void EnqueueAction(float_t time, ::System::Action* action);

  /// @brief Method Update addr 0xe59554 size 0x114 virtual false final false
  inline void Update(float_t time);

  static inline ::GlobalNamespace::SynchronizedActionQueue* New_ctor();

  /// @brief Method .ctor addr 0xe59668 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizedActionQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizedActionQueue(SynchronizedActionQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizedActionQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizedActionQueue(SynchronizedActionQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizedActionQueue();

public:
  /// @brief Field _synchronizedActionQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>* ____synchronizedActionQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SynchronizedActionQueue, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SynchronizedActionQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SynchronizedActionQueue*, "", "SynchronizedActionQueue");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction, "", "SynchronizedActionQueue/SynchronizedAction");
