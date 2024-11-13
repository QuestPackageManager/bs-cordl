#pragma once
// IWYU pragma private; include "System/Threading/_ThreadPoolWaitCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(_ThreadPoolWaitCallback)
// Forward declare root types
namespace System::Threading {
class _ThreadPoolWaitCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::_ThreadPoolWaitCallback);
// Type: System.Threading::_ThreadPoolWaitCallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::_ThreadPoolWaitCallback*
class CORDL_TYPE _ThreadPoolWaitCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Method PerformWaitCallback, addr 0x3df8ce8, size 0x4c, virtual false, abstract: false, final false
  static inline bool PerformWaitCallback();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _ThreadPoolWaitCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _ThreadPoolWaitCallback(_ThreadPoolWaitCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _ThreadPoolWaitCallback(_ThreadPoolWaitCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::_ThreadPoolWaitCallback, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::_ThreadPoolWaitCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::_ThreadPoolWaitCallback*, "System.Threading", "_ThreadPoolWaitCallback");
