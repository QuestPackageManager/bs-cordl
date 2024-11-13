#pragma once
// IWYU pragma private; include "System/Threading/WaitOrTimerCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitOrTimerCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class WaitOrTimerCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitOrTimerCallback);
// Type: System.Threading::WaitOrTimerCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::WaitOrTimerCallback*
class CORDL_TYPE WaitOrTimerCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3df6e34, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* state, bool timedOut);

  static inline ::System::Threading::WaitOrTimerCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3df6d30, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitOrTimerCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitOrTimerCallback(WaitOrTimerCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitOrTimerCallback(WaitOrTimerCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2732 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitOrTimerCallback, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::WaitOrTimerCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitOrTimerCallback*, "System.Threading", "WaitOrTimerCallback");
