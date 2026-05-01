#pragma once
// IWYU pragma private; include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncResult)
namespace System::Threading {
class WaitHandle;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class IAsyncResult;
}
// Write type traits
MARK_REF_PTR_T(::System::IAsyncResult);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IAsyncResult
class CORDL_TYPE IAsyncResult {
public:
  // Declarations
  __declspec(property(get = get_AsyncState)) ::System::Object* AsyncState;

  __declspec(property(get = get_AsyncWaitHandle)) ::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Method get_AsyncState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_AsyncWaitHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_CompletedSynchronously, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CompletedSynchronously();

  /// @brief Method get_IsCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsCompleted();

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncResult(IAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IAsyncResult*, "System", "IAsyncResult");
