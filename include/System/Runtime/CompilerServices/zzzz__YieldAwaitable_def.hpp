#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
struct YieldAwaitable_YieldAwaiter;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct YieldAwaitable;
}
namespace System::Runtime::CompilerServices {
struct YieldAwaitable_YieldAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::YieldAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter);
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#pragma pack(push, 0)
struct CORDL_TYPE YieldAwaitable_YieldAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field s_sendOrPostCallbackRunAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_sendOrPostCallbackRunAction, put = setStaticF_s_sendOrPostCallbackRunAction)) ::System::Threading::SendOrPostCallback* s_sendOrPostCallbackRunAction;

  /// @brief Field s_waitCallbackRunAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_waitCallbackRunAction, put = setStaticF_s_waitCallbackRunAction)) ::System::Threading::WaitCallback* s_waitCallbackRunAction;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x59c2d80, size 0x4, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x59c2994, size 0x5c, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method QueueContinuation, addr 0x59c29f0, size 0x2c4, virtual false, abstract: false, final false
  static inline void QueueContinuation(::System::Action* continuation, bool flowContext);

  /// @brief Method RunAction, addr 0x59c2d10, size 0x70, virtual false, abstract: false, final false
  static inline void RunAction(::System::Object* state);

  /// @brief Method UnsafeOnCompleted, addr 0x59c2cb4, size 0x5c, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  static inline ::System::Threading::SendOrPostCallback* getStaticF_s_sendOrPostCallbackRunAction();

  static inline ::System::Threading::WaitCallback* getStaticF_s_waitCallbackRunAction();

  /// @brief Method get_IsCompleted, addr 0x59c298c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  static inline void setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback* value);

  static inline void setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr YieldAwaitable_YieldAwaiter();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3424 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter, 0x1>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.YieldAwaitable
#pragma pack(push, 0)
struct CORDL_TYPE YieldAwaitable {
public:
  // Declarations
  using YieldAwaiter = ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter;

  /// @brief Method GetAwaiter, addr 0x59c2984, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter GetAwaiter();

  // Ctor Parameters []
  // @brief default ctor
  constexpr YieldAwaitable();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3425 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::YieldAwaitable, 0x1>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
