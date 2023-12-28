#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADMethodCallMessage)
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADMethodCallMessage);
// Type: System.Runtime.Remoting.Messaging::CADMethodCallMessage
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3155))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3156))
// CS Name: ::System.Runtime.Remoting.Messaging::CADMethodCallMessage*
class CORDL_TYPE CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
public:
  // Declarations
  /// @brief Field _uri, offset 0x38, size 0x8
  __declspec(property(get = __get__uri, put = __set__uri))::StringW _uri;

  __declspec(property(get = get_Uri))::StringW Uri;

  __declspec(property(get = get_PropertiesCount)) int32_t PropertiesCount;

  constexpr ::StringW& __get__uri();

  constexpr ::StringW const& __get__uri() const;

  constexpr void __set__uri(::StringW value);

  /// @brief Method get_Uri addr 0x24aa1b4 size 0x8 virtual false final false
  inline ::StringW get_Uri();

  /// @brief Method Create addr 0x24a3920 size 0x90 virtual false final false
  static inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg);

  static inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg);

  /// @brief Method .ctor addr 0x24aa1bc size 0x1f0 virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg);

  /// @brief Method GetArguments addr 0x24aa3ac size 0x140 virtual false final false
  inline ::System::Collections::ArrayList* GetArguments();

  /// @brief Method GetArgs addr 0x24aa4ec size 0x10 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Collections::ArrayList* args);

  /// @brief Method get_PropertiesCount addr 0x24aa4fc size 0x8 virtual false final false
  inline int32_t get_PropertiesCount();

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMethodCallMessage(CADMethodCallMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMethodCallMessage(CADMethodCallMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMethodCallMessage();

public:
  /// @brief Field _uri, offset: 0x38, size: 0x8, def value: None
  ::StringW ____uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMethodCallMessage, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
