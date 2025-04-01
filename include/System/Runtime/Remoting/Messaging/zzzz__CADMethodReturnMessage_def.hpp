#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADMethodReturnMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADMethodReturnMessage)
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage);
// Dependencies System.Runtime.Remoting.Messaging.CADMessageBase
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
class CORDL_TYPE CADMethodReturnMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
public:
  // Declarations
  __declspec(property(get = get_PropertiesCount)) int32_t PropertiesCount;

  /// @brief Field _exception, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception)) ::System::Runtime::Remoting::Messaging::CADArgHolder* _exception;

  /// @brief Field _returnValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValue, put = __cordl_internal_set__returnValue)) ::System::Object* _returnValue;

  /// @brief Field _sig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sig, put = __cordl_internal_set__sig)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _sig;

  /// @brief Method Create, addr 0x3ce5308, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg);

  /// @brief Method GetArgs, addr 0x3ce5838, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Collections::ArrayList* args);

  /// @brief Method GetArguments, addr 0x3ce5700, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetArguments();

  /// @brief Method GetException, addr 0x3ce5858, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Exception* GetException(::System::Collections::ArrayList* args);

  /// @brief Method GetReturnValue, addr 0x3ce5848, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* GetReturnValue(::System::Collections::ArrayList* args);

  static inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);

  constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder* const& __cordl_internal_get__exception() const;

  constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& __cordl_internal_get__exception();

  constexpr ::System::Object* const& __cordl_internal_get__returnValue() const;

  constexpr ::System::Object*& __cordl_internal_get__returnValue();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__sig() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__sig();

  constexpr void __cordl_internal_set__exception(::System::Runtime::Remoting::Messaging::CADArgHolder* value);

  constexpr void __cordl_internal_set__returnValue(::System::Object* value);

  constexpr void __cordl_internal_set__sig(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x3ce5388, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);

  /// @brief Method get_PropertiesCount, addr 0x3ce58fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PropertiesCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMethodReturnMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMethodReturnMessage(CADMethodReturnMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMethodReturnMessage(CADMethodReturnMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3156 };

  /// @brief Field _returnValue, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____returnValue;

  /// @brief Field _exception, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CADArgHolder* ____exception;

  /// @brief Field _sig, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, ____returnValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, ____exception) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, ____sig) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
