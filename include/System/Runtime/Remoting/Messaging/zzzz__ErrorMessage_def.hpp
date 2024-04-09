#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorMessage)
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ErrorMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ErrorMessage);
// Type: System.Runtime.Remoting.Messaging::ErrorMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ErrorMessage*
class CORDL_TYPE ErrorMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase))::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName))::StringW MethodName;

  __declspec(property(get = get_MethodSignature))::System::Object* MethodSignature;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_Uri))::StringW Uri;

  /// @brief Field _uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri))::StringW _uri;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Method GetArg, addr 0x272a2cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* GetArg(int32_t arg_num);

  static inline ::System::Runtime::Remoting::Messaging::ErrorMessage* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr void __cordl_internal_set__uri(::StringW value);

  /// @brief Method .ctor, addr 0x27205a0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ArgCount, addr 0x272a21c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args, addr 0x272a224, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_LogicalCallContext, addr 0x272a2d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_MethodBase, addr 0x272a22c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName, addr 0x272a234, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature, addr 0x272a274, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_Properties, addr 0x272a27c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_TypeName, addr 0x272a284, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri, addr 0x272a2c4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Uri();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorMessage(ErrorMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorMessage(ErrorMessage const&) = delete;

  /// @brief Field _uri, offset: 0x10, size: 0x8, def value: None
  ::StringW ____uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ErrorMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ErrorMessage, ____uri) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ErrorMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ErrorMessage*, "System.Runtime.Remoting.Messaging", "ErrorMessage");
