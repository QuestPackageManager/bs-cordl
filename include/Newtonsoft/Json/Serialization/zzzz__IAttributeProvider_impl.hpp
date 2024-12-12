#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IAttributeProvider.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IAttributeProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*, false>(this, ___internal_method, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::IAttributeProvider::GetAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IAttributeProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*, false>(this, ___internal_method, attributeType, inherit);
}
