#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalRemotingServices)
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Metadata {
class SoapAttribute;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class InternalRemotingServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::InternalRemotingServices);
// Type: System.Runtime.Remoting::InternalRemotingServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3062))
// CS Name: ::System.Runtime.Remoting::InternalRemotingServices*
class CORDL_TYPE InternalRemotingServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _soapAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__soapAttributes, put = setStaticF__soapAttributes))::System::Collections::Hashtable* _soapAttributes;

  static inline void setStaticF__soapAttributes(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__soapAttributes();

  /// @brief Method GetCachedSoapAttribute, addr 0x248546c, size 0x550, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* reflectionObject);

  // Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalRemotingServices(InternalRemotingServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalRemotingServices(InternalRemotingServices const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalRemotingServices();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::InternalRemotingServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::InternalRemotingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::InternalRemotingServices*, "System.Runtime.Remoting", "InternalRemotingServices");
