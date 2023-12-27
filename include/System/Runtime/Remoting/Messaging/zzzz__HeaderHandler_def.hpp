#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderHandler)
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::HeaderHandler);
// Type: System.Runtime.Remoting.Messaging::HeaderHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3166))
// CS Name: ::System.Runtime.Remoting.Messaging::HeaderHandler*
class CORDL_TYPE HeaderHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Messaging::HeaderHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x24ad688 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x24ad7b4 size 0x14 virtual true final false
  inline ::System::Object* Invoke(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers);

  // Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderHandler(HeaderHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderHandler(HeaderHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::HeaderHandler, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::HeaderHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::HeaderHandler*, "System.Runtime.Remoting.Messaging", "HeaderHandler");
