#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBinaryWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinaryWriter)
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTimeKind;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBinaryWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonBinaryWriter);
// Type: Newtonsoft.Json.Bson::BsonBinaryWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonBinaryWriter*
class CORDL_TYPE BsonBinaryWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DateTimeKindHandling, put = set_DateTimeKindHandling))::System::DateTimeKind DateTimeKindHandling;

  /// @brief Field Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Encoding, put = setStaticF_Encoding))::System::Text::Encoding* Encoding;

  /// @brief Field <DateTimeKindHandling>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__DateTimeKindHandling_k__BackingField,
                      put = __cordl_internal_set__DateTimeKindHandling_k__BackingField))::System::DateTimeKind _DateTimeKindHandling_k__BackingField;

  /// @brief Field _largeByteBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__largeByteBuffer, put = __cordl_internal_set__largeByteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _largeByteBuffer;

  /// @brief Field _writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::System::IO::BinaryWriter* _writer;

  /// @brief Method CalculateSize, addr 0x2aba0c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t CalculateSize(int32_t stringByteCount);

  /// @brief Method CalculateSize, addr 0x2ab86d8, size 0x89c, virtual false, abstract: false, final false
  inline int32_t CalculateSize(::Newtonsoft::Json::Bson::BsonToken* t);

  /// @brief Method CalculateSizeWithLength, addr 0x2aba0cc, size 0x14, virtual false, abstract: false, final false
  inline int32_t CalculateSizeWithLength(int32_t stringByteCount, bool includeSize);

  /// @brief Method Close, addr 0x2ab8690, size 0x20, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x2ab8670, size 0x20, virtual false, abstract: false, final false
  inline void Flush();

  static inline ::Newtonsoft::Json::Bson::BsonBinaryWriter* New_ctor(::System::IO::BinaryWriter* writer);

  /// @brief Method WriteString, addr 0x2ab9e30, size 0xa4, virtual false, abstract: false, final false
  inline void WriteString(::StringW s, int32_t byteCount, ::System::Nullable_1<int32_t> calculatedlengthPrefix);

  /// @brief Method WriteToken, addr 0x2ab86b0, size 0x28, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::Bson::BsonToken* t);

  /// @brief Method WriteTokenInternal, addr 0x2ab8f74, size 0xe2c, virtual false, abstract: false, final false
  inline void WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken* t);

  /// @brief Method WriteUtf8Bytes, addr 0x2ab9f64, size 0x160, virtual false, abstract: false, final false
  inline void WriteUtf8Bytes(::StringW s, int32_t byteCount);

  constexpr ::System::DateTimeKind const& __cordl_internal_get__DateTimeKindHandling_k__BackingField() const;

  constexpr ::System::DateTimeKind& __cordl_internal_get__DateTimeKindHandling_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__largeByteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__largeByteBuffer();

  constexpr ::System::IO::BinaryWriter*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryWriter*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__DateTimeKindHandling_k__BackingField(::System::DateTimeKind value);

  constexpr void __cordl_internal_set__largeByteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__writer(::System::IO::BinaryWriter* value);

  /// @brief Method .ctor, addr 0x2ab8640, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryWriter* writer);

  static inline ::System::Text::Encoding* getStaticF_Encoding();

  /// @brief Method get_DateTimeKindHandling, addr 0x2ab8630, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_DateTimeKindHandling();

  static inline void setStaticF_Encoding(::System::Text::Encoding* value);

  /// @brief Method set_DateTimeKindHandling, addr 0x2ab8638, size 0x8, virtual false, abstract: false, final false
  inline void set_DateTimeKindHandling(::System::DateTimeKind value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonBinaryWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonBinaryWriter(BsonBinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonBinaryWriter(BsonBinaryWriter const&) = delete;

  /// @brief Field _writer, offset: 0x10, size: 0x8, def value: None
  ::System::IO::BinaryWriter* ____writer;

  /// @brief Field _largeByteBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____largeByteBuffer;

  /// @brief Field <DateTimeKindHandling>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::DateTimeKind ____DateTimeKindHandling_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBinaryWriter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonBinaryWriter, ____writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonBinaryWriter, ____largeByteBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonBinaryWriter, ____DateTimeKindHandling_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryWriter*, "Newtonsoft.Json.Bson", "BsonBinaryWriter");
