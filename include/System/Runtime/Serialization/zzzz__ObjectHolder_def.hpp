#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHolder)
namespace System::Runtime::Serialization {
class FixupHolderList;
}
namespace System::Runtime::Serialization {
class LongList;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ValueTypeFixupInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class TypeLoadExceptionHolder;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class FixupHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectHolder);
// Type: System.Runtime.Serialization::ObjectHolder
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3218))
// CS Name: ::System.Runtime.Serialization::ObjectHolder*
class CORDL_TYPE ObjectHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_object, offset 0x10, size 0x8
  __declspec(property(get = __get_m_object, put = __set_m_object))::System::Object* m_object;

  /// @brief Field m_id, offset 0x18, size 0x8
  __declspec(property(get = __get_m_id, put = __set_m_id)) int64_t m_id;

  /// @brief Field m_missingElementsRemaining, offset 0x20, size 0x4
  __declspec(property(get = __get_m_missingElementsRemaining, put = __set_m_missingElementsRemaining)) int32_t m_missingElementsRemaining;

  /// @brief Field m_missingDecendents, offset 0x24, size 0x4
  __declspec(property(get = __get_m_missingDecendents, put = __set_m_missingDecendents)) int32_t m_missingDecendents;

  /// @brief Field m_serInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_m_serInfo, put = __set_m_serInfo))::System::Runtime::Serialization::SerializationInfo* m_serInfo;

  /// @brief Field m_surrogate, offset 0x30, size 0x8
  __declspec(property(get = __get_m_surrogate, put = __set_m_surrogate))::System::Runtime::Serialization::ISerializationSurrogate* m_surrogate;

  /// @brief Field m_missingElements, offset 0x38, size 0x8
  __declspec(property(get = __get_m_missingElements, put = __set_m_missingElements))::System::Runtime::Serialization::FixupHolderList* m_missingElements;

  /// @brief Field m_dependentObjects, offset 0x40, size 0x8
  __declspec(property(get = __get_m_dependentObjects, put = __set_m_dependentObjects))::System::Runtime::Serialization::LongList* m_dependentObjects;

  /// @brief Field m_next, offset 0x48, size 0x8
  __declspec(property(get = __get_m_next, put = __set_m_next))::System::Runtime::Serialization::ObjectHolder* m_next;

  /// @brief Field m_flags, offset 0x50, size 0x4
  __declspec(property(get = __get_m_flags, put = __set_m_flags)) int32_t m_flags;

  /// @brief Field m_markForFixupWhenAvailable, offset 0x54, size 0x1
  __declspec(property(get = __get_m_markForFixupWhenAvailable, put = __set_m_markForFixupWhenAvailable)) bool m_markForFixupWhenAvailable;

  /// @brief Field m_valueFixup, offset 0x58, size 0x8
  __declspec(property(get = __get_m_valueFixup, put = __set_m_valueFixup))::System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup;

  /// @brief Field m_typeLoad, offset 0x60, size 0x8
  __declspec(property(get = __get_m_typeLoad, put = __set_m_typeLoad))::System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad;

  /// @brief Field m_reachable, offset 0x68, size 0x1
  __declspec(property(get = __get_m_reachable, put = __set_m_reachable)) bool m_reachable;

  __declspec(property(get = get_IsIncompleteObjectReference, put = set_IsIncompleteObjectReference)) bool IsIncompleteObjectReference;

  __declspec(property(get = get_RequiresDelayedFixup)) bool RequiresDelayedFixup;

  __declspec(property(get = get_RequiresValueTypeFixup)) bool RequiresValueTypeFixup;

  __declspec(property(get = get_ValueTypeFixupPerformed, put = set_ValueTypeFixupPerformed)) bool ValueTypeFixupPerformed;

  __declspec(property(get = get_HasISerializable)) bool HasISerializable;

  __declspec(property(get = get_HasSurrogate)) bool HasSurrogate;

  __declspec(property(get = get_CanSurrogatedObjectValueChange)) bool CanSurrogatedObjectValueChange;

  __declspec(property(get = get_CanObjectValueChange)) bool CanObjectValueChange;

  __declspec(property(get = get_DirectlyDependentObjects)) int32_t DirectlyDependentObjects;

  __declspec(property(get = get_TotalDependentObjects)) int32_t TotalDependentObjects;

  __declspec(property(get = get_Reachable, put = set_Reachable)) bool Reachable;

  __declspec(property(get = get_TypeLoadExceptionReachable)) bool TypeLoadExceptionReachable;

  __declspec(property(get = get_TypeLoadException, put = set_TypeLoadException))::System::Runtime::Serialization::TypeLoadExceptionHolder* TypeLoadException;

  __declspec(property(get = get_ObjectValue))::System::Object* ObjectValue;

  __declspec(property(get = get_SerializationInfo, put = set_SerializationInfo))::System::Runtime::Serialization::SerializationInfo* SerializationInfo;

  __declspec(property(get = get_Surrogate))::System::Runtime::Serialization::ISerializationSurrogate* Surrogate;

  __declspec(property(get = get_DependentObjects, put = set_DependentObjects))::System::Runtime::Serialization::LongList* DependentObjects;

  __declspec(property(get = get_RequiresSerInfoFixup, put = set_RequiresSerInfoFixup)) bool RequiresSerInfoFixup;

  __declspec(property(get = get_ValueFixup))::System::Runtime::Serialization::ValueTypeFixupInfo* ValueFixup;

  __declspec(property(get = get_CompletelyFixed)) bool CompletelyFixed;

  __declspec(property(get = get_ContainerID)) int64_t ContainerID;

  constexpr ::System::Object*& __get_m_object();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_object() const;

  constexpr void __set_m_object(::System::Object* value);

  constexpr int64_t& __get_m_id();

  constexpr int64_t const& __get_m_id() const;

  constexpr void __set_m_id(int64_t value);

  constexpr int32_t& __get_m_missingElementsRemaining();

  constexpr int32_t const& __get_m_missingElementsRemaining() const;

  constexpr void __set_m_missingElementsRemaining(int32_t value);

  constexpr int32_t& __get_m_missingDecendents();

  constexpr int32_t const& __get_m_missingDecendents() const;

  constexpr void __set_m_missingDecendents(int32_t value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get_m_serInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get_m_serInfo() const;

  constexpr void __set_m_serInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __get_m_surrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __get_m_surrogate() const;

  constexpr void __set_m_surrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  constexpr ::System::Runtime::Serialization::FixupHolderList*& __get_m_missingElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::FixupHolderList*> const& __get_m_missingElements() const;

  constexpr void __set_m_missingElements(::System::Runtime::Serialization::FixupHolderList* value);

  constexpr ::System::Runtime::Serialization::LongList*& __get_m_dependentObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::LongList*> const& __get_m_dependentObjects() const;

  constexpr void __set_m_dependentObjects(::System::Runtime::Serialization::LongList* value);

  constexpr ::System::Runtime::Serialization::ObjectHolder*& __get_m_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolder*> const& __get_m_next() const;

  constexpr void __set_m_next(::System::Runtime::Serialization::ObjectHolder* value);

  constexpr int32_t& __get_m_flags();

  constexpr int32_t const& __get_m_flags() const;

  constexpr void __set_m_flags(int32_t value);

  constexpr bool& __get_m_markForFixupWhenAvailable();

  constexpr bool const& __get_m_markForFixupWhenAvailable() const;

  constexpr void __set_m_markForFixupWhenAvailable(bool value);

  constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo*& __get_m_valueFixup();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ValueTypeFixupInfo*> const& __get_m_valueFixup() const;

  constexpr void __set_m_valueFixup(::System::Runtime::Serialization::ValueTypeFixupInfo* value);

  constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder*& __get_m_typeLoad();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::TypeLoadExceptionHolder*> const& __get_m_typeLoad() const;

  constexpr void __set_m_typeLoad(::System::Runtime::Serialization::TypeLoadExceptionHolder* value);

  constexpr bool& __get_m_reachable();

  constexpr bool const& __get_m_reachable() const;

  constexpr void __set_m_reachable(bool value);

  static inline ::System::Runtime::Serialization::ObjectHolder* New_ctor(int64_t objID);

  /// @brief Method .ctor addr 0x24b8e28 size 0x34 virtual false final false
  inline void _ctor(int64_t objID);

  static inline ::System::Runtime::Serialization::ObjectHolder* New_ctor(::System::Object* obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                         ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj,
                                                                         ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  /// @brief Method .ctor addr 0x24bb370 size 0x1dc virtual false final false
  inline void _ctor(::System::Object* obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                    int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  static inline ::System::Runtime::Serialization::ObjectHolder* New_ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                         ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj,
                                                                         ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  /// @brief Method .ctor addr 0x24bacd0 size 0xe4 virtual false final false
  inline void _ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                    int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex);

  /// @brief Method IncrementDescendentFixups addr 0x24bc6cc size 0x10 virtual false final false
  inline void IncrementDescendentFixups(int32_t amount);

  /// @brief Method DecrementFixupsRemaining addr 0x24baa08 size 0x24 virtual false final false
  inline void DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* manager);

  /// @brief Method RemoveDependency addr 0x24baa2c size 0x18 virtual false final false
  inline void RemoveDependency(int64_t id);

  /// @brief Method AddFixup addr 0x24bbd8c size 0xbc virtual false final false
  inline void AddFixup(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Runtime::Serialization::ObjectManager* manager);

  /// @brief Method UpdateDescendentDependencyChain addr 0x24bc6dc size 0x60 virtual false final false
  inline void UpdateDescendentDependencyChain(int32_t amount, ::System::Runtime::Serialization::ObjectManager* manager);

  /// @brief Method AddDependency addr 0x24bbe48 size 0x74 virtual false final false
  inline void AddDependency(int64_t dependentObject);

  /// @brief Method UpdateData addr 0x24bb55c size 0x190 virtual false final false
  inline void UpdateData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer,
                         ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex, ::System::Runtime::Serialization::ObjectManager* manager);

  /// @brief Method MarkForCompletionWhenAvailable addr 0x24baaa8 size 0xc virtual false final false
  inline void MarkForCompletionWhenAvailable();

  /// @brief Method SetFlags addr 0x24b9674 size 0xb8 virtual false final false
  inline void SetFlags();

  /// @brief Method get_IsIncompleteObjectReference addr 0x24b9284 size 0xc virtual false final false
  inline bool get_IsIncompleteObjectReference();

  /// @brief Method set_IsIncompleteObjectReference addr 0x24ba2dc size 0x1c virtual false final false
  inline void set_IsIncompleteObjectReference(bool value);

  /// @brief Method get_RequiresDelayedFixup addr 0x24bb54c size 0x10 virtual false final false
  inline bool get_RequiresDelayedFixup();

  /// @brief Method get_RequiresValueTypeFixup addr 0x24b99d8 size 0xc virtual false final false
  inline bool get_RequiresValueTypeFixup();

  /// @brief Method get_ValueTypeFixupPerformed addr 0x24b99e4 size 0x38 virtual false final false
  inline bool get_ValueTypeFixupPerformed();

  /// @brief Method set_ValueTypeFixupPerformed addr 0x24baa54 size 0x14 virtual false final false
  inline void set_ValueTypeFixupPerformed(bool value);

  /// @brief Method get_HasISerializable addr 0x24ba918 size 0xc virtual false final false
  inline bool get_HasISerializable();

  /// @brief Method get_HasSurrogate addr 0x24b94c8 size 0xc virtual false final false
  inline bool get_HasSurrogate();

  /// @brief Method get_CanSurrogatedObjectValueChange addr 0x24b94d4 size 0xa8 virtual false final false
  inline bool get_CanSurrogatedObjectValueChange();

  /// @brief Method get_CanObjectValueChange addr 0x24b9264 size 0x20 virtual false final false
  inline bool get_CanObjectValueChange();

  /// @brief Method get_DirectlyDependentObjects addr 0x24bc874 size 0x8 virtual false final false
  inline int32_t get_DirectlyDependentObjects();

  /// @brief Method get_TotalDependentObjects addr 0x24bb6ec size 0xc virtual false final false
  inline int32_t get_TotalDependentObjects();

  /// @brief Method get_Reachable addr 0x24bc87c size 0x8 virtual false final false
  inline bool get_Reachable();

  /// @brief Method set_Reachable addr 0x24bc884 size 0xc virtual false final false
  inline void set_Reachable(bool value);

  /// @brief Method get_TypeLoadExceptionReachable addr 0x24baa44 size 0x10 virtual false final false
  inline bool get_TypeLoadExceptionReachable();

  /// @brief Method get_TypeLoadException addr 0x24bc890 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException();

  /// @brief Method set_TypeLoadException addr 0x24bc898 size 0x8 virtual false final false
  inline void set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* value);

  /// @brief Method get_ObjectValue addr 0x24bc8a0 size 0x8 virtual false final false
  inline ::System::Object* get_ObjectValue();

  /// @brief Method SetObjectValue addr 0x24b957c size 0xf8 virtual false final false
  inline void SetObjectValue(::System::Object* obj, ::System::Runtime::Serialization::ObjectManager* manager);

  /// @brief Method get_SerializationInfo addr 0x24bc8a8 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::SerializationInfo* get_SerializationInfo();

  /// @brief Method set_SerializationInfo addr 0x24bc8b0 size 0x8 virtual false final false
  inline void set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* value);

  /// @brief Method get_Surrogate addr 0x24bc8b8 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate();

  /// @brief Method get_DependentObjects addr 0x24bc8c0 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::LongList* get_DependentObjects();

  /// @brief Method set_DependentObjects addr 0x24bc8c8 size 0x8 virtual false final false
  inline void set_DependentObjects(::System::Runtime::Serialization::LongList* value);

  /// @brief Method get_RequiresSerInfoFixup addr 0x24bbbd4 size 0x1c virtual false final false
  inline bool get_RequiresSerInfoFixup();

  /// @brief Method set_RequiresSerInfoFixup addr 0x24b99bc size 0x1c virtual false final false
  inline void set_RequiresSerInfoFixup(bool value);

  /// @brief Method get_ValueFixup addr 0x24bc8d0 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup();

  /// @brief Method get_CompletelyFixed addr 0x24b9240 size 0x24 virtual false final false
  inline bool get_CompletelyFixed();

  /// @brief Method get_ContainerID addr 0x24bc7d4 size 0x18 virtual false final false
  inline int64_t get_ContainerID();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectHolder(ObjectHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectHolder(ObjectHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectHolder();

public:
  /// @brief Field m_object, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___m_object;

  /// @brief Field m_id, offset: 0x18, size: 0x8, def value: None
  int64_t ___m_id;

  /// @brief Field m_missingElementsRemaining, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_missingElementsRemaining;

  /// @brief Field m_missingDecendents, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_missingDecendents;

  /// @brief Field m_serInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___m_serInfo;

  /// @brief Field m_surrogate, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___m_surrogate;

  /// @brief Field m_missingElements, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::FixupHolderList* ___m_missingElements;

  /// @brief Field m_dependentObjects, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::LongList* ___m_dependentObjects;

  /// @brief Field m_next, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectHolder* ___m_next;

  /// @brief Field m_flags, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_flags;

  /// @brief Field m_markForFixupWhenAvailable, offset: 0x54, size: 0x1, def value: None
  bool ___m_markForFixupWhenAvailable;

  /// @brief Field m_valueFixup, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Serialization::ValueTypeFixupInfo* ___m_valueFixup;

  /// @brief Field m_typeLoad, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::TypeLoadExceptionHolder* ___m_typeLoad;

  /// @brief Field m_reachable, offset: 0x68, size: 0x1, def value: None
  bool ___m_reachable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectHolder, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolder*, "System.Runtime.Serialization", "ObjectHolder");
