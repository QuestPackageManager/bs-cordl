#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapterV1.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_impl.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_impl.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterV1_def.hpp"
inline bool System::Xml::IDtdParserAdapterV1::get_V1CompatibilityMode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapterV1::get_Normalization() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::IDtdParserAdapterV1::get_Namespaces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterV1*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
constexpr ::System::Xml::IDtdParserAdapterWithValidation* System::Xml::IDtdParserAdapterV1::i___System__Xml__IDtdParserAdapterWithValidation() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapterWithValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
constexpr System::Xml::IDtdParserAdapterV1::operator ::System::Xml::IDtdParserAdapter*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapter"
constexpr ::System::Xml::IDtdParserAdapter* System::Xml::IDtdParserAdapterV1::i___System__Xml__IDtdParserAdapter() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
