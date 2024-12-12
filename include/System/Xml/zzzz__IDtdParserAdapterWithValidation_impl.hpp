#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapterWithValidation.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_impl.hpp"
#include "System/Xml/zzzz__IDtdParserAdapterWithValidation_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
inline bool System::Xml::IDtdParserAdapterWithValidation::get_DtdValidation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterWithValidation*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::IValidationEventHandling* System::Xml::IDtdParserAdapterWithValidation::get_ValidationEventHandling() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdParserAdapterWithValidation*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IValidationEventHandling*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
constexpr System::Xml::IDtdParserAdapterWithValidation::operator ::System::Xml::IDtdParserAdapter*() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdParserAdapter"
constexpr ::System::Xml::IDtdParserAdapter* System::Xml::IDtdParserAdapterWithValidation::i___System__Xml__IDtdParserAdapter() noexcept {
  return static_cast<::System::Xml::IDtdParserAdapter*>(static_cast<void*>(this));
}
