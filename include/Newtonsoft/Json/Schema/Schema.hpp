#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Newtonsoft/Json/Schema/Extensions.hpp"
#include "Newtonsoft/Json/Schema/JsonSchema.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaBuilder.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaConstants.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaException.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaGenerator.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaModel.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaModelBuilder.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaNode.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaNodeCollection.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaResolver.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaType.hpp"
#include "Newtonsoft/Json/Schema/JsonSchemaWriter.hpp"
#include "Newtonsoft/Json/Schema/UndefinedSchemaIdHandling.hpp"
#include "Newtonsoft/Json/Schema/ValidationEventArgs.hpp"
#include "Newtonsoft/Json/Schema/ValidationEventHandler.hpp"
#ifdef __cpp_modules
export module Schema;
#endif
