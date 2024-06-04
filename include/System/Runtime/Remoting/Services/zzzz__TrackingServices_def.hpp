#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Services/TrackingServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TrackingServices)
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Services {
class TrackingServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Services::TrackingServices);
// Type: System.Runtime.Remoting.Services::TrackingServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Services {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Services::TrackingServices*
class CORDL_TYPE TrackingServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _handlers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__handlers, put = setStaticF__handlers))::System::Collections::ArrayList* _handlers;

  /// @brief Method NotifyDisconnectedObject, addr 0x282fcf0, size 0x304, virtual false, abstract: false, final false
  static inline void NotifyDisconnectedObject(::System::Object* obj);

  /// @brief Method NotifyMarshaledObject, addr 0x282bed0, size 0x310, virtual false, abstract: false, final false
  static inline void NotifyMarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or);

  /// @brief Method NotifyUnmarshaledObject, addr 0x282b1f4, size 0x310, virtual false, abstract: false, final false
  static inline void NotifyUnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or);

  static inline ::System::Collections::ArrayList* getStaticF__handlers();

  static inline void setStaticF__handlers(::System::Collections::ArrayList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackingServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackingServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackingServices(TrackingServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackingServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackingServices(TrackingServices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Services::TrackingServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Services
NEED_NO_BOX(::System::Runtime::Remoting::Services::TrackingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Services::TrackingServices*, "System.Runtime.Remoting.Services", "TrackingServices");
