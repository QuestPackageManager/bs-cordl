#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMessageCtrl)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IMessageCtrl);
// Type: System.Runtime.Remoting.Messaging::IMessageCtrl
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::IMessageCtrl*
class CORDL_TYPE IMessageCtrl {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IMessageCtrl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMessageCtrl(IMessageCtrl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMessageCtrl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMessageCtrl(IMessageCtrl const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMessageCtrl);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMessageCtrl*, "System.Runtime.Remoting.Messaging", "IMessageCtrl");
