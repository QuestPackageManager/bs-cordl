#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/CollectionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::setStaticF_Empty(::ArrayW<T> value) {
  ::cordl_internals::setStaticField<::ArrayW<T>, "Empty", ::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template <typename T> inline ::ArrayW<T> Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::ArrayW<T>, "Empty", ::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::CollectionUtils_EmptyArrayContainer_1<T>::CollectionUtils_EmptyArrayContainer_1() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.IsDictionaryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5d19fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(), { "IsDictionaryType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ResolveEnumerableCollectionConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d1a1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                             { "ResolveEnumerableCollectionConstructor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ResolveEnumerableCollectionConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::System::Type*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5d1a2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                            { "ResolveEnumerableCollectionConstructor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.GetDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<int32_t>* (*)(::System::Collections::IList*, int32_t)>(
    &::Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d1a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                                                           { "GetDimensions", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.CopyFromJaggedToMultidimensionalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*, ::System::Array*, ::ArrayW<int32_t>)>(
    &::Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d1a8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
            { "CopyFromJaggedToMultidimensionalArray", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.JaggedArrayGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Collections::IList*, ::ArrayW<int32_t>)>(&::Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d1ab50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                             { "JaggedArrayGetValue", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::CollectionUtils.ToMultidimensionalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Collections::IList*, ::System::Type*, int32_t)>(
    &::Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5d1acf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                { "ToMultidimensionalArray", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionUtils::IsNullOrEmpty(::System::Collections::Generic::ICollection_1<T>* collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "IsNullOrEmpty", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collection);
}
template <typename T>
inline void Newtonsoft::Json::Utilities::CollectionUtils::AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
          { "AddRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, initial, collection);
}
inline bool Newtonsoft::Json::Utilities::CollectionUtils::IsDictionaryType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(), { "IsDictionaryType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::ConstructorInfo* Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "ResolveEnumerableCollectionConstructor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(nullptr, ___internal_method, collectionType, collectionItemType);
}
inline ::System::Reflection::ConstructorInfo* Newtonsoft::Json::Utilities::CollectionUtils::ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType,
                                                                                                                                   ::System::Type* constructorArgumentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                       { "ResolveEnumerableCollectionConstructor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(nullptr, ___internal_method, collectionType, collectionItemType, constructorArgumentType);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionUtils::AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "AddDistinct", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::CollectionUtils::AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                          { "AddDistinct",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value, comparer);
}
template <typename TSource>
inline bool Newtonsoft::Json::Utilities::CollectionUtils::ContainsValue(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value,
                                                                        ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                                                              { "ContainsValue",
                                                                                                { ::i2c::class_of<TSource>() },
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>(),
                                                                                                  ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, comparer);
}
template <typename T>
inline bool Newtonsoft::Json::Utilities::CollectionUtils::AddRangeDistinct(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<T>* values,
                                                                           ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "AddRangeDistinct",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, values, comparer);
}
template <typename T> inline int32_t Newtonsoft::Json::Utilities::CollectionUtils::IndexOf(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                          { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collection, predicate);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionUtils::Contains(::System::Collections::Generic::List_1<T>* list, T value, ::System::Collections::IEqualityComparer* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                              { "Contains",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value, comparer);
}
template <typename T> inline int32_t Newtonsoft::Json::Utilities::CollectionUtils::IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "IndexOfReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, item);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionUtils::FastReverse(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "FastReverse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline ::System::Collections::Generic::IList_1<int32_t>* Newtonsoft::Json::Utilities::CollectionUtils::GetDimensions(::System::Collections::IList* values, int32_t dimensionsCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                                                         { "GetDimensions", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<int32_t>*>(nullptr, ___internal_method, values, dimensionsCount);
}
inline void Newtonsoft::Json::Utilities::CollectionUtils::CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* values, ::System::Array* multidimensionalArray,
                                                                                                ::ArrayW<int32_t> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                       { "CopyFromJaggedToMultidimensionalArray", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, values, multidimensionalArray, indices);
}
inline ::System::Object* Newtonsoft::Json::Utilities::CollectionUtils::JaggedArrayGetValue(::System::Collections::IList* values, ::ArrayW<int32_t> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                                           { "JaggedArrayGetValue", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, values, indices);
}
inline ::System::Array* Newtonsoft::Json::Utilities::CollectionUtils::ToMultidimensionalArray(::System::Collections::IList* values, ::System::Type* type, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(),
                                              { "ToMultidimensionalArray", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, values, type, rank);
}
template <typename T> inline ::ArrayW<T> Newtonsoft::Json::Utilities::CollectionUtils::ArrayEmpty() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionUtils*>(), { "ArrayEmpty", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::CollectionUtils::CollectionUtils() {}
