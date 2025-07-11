#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CancellationCallbackInfo)
namespace GlobalNamespace {
class CancellationCallbackInfo_WithSyncContext;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class CancellationCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::CancellationCallbackInfo);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.CancellationCallbackInfo
class CORDL_TYPE CancellationCallbackInfo : public ::System::Object {
public:
  // Declarations
  using WithSyncContext = ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext;

  /// @brief Field Callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback)) ::System::Action_1<::System::Object*>* Callback;

  /// @brief Field CancellationTokenSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CancellationTokenSource, put = __cordl_internal_set_CancellationTokenSource)) ::System::Threading::CancellationTokenSource* CancellationTokenSource;

  /// @brief Field StateForCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_StateForCallback, put = __cordl_internal_set_StateForCallback)) ::System::Object* StateForCallback;

  /// @brief Field TargetExecutionContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetExecutionContext, put = __cordl_internal_set_TargetExecutionContext)) ::System::Threading::ExecutionContext* TargetExecutionContext;

  /// @brief Field s_executionContextCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_executionContextCallback, put = setStaticF_s_executionContextCallback)) ::System::Threading::ContextCallback* s_executionContextCallback;

  /// @brief Method ExecuteCallback, addr 0x3e50ce0, size 0xf4, virtual false, abstract: false, final false
  inline void ExecuteCallback();

  /// @brief Method ExecutionContextCallback, addr 0x3e51740, size 0x8c, virtual false, abstract: false, final false
  static inline void ExecutionContextCallback(::System::Object* obj);

  static inline ::System::Threading::CancellationCallbackInfo* New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                        ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                        ::System::Threading::CancellationTokenSource* cancellationTokenSource);

  constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_Callback() const;

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_Callback();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_CancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_CancellationTokenSource();

  constexpr ::System::Object* const& __cordl_internal_get_StateForCallback() const;

  constexpr ::System::Object*& __cordl_internal_get_StateForCallback();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_TargetExecutionContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_TargetExecutionContext();

  constexpr void __cordl_internal_set_Callback(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_CancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set_StateForCallback(::System::Object* value);

  constexpr void __cordl_internal_set_TargetExecutionContext(::System::Threading::ExecutionContext* value);

  /// @brief Method .ctor, addr 0x3e50654, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
                    ::System::Threading::CancellationTokenSource* cancellationTokenSource);

  static inline ::System::Threading::ContextCallback* getStaticF_s_executionContextCallback();

  static inline void setStaticF_s_executionContextCallback(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationCallbackInfo(CancellationCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationCallbackInfo(CancellationCallbackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2694 };

  /// @brief Field Callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ___Callback;

  /// @brief Field StateForCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___StateForCallback;

  /// @brief Field TargetExecutionContext, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___TargetExecutionContext;

  /// @brief Field CancellationTokenSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___CancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___Callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___StateForCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___TargetExecutionContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___CancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationCallbackInfo, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::CancellationCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackInfo*, "System.Threading", "CancellationCallbackInfo");
