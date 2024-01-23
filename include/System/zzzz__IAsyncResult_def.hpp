#pragma once
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
// Type: System::IAsyncResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2409))
// CS Name: ::System::IAsyncResult*
class CORDL_TYPE IAsyncResult {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_AsyncWaitHandle))::System::Threading::WaitHandle* AsyncWaitHandle;

  __declspec(property(get = get_AsyncState))::System::Object* AsyncState;

  __declspec(property(get = get_CompletedSynchronously)) bool CompletedSynchronously;

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsCompleted();

  /// @brief Method get_AsyncWaitHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::WaitHandle* get_AsyncWaitHandle();

  /// @brief Method get_AsyncState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_AsyncState();

  /// @brief Method get_CompletedSynchronously, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CompletedSynchronously();

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncResult(IAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncResult(IAsyncResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IAsyncResult*, "System", "IAsyncResult");
