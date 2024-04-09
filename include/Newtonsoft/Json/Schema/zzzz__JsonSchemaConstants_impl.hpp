#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaConstants_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
inline void
Newtonsoft::Json::Schema::JsonSchemaConstants::setStaticF_JsonSchemaTypeMapping(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*, "JsonSchemaTypeMapping",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaConstants*>::get>(
      std::forward<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* Newtonsoft::Json::Schema::JsonSchemaConstants::getStaticF_JsonSchemaTypeMapping() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*, "JsonSchemaTypeMapping",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaConstants*>::get>();
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaConstants::JsonSchemaConstants() {}
