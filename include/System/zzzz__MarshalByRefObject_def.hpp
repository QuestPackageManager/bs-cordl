#pragma once
// IWYU pragma private; include "System/MarshalByRefObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MarshalByRefObject)
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class MarshalByRefObject;
}
// Write type traits
MARK_REF_PTR_T(::System::MarshalByRefObject);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MarshalByRefObject
class CORDL_TYPE MarshalByRefObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ObjectIdentity, put = set_ObjectIdentity)) ::System::Runtime::Remoting::ServerIdentity* ObjectIdentity;

  /// @brief Field _identity, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__identity, put = __cordl_internal_set__identity)) ::System::Object* _identity;

  /// @brief Method CreateObjRef, addr 0x3e369a0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);

  /// @brief Method InitializeLifetimeService, addr 0x3e369d8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* InitializeLifetimeService();

  static inline ::System::MarshalByRefObject* New_ctor();

  constexpr ::System::Object* const& __cordl_internal_get__identity() const;

  constexpr ::System::Object*& __cordl_internal_get__identity();

  constexpr void __cordl_internal_set__identity(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e30088, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ObjectIdentity, addr 0x3e36930, size 0x38, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity();

  /// @brief Method set_ObjectIdentity, addr 0x3e36968, size 0x38, virtual false, abstract: false, final false
  inline void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshalByRefObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshalByRefObject(MarshalByRefObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshalByRefObject(MarshalByRefObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2607 };

  /// @brief Field _identity, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____identity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MarshalByRefObject, ____identity) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MarshalByRefObject, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MarshalByRefObject);
DEFINE_IL2CPP_ARG_TYPE(::System::MarshalByRefObject*, "System", "MarshalByRefObject");
