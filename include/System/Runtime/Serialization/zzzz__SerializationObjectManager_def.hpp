#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationObjectManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationObjectManager);
// Dependencies System.Object, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationObjectManager
class CORDL_TYPE SerializationObjectManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _context, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Runtime::Serialization::StreamingContext _context;

  /// @brief Field _objectSeenTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objectSeenTable,
                      put = __cordl_internal_set__objectSeenTable)) ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _objectSeenTable;

  /// @brief Field _onSerializedHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onSerializedHandler,
                      put = __cordl_internal_set__onSerializedHandler)) ::System::Runtime::Serialization::SerializationEventHandler* _onSerializedHandler;

  /// @brief Method AddOnSerialized, addr 0x3ceff10, size 0x90, virtual false, abstract: false, final false
  inline void AddOnSerialized(::System::Object* obj);

  static inline ::System::Runtime::Serialization::SerializationObjectManager* New_ctor(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method RaiseOnSerializedEvent, addr 0x3ceffa0, size 0x20, virtual false, abstract: false, final false
  inline void RaiseOnSerializedEvent();

  /// @brief Method RegisterObject, addr 0x3cefe00, size 0x110, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj);

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get__context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get__context();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__objectSeenTable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__objectSeenTable();

  constexpr ::System::Runtime::Serialization::SerializationEventHandler* const& __cordl_internal_get__onSerializedHandler() const;

  constexpr ::System::Runtime::Serialization::SerializationEventHandler*& __cordl_internal_get__onSerializedHandler();

  constexpr void __cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set__objectSeenTable(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__onSerializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value);

  /// @brief Method .ctor, addr 0x3cefd6c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationObjectManager(SerializationObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationObjectManager(SerializationObjectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3210 };

  /// @brief Field _objectSeenTable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ____objectSeenTable;

  /// @brief Field _context, offset: 0x18, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ____context;

  /// @brief Field _onSerializedHandler, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationEventHandler* ____onSerializedHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____objectSeenTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationObjectManager, ____onSerializedHandler) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationObjectManager, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationObjectManager*, "System.Runtime.Serialization", "SerializationObjectManager");
