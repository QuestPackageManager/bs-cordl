#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/JsonSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonSettings)
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class JsonSettings;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::JsonSettings);
// Dependencies System.Object
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: BGLib.JsonExtension.JsonSettings
class CORDL_TYPE JsonSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field compactNoDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_compactNoDefault, put = setStaticF_compactNoDefault)) ::Newtonsoft::Json::JsonSerializerSettings* compactNoDefault;

  /// @brief Field compactWithDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_compactWithDefault, put = setStaticF_compactWithDefault)) ::Newtonsoft::Json::JsonSerializerSettings* compactWithDefault;

  /// @brief Field jsonConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_jsonConverters, put = setStaticF_jsonConverters)) ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> jsonConverters;

  /// @brief Field readableWithDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_readableWithDefault, put = setStaticF_readableWithDefault)) ::Newtonsoft::Json::JsonSerializerSettings* readableWithDefault;

  static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_compactNoDefault();

  static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_compactWithDefault();

  static inline ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> getStaticF_jsonConverters();

  static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_readableWithDefault();

  static inline void setStaticF_compactNoDefault(::Newtonsoft::Json::JsonSerializerSettings* value);

  static inline void setStaticF_compactWithDefault(::Newtonsoft::Json::JsonSerializerSettings* value);

  static inline void setStaticF_jsonConverters(::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> value);

  static inline void setStaticF_readableWithDefault(::Newtonsoft::Json::JsonSerializerSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSettings(JsonSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSettings(JsonSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19035 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::JsonSettings, 0x10>, "Size mismatch!");

} // namespace BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::JsonSettings);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::JsonSettings*, "BGLib.JsonExtension", "JsonSettings");
