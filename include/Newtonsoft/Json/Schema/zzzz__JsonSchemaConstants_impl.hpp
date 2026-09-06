#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaConstants_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
inline void
Newtonsoft::Json::Schema::JsonSchemaConstants::setStaticF_JsonSchemaTypeMapping(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*, "JsonSchemaTypeMapping",
                                    ::Newtonsoft::Json::Schema::JsonSchemaConstants*>(
      std::forward<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* Newtonsoft::Json::Schema::JsonSchemaConstants::getStaticF_JsonSchemaTypeMapping() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>*, "JsonSchemaTypeMapping",
                                           ::Newtonsoft::Json::Schema::JsonSchemaConstants*>();
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaConstants::JsonSchemaConstants() {}
