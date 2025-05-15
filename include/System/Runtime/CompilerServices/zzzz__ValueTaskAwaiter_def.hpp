#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ValueTaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTaskAwaiter)
namespace System::Runtime::CompilerServices {
class ValueTaskAwaiter___c;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ValueTaskAwaiter___c;
}
namespace System::Runtime::CompilerServices {
struct ValueTaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::ValueTaskAwaiter___c);
MARK_VAL_T(::System::Runtime::CompilerServices::ValueTaskAwaiter);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.ValueTaskAwaiter/<>c
class CORDL_TYPE ValueTaskAwaiter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::CompilerServices::ValueTaskAwaiter___c* __9;

  static inline ::System::Runtime::CompilerServices::ValueTaskAwaiter___c* New_ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x3d19668, size 0x74, virtual false, abstract: false, final false
  inline void __cctor_b__9_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x3d19660, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::ValueTaskAwaiter___c* getStaticF___9();

  static inline void setStaticF___9(::System::Runtime::CompilerServices::ValueTaskAwaiter___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskAwaiter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskAwaiter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTaskAwaiter___c(ValueTaskAwaiter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTaskAwaiter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTaskAwaiter___c(ValueTaskAwaiter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ValueTaskAwaiter___c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Runtime.CompilerServices.ICriticalNotifyCompletion, System.Runtime.CompilerServices.INotifyCompletion, System.Threading.Tasks.ValueTask
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ValueTaskAwaiter
struct CORDL_TYPE ValueTaskAwaiter {
public:
  // Declarations
  using __c = ::System::Runtime::CompilerServices::ValueTaskAwaiter___c;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field s_invokeActionDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_invokeActionDelegate, put = setStaticF_s_invokeActionDelegate)) ::System::Action_1<::System::Object*>* s_invokeActionDelegate;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x3d191b0, size 0x58, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x3d19208, size 0x18c, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x3d193a4, size 0x18c, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x3d19150, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_invokeActionDelegate();

  /// @brief Method get_IsCompleted, addr 0x3d19158, size 0x58, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  static inline void setStaticF_s_invokeActionDelegate(::System::Action_1<::System::Object*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskAwaiter();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
  constexpr ValueTaskAwaiter(::System::Threading::Tasks::ValueTask _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::Threading::Tasks::ValueTask _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::ValueTaskAwaiter, _value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ValueTaskAwaiter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::ValueTaskAwaiter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ValueTaskAwaiter___c*, "System.Runtime.CompilerServices", "ValueTaskAwaiter/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ValueTaskAwaiter, "System.Runtime.CompilerServices", "ValueTaskAwaiter");
