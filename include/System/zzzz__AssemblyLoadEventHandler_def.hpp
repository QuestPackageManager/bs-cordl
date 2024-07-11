#pragma once
// IWYU pragma private; include "System/AssemblyLoadEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyLoadEventHandler)
namespace System {
class AssemblyLoadEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::AssemblyLoadEventHandler);
// Type: System::AssemblyLoadEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::AssemblyLoadEventHandler*
class CORDL_TYPE AssemblyLoadEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x28c84d8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::AssemblyLoadEventArgs* args);

  static inline ::System::AssemblyLoadEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x28c83a8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyLoadEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyLoadEventHandler(AssemblyLoadEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyLoadEventHandler(AssemblyLoadEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AssemblyLoadEventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AssemblyLoadEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventHandler*, "System", "AssemblyLoadEventHandler");
