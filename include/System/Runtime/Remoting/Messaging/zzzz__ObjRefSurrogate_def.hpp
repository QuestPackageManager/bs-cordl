#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjRefSurrogate)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ObjRefSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ObjRefSurrogate);
// Type: System.Runtime.Remoting.Messaging::ObjRefSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3184))
// CS Name: ::System.Runtime.Remoting.Messaging::ObjRefSurrogate*
class CORDL_TYPE ObjRefSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0x24b1b80, size 0x10c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method SetObjectData, addr 0x24b1c8c, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  static inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* New_ctor();

  /// @brief Method .ctor, addr 0x24b1cdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObjRefSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjRefSurrogate(ObjRefSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjRefSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjRefSurrogate(ObjRefSurrogate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjRefSurrogate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ObjRefSurrogate, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ObjRefSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ObjRefSurrogate*, "System.Runtime.Remoting.Messaging", "ObjRefSurrogate");
