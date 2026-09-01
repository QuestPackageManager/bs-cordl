#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\ExpressionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__ExpressionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.ValidateArgumentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType,
                                                                ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>, ::StringW)>(
    &::System::Dynamic::Utils::ExpressionUtils::ValidateArgumentTypes)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5fc9094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                            { "ValidateArgumentTypes",
                              {},
                              { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                                ::i2c::type_of<::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.ValidateArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, int32_t,
                                                                ::ArrayW<::System::Reflection::ParameterInfo*>)>(&::System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fc93e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                             { "ValidateArgumentCount",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.ValidateOneArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::Expression* (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*,
                                                             ::System::Reflection::ParameterInfo*, ::StringW, ::StringW, int32_t)>(&::System::Dynamic::Utils::ExpressionUtils::ValidateOneArgument)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5fc9494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                             { "ValidateOneArgument",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.RequiresCanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Linq::Expressions::Expression*, ::StringW)>(&::System::Dynamic::Utils::ExpressionUtils::RequiresCanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc9b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                             { "RequiresCanRead", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.RequiresCanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Linq::Expressions::Expression*, ::StringW, int32_t)>(&::System::Dynamic::Utils::ExpressionUtils::RequiresCanRead)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fc96b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                { "RequiresCanRead", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.TryQuote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Linq::Expressions::Expression*>)>(&::System::Dynamic::Utils::ExpressionUtils::TryQuote)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fc9a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                             { "TryQuote", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Expression*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.GetParametersForValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType)>(
    &::System::Dynamic::Utils::ExpressionUtils::GetParametersForValidation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fc934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                            { "GetParametersForValidation", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::ExpressionUtils.ValidateArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Linq::Expressions::LambdaExpression*)>(&::System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fc9d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                                                           { "ValidateArgumentCount", {}, { ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Dynamic::Utils::ExpressionUtils::ReturnReadOnly(::by_ref<::System::Collections::Generic::IReadOnlyList_1<T>*> collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                           { "ReturnReadOnly", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyList_1<T>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(nullptr, ___internal_method, collection);
}
template <typename T> inline T System::Dynamic::Utils::ExpressionUtils::ReturnObject(::System::Object* collectionOrT) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(), { "ReturnObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, collectionOrT);
}
inline void System::Dynamic::Utils::ExpressionUtils::ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                                                           ::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments,
                                                                           ::StringW methodParamName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                          { "ValidateArgumentTypes",
                            {},
                            { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                              ::i2c::type_of<::by_ref<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, method, nodeKind, arguments, methodParamName);
}
inline void System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, int32_t count,
                                                                           ::ArrayW<::System::Reflection::ParameterInfo*> pis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                           { "ValidateArgumentCount",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, method, nodeKind, count, pis);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::Utils::ExpressionUtils::ValidateOneArgument(::System::Reflection::MethodBase* method,
                                                                                                             ::System::Linq::Expressions::ExpressionType nodeKind,
                                                                                                             ::System::Linq::Expressions::Expression* arguments,
                                                                                                             ::System::Reflection::ParameterInfo* pi, ::StringW methodParamName,
                                                                                                             ::StringW argumentParamName, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                           { "ValidateOneArgument",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(nullptr, ___internal_method, method, nodeKind, arguments, pi, methodParamName, argumentParamName, index);
}
inline void System::Dynamic::Utils::ExpressionUtils::RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                           { "RequiresCanRead", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expression, paramName);
}
inline void System::Dynamic::Utils::ExpressionUtils::RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                              { "RequiresCanRead", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expression, paramName, idx);
}
inline bool System::Dynamic::Utils::ExpressionUtils::TryQuote(::System::Type* parameterType, ::by_ref<::System::Linq::Expressions::Expression*> argument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                           { "TryQuote", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Expression*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parameterType, argument);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Dynamic::Utils::ExpressionUtils::GetParametersForValidation(::System::Reflection::MethodBase* method,
                                                                                                                          ::System::Linq::Expressions::ExpressionType nodeKind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                       { "GetParametersForValidation", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Linq::Expressions::ExpressionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(nullptr, ___internal_method, method, nodeKind);
}
template <typename T>
inline bool System::Dynamic::Utils::ExpressionUtils::SameElements(::by_ref<::System::Collections::Generic::IEnumerable_1<T>*> replacement,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<T>* current) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                       { "SameElements",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<::System::Collections::Generic::IEnumerable_1<T>*>>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, replacement, current);
}
template <typename T>
inline bool System::Dynamic::Utils::ExpressionUtils::SameElementsInCollection(::System::Collections::Generic::ICollection_1<T>* replacement,
                                                                              ::System::Collections::Generic::IReadOnlyList_1<T>* current) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                              { "SameElementsInCollection",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, replacement, current);
}
inline void System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount(::System::Linq::Expressions::LambdaExpression* lambda) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::ExpressionUtils*>(),
                                                                                         { "ValidateArgumentCount", {}, { ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lambda);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::ExpressionUtils::ExpressionUtils() {}
