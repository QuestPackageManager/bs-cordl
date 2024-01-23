#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __LogicalCallContext__Reader;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
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
struct __LogicalCallContext__Reader;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::LogicalCallContext);
MARK_VAL_T(::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader);
// Type: ::Reader
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3145))
// CS Name: ::LogicalCallContext::Reader
struct CORDL_TYPE __LogicalCallContext__Reader {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_HasInfo)) bool HasInfo;

  /// @brief Method .ctor, addr 0x24a74e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);

  /// @brief Method get_IsNull, addr 0x24a74ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_HasInfo, addr 0x24a74fc, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method Clone, addr 0x24a750c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone();

  /// @brief Method GetData, addr 0x24a6210, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::StringW name);

  // Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext*", modifiers: "", def_value: None }]
  constexpr __LogicalCallContext__Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LogicalCallContext__Reader();

  /// @brief Field m_ctx, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader, m_ctx) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
// Type: System.Runtime.Remoting.Messaging::LogicalCallContext
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3146))
// CS Name: ::System.Runtime.Remoting.Messaging::LogicalCallContext*
class CORDL_TYPE LogicalCallContext : public ::System::Object {
public:
  // Declarations
  using Reader = ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader;

  /// @brief Field m_Datastore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Datastore, put = __cordl_internal_set_m_Datastore))::System::Collections::Hashtable* m_Datastore;

  /// @brief Field m_RemotingData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemotingData, put = __cordl_internal_set_m_RemotingData))::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;

  /// @brief Field m_SecurityData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SecurityData, put = __cordl_internal_set_m_SecurityData))::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;

  /// @brief Field m_HostContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HostContext, put = __cordl_internal_set_m_HostContext))::System::Object* m_HostContext;

  /// @brief Field m_IsCorrelationMgr, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCorrelationMgr, put = __cordl_internal_set_m_IsCorrelationMgr)) bool m_IsCorrelationMgr;

  /// @brief Field _sendHeaders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sendHeaders,
                      put = __cordl_internal_set__sendHeaders))::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> _sendHeaders;

  /// @brief Field _recvHeaders, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__recvHeaders,
                      put = __cordl_internal_set__recvHeaders))::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> _recvHeaders;

  /// @brief Field s_callContextType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_callContextType, put = setStaticF_s_callContextType))::System::Type* s_callContextType;

  __declspec(property(get = get_HasInfo)) bool HasInfo;

  __declspec(property(get = get_HasUserData)) bool HasUserData;

  __declspec(property(get = get_Datastore))::System::Collections::Hashtable* Datastore;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_Datastore();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_m_Datastore() const;

  constexpr void __cordl_internal_set_m_Datastore(::System::Collections::Hashtable* value);

  constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& __cordl_internal_get_m_RemotingData();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CallContextRemotingData*> const& __cordl_internal_get_m_RemotingData() const;

  constexpr void __cordl_internal_set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData* value);

  constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& __cordl_internal_get_m_SecurityData();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CallContextSecurityData*> const& __cordl_internal_get_m_SecurityData() const;

  constexpr void __cordl_internal_set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData* value);

  constexpr ::System::Object*& __cordl_internal_get_m_HostContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_HostContext() const;

  constexpr void __cordl_internal_set_m_HostContext(::System::Object* value);

  constexpr bool& __cordl_internal_get_m_IsCorrelationMgr();

  constexpr bool const& __cordl_internal_get_m_IsCorrelationMgr() const;

  constexpr void __cordl_internal_set_m_IsCorrelationMgr(bool value);

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get__sendHeaders();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get__sendHeaders() const;

  constexpr void __cordl_internal_set__sendHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get__recvHeaders();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get__recvHeaders() const;

  constexpr void __cordl_internal_set__recvHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  static inline void setStaticF_s_callContextType(::System::Type* value);

  static inline ::System::Type* getStaticF_s_callContextType();

  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor();

  /// @brief Method .ctor, addr 0x24a6650, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                     ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24a6658, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x24a69c0, size 0x354, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Clone, addr 0x24a6d40, size 0x5f8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Merge, addr 0x2497f98, size 0x230, virtual false, abstract: false, final false
  inline void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* lc);

  /// @brief Method get_HasInfo, addr 0x2497f38, size 0x60, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method get_HasUserData, addr 0x24a6d14, size 0x2c, virtual false, abstract: false, final false
  inline bool get_HasUserData();

  /// @brief Method get_Datastore, addr 0x24a6954, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Datastore();

  /// @brief Method GetData, addr 0x24a7428, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::StringW name);

  /// @brief Method SetData, addr 0x24a62b4, size 0x98, virtual false, abstract: false, final false
  inline void SetData(::StringW name, ::System::Object* data);

  // Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogicalCallContext(LogicalCallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogicalCallContext(LogicalCallContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogicalCallContext();

public:
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

  /// @brief Field s_CorrelationMgrSlotName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_CorrelationMgrSlotName{ u"System.Diagnostics.Trace.CorrelationManagerSlot" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::LogicalCallContext, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_Datastore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_RemotingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_SecurityData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_HostContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_IsCorrelationMgr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ____sendHeaders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ____recvHeaders) == 0x40, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::LogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader, "System.Runtime.Remoting.Messaging", "LogicalCallContext/Reader");
