#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__EnumerableVectorConverter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__VectorConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
template <typename T> inline void Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::setStaticF_VectorConverter(::Newtonsoft::Json::Converters::VectorConverter* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Converters::VectorConverter*, "VectorConverter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get>(
      std::forward<::Newtonsoft::Json::Converters::VectorConverter*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Converters::VectorConverter* Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::getStaticF_VectorConverter() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Converters::VectorConverter*, "VectorConverter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get>();
}
template <typename T>
inline void Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get(), "WriteJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
template <typename T> inline bool Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::CanConvert(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get(), "CanConvert",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
template <typename T>
inline ::System::Object* Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                                ::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get(), "ReadJson", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template <typename T> inline bool Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::get_CanRead() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get(), "get_CanRead",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>* Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>());
}
template <typename T> inline void Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>::EnumerableVectorConverter_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
