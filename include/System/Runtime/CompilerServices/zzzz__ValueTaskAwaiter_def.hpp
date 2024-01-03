#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTaskAwaiter)
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class __ValueTaskAwaiter____c;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class __ValueTaskAwaiter____c;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c);
MARK_VAL_T(::System::Runtime::CompilerServices::ValueTaskAwaiter);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3389))
// CS Name: ::ValueTaskAwaiter::<>c*
class CORDL_TYPE __ValueTaskAwaiter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* __9;

  static inline void setStaticF___9(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* value);

  static inline ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* getStaticF___9();

  static inline ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c* New_ctor();

  /// @brief Method .ctor, addr 0x24dbc8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x24dbc94, size 0x74, virtual false, abstract: false, final false
  inline void __cctor_b__9_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTaskAwaiter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueTaskAwaiter____c(__ValueTaskAwaiter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueTaskAwaiter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueTaskAwaiter____c(__ValueTaskAwaiter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueTaskAwaiter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ValueTaskAwaiter____c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ValueTaskAwaiter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2764))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3390))
// CS Name: ::System.Runtime.CompilerServices::ValueTaskAwaiter
struct CORDL_TYPE ValueTaskAwaiter {
public:
  // Declarations
  using __c = ::System::Runtime::CompilerServices::__ValueTaskAwaiter____c;

  /// @brief Field s_invokeActionDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invokeActionDelegate, put = setStaticF_s_invokeActionDelegate))::System::Action_1<::System::Object*>* s_invokeActionDelegate;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  static inline void setStaticF_s_invokeActionDelegate(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_invokeActionDelegate();

  /// @brief Method .ctor, addr 0x24db61c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask value);

  /// @brief Method get_IsCompleted, addr 0x24db624, size 0x108, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method GetResult, addr 0x24db72c, size 0x100, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x24db82c, size 0x18c, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x24db9c8, size 0x18c, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
  constexpr ValueTaskAwaiter(::System::Threading::Tasks::ValueTask _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskAwaiter();

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::Threading::Tasks::ValueTask _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ValueTaskAwaiter, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::ValueTaskAwaiter, _value) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ValueTaskAwaiter____c*, "System.Runtime.CompilerServices", "ValueTaskAwaiter/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ValueTaskAwaiter, "System.Runtime.CompilerServices", "ValueTaskAwaiter");
