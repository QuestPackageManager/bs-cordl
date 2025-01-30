#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADMethodCallMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
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
// Dependencies System.Runtime.Remoting.Messaging.CADMessageBase
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.CADMethodCallMessage
class CORDL_TYPE CADMethodCallMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
public:
  // Declarations
  __declspec(property(get = get_PropertiesCount)) int32_t PropertiesCount;

  __declspec(property(get = get_Uri)) ::StringW Uri;

  /// @brief Field _uri, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri)) ::StringW _uri;

  /// @brief Method Create, addr 0x3ce564c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg);

  /// @brief Method GetArgs, addr 0x3cebc98, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Collections::ArrayList* args);

  /// @brief Method GetArguments, addr 0x3cebb60, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetArguments();

  static inline ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg);

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr void __cordl_internal_set__uri(::StringW value);

  /// @brief Method .ctor, addr 0x3ceb974, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg);

  /// @brief Method get_PropertiesCount, addr 0x3cebca8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PropertiesCount();

  /// @brief Method get_Uri, addr 0x3ceb96c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Uri();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMethodCallMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMethodCallMessage(CADMethodCallMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodCallMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMethodCallMessage(CADMethodCallMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3155 };

  /// @brief Field _uri, offset: 0x38, size: 0x8, def value: None
  ::StringW ____uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodCallMessage, ____uri) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMethodCallMessage, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
