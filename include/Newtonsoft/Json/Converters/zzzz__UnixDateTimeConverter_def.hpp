#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/UnixDateTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(UnixDateTimeConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class UnixDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::UnixDateTimeConverter);
// Dependencies Newtonsoft.Json.Converters.DateTimeConverterBase, System.DateTime
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.UnixDateTimeConverter
class CORDL_TYPE UnixDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
  // Declarations
  __declspec(property(get = get_AllowPreEpoch, put = set_AllowPreEpoch)) bool AllowPreEpoch;

  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch)) ::System::DateTime UnixEpoch;

  /// @brief Field <AllowPreEpoch>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowPreEpoch_k__BackingField, put = __cordl_internal_set__AllowPreEpoch_k__BackingField)) bool _AllowPreEpoch_k__BackingField;

  static inline ::Newtonsoft::Json::Converters::UnixDateTimeConverter* New_ctor();

  static inline ::Newtonsoft::Json::Converters::UnixDateTimeConverter* New_ctor(bool allowPreEpoch);

  /// @brief Method ReadJson, addr 0x3f470ec, size 0x41c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x3f46e88, size 0x264, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  constexpr bool const& __cordl_internal_get__AllowPreEpoch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowPreEpoch_k__BackingField();

  constexpr void __cordl_internal_set__AllowPreEpoch_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3f46e40, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3f46e5c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool allowPreEpoch);

  static inline ::System::DateTime getStaticF_UnixEpoch();

  /// @brief Method get_AllowPreEpoch, addr 0x3f46e2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowPreEpoch();

  static inline void setStaticF_UnixEpoch(::System::DateTime value);

  /// @brief Method set_AllowPreEpoch, addr 0x3f46e34, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowPreEpoch(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixDateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixDateTimeConverter(UnixDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixDateTimeConverter(UnixDateTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10481 };

  /// @brief Field <AllowPreEpoch>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____AllowPreEpoch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::UnixDateTimeConverter, ____AllowPreEpoch_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::UnixDateTimeConverter, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::UnixDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::UnixDateTimeConverter*, "Newtonsoft.Json.Converters", "UnixDateTimeConverter");
