#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainSink)
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Channels {
struct CrossAppDomainSink_ProcessMessageRes;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainSink;
}
namespace System::Runtime::Remoting::Channels {
struct CrossAppDomainSink_ProcessMessageRes;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CrossAppDomainSink);
MARK_VAL_T(::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes);
// Dependencies
namespace System::Runtime::Remoting::Channels {
// Is value type: true
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
struct CORDL_TYPE CrossAppDomainSink_ProcessMessageRes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainSink_ProcessMessageRes();

  // Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "cadMrm", ty:
  // "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: None }]
  constexpr CrossAppDomainSink_ProcessMessageRes(::ArrayW<uint8_t, ::Array<uint8_t>*> arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field arrResponse, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> arrResponse;

  /// @brief Field cadMrm, offset: 0x8, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes, arrResponse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes, cadMrm) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink
class CORDL_TYPE CrossAppDomainSink : public ::System::Object {
public:
  // Declarations
  using ProcessMessageRes = ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes;

  __declspec(property(get = get_TargetDomainId)) int32_t TargetDomainId;

  /// @brief Field _domainID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__domainID, put = __cordl_internal_set__domainID)) int32_t _domainID;

  /// @brief Field processMessageMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_processMessageMethod, put = setStaticF_processMessageMethod)) ::System::Reflection::MethodInfo* processMessageMethod;

  /// @brief Field s_sinks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_sinks, put = setStaticF_s_sinks)) ::System::Collections::Hashtable* s_sinks;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3ce3c58, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* reqMsg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method GetSink, addr 0x3ce31d4, size 0x290, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(int32_t domainID);

  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* New_ctor(int32_t domainID);

  /// @brief Method ProcessMessageInDomain, addr 0x3ce3504, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes ProcessMessageInDomain(::ArrayW<uint8_t, ::Array<uint8_t>*> arrRequest,
                                                                                                                   ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg);

  /// @brief Method SendAsyncMessage, addr 0x3ce3d4c, size 0x10c, virtual false, abstract: false, final false
  inline void SendAsyncMessage(::System::Object* data);

  /// @brief Method SyncProcessMessage, addr 0x3ce3770, size 0x430, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msgRequest);

  /// @brief Method <AsyncProcessMessage>b__10_0, addr 0x3ce3f50, size 0x80, virtual false, abstract: false, final false
  inline void _AsyncProcessMessage_b__10_0(::System::Object* data);

  constexpr int32_t const& __cordl_internal_get__domainID() const;

  constexpr int32_t& __cordl_internal_get__domainID();

  constexpr void __cordl_internal_set__domainID(int32_t value);

  /// @brief Method .ctor, addr 0x3ce34d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t domainID);

  static inline ::System::Reflection::MethodInfo* getStaticF_processMessageMethod();

  static inline ::System::Collections::Hashtable* getStaticF_s_sinks();

  /// @brief Method get_TargetDomainId, addr 0x3ce34fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TargetDomainId();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

  static inline void setStaticF_processMessageMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_sinks(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossAppDomainSink(CrossAppDomainSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossAppDomainSink(CrossAppDomainSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3117 };

  /// @brief Field _domainID, offset: 0x10, size: 0x4, def value: None
  int32_t ____domainID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainSink, ____domainID) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainSink, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainSink*, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes, "System.Runtime.Remoting.Channels", "CrossAppDomainSink/ProcessMessageRes");
