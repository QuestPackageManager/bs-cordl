#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableHashSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableHashSet_1)
namespace BGLib::UnityExtension {
template <typename TValue> class SerializableHashSetBase_HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class ISet_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
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
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace BGLib::UnityExtension {
template <typename T> class SerializableHashSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableHashSet_1);
// Dependencies BGLib.UnityExtension.SerializableHashSetBase
namespace BGLib::UnityExtension {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableHashSet`1<T>
class CORDL_TYPE SerializableHashSet_1 : public ::BGLib::UnityExtension::SerializableHashSetBase {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field m_hashSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_hashSet, put = __cordl_internal_set_m_hashSet)) ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* m_hashSet;

  /// @brief Field m_keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_keys, put = __cordl_internal_set_m_keys)) ::ArrayW<T, ::Array<T>*> m_keys;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
  constexpr operator ::System::Collections::Generic::ISet_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Collections::Generic::ISet_1<T>* set);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  static inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* New_ctor();

  static inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* New_ctor(::System::Collections::Generic::ISet_1<T>* set);

  /// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_T__Add(T item);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* const& __cordl_internal_get_m_hashSet() const;

  constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>*& __cordl_internal_get_m_hashSet();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_m_keys() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_m_keys();

  constexpr void __cordl_internal_set_m_hashSet(::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* value);

  constexpr void __cordl_internal_set_m_keys(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::ISet_1<T>* set);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
  constexpr ::System::Collections::Generic::ISet_1<T>* i___System__Collections__Generic__ISet_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableHashSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableHashSet_1(SerializableHashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableHashSet_1(SerializableHashSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20718 };

  /// @brief Field m_hashSet, offset: 0x10, size: 0x8, def value: None
  ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* ___m_hashSet;

  /// @brief Field m_keys, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___m_keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableHashSet_1, "BGLib.UnityExtension", "SerializableHashSet`1");
