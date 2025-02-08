#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/InternalRemotingServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InternalRemotingServices)
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Metadata {
class SoapAttribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class InternalRemotingServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::InternalRemotingServices);
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.InternalRemotingServices
class CORDL_TYPE InternalRemotingServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _soapAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__soapAttributes, put = setStaticF__soapAttributes)) ::System::Collections::Hashtable* _soapAttributes;

  /// @brief Method GetCachedSoapAttribute, addr 0x3ccbe50, size 0x518, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* reflectionObject);

  static inline ::System::Collections::Hashtable* getStaticF__soapAttributes();

  static inline void setStaticF__soapAttributes(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalRemotingServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalRemotingServices(InternalRemotingServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalRemotingServices(InternalRemotingServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::InternalRemotingServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::InternalRemotingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::InternalRemotingServices*, "System.Runtime.Remoting", "InternalRemotingServices");
