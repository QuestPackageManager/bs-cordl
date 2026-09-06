#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/CachedAttributeGetter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CachedAttributeGetter_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T>
inline void Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::setStaticF_TypeAttributeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>*, "TypeAttributeCache", ::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>* Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::getStaticF_TypeAttributeCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>*, "TypeAttributeCache",
                                           ::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>();
}
template <typename T> inline T Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::GetAttribute(::System::Object* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>*>(), { "GetAttribute", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Serialization::CachedAttributeGetter_1<T>::CachedAttributeGetter_1() {}
