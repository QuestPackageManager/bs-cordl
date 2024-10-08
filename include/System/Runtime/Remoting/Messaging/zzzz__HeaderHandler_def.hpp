#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/HeaderHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderHandler)
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::HeaderHandler);
// Type: System.Runtime.Remoting.Messaging::HeaderHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::HeaderHandler*
class CORDL_TYPE HeaderHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3c772a4, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers);

  static inline ::System::Runtime::Remoting::Messaging::HeaderHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3c771a4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderHandler(HeaderHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderHandler(HeaderHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3165 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::HeaderHandler, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::HeaderHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::HeaderHandler*, "System.Runtime.Remoting.Messaging", "HeaderHandler");
