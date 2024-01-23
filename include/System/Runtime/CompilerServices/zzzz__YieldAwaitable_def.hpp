#pragma once
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
struct __YieldAwaitable__YieldAwaiter;
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
struct __YieldAwaitable__YieldAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::YieldAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter);
// Type: ::YieldAwaiter
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3409))
// CS Name: ::YieldAwaitable::YieldAwaiter
#pragma pack(push, 0)
struct CORDL_TYPE __YieldAwaitable__YieldAwaiter {
public:
  // Declarations
  /// @brief Field s_waitCallbackRunAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_waitCallbackRunAction, put = setStaticF_s_waitCallbackRunAction))::System::Threading::WaitCallback* s_waitCallbackRunAction;

  /// @brief Field s_sendOrPostCallbackRunAction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_sendOrPostCallbackRunAction, put = setStaticF_s_sendOrPostCallbackRunAction))::System::Threading::SendOrPostCallback* s_sendOrPostCallbackRunAction;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  static inline void setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF_s_waitCallbackRunAction();

  static inline void setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback* value);

  static inline ::System::Threading::SendOrPostCallback* getStaticF_s_sendOrPostCallbackRunAction();

  /// @brief Method get_IsCompleted, addr 0x24de710, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method OnCompleted, addr 0x24de718, size 0x58, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x24dea10, size 0x58, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method QueueContinuation, addr 0x24de770, size 0x2a0, virtual false, abstract: false, final false
  static inline void QueueContinuation(::System::Action* continuation, bool flowContext);

  /// @brief Method RunAction, addr 0x24dea68, size 0x6c, virtual false, abstract: false, final false
  static inline void RunAction(::System::Object* state);

  /// @brief Method GetResult, addr 0x24dead4, size 0x4, virtual false, abstract: false, final false
  inline void GetResult();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __YieldAwaitable__YieldAwaiter();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, 0x1>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::YieldAwaitable
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3410))
// CS Name: ::System.Runtime.CompilerServices::YieldAwaitable
#pragma pack(push, 0)
struct CORDL_TYPE YieldAwaitable {
public:
  // Declarations
  using YieldAwaiter = ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter;

  /// @brief Method GetAwaiter, addr 0x24de708, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter GetAwaiter();

  // Ctor Parameters []
  // @brief default ctor
  constexpr YieldAwaitable();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::YieldAwaitable, 0x1>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
