#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class TimerCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::TimerCallback);
// Type: System.Threading::TimerCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::TimerCallback*
class CORDL_TYPE TimerCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x29a85c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* state);

  static inline ::System::Threading::TimerCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29a849c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerCallback(TimerCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerCallback(TimerCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::TimerCallback, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::TimerCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::TimerCallback*, "System.Threading", "TimerCallback");
