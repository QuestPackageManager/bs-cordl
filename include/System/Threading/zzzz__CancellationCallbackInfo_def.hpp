#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CancellationCallbackInfo)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Object;
}
namespace System::Threading {
class __CancellationCallbackInfo__WithSyncContext;
}
namespace System::Threading {
class ContextCallback;
}
// Forward declare root types
namespace System::Threading {
class CancellationCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::CancellationCallbackInfo);
// Type: System.Threading::CancellationCallbackInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2691))
// CS Name: ::System.Threading::CancellationCallbackInfo*
class CORDL_TYPE CancellationCallbackInfo : public ::System::Object {
public:
  // Declarations
  using WithSyncContext = ::System::Threading::__CancellationCallbackInfo__WithSyncContext;

  /// @brief Field Callback, offset 0x10, size 0x8
  __declspec(property(get = __get_Callback, put = __set_Callback))::System::Action_1<::System::Object*>* Callback;

  /// @brief Field StateForCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_StateForCallback, put = __set_StateForCallback))::System::Object* StateForCallback;

  /// @brief Field TargetExecutionContext, offset 0x20, size 0x8
  __declspec(property(get = __get_TargetExecutionContext, put = __set_TargetExecutionContext))::System::Threading::ExecutionContext* TargetExecutionContext;

  /// @brief Field CancellationTokenSource, offset 0x28, size 0x8
  __declspec(property(get = __get_CancellationTokenSource, put = __set_CancellationTokenSource))::System::Threading::CancellationTokenSource* CancellationTokenSource;

  /// @brief Field s_executionContextCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_executionContextCallback, put = setStaticF_s_executionContextCallback))::System::Threading::ContextCallback* s_executionContextCallback;

  constexpr ::System::Action_1<::System::Object*>*& __get_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& __get_Callback() const;

  constexpr void __set_Callback(::System::Action_1<::System::Object*>* value);

  constexpr ::System::Object*& __get_StateForCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_StateForCallback() const;

  constexpr void __set_StateForCallback(::System::Object* value);

  constexpr ::System::Threading::ExecutionContext*& __get_TargetExecutionContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __get_TargetExecutionContext() const;

  constexpr void __set_TargetExecutionContext(::System::Threading::ExecutionContext* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get_CancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get_CancellationTokenSource() const;

  constexpr void __set_CancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  static inline void setStaticF_s_executionContextCallback(::System::Threading::ContextCallback* value);

  static inline ::System::Threading::ContextCallback* getStaticF_s_executionContextCallback();

  static inline ::System::Threading::CancellationCallbackInfo* New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                        ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                        ::System::Threading::CancellationTokenSource* cancellationTokenSource);

  /// @brief Method .ctor, addr 0x261300c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
                    ::System::Threading::CancellationTokenSource* cancellationTokenSource);

  /// @brief Method ExecuteCallback, addr 0x26136b0, size 0xfc, virtual false, abstract: false, final false
  inline void ExecuteCallback();

  /// @brief Method ExecutionContextCallback, addr 0x26140cc, size 0x8c, virtual false, abstract: false, final false
  static inline void ExecutionContextCallback(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationCallbackInfo(CancellationCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationCallbackInfo(CancellationCallbackInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationCallbackInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationCallbackInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___Callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___StateForCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___TargetExecutionContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackInfo, ___CancellationTokenSource) == 0x28, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::CancellationCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackInfo*, "System.Threading", "CancellationCallbackInfo");
