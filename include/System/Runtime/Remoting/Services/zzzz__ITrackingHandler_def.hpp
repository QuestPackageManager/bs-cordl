#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITrackingHandler)
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Services {
class ITrackingHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Services::ITrackingHandler);
// Type: System.Runtime.Remoting.Services::ITrackingHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Services {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3084))
// CS Name: ::System.Runtime.Remoting.Services::ITrackingHandler*
class CORDL_TYPE ITrackingHandler {
public:
  // Declarations
  /// @brief Method DisconnectedObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DisconnectedObject(::System::Object* obj);

  /// @brief Method MarshaledObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void MarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or);

  /// @brief Method UnmarshaledObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or);

  // Ctor Parameters [CppParam { name: "", ty: "ITrackingHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITrackingHandler(ITrackingHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITrackingHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITrackingHandler(ITrackingHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Services
NEED_NO_BOX(::System::Runtime::Remoting::Services::ITrackingHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Services::ITrackingHandler*, "System.Runtime.Remoting.Services", "ITrackingHandler");
