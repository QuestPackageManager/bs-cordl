#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMaskConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(SongPackMaskConverter)
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
namespace GlobalNamespace {
class SongPackMaskConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMaskConverter);
// Dependencies Newtonsoft.Json.JsonConverter
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMaskConverter
class CORDL_TYPE SongPackMaskConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x272626c, size 0x88, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::GlobalNamespace::SongPackMaskConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x27262f4, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2726388, size 0xa8, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x2726430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMaskConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMaskConverter(SongPackMaskConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMaskConverter(SongPackMaskConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMaskConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMaskConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMaskConverter*, "", "SongPackMaskConverter");
