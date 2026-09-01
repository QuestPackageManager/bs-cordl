#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\BidirectionalDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__BidirectionalDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template <typename TFirst, typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__firstToSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstToSecond;
}
template <typename TFirst, typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__firstToSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstToSecond;
}
template <typename TFirst, typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstToSecond = value;
}
template <typename TFirst, typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__secondToFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondToFirst;
}
template <typename TFirst, typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__secondToFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondToFirst;
}
template <typename TFirst, typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondToFirst = value;
}
template <typename TFirst, typename TSecond> constexpr ::StringW& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__duplicateFirstErrorMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicateFirstErrorMessage;
}
template <typename TFirst, typename TSecond>
constexpr ::StringW const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__duplicateFirstErrorMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicateFirstErrorMessage;
}
template <typename TFirst, typename TSecond> constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__duplicateFirstErrorMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duplicateFirstErrorMessage = value;
}
template <typename TFirst, typename TSecond> constexpr ::StringW& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__duplicateSecondErrorMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicateSecondErrorMessage;
}
template <typename TFirst, typename TSecond>
constexpr ::StringW const& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__duplicateSecondErrorMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicateSecondErrorMessage;
}
template <typename TFirst, typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__duplicateSecondErrorMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duplicateSecondErrorMessage = value;
}
template <typename TFirst, typename TSecond> inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TFirst, typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TFirst>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSecond>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstEqualityComparer, secondEqualityComparer);
}
template <typename TFirst, typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                                                                                           ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TFirst>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSecond>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage);
}
template <typename TFirst, typename TSecond> inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::Set(TFirst first, TSecond second) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(),
                                                                                         { "Set", {}, { ::i2c::type_of<TFirst>(), ::i2c::type_of<TSecond>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second);
}
template <typename TFirst, typename TSecond> inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::TryGetByFirst(TFirst first, ::by_ref<TSecond> second) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(),
                                                                                         { "TryGetByFirst", {}, { ::i2c::type_of<TFirst>(), ::i2c::type_of<::by_ref<TSecond>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, first, second);
}
template <typename TFirst, typename TSecond> inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::TryGetBySecond(TSecond second, ::by_ref<TFirst> first) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(),
                                                                                         { "TryGetBySecond", {}, { ::i2c::type_of<TSecond>(), ::i2c::type_of<::by_ref<TFirst>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, second, first);
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>* Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>());
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(firstEqualityComparer, secondEqualityComparer));
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                                                                                  ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(firstEqualityComparer, secondEqualityComparer,
                                                                                                                                      duplicateFirstErrorMessage, duplicateSecondErrorMessage));
}
// Ctor Parameters []
template <typename TFirst, typename TSecond> constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::BidirectionalDictionary_2() {}
