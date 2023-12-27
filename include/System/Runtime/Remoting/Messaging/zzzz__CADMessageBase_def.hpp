#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADMessageBase)
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMessageBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADMessageBase);
// Type: System.Runtime.Remoting.Messaging::CADMessageBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3155))
// CS Name: ::System.Runtime.Remoting.Messaging::CADMessageBase*
class CORDL_TYPE CADMessageBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _args, offset 0x10, size 0x8
  __declspec(property(get = __get__args, put = __set__args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief Field _serializedArgs, offset 0x18, size 0x8
  __declspec(property(get = __get__serializedArgs, put = __set__serializedArgs))::ArrayW<uint8_t, ::Array<uint8_t>*> _serializedArgs;

  /// @brief Field _propertyCount, offset 0x20, size 0x4
  __declspec(property(get = __get__propertyCount, put = __set__propertyCount)) int32_t _propertyCount;

  /// @brief Field _callContext, offset 0x28, size 0x8
  __declspec(property(get = __get__callContext, put = __set__callContext))::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext;

  /// @brief Field serializedMethod, offset 0x30, size 0x8
  __declspec(property(get = __get_serializedMethod, put = __set_serializedMethod))::ArrayW<uint8_t, ::Array<uint8_t>*> serializedMethod;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__args();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__args() const;

  constexpr void __set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__serializedArgs();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__serializedArgs() const;

  constexpr void __set__serializedArgs(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__propertyCount();

  constexpr int32_t const& __get__propertyCount() const;

  constexpr void __set__propertyCount(int32_t value);

  constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& __get__callContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> const& __get__callContext() const;

  constexpr void __set__callContext(::System::Runtime::Remoting::Messaging::CADArgHolder* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serializedMethod();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serializedMethod() const;

  constexpr void __set_serializedMethod(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Runtime::Remoting::Messaging::CADMessageBase* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method .ctor addr 0x24a8568 size 0x94 virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method GetMethod addr 0x24a85fc size 0x80 virtual false final false
  inline ::System::Reflection::MethodBase* GetMethod();

  /// @brief Method GetSignature addr 0x24a867c size 0x1b0 virtual false final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetSignature(::System::Reflection::MethodBase* methodBase, bool load);

  /// @brief Method MarshalProperties addr 0x24a882c size 0x764 virtual false final false
  static inline int32_t MarshalProperties(::System::Collections::IDictionary* dict, ByRef<::System::Collections::ArrayList*> args);

  /// @brief Method UnmarshalProperties addr 0x24a9114 size 0x13c virtual false final false
  static inline void UnmarshalProperties(::System::Collections::IDictionary* dict, int32_t count, ::System::Collections::ArrayList* args);

  /// @brief Method IsPossibleToIgnoreMarshal addr 0x24a9250 size 0x1b0 virtual false final false
  static inline bool IsPossibleToIgnoreMarshal(::System::Object* obj);

  /// @brief Method MarshalArgument addr 0x24a9400 size 0x1c4 virtual false final false
  inline ::System::Object* MarshalArgument(::System::Object* arg, ByRef<::System::Collections::ArrayList*> args);

  /// @brief Method UnmarshalArgument addr 0x24a95c4 size 0x72c virtual false final false
  inline ::System::Object* UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* args);

  /// @brief Method MarshalArguments addr 0x24a9cf0 size 0x100 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> MarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ByRef<::System::Collections::ArrayList*> args);

  /// @brief Method UnmarshalArguments addr 0x24a9df0 size 0x100 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnmarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ::System::Collections::ArrayList* args);

  /// @brief Method SaveLogicalCallContext addr 0x24a9ef0 size 0x23c virtual false final false
  inline void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg, ByRef<::System::Collections::ArrayList*> serializeList);

  /// @brief Method GetLogicalCallContext addr 0x24aa12c size 0x88 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* args);

  // Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMessageBase(CADMessageBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMessageBase(CADMessageBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMessageBase();

public:
  /// @brief Field _args, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____args;

  /// @brief Field _serializedArgs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____serializedArgs;

  /// @brief Field _propertyCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____propertyCount;

  /// @brief Field _callContext, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CADArgHolder* ____callContext;

  /// @brief Field serializedMethod, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serializedMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMessageBase, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMessageBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMessageBase*, "System.Runtime.Remoting.Messaging", "CADMessageBase");
