#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SharedVertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedVertex)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
class SharedVertex___c;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class SharedVertex___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SharedVertex);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SharedVertex___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SharedVertex/<>c
class CORDL_TYPE SharedVertex___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::SharedVertex___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* __9__26_0;

  static inline ::UnityEngine::ProBuilder::SharedVertex___c* New_ctor();

  /// @brief Method <SortedRemoveAndShift>b__26_0, addr 0x473ef3c, size 0x44, virtual false, abstract: false, final false
  inline bool _SortedRemoveAndShift_b__26_0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x);

  /// @brief Method .ctor, addr 0x473ef34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::SharedVertex___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::SharedVertex___c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedVertex___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedVertex___c(SharedVertex___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedVertex___c(SharedVertex___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14317 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SharedVertex___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SharedVertex
class CORDL_TYPE SharedVertex : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::SharedVertex___c;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_arrayInternal)) ::ArrayW<int32_t, ::Array<int32_t>*> arrayInternal;

  /// @brief Field m_Vertices, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vertices, put = __cordl_internal_set_m_Vertices)) ::ArrayW<int32_t, ::Array<int32_t>*> m_Vertices;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<int32_t>"
  constexpr operator ::System::Collections::Generic::ICollection_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x473d960, size 0x60, virtual true, abstract: false, final true
  inline void Add(int32_t item);

  /// @brief Method Clear, addr 0x473d9c0, size 0x50, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x473da10, size 0x64, virtual true, abstract: false, final true
  inline bool Contains(int32_t item);

  /// @brief Method CopyTo, addr 0x473da74, size 0x1c, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x473d854, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator();

  /// @brief Method GetSharedVertexLookup, addr 0x473db40, size 0x410, virtual false, abstract: false, final false
  static inline void GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                                           ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetSharedVerticesWithPositions, addr 0x473cb10, size 0x5a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions);

  static inline ::UnityEngine::ProBuilder::SharedVertex* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  static inline ::UnityEngine::ProBuilder::SharedVertex* New_ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex);

  /// @brief Method Remove, addr 0x473da90, size 0x94, virtual true, abstract: false, final true
  inline bool Remove(int32_t item);

  /// @brief Method RemoveAndShift, addr 0x473e7c4, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  RemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, ::System::Collections::Generic::IEnumerable_1<int32_t>* remove);

  /// @brief Method SetCoincident, addr 0x473ebb0, size 0x328, virtual false, abstract: false, final false
  static inline void SetCoincident(::ByRef<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> lookup, ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method ShiftIndexes, addr 0x473df50, size 0x40, virtual false, abstract: false, final false
  inline void ShiftIndexes(int32_t offset);

  /// @brief Method SortedRemoveAndShift, addr 0x473e86c, size 0x344, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, ::System::Collections::Generic::List_1<int32_t>* remove);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x473d95c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToSharedVertices, addr 0x473e670, size 0x154, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  ToSharedVertices(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>* list);

  /// @brief Method ToSharedVertices, addr 0x473df90, size 0x6e0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* lookup);

  /// @brief Method ToString, addr 0x473d8f4, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Vertices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Vertices();

  constexpr void __cordl_internal_set_m_Vertices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x473ca64, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method .ctor, addr 0x473d73c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex);

  /// @brief Method get_Count, addr 0x473d808, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x473db24, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x47311b8, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t i);

  /// @brief Method get_arrayInternal, addr 0x473d734, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_arrayInternal();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<int32_t>"
  constexpr ::System::Collections::Generic::ICollection_1<int32_t>* i___System__Collections__Generic__ICollection_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x473d824, size 0x30, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedVertex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedVertex(SharedVertex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedVertex(SharedVertex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14318 };

  /// @brief Field m_Vertices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Vertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::SharedVertex, ___m_Vertices) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SharedVertex, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SharedVertex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SharedVertex*, "UnityEngine.ProBuilder", "SharedVertex");
NEED_NO_BOX(::UnityEngine::ProBuilder::SharedVertex___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SharedVertex___c*, "UnityEngine.ProBuilder", "SharedVertex/<>c");
