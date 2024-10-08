#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationEvents)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEvents;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEvents);
// Type: System.Runtime.Serialization::SerializationEvents
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::SerializationEvents*
class CORDL_TYPE SerializationEvents : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasOnSerializingEvents)) bool HasOnSerializingEvents;

  /// @brief Field _onDeserializedMethods, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onDeserializedMethods,
                      put = __cordl_internal_set__onDeserializedMethods)) ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onDeserializedMethods;

  /// @brief Field _onDeserializingMethods, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onDeserializingMethods,
                      put = __cordl_internal_set__onDeserializingMethods)) ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onDeserializingMethods;

  /// @brief Field _onSerializedMethods, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__onSerializedMethods,
                      put = __cordl_internal_set__onSerializedMethods)) ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onSerializedMethods;

  /// @brief Field _onSerializingMethods, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__onSerializingMethods,
                      put = __cordl_internal_set__onSerializingMethods)) ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* _onSerializingMethods;

  /// @brief Method AddOnDelegate, addr 0x3c7e7e4, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler,
                                                                                           ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods);

  /// @brief Method AddOnDeserialized, addr 0x3c7ea20, size 0x14, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);

  /// @brief Method AddOnSerialized, addr 0x3c7e7d0, size 0x14, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::System::Object* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);

  /// @brief Method GetMethodsWithAttribute, addr 0x3c7e424, size 0x240, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethodsWithAttribute(::System::Type* attribute, ::System::Type* t);

  /// @brief Method InvokeOnDelegate, addr 0x3c7e6d8, size 0x50, virtual false, abstract: false, final false
  static inline void InvokeOnDelegate(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context,
                                      ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* methods);

  /// @brief Method InvokeOnDeserialized, addr 0x3c7e77c, size 0x54, virtual false, abstract: false, final false
  inline void InvokeOnDeserialized(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnDeserializing, addr 0x3c7e728, size 0x54, virtual false, abstract: false, final false
  inline void InvokeOnDeserializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvokeOnSerializing, addr 0x3c7e684, size 0x54, virtual false, abstract: false, final false
  inline void InvokeOnSerializing(::System::Object* obj, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Serialization::SerializationEvents* New_ctor(::System::Type* t);

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __cordl_internal_get__onDeserializedMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __cordl_internal_get__onDeserializedMethods() const;

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __cordl_internal_get__onDeserializingMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __cordl_internal_get__onDeserializingMethods() const;

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __cordl_internal_get__onSerializedMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __cordl_internal_get__onSerializedMethods() const;

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& __cordl_internal_get__onSerializingMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> const& __cordl_internal_get__onSerializingMethods() const;

  constexpr void __cordl_internal_set__onDeserializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr void __cordl_internal_set__onDeserializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr void __cordl_internal_set__onSerializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  constexpr void __cordl_internal_set__onSerializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* value);

  /// @brief Method .ctor, addr 0x3c7e2f0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

  /// @brief Method get_HasOnSerializingEvents, addr 0x3c7e664, size 0x20, virtual false, abstract: false, final false
  inline bool get_HasOnSerializingEvents();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationEvents(SerializationEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationEvents(SerializationEvents const&) = delete;

  /// @brief Field _onSerializingMethods, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onSerializingMethods;

  /// @brief Field _onSerializedMethods, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onSerializedMethods;

  /// @brief Field _onDeserializingMethods, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onDeserializingMethods;

  /// @brief Field _onDeserializedMethods, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ____onDeserializedMethods;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3207 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEvents, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEvents, ____onSerializingMethods) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEvents, ____onSerializedMethods) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEvents, ____onDeserializingMethods) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationEvents, ____onDeserializedMethods) == 0x28, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEvents);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEvents*, "System.Runtime.Serialization", "SerializationEvents");
