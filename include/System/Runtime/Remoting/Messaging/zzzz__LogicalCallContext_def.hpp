#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogicalCallContext)
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextRemotingData;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextSecurityData;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Remoting::Messaging {
struct LogicalCallContext_Reader;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
struct LogicalCallContext_Reader;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::LogicalCallContext);
MARK_VAL_T(::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader);
// Dependencies
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
struct CORDL_TYPE LogicalCallContext_Reader {
public:
  // Declarations
  __declspec(property(get = get_HasInfo)) bool HasInfo;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Method Clone, addr 0x3cd3fa4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone();

  /// @brief Method GetData, addr 0x3ce60a8, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::StringW name);

  /// @brief Method .ctor, addr 0x3ce7378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);

  /// @brief Method get_HasInfo, addr 0x3ce7380, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method get_IsNull, addr 0x3cd3f8c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogicalCallContext_Reader();

  // Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext*", modifiers: "", def_value: None }]
  constexpr LogicalCallContext_Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3144 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ctx, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader, m_ctx) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader, 0x8>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
// Dependencies System.ICloneable, System.Object, System.Runtime.Serialization.ISerializable
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext
class CORDL_TYPE LogicalCallContext : public ::System::Object {
public:
  // Declarations
  using Reader = ::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader;

  __declspec(property(get = get_Datastore)) ::System::Collections::Hashtable* Datastore;

  __declspec(property(get = get_HasInfo)) bool HasInfo;

  __declspec(property(get = get_HasUserData)) bool HasUserData;

  /// @brief Field _recvHeaders, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__recvHeaders,
                      put = __cordl_internal_set__recvHeaders)) ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>
      _recvHeaders;

  /// @brief Field _sendHeaders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sendHeaders,
                      put = __cordl_internal_set__sendHeaders)) ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>
      _sendHeaders;

  /// @brief Field m_Datastore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Datastore, put = __cordl_internal_set_m_Datastore)) ::System::Collections::Hashtable* m_Datastore;

  /// @brief Field m_HostContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HostContext, put = __cordl_internal_set_m_HostContext)) ::System::Object* m_HostContext;

  /// @brief Field m_IsCorrelationMgr, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCorrelationMgr, put = __cordl_internal_set_m_IsCorrelationMgr)) bool m_IsCorrelationMgr;

  /// @brief Field m_RemotingData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemotingData, put = __cordl_internal_set_m_RemotingData)) ::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;

  /// @brief Field m_SecurityData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SecurityData, put = __cordl_internal_set_m_SecurityData)) ::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;

  /// @brief Field s_callContextType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_callContextType, put = setStaticF_s_callContextType)) ::System::Type* s_callContextType;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Clone, addr 0x3ce6bc4, size 0x608, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method GetData, addr 0x3ce72bc, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::StringW name);

  /// @brief Method GetObjectData, addr 0x3ce6848, size 0x350, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Merge, addr 0x3cd42a8, size 0x230, virtual false, abstract: false, final false
  inline void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* lc);

  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor();

  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                     ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetData, addr 0x3ce614c, size 0x98, virtual false, abstract: false, final false
  inline void SetData(::StringW name, ::System::Object* data);

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get__recvHeaders() const;

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get__recvHeaders();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get__sendHeaders() const;

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get__sendHeaders();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_m_Datastore() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_Datastore();

  constexpr ::System::Object* const& __cordl_internal_get_m_HostContext() const;

  constexpr ::System::Object*& __cordl_internal_get_m_HostContext();

  constexpr bool const& __cordl_internal_get_m_IsCorrelationMgr() const;

  constexpr bool& __cordl_internal_get_m_IsCorrelationMgr();

  constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData* const& __cordl_internal_get_m_RemotingData() const;

  constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& __cordl_internal_get_m_RemotingData();

  constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData* const& __cordl_internal_get_m_SecurityData() const;

  constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& __cordl_internal_get_m_SecurityData();

  constexpr void __cordl_internal_set__recvHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr void __cordl_internal_set__sendHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr void __cordl_internal_set_m_Datastore(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_m_HostContext(::System::Object* value);

  constexpr void __cordl_internal_set_m_IsCorrelationMgr(bool value);

  constexpr void __cordl_internal_set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData* value);

  constexpr void __cordl_internal_set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData* value);

  /// @brief Method .ctor, addr 0x3ce64e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ce64e8, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Type* getStaticF_s_callContextType();

  /// @brief Method get_Datastore, addr 0x3ce67e4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Datastore();

  /// @brief Method get_HasInfo, addr 0x3cd4248, size 0x60, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method get_HasUserData, addr 0x3ce6b98, size 0x2c, virtual false, abstract: false, final false
  inline bool get_HasUserData();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_s_callContextType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogicalCallContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogicalCallContext(LogicalCallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogicalCallContext(LogicalCallContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3145 };

  /// @brief Field s_CorrelationMgrSlotName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_CorrelationMgrSlotName{ u"System.Diagnostics.Trace.CorrelationManagerSlot" };

  /// @brief Field m_Datastore, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_Datastore;

  /// @brief Field m_RemotingData, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CallContextRemotingData* ___m_RemotingData;

  /// @brief Field m_SecurityData, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CallContextSecurityData* ___m_SecurityData;

  /// @brief Field m_HostContext, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_HostContext;

  /// @brief Field m_IsCorrelationMgr, offset: 0x30, size: 0x1, def value: None
  bool ___m_IsCorrelationMgr;

  /// @brief Field _sendHeaders, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> ____sendHeaders;

  /// @brief Field _recvHeaders, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> ____recvHeaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_Datastore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_RemotingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_SecurityData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_HostContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_IsCorrelationMgr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ____sendHeaders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ____recvHeaders) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::LogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader, "System.Runtime.Remoting.Messaging", "LogicalCallContext/Reader");
