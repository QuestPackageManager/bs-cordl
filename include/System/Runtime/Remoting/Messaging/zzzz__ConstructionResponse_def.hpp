#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ConstructionResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_def.hpp"
CORDL_MODULE_EXPORT(ConstructionResponse)
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ConstructionResponse);
// Dependencies System.Runtime.Remoting.Activation.IConstructionReturnMessage, System.Runtime.Remoting.Messaging.IMessage, System.Runtime.Remoting.Messaging.IMethodMessage,
// System.Runtime.Remoting.Messaging.IMethodReturnMessage, System.Runtime.Remoting.Messaging.MethodResponse
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.ConstructionResponse
class CORDL_TYPE ConstructionResponse : public ::System::Runtime::Remoting::Messaging::MethodResponse {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Collections::IDictionary* Properties;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Object* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                                       ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method .ctor, addr 0x3ce4be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method .ctor, addr 0x3cecb50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cdae2c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method get_Properties, addr 0x3cecb58, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IConstructionReturnMessage"
  constexpr ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* i___System__Runtime__Remoting__Activation__IConstructionReturnMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructionResponse(ConstructionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructionResponse(ConstructionResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ConstructionResponse, 0x88>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionResponse*, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
