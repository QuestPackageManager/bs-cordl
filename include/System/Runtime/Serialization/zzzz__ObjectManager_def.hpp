#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectManager.hpp"
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
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
namespace System::Runtime::Serialization {
class FixupHolder;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
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
// CS Name: ::System.Runtime.Serialization::ObjectManager*
class CORDL_TYPE ObjectManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SpecialFixupObjects))::System::Runtime::Serialization::ObjectHolderList* SpecialFixupObjects;

  __declspec(property(get = get_TopObject, put = set_TopObject))::System::Object* TopObject;

  /// @brief Field m_context, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context))::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_fixupCount, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fixupCount, put = __cordl_internal_set_m_fixupCount)) int64_t m_fixupCount;

  /// @brief Field m_objects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objects,
                      put = __cordl_internal_set_m_objects))::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> m_objects;

  /// @brief Field m_onDeserializationHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_onDeserializationHandler,
                      put = __cordl_internal_set_m_onDeserializationHandler))::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;

  /// @brief Field m_onDeserializedHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_onDeserializedHandler,
                      put = __cordl_internal_set_m_onDeserializedHandler))::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;

  /// @brief Field m_selector, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_selector, put = __cordl_internal_set_m_selector))::System::Runtime::Serialization::ISurrogateSelector* m_selector;

  /// @brief Field m_specialFixupObjects, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_specialFixupObjects, put = __cordl_internal_set_m_specialFixupObjects))::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;

  /// @brief Field m_topObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_topObject, put = __cordl_internal_set_m_topObject))::System::Object* m_topObject;

  /// @brief Method AddObjectHolder, addr 0x2854234, size 0x12c, virtual false, abstract: false, final false
  inline void AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method AddOnDeserialization, addr 0x285788c, size 0x80, virtual true, abstract: false, final false
  inline void AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* handler);

  /// @brief Method AddOnDeserialized, addr 0x285790c, size 0x90, virtual true, abstract: false, final false
  inline void AddOnDeserialized(::System::Object* obj);

  /// @brief Method CanCallGetType, addr 0x2854078, size 0x8, virtual false, abstract: false, final false
  inline bool CanCallGetType(::System::Object* obj);

  /// @brief Method CompleteISerializableObject, addr 0x2854b04, size 0x290, virtual false, abstract: false, final false
  inline void CompleteISerializableObject(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method CompleteObject, addr 0x28556d0, size 0x620, virtual false, abstract: false, final false
  inline void CompleteObject(::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);

  /// @brief Method DoFixups, addr 0x2856c08, size 0x304, virtual true, abstract: false, final false
  inline void DoFixups();

  /// @brief Method DoNewlyRegisteredObjectFixups, addr 0x2855354, size 0xd8, virtual false, abstract: false, final false
  inline void DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method DoValueTypeFixup, addr 0x2854df4, size 0x560, virtual false, abstract: false, final false
  inline bool DoValueTypeFixup(::System::Reflection::FieldInfo* memberToFix, ::System::Runtime::Serialization::ObjectHolder* holder, ::System::Object* value);

  /// @brief Method FindObjectHolder, addr 0x2854104, size 0x58, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);

  /// @brief Method FindOrCreateObjectHolder, addr 0x285415c, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);

  /// @brief Method FixupSpecialObject, addr 0x2854668, size 0x238, virtual false, abstract: false, final false
  inline void FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* holder);

  /// @brief Method GetCompletionInfo, addr 0x2854360, size 0x2b8, virtual false, abstract: false, final false
  inline bool GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* fixup, ByRef<::System::Runtime::Serialization::ObjectHolder*> holder, ByRef<::System::Object*> member,
                                bool bThrowIfMissing);

  /// @brief Method GetConstructor, addr 0x2856ad0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeConstructorInfo* GetConstructor(::System::RuntimeType* t);

  /// @brief Method GetObject, addr 0x2855ef4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* GetObject(int64_t objectID);

  static inline ::System::Runtime::Serialization::ObjectManager* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                                                                          bool checkSecurity, bool isCrossAppDomain);

  /// @brief Method RaiseDeserializationEvent, addr 0x2857840, size 0x4c, virtual true, abstract: false, final false
  inline void RaiseDeserializationEvent();

  /// @brief Method RaiseOnDeserializedEvent, addr 0x285799c, size 0x84, virtual true, abstract: false, final false
  inline void RaiseOnDeserializedEvent(::System::Object* obj);

  /// @brief Method RaiseOnDeserializingEvent, addr 0x2857a20, size 0x84, virtual false, abstract: false, final false
  inline void RaiseOnDeserializingEvent(::System::Object* obj);

  /// @brief Method RecordArrayElementFixup, addr 0x28576d8, size 0x168, virtual true, abstract: false, final false
  inline void RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int32_t, ::Array<int32_t>*> indices, int64_t objectRequired);

  /// @brief Method RecordDelayedFixup, addr 0x2857570, size 0x168, virtual true, abstract: false, final false
  inline void RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired);

  /// @brief Method RecordFixup, addr 0x2857294, size 0x2a0, virtual true, abstract: false, final false
  inline void RecordFixup(int64_t objectToBeFixed, ::System::Reflection::MemberInfo* member, int64_t objectRequired);

  /// @brief Method RegisterFixup, addr 0x2857084, size 0xe0, virtual false, abstract: false, final false
  inline void RegisterFixup(::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);

  /// @brief Method RegisterObject, addr 0x285618c, size 0x5bc, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member,
                             ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  /// @brief Method RegisterString, addr 0x2855fa8, size 0x100, virtual false, abstract: false, final false
  inline void RegisterString(::StringW obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ::System::Reflection::MemberInfo* member);

  /// @brief Method ResolveObjectReference, addr 0x285542c, size 0x288, virtual false, abstract: false, final false
  inline bool ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* holder);

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_context();

  constexpr int64_t const& __cordl_internal_get_m_fixupCount() const;

  constexpr int64_t& __cordl_internal_get_m_fixupCount();

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> const& __cordl_internal_get_m_objects() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*>& __cordl_internal_get_m_objects();

  constexpr ::System::Runtime::Serialization::DeserializationEventHandler*& __cordl_internal_get_m_onDeserializationHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::DeserializationEventHandler*> const& __cordl_internal_get_m_onDeserializationHandler() const;

  constexpr ::System::Runtime::Serialization::SerializationEventHandler*& __cordl_internal_get_m_onDeserializedHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> const& __cordl_internal_get_m_onDeserializedHandler() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_m_selector();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __cordl_internal_get_m_selector() const;

  constexpr ::System::Runtime::Serialization::ObjectHolderList*& __cordl_internal_get_m_specialFixupObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolderList*> const& __cordl_internal_get_m_specialFixupObjects() const;

  constexpr ::System::Object*& __cordl_internal_get_m_topObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_topObject() const;

  constexpr void __cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_m_fixupCount(int64_t value);

  constexpr void __cordl_internal_set_m_objects(::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> value);

  constexpr void __cordl_internal_set_m_onDeserializationHandler(::System::Runtime::Serialization::DeserializationEventHandler* value);

  constexpr void __cordl_internal_set_m_onDeserializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value);

  constexpr void __cordl_internal_set_m_selector(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr void __cordl_internal_set_m_specialFixupObjects(::System::Runtime::Serialization::ObjectHolderList* value);

  constexpr void __cordl_internal_set_m_topObject(::System::Object* value);

  /// @brief Method .ctor, addr 0x2853ff8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain);

  /// @brief Method get_SpecialFixupObjects, addr 0x2854090, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();

  /// @brief Method get_TopObject, addr 0x2854088, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_TopObject();

  /// @brief Method set_TopObject, addr 0x2854080, size 0x8, virtual false, abstract: false, final false
  inline void set_TopObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectManager(ObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectManager(ObjectManager const&) = delete;

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
