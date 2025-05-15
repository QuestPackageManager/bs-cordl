#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/CollectionUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionUtils)
namespace Newtonsoft::Json::Utilities {
template <typename T> class CollectionUtils_EmptyArrayContainer_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Array;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class CollectionUtils;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class CollectionUtils_EmptyArrayContainer_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::CollectionUtils);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.CollectionUtils/EmptyArrayContainer`1<T>
class CORDL_TYPE CollectionUtils_EmptyArrayContainer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::ArrayW<T, ::Array<T>*> Empty;

  static inline ::ArrayW<T, ::Array<T>*> getStaticF_Empty();

  static inline void setStaticF_Empty(::ArrayW<T, ::Array<T>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionUtils_EmptyArrayContainer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils_EmptyArrayContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionUtils_EmptyArrayContainer_1(CollectionUtils_EmptyArrayContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils_EmptyArrayContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionUtils_EmptyArrayContainer_1(CollectionUtils_EmptyArrayContainer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.CollectionUtils
class CORDL_TYPE CollectionUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using EmptyArrayContainer_1 = ::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>;

  /// @brief Method AddDistinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value);

  /// @brief Method AddDistinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method AddRangeDistinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AddRangeDistinct(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<T>* values,
                                      ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method ArrayEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ArrayEmpty();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Contains(::System::Collections::Generic::List_1<T>* list, T value, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline bool ContainsValue(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method CopyFromJaggedToMultidimensionalArray, addr 0x3ec0528, size 0x2bc, virtual false, abstract: false, final false
  static inline void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* values, ::System::Array* multidimensionalArray, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method FastReverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void FastReverse(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method GetDimensions, addr 0x3ec0274, size 0x2b4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<int32_t>* GetDimensions(::System::Collections::IList* values, int32_t dimensionsCount);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, bool>* predicate);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item);

  /// @brief Method IsDictionaryType, addr 0x3ebfc30, size 0x198, virtual false, abstract: false, final false
  static inline bool IsDictionaryType(::System::Type* type);

  /// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsNullOrEmpty(::System::Collections::Generic::ICollection_1<T>* collection);

  /// @brief Method JaggedArrayGetValue, addr 0x3ec07e4, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Object* JaggedArrayGetValue(::System::Collections::IList* values, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method ResolveEnumerableCollectionConstructor, addr 0x3ebfe3c, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType);

  /// @brief Method ResolveEnumerableCollectionConstructor, addr 0x3ebff4c, size 0x328, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType,
                                                                                              ::System::Type* constructorArgumentType);

  /// @brief Method ToMultidimensionalArray, addr 0x3ec0920, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Array* ToMultidimensionalArray(::System::Collections::IList* values, ::System::Type* type, int32_t rank);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionUtils(CollectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionUtils(CollectionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::CollectionUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::CollectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::CollectionUtils*, "Newtonsoft.Json.Utilities", "CollectionUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1, "Newtonsoft.Json.Utilities", "CollectionUtils/EmptyArrayContainer`1");
