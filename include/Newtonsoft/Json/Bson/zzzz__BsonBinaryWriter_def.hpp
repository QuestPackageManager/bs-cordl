#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinaryWriter)
namespace System::Text {
class Encoding;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
struct DateTimeKind;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2369)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12070))
// CS Name: ::Newtonsoft.Json.Bson::BsonBinaryWriter*
class CORDL_TYPE BsonBinaryWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _writer, offset 0x10, size 0x8
  __declspec(property(get = __get__writer, put = __set__writer))::System::IO::BinaryWriter* _writer;

  /// @brief Field _largeByteBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__largeByteBuffer, put = __set__largeByteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _largeByteBuffer;

  /// @brief Field <DateTimeKindHandling>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__DateTimeKindHandling_k__BackingField, put = __set__DateTimeKindHandling_k__BackingField))::System::DateTimeKind _DateTimeKindHandling_k__BackingField;

  /// @brief Field Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Encoding, put = setStaticF_Encoding))::System::Text::Encoding* Encoding;

  __declspec(property(get = get_DateTimeKindHandling, put = set_DateTimeKindHandling))::System::DateTimeKind DateTimeKindHandling;

  constexpr ::System::IO::BinaryWriter*& __get__writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryWriter*> const& __get__writer() const;

  constexpr void __set__writer(::System::IO::BinaryWriter* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__largeByteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__largeByteBuffer() const;

  constexpr void __set__largeByteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::DateTimeKind& __get__DateTimeKindHandling_k__BackingField();

  constexpr ::System::DateTimeKind const& __get__DateTimeKindHandling_k__BackingField() const;

  constexpr void __set__DateTimeKindHandling_k__BackingField(::System::DateTimeKind value);

  static inline void setStaticF_Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_Encoding();

  /// @brief Method get_DateTimeKindHandling addr 0x26c49a0 size 0x8 virtual false final false
  inline ::System::DateTimeKind get_DateTimeKindHandling();

  /// @brief Method set_DateTimeKindHandling addr 0x26c49a8 size 0x8 virtual false final false
  inline void set_DateTimeKindHandling(::System::DateTimeKind value);

  static inline ::Newtonsoft::Json::Bson::BsonBinaryWriter* New_ctor(::System::IO::BinaryWriter* writer);

  /// @brief Method .ctor addr 0x26c49b0 size 0x30 virtual false final false
  inline void _ctor(::System::IO::BinaryWriter* writer);

  /// @brief Method Flush addr 0x26c49e0 size 0x20 virtual false final false
  inline void Flush();

  /// @brief Method Close addr 0x26c4a00 size 0x20 virtual false final false
  inline void Close();

  /// @brief Method WriteToken addr 0x26c4a20 size 0x28 virtual false final false
  inline void WriteToken(::Newtonsoft::Json::Bson::BsonToken* t);

  /// @brief Method WriteTokenInternal addr 0x26c52e4 size 0xe54 virtual false final false
  inline void WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken* t);

  /// @brief Method WriteString addr 0x26c61c8 size 0xa4 virtual false final false
  inline void WriteString(::StringW s, int32_t byteCount, ::System::Nullable_1<int32_t> calculatedlengthPrefix);

  /// @brief Method WriteUtf8Bytes addr 0x26c62fc size 0x144 virtual false final false
  inline void WriteUtf8Bytes(::StringW s, int32_t byteCount);

  /// @brief Method CalculateSize addr 0x26c6440 size 0x8 virtual false final false
  inline int32_t CalculateSize(int32_t stringByteCount);

  /// @brief Method CalculateSizeWithLength addr 0x26c6448 size 0x14 virtual false final false
  inline int32_t CalculateSizeWithLength(int32_t stringByteCount, bool includeSize);

  /// @brief Method CalculateSize addr 0x26c4a48 size 0x89c virtual false final false
  inline int32_t CalculateSize(::Newtonsoft::Json::Bson::BsonToken* t);

  // Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonBinaryWriter(BsonBinaryWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonBinaryWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonBinaryWriter(BsonBinaryWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonBinaryWriter();

public:
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

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryWriter*, "Newtonsoft.Json.Bson", "BsonBinaryWriter");
