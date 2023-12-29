#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationObjectManager)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationObjectManager);
// Type: System.Runtime.Serialization::SerializationObjectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3234))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3209))
// CS Name: ::System.Runtime.Serialization::SerializationObjectManager*
class CORDL_TYPE SerializationObjectManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objectSeenTable, offset 0x10, size 0x8
  __declspec(property(get = __get__objectSeenTable, put = __set__objectSeenTable))::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _objectSeenTable;

  /// @brief Field _context, offset 0x18, size 0x10
  __declspec(property(get = __get__context, put = __set__context))::System::Runtime::Serialization::StreamingContext _context;

  /// @brief Field _onSerializedHandler, offset 0x28, size 0x8
  __declspec(property(get = __get__onSerializedHandler, put = __set__onSerializedHandler))::System::Runtime::Serialization::SerializationEventHandler* _onSerializedHandler;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*& __get__objectSeenTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*> const& __get__objectSeenTable() const;

  constexpr void __set__objectSeenTable(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get__context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get__context() const;

  constexpr void __set__context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Runtime::Serialization::SerializationEventHandler*& __get__onSerializedHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> const& __get__onSerializedHandler() const;

  constexpr void __set__onSerializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value);

  static inline ::System::Runtime::Serialization::SerializationObjectManager* New_ctor(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x235ce5c size 0x94 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method RegisterObject addr 0x235cef0 size 0x110 virtual false final false
  inline void RegisterObject(::System::Object* obj);

  /// @brief Method RaiseOnSerializedEvent addr 0x235d090 size 0x20 virtual false final false
  inline void RaiseOnSerializedEvent();

  /// @brief Method AddOnSerialized addr 0x235d000 size 0x90 virtual false final false
  inline void AddOnSerialized(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationObjectManager(SerializationObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationObjectManager(SerializationObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationObjectManager();

public:
  /// @brief Field _objectSeenTable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ____objectSeenTable;

  /// @brief Field _context, offset: 0x18, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ____context;

  /// @brief Field _onSerializedHandler, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationEventHandler* ____onSerializedHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationObjectManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____objectSeenTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____onSerializedHandler) == 0x28, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationObjectManager*, "System.Runtime.Serialization", "SerializationObjectManager");
