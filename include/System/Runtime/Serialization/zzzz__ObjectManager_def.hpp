#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectManager)
namespace System::Runtime::Serialization {
class FixupHolder;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectManager);
// Type: System.Runtime.Serialization::ObjectManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3234)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3216))
// CS Name: ::System.Runtime.Serialization::ObjectManager*
class CORDL_TYPE ObjectManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_onDeserializationHandler, offset 0x10, size 0x8
  __declspec(property(get = __get_m_onDeserializationHandler, put = __set_m_onDeserializationHandler))::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;

  /// @brief Field m_onDeserializedHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_m_onDeserializedHandler, put = __set_m_onDeserializedHandler))::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;

  /// @brief Field m_objects, offset 0x20, size 0x8
  __declspec(property(get = __get_m_objects, put = __set_m_objects))::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> m_objects;

  /// @brief Field m_topObject, offset 0x28, size 0x8
  __declspec(property(get = __get_m_topObject, put = __set_m_topObject))::System::Object* m_topObject;

  /// @brief Field m_specialFixupObjects, offset 0x30, size 0x8
  __declspec(property(get = __get_m_specialFixupObjects, put = __set_m_specialFixupObjects))::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;

  /// @brief Field m_fixupCount, offset 0x38, size 0x8
  __declspec(property(get = __get_m_fixupCount, put = __set_m_fixupCount)) int64_t m_fixupCount;

  /// @brief Field m_selector, offset 0x40, size 0x8
  __declspec(property(get = __get_m_selector, put = __set_m_selector))::System::Runtime::Serialization::ISurrogateSelector* m_selector;

  /// @brief Field m_context, offset 0x48, size 0x10
  __declspec(property(get = __get_m_context, put = __set_m_context))::System::Runtime::Serialization::StreamingContext m_context;

  __declspec(property(get = get_TopObject, put = set_TopObject))::System::Object* TopObject;

  __declspec(property(get = get_SpecialFixupObjects))::System::Runtime::Serialization::ObjectHolderList* SpecialFixupObjects;

  constexpr ::System::Runtime::Serialization::DeserializationEventHandler*& __get_m_onDeserializationHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::DeserializationEventHandler*> const& __get_m_onDeserializationHandler() const;

  constexpr void __set_m_onDeserializationHandler(::System::Runtime::Serialization::DeserializationEventHandler* value);

  constexpr ::System::Runtime::Serialization::SerializationEventHandler*& __get_m_onDeserializedHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> const& __get_m_onDeserializedHandler() const;

  constexpr void __set_m_onDeserializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value);

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*>& __get_m_objects();

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> const& __get_m_objects() const;

  constexpr void __set_m_objects(::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> value);

  constexpr ::System::Object*& __get_m_topObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_topObject() const;

  constexpr void __set_m_topObject(::System::Object* value);

  constexpr ::System::Runtime::Serialization::ObjectHolderList*& __get_m_specialFixupObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolderList*> const& __get_m_specialFixupObjects() const;

  constexpr void __set_m_specialFixupObjects(::System::Runtime::Serialization::ObjectHolderList* value);

  constexpr int64_t& __get_m_fixupCount();

  constexpr int64_t const& __get_m_fixupCount() const;

  constexpr void __set_m_fixupCount(int64_t value);

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __get_m_selector();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __get_m_selector() const;

  constexpr void __set_m_selector(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get_m_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get_m_context() const;

  constexpr void __set_m_context(::System::Runtime::Serialization::StreamingContext value);

  static inline ::System::Runtime::Serialization::ObjectManager* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                                                                          bool checkSecurity, bool isCrossAppDomain);

  /// @brief Method .ctor addr 0x236012c size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain);

  /// @brief Method CanCallGetType addr 0x23601ac size 0x8 virtual false final false
  inline bool CanCallGetType(::System::Object* obj);

  /// @brief Method set_TopObject addr 0x23601b4 size 0x8 virtual false final false
  inline void set_TopObject(::System::Object* value);

  /// @brief Method get_TopObject addr 0x23601bc size 0x8 virtual false final false
  inline ::System::Object* get_TopObject();

  /// @brief Method get_SpecialFixupObjects addr 0x23601c4 size 0x6c virtual false final false
  inline ::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();

  /// @brief Method FindObjectHolder addr 0x2360238 size 0x58 virtual false final false
  inline ::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);

  /// @brief Method FindOrCreateObjectHolder addr 0x2360290 size 0xa4 virtual false final false
  inline ::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);

  /// @brief Method AddObjectHolder addr 0x2360368 size 0x12c virtual false final false
  inline void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method GetCompletionInfo addr 0x2360494 size 0x2b8 virtual false final false
  inline bool GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* fixup, ByRef<::System::Runtime::Serialization::ObjectHolder*> holder, ByRef<::System::Object*> member,
                                bool bThrowIfMissing);

  /// @brief Method FixupSpecialObject addr 0x236079c size 0x238 virtual false final false
  inline void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method ResolveObjectReference addr 0x2361560 size 0x288 virtual false final false
  inline bool ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method DoValueTypeFixup addr 0x2360f28 size 0x560 virtual false final false
  inline bool DoValueTypeFixup(::System::Reflection::FieldInfo* memberToFix, ::System::Runtime::Serialization::ObjectHolder* holder, ::System::Object* value);

  /// @brief Method CompleteObject addr 0x2361804 size 0x620 virtual false final false
  inline void CompleteObject(::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);

  /// @brief Method DoNewlyRegisteredObjectFixups addr 0x2361488 size 0xd8 virtual false final false
  inline void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method GetObject addr 0x2362028 size 0xb4 virtual true final false
  inline ::System::Object* GetObject(int64_t objectID);

  /// @brief Method RegisterString addr 0x23620dc size 0x100 virtual false final false
  inline void RegisterString(::StringW obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member);

  /// @brief Method RegisterObject addr 0x23622c0 size 0x5bc virtual false final false
  inline void RegisterObject(::System::Object* obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member,
                             ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  /// @brief Method CompleteISerializableObject addr 0x2360c38 size 0x290 virtual false final false
  inline void CompleteISerializableObject(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetConstructor addr 0x2362c04 size 0x138 virtual false final false
  static inline ::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* t);

  /// @brief Method DoFixups addr 0x2362d3c size 0x304 virtual true final false
  inline void DoFixups();

  /// @brief Method RegisterFixup addr 0x23631b8 size 0xe0 virtual false final false
  inline void RegisterFixup(::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);

  /// @brief Method RecordFixup addr 0x23633c8 size 0x2a0 virtual true final false
  inline void RecordFixup(int64_t objectToBeFixed, ::System::Reflection::MemberInfo* member, int64_t objectRequired);

  /// @brief Method RecordDelayedFixup addr 0x23636a4 size 0x168 virtual true final false
  inline void RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired);

  /// @brief Method RecordArrayElementFixup addr 0x236380c size 0x168 virtual true final false
  inline void RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int32_t, ::Array<int32_t>*> indices, int64_t objectRequired);

  /// @brief Method RaiseDeserializationEvent addr 0x2363974 size 0x4c virtual true final false
  inline void RaiseDeserializationEvent();

  /// @brief Method AddOnDeserialization addr 0x23639c0 size 0x80 virtual true final false
  inline void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* handler);

  /// @brief Method AddOnDeserialized addr 0x2363a40 size 0x90 virtual true final false
  inline void AddOnDeserialized(::System::Object* obj);

  /// @brief Method RaiseOnDeserializedEvent addr 0x2363ad0 size 0x84 virtual true final false
  inline void RaiseOnDeserializedEvent(::System::Object* obj);

  /// @brief Method RaiseOnDeserializingEvent addr 0x2363b54 size 0x84 virtual false final false
  inline void RaiseOnDeserializingEvent(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectManager(ObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectManager(ObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectManager();

public:
  /// @brief Field m_onDeserializationHandler, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::DeserializationEventHandler* ___m_onDeserializationHandler;

  /// @brief Field m_onDeserializedHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationEventHandler* ___m_onDeserializedHandler;

  /// @brief Field m_objects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> ___m_objects;

  /// @brief Field m_topObject, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___m_topObject;

  /// @brief Field m_specialFixupObjects, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectHolderList* ___m_specialFixupObjects;

  /// @brief Field m_fixupCount, offset: 0x38, size: 0x8, def value: None
  int64_t ___m_fixupCount;

  /// @brief Field m_selector, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___m_selector;

  /// @brief Field m_context, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_onDeserializationHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_onDeserializedHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_objects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_topObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_specialFixupObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_fixupCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_selector) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectManager, ___m_context) == 0x48, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectManager*, "System.Runtime.Serialization", "ObjectManager");
