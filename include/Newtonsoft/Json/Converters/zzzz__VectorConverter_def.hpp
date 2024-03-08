#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VectorConverter)
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VectorConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::VectorConverter);
// Type: Newtonsoft.Json.Converters::VectorConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::VectorConverter*
class CORDL_TYPE VectorConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_EnableVector2, put = set_EnableVector2)) bool EnableVector2;

  __declspec(property(get = get_EnableVector3, put = set_EnableVector3)) bool EnableVector3;

  __declspec(property(get = get_EnableVector4, put = set_EnableVector4)) bool EnableVector4;

  /// @brief Field V2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V2, put = setStaticF_V2))::System::Type* V2;

  /// @brief Field V3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V3, put = setStaticF_V3))::System::Type* V3;

  /// @brief Field V4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V4, put = setStaticF_V4))::System::Type* V4;

  /// @brief Field <EnableVector2>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableVector2_k__BackingField, put = __cordl_internal_set__EnableVector2_k__BackingField)) bool _EnableVector2_k__BackingField;

  /// @brief Field <EnableVector3>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableVector3_k__BackingField, put = __cordl_internal_set__EnableVector3_k__BackingField)) bool _EnableVector3_k__BackingField;

  /// @brief Field <EnableVector4>k__BackingField, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableVector4_k__BackingField, put = __cordl_internal_set__EnableVector4_k__BackingField)) bool _EnableVector4_k__BackingField;

  /// @brief Method CanConvert, addr 0x2809fb0, size 0xd8, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::VectorConverter* New_ctor();

  static inline ::Newtonsoft::Json::Converters::VectorConverter* New_ctor(bool enableVector2, bool enableVector3, bool enableVector4);

  /// @brief Method PopulateVector2, addr 0x2809c44, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PopulateVector2(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method PopulateVector3, addr 0x2809d28, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PopulateVector3(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method PopulateVector4, addr 0x2809e4c, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 PopulateVector4(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadJson, addr 0x2809b0c, size 0x138, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x280968c, size 0x2b0, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteVector, addr 0x280993c, size 0x1d0, virtual false, abstract: false, final false
  static inline void WriteVector(::Newtonsoft::Json::JsonWriter* writer, float_t x, float_t y, ::System::Nullable_1<float_t> z, ::System::Nullable_1<float_t> w);

  constexpr bool const& __cordl_internal_get__EnableVector2_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableVector2_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableVector3_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableVector3_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableVector4_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableVector4_k__BackingField();

  constexpr void __cordl_internal_set__EnableVector2_k__BackingField(bool value);

  constexpr void __cordl_internal_set__EnableVector3_k__BackingField(bool value);

  constexpr void __cordl_internal_set__EnableVector4_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2809618, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2809640, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool enableVector2, bool enableVector3, bool enableVector4);

  static inline ::System::Type* getStaticF_V2();

  static inline ::System::Type* getStaticF_V3();

  static inline ::System::Type* getStaticF_V4();

  /// @brief Method get_EnableVector2, addr 0x28095dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableVector2();

  /// @brief Method get_EnableVector3, addr 0x28095f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableVector3();

  /// @brief Method get_EnableVector4, addr 0x2809604, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableVector4();

  static inline void setStaticF_V2(::System::Type* value);

  static inline void setStaticF_V3(::System::Type* value);

  static inline void setStaticF_V4(::System::Type* value);

  /// @brief Method set_EnableVector2, addr 0x28095e4, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableVector2(bool value);

  /// @brief Method set_EnableVector3, addr 0x28095f8, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableVector3(bool value);

  /// @brief Method set_EnableVector4, addr 0x280960c, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableVector4(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorConverter(VectorConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorConverter(VectorConverter const&) = delete;

  /// @brief Field <EnableVector2>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____EnableVector2_k__BackingField;

  /// @brief Field <EnableVector3>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____EnableVector3_k__BackingField;

  /// @brief Field <EnableVector4>k__BackingField, offset: 0x12, size: 0x1, def value: None
  bool ____EnableVector4_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::VectorConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::VectorConverter, ____EnableVector2_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::VectorConverter, ____EnableVector3_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::VectorConverter, ____EnableVector4_k__BackingField) == 0x12, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::VectorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::VectorConverter*, "Newtonsoft.Json.Converters", "VectorConverter");
