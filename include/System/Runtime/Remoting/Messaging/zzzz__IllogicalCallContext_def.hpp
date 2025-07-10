#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
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
// Dependencies System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.IllogicalCallContext
class CORDL_TYPE IllogicalCallContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Datastore)) ::System::Collections::Hashtable* Datastore;

  __declspec(property(get = get_HasUserData)) bool HasUserData;

  __declspec(property(get = get_HostContext, put = set_HostContext)) ::System::Object* HostContext;

  /// @brief Field m_Datastore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Datastore, put = __cordl_internal_set_m_Datastore)) ::System::Collections::Hashtable* m_Datastore;

  /// @brief Field m_HostContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HostContext, put = __cordl_internal_set_m_HostContext)) ::System::Object* m_HostContext;

  /// @brief Method CreateCopy, addr 0x3ce5f1c, size 0x254, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy();

  /// @brief Method FreeNamedDataSlot, addr 0x3ce5db8, size 0x2c, virtual false, abstract: false, final false
  inline void FreeNamedDataSlot(::StringW name);

  static inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* New_ctor();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_m_Datastore() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_Datastore();

  constexpr ::System::Object* const& __cordl_internal_get_m_HostContext() const;

  constexpr ::System::Object*& __cordl_internal_get_m_HostContext();

  constexpr void __cordl_internal_set_m_Datastore(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_m_HostContext(::System::Object* value);

  /// @brief Method .ctor, addr 0x3ce6170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Datastore, addr 0x3ce5e7c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Datastore();

  /// @brief Method get_HasUserData, addr 0x3ce5ef0, size 0x2c, virtual false, abstract: false, final false
  inline bool get_HasUserData();

  /// @brief Method get_HostContext, addr 0x3ce5ee0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_HostContext();

  /// @brief Method set_HostContext, addr 0x3ce5ee8, size 0x8, virtual false, abstract: false, final false
  inline void set_HostContext(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IllogicalCallContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IllogicalCallContext(IllogicalCallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IllogicalCallContext(IllogicalCallContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3143 };

  /// @brief Field m_Datastore, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_Datastore;

  /// @brief Field m_HostContext, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_HostContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::IllogicalCallContext, ___m_Datastore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::IllogicalCallContext, ___m_HostContext) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::IllogicalCallContext, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IllogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IllogicalCallContext*, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
