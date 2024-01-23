#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(UnityEntitySerializer)
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
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
class UnityEntitySerializer;
}
// Write type traits
MARK_REF_PTR_T(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer);
// Type: Facebook.SocialVR.ThirdParty.Newtonsoftjson::UnityEntitySerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11830))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6105))
// CS Name: ::Facebook.SocialVR.ThirdParty.Newtonsoftjson::UnityEntitySerializer*
class CORDL_TYPE UnityEntitySerializer : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x2321e48, size 0xac, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson, addr 0x2321ef4, size 0x84, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2321f78, size 0xfc, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  static inline ::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer* New_ctor();

  /// @brief Method .ctor, addr 0x2322074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnityEntitySerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEntitySerializer(UnityEntitySerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEntitySerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEntitySerializer(UnityEntitySerializer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEntitySerializer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer, 0x10>, "Size mismatch!");

} // namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson
NEED_NO_BOX(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer*, "Facebook.SocialVR.ThirdParty.Newtonsoftjson", "UnityEntitySerializer");
