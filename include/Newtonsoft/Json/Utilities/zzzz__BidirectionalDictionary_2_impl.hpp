#pragma once
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*> const&
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__firstToSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstToSecond;
}
template <typename TFirst, typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstToSecond)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TFirst, typename TSecond>
constexpr ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*& Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__secondToFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondToFirst;
}
template <typename TFirst, typename TSecond>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*> const&
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_get__secondToFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondToFirst;
}
template <typename TFirst, typename TSecond>
constexpr void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::__cordl_internal_set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secondToFirst)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicateFirstErrorMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicateSecondErrorMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>* Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>());
}
template <typename TFirst, typename TSecond> inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(firstEqualityComparer, secondEqualityComparer));
}
template <typename TFirst, typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TFirst>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSecond>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstEqualityComparer, secondEqualityComparer);
}
template <typename TFirst, typename TSecond>
inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*
Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                                                                                  ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>(firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage,
                                                                                                                              duplicateSecondErrorMessage));
}
template <typename TFirst, typename TSecond>
inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer,
                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer,
                                                                                           ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TFirst>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSecond>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage);
}
template <typename TFirst, typename TSecond> inline void Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::Set(TFirst first, TSecond second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second);
}
template <typename TFirst, typename TSecond> inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::TryGetByFirst(TFirst first, ByRef<TSecond> second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), "TryGetByFirst",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TSecond>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, first, second);
}
template <typename TFirst, typename TSecond> inline bool Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::TryGetBySecond(TSecond second, ByRef<TFirst> first) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>*>::get(), "TryGetBySecond",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TFirst>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, second, first);
}
// Ctor Parameters []
template <typename TFirst, typename TSecond> constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<TFirst, TSecond>::BidirectionalDictionary_2() {}
