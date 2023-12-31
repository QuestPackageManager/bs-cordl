#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationHeaderRecord)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerializationHeaderRecord;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
// Type: System.Runtime.Serialization.Formatters.Binary::SerializationHeaderRecord
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3243)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3258))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SerializationHeaderRecord*
class CORDL_TYPE SerializationHeaderRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field binaryFormatterMajorVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_binaryFormatterMajorVersion, put = __set_binaryFormatterMajorVersion)) int32_t binaryFormatterMajorVersion;

  /// @brief Field binaryFormatterMinorVersion, offset 0x14, size 0x4
  __declspec(property(get = __get_binaryFormatterMinorVersion, put = __set_binaryFormatterMinorVersion)) int32_t binaryFormatterMinorVersion;

  /// @brief Field binaryHeaderEnum, offset 0x18, size 0x4
  __declspec(property(get = __get_binaryHeaderEnum, put = __set_binaryHeaderEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field topId, offset 0x1c, size 0x4
  __declspec(property(get = __get_topId, put = __set_topId)) int32_t topId;

  /// @brief Field headerId, offset 0x20, size 0x4
  __declspec(property(get = __get_headerId, put = __set_headerId)) int32_t headerId;

  /// @brief Field majorVersion, offset 0x24, size 0x4
  __declspec(property(get = __get_majorVersion, put = __set_majorVersion)) int32_t majorVersion;

  /// @brief Field minorVersion, offset 0x28, size 0x4
  __declspec(property(get = __get_minorVersion, put = __set_minorVersion)) int32_t minorVersion;

  constexpr int32_t& __get_binaryFormatterMajorVersion();

  constexpr int32_t const& __get_binaryFormatterMajorVersion() const;

  constexpr void __set_binaryFormatterMajorVersion(int32_t value);

  constexpr int32_t& __get_binaryFormatterMinorVersion();

  constexpr int32_t const& __get_binaryFormatterMinorVersion() const;

  constexpr void __set_binaryFormatterMinorVersion(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __get_binaryHeaderEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __get_binaryHeaderEnum() const;

  constexpr void __set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr int32_t& __get_topId();

  constexpr int32_t const& __get_topId() const;

  constexpr void __set_topId(int32_t value);

  constexpr int32_t& __get_headerId();

  constexpr int32_t const& __get_headerId() const;

  constexpr void __set_headerId(int32_t value);

  constexpr int32_t& __get_majorVersion();

  constexpr int32_t const& __get_majorVersion() const;

  constexpr void __set_majorVersion(int32_t value);

  constexpr int32_t& __get_minorVersion();

  constexpr int32_t const& __get_minorVersion() const;

  constexpr void __set_minorVersion(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor();

  /// @brief Method .ctor, addr 0x24c1ad4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum,
                                                                                                          int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion);

  /// @brief Method .ctor, addr 0x24c1ae4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion);

  /// @brief Method Write, addr 0x24c1b3c, size 0xb0, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method GetInt32, addr 0x24c1bec, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index);

  /// @brief Method Read, addr 0x24c1c60, size 0x164, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump, addr 0x24c1dc4, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationHeaderRecord(SerializationHeaderRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationHeaderRecord(SerializationHeaderRecord const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationHeaderRecord();

public:
  /// @brief Field binaryFormatterMajorVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___binaryFormatterMajorVersion;

  /// @brief Field binaryFormatterMinorVersion, offset: 0x14, size: 0x4, def value: None
  int32_t ___binaryFormatterMinorVersion;

  /// @brief Field binaryHeaderEnum, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum ___binaryHeaderEnum;

  /// @brief Field topId, offset: 0x1c, size: 0x4, def value: None
  int32_t ___topId;

  /// @brief Field headerId, offset: 0x20, size: 0x4, def value: None
  int32_t ___headerId;

  /// @brief Field majorVersion, offset: 0x24, size: 0x4, def value: None
  int32_t ___majorVersion;

  /// @brief Field minorVersion, offset: 0x28, size: 0x4, def value: None
  int32_t ___minorVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryFormatterMajorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryFormatterMinorVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryHeaderEnum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___topId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___headerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___majorVersion) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___minorVersion) == 0x28, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
