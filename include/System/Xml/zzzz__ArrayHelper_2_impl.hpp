#pragma once
// IWYU pragma private; include "System/Xml/ArrayHelper_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
template <typename TArgument, typename TArray>
inline ::ArrayW<TArray, ::Array<TArray>*> System::Xml::ArrayHelper_2<TArgument, TArray>::ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri,
                                                                                                   int32_t maxArrayLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ArrayHelper_2<TArgument, TArray>*>::get(), "ReadArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgument>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgument>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TArray, ::Array<TArray>*>, false>(this, ___internal_method, reader, localName, namespaceUri, maxArrayLength);
}
template <typename TArgument, typename TArray>
inline void System::Xml::ArrayHelper_2<TArgument, TArray>::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri,
                                                                      ::System::Xml::XmlDictionaryReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ArrayHelper_2<TArgument, TArray>*>::get(), "WriteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgument>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgument>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, reader);
}
template <typename TArgument, typename TArray>
inline int32_t System::Xml::ArrayHelper_2<TArgument, TArray>::ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri,
                                                                        ::ArrayW<TArray, ::Array<TArray>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ArrayHelper_2<TArgument, TArray>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
template <typename TArgument, typename TArray>
inline void System::Xml::ArrayHelper_2<TArgument, TArray>::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri,
                                                                      ::ArrayW<TArray, ::Array<TArray>*> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ArrayHelper_2<TArgument, TArray>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
template <typename TArgument, typename TArray> inline void System::Xml::ArrayHelper_2<TArgument, TArray>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ArrayHelper_2<TArgument, TArray>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TArgument, typename TArray> inline ::System::Xml::ArrayHelper_2<TArgument, TArray>* System::Xml::ArrayHelper_2<TArgument, TArray>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::ArrayHelper_2<TArgument, TArray>*>());
}
// Ctor Parameters []
template <typename TArgument, typename TArray> constexpr ::System::Xml::ArrayHelper_2<TArgument, TArray>::ArrayHelper_2() {}
