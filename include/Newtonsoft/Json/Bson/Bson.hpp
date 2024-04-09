#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Newtonsoft/Json/Bson/BsonArray.hpp"
#include "Newtonsoft/Json/Bson/BsonBinary.hpp"
#include "Newtonsoft/Json/Bson/BsonBinaryType.hpp"
#include "Newtonsoft/Json/Bson/BsonBinaryWriter.hpp"
#include "Newtonsoft/Json/Bson/BsonBoolean.hpp"
#include "Newtonsoft/Json/Bson/BsonEmpty.hpp"
#include "Newtonsoft/Json/Bson/BsonObject.hpp"
#include "Newtonsoft/Json/Bson/BsonObjectId.hpp"
#include "Newtonsoft/Json/Bson/BsonProperty.hpp"
#include "Newtonsoft/Json/Bson/BsonReader.hpp"
#include "Newtonsoft/Json/Bson/BsonRegex.hpp"
#include "Newtonsoft/Json/Bson/BsonString.hpp"
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "Newtonsoft/Json/Bson/BsonType.hpp"
#include "Newtonsoft/Json/Bson/BsonValue.hpp"
#include "Newtonsoft/Json/Bson/BsonWriter.hpp"
#ifdef __cpp_modules
export module Bson;
#endif
