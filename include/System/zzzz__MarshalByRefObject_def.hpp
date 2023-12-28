#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MarshalByRefObject)
namespace System {
class Type;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MarshalByRefObject;
}
// Write type traits
MARK_REF_PTR_T(::System::MarshalByRefObject);
// Type: System::MarshalByRefObject
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2605))
// CS Name: ::System::MarshalByRefObject*
class CORDL_TYPE MarshalByRefObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field _identity, offset 0x10, size 0x8
  __declspec(property(get = __get__identity, put = __set__identity))::System::Object* _identity;

  __declspec(property(get = get_ObjectIdentity, put = set_ObjectIdentity))::System::Runtime::Remoting::ServerIdentity* ObjectIdentity;

  constexpr ::System::Object*& __get__identity();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__identity() const;

  constexpr void __set__identity(::System::Object* value);

  static inline ::System::MarshalByRefObject* New_ctor();

  /// @brief Method .ctor addr 0x25f3d10 size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method get_ObjectIdentity addr 0x25fa454 size 0x40 virtual false final false
  inline ::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity();

  /// @brief Method set_ObjectIdentity addr 0x25fa494 size 0x40 virtual false final false
  inline void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value);

  /// @brief Method CreateObjRef addr 0x25fa4d4 size 0x40 virtual true final false
  inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);

  /// @brief Method InitializeLifetimeService addr 0x25fa514 size 0x40 virtual true final false
  inline ::System::Object* InitializeLifetimeService();

  // Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshalByRefObject(MarshalByRefObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshalByRefObject(MarshalByRefObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshalByRefObject();

public:
  /// @brief Field _identity, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____identity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MarshalByRefObject, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MarshalByRefObject);
DEFINE_IL2CPP_ARG_TYPE(::System::MarshalByRefObject*, "System", "MarshalByRefObject");
