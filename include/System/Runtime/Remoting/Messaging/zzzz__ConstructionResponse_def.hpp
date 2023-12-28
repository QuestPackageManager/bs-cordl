#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MethodResponse_def.hpp"
CORDL_MODULE_EXPORT(ConstructionResponse)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System {
class Exception;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ConstructionResponse);
// Type: System.Runtime.Remoting.Messaging::ConstructionResponse
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3162))
// CS Name: ::System.Runtime.Remoting.Messaging::ConstructionResponse*
class CORDL_TYPE ConstructionResponse : public ::System::Runtime::Remoting::Messaging::MethodResponse {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Object* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                                       ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method .ctor addr 0x249a1c0 size 0xc virtual false final false
  inline void _ctor(::System::Object* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method .ctor addr 0x24a4f80 size 0x4 virtual false final false
  inline void _ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24ad2d4 size 0x4 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Properties addr 0x24ad350 size 0x4 virtual true final false
  inline ::System::Collections::IDictionary* get_Properties();

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructionResponse(ConstructionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructionResponse(ConstructionResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructionResponse();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ConstructionResponse, 0x88>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionResponse*, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
