#pragma once
// IWYU pragma private; include "System/Collections/Generic/SortedSet`1_TreeSubSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedSet`1_TreeSubSet)
namespace System::Collections::Generic {
template <typename T> class SortedSet_1_Node;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1;
}
namespace System::Collections::Generic {
template <typename T> class TreeSubSet_SortedSet_1___c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename T> class TreeWalkPredicate_1;
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
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SortedSet_1_TreeSubSet;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortedSet_1_TreeSubSet);
// Dependencies System.Collections.Generic.SortedSet`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.SortedSet`1/TreeSubSet<T>
class CORDL_TYPE SortedSet_1_TreeSubSet : public ::System::Collections::Generic::SortedSet_1<T> {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::System::Collections::Generic::TreeSubSet_SortedSet_1___c__DisplayClass9_0<T>;

  __declspec(property(get = get_MaxInternal)) T MaxInternal;

  __declspec(property(get = get_MinInternal)) T MinInternal;

  /// @brief Field _lBoundActive, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__lBoundActive, put = __cordl_internal_set__lBoundActive)) bool _lBoundActive;

  /// @brief Field _max, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) T _max;

  /// @brief Field _min, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__min, put = __cordl_internal_set__min)) T _min;

  /// @brief Field _uBoundActive, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__uBoundActive, put = __cordl_internal_set__uBoundActive)) bool _uBoundActive;

  /// @brief Field _underlying, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__underlying, put = __cordl_internal_set__underlying)) ::System::Collections::Generic::SortedSet_1<T>* _underlying;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AddIfNotPresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AddIfNotPresent(T item);

  /// @brief Method BreadthFirstTreeWalk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool BreadthFirstTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method DoRemove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool DoRemove(T item);

  /// @brief Method FindNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* FindNode(T item);

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetViewBetween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1<T>* GetViewBetween(T lowerValue, T upperValue);

  /// @brief Method InOrderTreeWalk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action);

  /// @brief Method InternalIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t InternalIndexOf(T item);

  /// @brief Method IsWithinRange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsWithinRange(T item);

  static inline ::GlobalNamespace::SortedSet_1_TreeSubSet<T>* New_ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max, bool lowerBoundActive, bool upperBoundActive);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method VersionCheck, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void VersionCheck();

  /// @brief Method VersionCheckImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void VersionCheckImpl();

  /// @brief Method <VersionCheckImpl>b__20_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _VersionCheckImpl_b__20_0(::System::Collections::Generic::SortedSet_1_Node<T>* n);

  constexpr bool const& __cordl_internal_get__lBoundActive() const;

  constexpr bool& __cordl_internal_get__lBoundActive();

  constexpr T const& __cordl_internal_get__max() const;

  constexpr T& __cordl_internal_get__max();

  constexpr T const& __cordl_internal_get__min() const;

  constexpr T& __cordl_internal_get__min();

  constexpr bool const& __cordl_internal_get__uBoundActive() const;

  constexpr bool& __cordl_internal_get__uBoundActive();

  constexpr ::System::Collections::Generic::SortedSet_1<T>* const& __cordl_internal_get__underlying() const;

  constexpr ::System::Collections::Generic::SortedSet_1<T>*& __cordl_internal_get__underlying();

  constexpr void __cordl_internal_set__lBoundActive(bool value);

  constexpr void __cordl_internal_set__max(T value);

  constexpr void __cordl_internal_set__min(T value);

  constexpr void __cordl_internal_set__uBoundActive(bool value);

  constexpr void __cordl_internal_set__underlying(::System::Collections::Generic::SortedSet_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max, bool lowerBoundActive, bool upperBoundActive);

  /// @brief Method get_MaxInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_MaxInternal();

  /// @brief Method get_MinInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_MinInternal();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1_TreeSubSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1_TreeSubSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedSet_1_TreeSubSet(SortedSet_1_TreeSubSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1_TreeSubSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedSet_1_TreeSubSet(SortedSet_1_TreeSubSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11392 };

  /// @brief Field _underlying, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1<T>* ____underlying;

  /// @brief Field _min, offset: 0x40, size: 0x8, def value: None
  T ____min;

  /// @brief Field _max, offset: 0x48, size: 0x8, def value: None
  T ____max;

  /// @brief Field _lBoundActive, offset: 0x50, size: 0x1, def value: None
  bool ____lBoundActive;

  /// @brief Field _uBoundActive, offset: 0x51, size: 0x1, def value: None
  bool ____uBoundActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedSet_1_TreeSubSet, "System.Collections.Generic", "SortedSet`1/TreeSubSet");
