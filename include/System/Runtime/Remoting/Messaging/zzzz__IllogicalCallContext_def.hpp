#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IllogicalCallContext)
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IllogicalCallContext);
// Type: System.Runtime.Remoting.Messaging::IllogicalCallContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3144))
// CS Name: ::System.Runtime.Remoting.Messaging::IllogicalCallContext*
class CORDL_TYPE IllogicalCallContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Datastore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Datastore, put = __cordl_internal_set_m_Datastore))::System::Collections::Hashtable* m_Datastore;

  /// @brief Field m_HostContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HostContext, put = __cordl_internal_set_m_HostContext))::System::Object* m_HostContext;

  __declspec(property(get = get_Datastore))::System::Collections::Hashtable* Datastore;

  __declspec(property(get = get_HostContext, put = set_HostContext))::System::Object* HostContext;

  __declspec(property(get = get_HasUserData)) bool HasUserData;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_Datastore();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_m_Datastore() const;

  constexpr void __cordl_internal_set_m_Datastore(::System::Collections::Hashtable* value);

  constexpr ::System::Object*& __cordl_internal_get_m_HostContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_HostContext() const;

  constexpr void __cordl_internal_set_m_HostContext(::System::Object* value);

  /// @brief Method get_Datastore, addr 0x24c83c0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Datastore();

  /// @brief Method get_HostContext, addr 0x24c842c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_HostContext();

  /// @brief Method set_HostContext, addr 0x24c8434, size 0x8, virtual false, abstract: false, final false
  inline void set_HostContext(::System::Object* value);

  /// @brief Method get_HasUserData, addr 0x24c843c, size 0x2c, virtual false, abstract: false, final false
  inline bool get_HasUserData();

  /// @brief Method FreeNamedDataSlot, addr 0x24c82fc, size 0x2c, virtual false, abstract: false, final false
  inline void FreeNamedDataSlot(::StringW name);

  /// @brief Method CreateCopy, addr 0x24c8468, size 0x254, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy();

  static inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* New_ctor();

  /// @brief Method .ctor, addr 0x24c86bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IllogicalCallContext(IllogicalCallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IllogicalCallContext(IllogicalCallContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IllogicalCallContext();

public:
  /// @brief Field m_Datastore, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_Datastore;

  /// @brief Field m_HostContext, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_HostContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::IllogicalCallContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::IllogicalCallContext, ___m_Datastore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::IllogicalCallContext, ___m_HostContext) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IllogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IllogicalCallContext*, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
