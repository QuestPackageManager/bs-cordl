#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationEvents)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEvents;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEvents);
// Type: System.Runtime.Serialization::SerializationEvents
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3207))
// CS Name: ::System.Runtime.Serialization::SerializationEvents*
class CORDL_TYPE SerializationEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field _onSerializingMethods, offset 0x10, size 0x8
  __declspec(property(get = __get__onSerializingMethods, put = __set__onSerializingMethods))::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onSerializingMethods;

  /// @brief Field _onSerializedMethods, offset 0x18, size 0x8
  __declspec(property(get = __get__onSerializedMethods, put = __set__onSerializedMethods))::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onSerializedMethods;

  /// @brief Field _onDeserializingMethods, offset 0x20, size 0x8
  __declspec(property(get = __get__onDeserializingMethods, put = __set__onDeserializingMethods))::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onDeserializingMethods;

  /// @brief Field _onDeserializedMethods, offset 0x28, size 0x8
  __declspec(property(get = __get__onDeserializedMethods, put = __set__onDeserializedMethods))::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onDeserializedMethods;

  __declspec(property(get = get_HasOnSerializingEvents)) bool HasOnSerializingEvents;

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __get__onSerializingMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __get__onSerializingMethods() const;

  constexpr void __set__onSerializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __get__onSerializedMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __get__onSerializedMethods() const;

  constexpr void __set__onSerializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __get__onDeserializingMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __get__onDeserializingMethods() const;

  constexpr void __set__onDeserializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __get__onDeserializedMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __get__onDeserializedMethods() const;

  constexpr void __set__onDeserializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  static inline ::System::Runtime::Serialization::SerializationEvents* New_ctor(::System::Type* t);

  /// @brief Method .ctor addr 0x24b4f7c size 0x134 virtual false final false
  inline void _ctor(::System::Type* t);

  /// @brief Method GetMethodsWithAttribute addr 0x24b50b0 size 0x244 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethodsWithAttribute(::System::Type* attribute, ::System::Type* t);

  /// @brief Method get_HasOnSerializingEvents addr 0x24b52f4 size 0x20 virtual false final false
  inline bool get_HasOnSerializingEvents();

  /// @brief Method InvokeOnSerializing addr 0x24b5314 size 0x54 virtual false final false
  inline void InvokeOnSerializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnDeserializing addr 0x24b53b8 size 0x54 virtual false final false
  inline void InvokeOnDeserializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnDeserialized addr 0x24b540c size 0x54 virtual false final false
  inline void InvokeOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method AddOnSerialized addr 0x24b5460 size 0x14 virtual false final false
  inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);

  /// @brief Method AddOnDeserialized addr 0x24b56b0 size 0x14 virtual false final false
  inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);

  /// @brief Method InvokeOnDelegate addr 0x24b5368 size 0x50 virtual false final false
  static inline void InvokeOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context,
                                      ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods);

  /// @brief Method AddOnDelegate addr 0x24b5474 size 0x23c virtual false final false
  static inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler,
                                                                                           ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods);

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationEvents(SerializationEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationEvents(SerializationEvents const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEvents();

public:
  /// @brief Field _onSerializingMethods, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onSerializingMethods;

  /// @brief Field _onSerializedMethods, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onSerializedMethods;

  /// @brief Field _onDeserializingMethods, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onDeserializingMethods;

  /// @brief Field _onDeserializedMethods, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onDeserializedMethods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEvents, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEvents);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEvents*, "System.Runtime.Serialization", "SerializationEvents");
