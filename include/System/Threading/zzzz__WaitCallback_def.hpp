#pragma once
// IWYU pragma private; include "System/Threading/WaitCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class WaitCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitCallback);
// Type: System.Threading::WaitCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::WaitCallback*
class CORDL_TYPE WaitCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3df6d1c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* state);

  static inline ::System::Threading::WaitCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3df6c1c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitCallback(WaitCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitCallback(WaitCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2731 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitCallback, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::WaitCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitCallback*, "System.Threading", "WaitCallback");
