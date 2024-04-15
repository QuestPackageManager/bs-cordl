#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleCancelEventHandler)
namespace System {
class ConsoleCancelEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ConsoleCancelEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ConsoleCancelEventHandler);
// Type: System::ConsoleCancelEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ConsoleCancelEventHandler*
class CORDL_TYPE ConsoleCancelEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x28552b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::ConsoleCancelEventArgs* e);

  static inline ::System::ConsoleCancelEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2855188, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCancelEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCancelEventHandler(ConsoleCancelEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCancelEventHandler(ConsoleCancelEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleCancelEventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ConsoleCancelEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleCancelEventHandler*, "System", "ConsoleCancelEventHandler");
