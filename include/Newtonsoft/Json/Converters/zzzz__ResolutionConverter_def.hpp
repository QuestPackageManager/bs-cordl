#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(ResolutionConverter)
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
class ResolutionConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::ResolutionConverter);
// Type: Newtonsoft.Json.Converters::ResolutionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::ResolutionConverter*
class CORDL_TYPE ResolutionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  /// @brief Method CanConvert, addr 0x27a7738, size 0x84, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::ResolutionConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x27a77bc, size 0x16c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x27a758c, size 0x1ac, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x27a7930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x27a7928, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolutionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolutionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolutionConverter(ResolutionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolutionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolutionConverter(ResolutionConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::ResolutionConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::ResolutionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::ResolutionConverter*, "Newtonsoft.Json.Converters", "ResolutionConverter");
