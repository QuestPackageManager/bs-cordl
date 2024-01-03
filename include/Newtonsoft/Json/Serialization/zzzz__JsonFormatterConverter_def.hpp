#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonFormatterConverter)
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonFormatterConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonFormatterConverter);
// Type: Newtonsoft.Json.Serialization::JsonFormatterConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11912))
// CS Name: ::Newtonsoft.Json.Serialization::JsonFormatterConverter*
class CORDL_TYPE JsonFormatterConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _reader, offset 0x10, size 0x8
  __declspec(property(get = __get__reader, put = __set__reader))::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader;

  /// @brief Field _contract, offset 0x18, size 0x8
  __declspec(property(get = __get__contract, put = __set__contract))::Newtonsoft::Json::Serialization::JsonISerializableContract* _contract;

  /// @brief Field _member, offset 0x20, size 0x8
  __declspec(property(get = __get__member, put = __set__member))::Newtonsoft::Json::Serialization::JsonProperty* _member;

  /// @brief Convert operator to "::System::Runtime::Serialization::IFormatterConverter"
  constexpr operator ::System::Runtime::Serialization::IFormatterConverter*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IFormatterConverter"
  constexpr ::System::Runtime::Serialization::IFormatterConverter* i___System__Runtime__Serialization__IFormatterConverter() noexcept;

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& __get__reader();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*> const& __get__reader() const;

  constexpr void __set__reader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract*& __get__contract();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonISerializableContract*> const& __get__contract() const;

  constexpr void __set__contract(::Newtonsoft::Json::Serialization::JsonISerializableContract* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __get__member();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __get__member() const;

  constexpr void __set__member(::Newtonsoft::Json::Serialization::JsonProperty* value);

  static inline ::Newtonsoft::Json::Serialization::JsonFormatterConverter* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader,
                                                                                    ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                    ::Newtonsoft::Json::Serialization::JsonProperty* member);

  /// @brief Method .ctor, addr 0x266d890, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                    ::Newtonsoft::Json::Serialization::JsonProperty* member);

  /// @brief Method GetTokenValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetTokenValue(::System::Object* value);

  /// @brief Method Convert, addr 0x266d934, size 0x11c, virtual true, abstract: false, final true
  inline ::System::Object* Convert(::System::Object* value, ::System::Type* type);

  /// @brief Method Convert, addr 0x266db44, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Object* Convert(::System::Object* value, ::System::TypeCode typeCode);

  /// @brief Method ToBoolean, addr 0x266dc50, size 0x58, virtual true, abstract: false, final true
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToByte, addr 0x266dca8, size 0x58, virtual true, abstract: false, final true
  inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToChar, addr 0x266dd00, size 0x58, virtual true, abstract: false, final true
  inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x266dd58, size 0x58, virtual true, abstract: false, final true
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x266ddb0, size 0x58, virtual true, abstract: false, final true
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x266de08, size 0x58, virtual true, abstract: false, final true
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt16, addr 0x266de60, size 0x58, virtual true, abstract: false, final true
  inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt32, addr 0x266deb8, size 0x58, virtual true, abstract: false, final true
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x266df10, size 0x58, virtual true, abstract: false, final true
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSByte, addr 0x266df68, size 0x58, virtual true, abstract: false, final true
  inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSingle, addr 0x266dfc0, size 0x58, virtual true, abstract: false, final true
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x266e018, size 0x58, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x266e070, size 0x58, virtual true, abstract: false, final true
  inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x266e0c8, size 0x58, virtual true, abstract: false, final true
  inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x266e120, size 0x58, virtual true, abstract: false, final true
  inline uint64_t ToUInt64(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonFormatterConverter(JsonFormatterConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonFormatterConverter(JsonFormatterConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonFormatterConverter();

public:
  /// @brief Field _reader, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* ____reader;

  /// @brief Field _contract, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonISerializableContract* ____contract;

  /// @brief Field _member, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonProperty* ____member;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonFormatterConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____contract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____member) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonFormatterConverter*, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
