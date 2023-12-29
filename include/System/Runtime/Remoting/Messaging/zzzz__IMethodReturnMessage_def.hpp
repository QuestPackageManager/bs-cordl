#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IMethodReturnMessage)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IMethodReturnMessage);
// Type: System.Runtime.Remoting.Messaging::IMethodReturnMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3172))
// CS Name: ::System.Runtime.Remoting.Messaging::IMethodReturnMessage*
class CORDL_TYPE IMethodReturnMessage {
public:
  // Declarations
  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_OutArgs))::ArrayW<::System::Object*, ::Array<::System::Object*>*> OutArgs;

  __declspec(property(get = get_ReturnValue))::System::Object* ReturnValue;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Method get_Exception addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_OutArgs addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_OutArgs();

  /// @brief Method get_ReturnValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_ReturnValue();

  // Ctor Parameters [CppParam { name: "", ty: "IMethodReturnMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMethodReturnMessage(IMethodReturnMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMethodReturnMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMethodReturnMessage(IMethodReturnMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMethodReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
