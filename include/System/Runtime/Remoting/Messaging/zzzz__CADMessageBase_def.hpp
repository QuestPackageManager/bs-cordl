#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADMessageBase)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
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
namespace System {
class Type;
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
// CS Name: ::System.Runtime.Remoting.Messaging::CADMessageBase*
class CORDL_TYPE CADMessageBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _args, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__args, put = __cordl_internal_set__args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief Field _callContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__callContext, put = __cordl_internal_set__callContext))::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext;

  /// @brief Field _propertyCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyCount, put = __cordl_internal_set__propertyCount)) int32_t _propertyCount;

  /// @brief Field _serializedArgs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedArgs, put = __cordl_internal_set__serializedArgs))::ArrayW<uint8_t, ::Array<uint8_t>*> _serializedArgs;

  /// @brief Field serializedMethod, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedMethod, put = __cordl_internal_set_serializedMethod))::ArrayW<uint8_t, ::Array<uint8_t>*> serializedMethod;

  /// @brief Method GetLogicalCallContext, addr 0x272be88, size 0x88, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* args);

  /// @brief Method GetMethod, addr 0x272a3c8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodBase* GetMethod();

  /// @brief Method GetSignature, addr 0x272a448, size 0x1b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetSignature(::System::Reflection::MethodBase* methodBase, bool load);

  /// @brief Method IsPossibleToIgnoreMarshal, addr 0x272b01c, size 0x1b0, virtual false, abstract: false, final false
  static inline bool IsPossibleToIgnoreMarshal(::System::Object* obj);

  /// @brief Method MarshalArgument, addr 0x272b1cc, size 0x158, virtual false, abstract: false, final false
  inline ::System::Object* MarshalArgument(::System::Object* arg, ByRef<::System::Collections::ArrayList*> args);

  /// @brief Method MarshalArguments, addr 0x272ba4c, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> MarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ByRef<::System::Collections::ArrayList*> args);

  /// @brief Method MarshalProperties, addr 0x272a5f8, size 0x764, virtual false, abstract: false, final false
  static inline int32_t MarshalProperties(::System::Collections::IDictionary* dict, ByRef<::System::Collections::ArrayList*> args);

  static inline ::System::Runtime::Remoting::Messaging::CADMessageBase* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method SaveLogicalCallContext, addr 0x272bc4c, size 0x23c, virtual false, abstract: false, final false
  inline void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg, ByRef<::System::Collections::ArrayList*> serializeList);

  /// @brief Method UnmarshalArgument, addr 0x272b324, size 0x728, virtual false, abstract: false, final false
  inline ::System::Object* UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* args);

  /// @brief Method UnmarshalArguments, addr 0x272bb4c, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnmarshalArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments, ::System::Collections::ArrayList* args);

  /// @brief Method UnmarshalProperties, addr 0x272aee0, size 0x13c, virtual false, abstract: false, final false
  static inline void UnmarshalProperties(::System::Collections::IDictionary* dict, int32_t count, ::System::Collections::ArrayList* args);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__args() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__args();

  constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& __cordl_internal_get__callContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> const& __cordl_internal_get__callContext() const;

  constexpr int32_t const& __cordl_internal_get__propertyCount() const;

  constexpr int32_t& __cordl_internal_get__propertyCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__serializedArgs() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__serializedArgs();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_serializedMethod() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_serializedMethod();

  constexpr void __cordl_internal_set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::CADArgHolder* value);

  constexpr void __cordl_internal_set__propertyCount(int32_t value);

  constexpr void __cordl_internal_set__serializedArgs(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_serializedMethod(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x272a334, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMessageBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMessageBase(CADMessageBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMessageBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMessageBase(CADMessageBase const&) = delete;

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

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMessageBase, ____args) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMessageBase, ____serializedArgs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMessageBase, ____propertyCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMessageBase, ____callContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMessageBase, ___serializedMethod) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMessageBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMessageBase*, "System.Runtime.Remoting.Messaging", "CADMessageBase");
