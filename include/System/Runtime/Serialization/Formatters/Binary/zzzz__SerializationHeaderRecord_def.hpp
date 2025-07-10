#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/SerializationHeaderRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
class CORDL_TYPE SerializationHeaderRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field binaryFormatterMajorVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryFormatterMajorVersion, put = __cordl_internal_set_binaryFormatterMajorVersion)) int32_t binaryFormatterMajorVersion;

  /// @brief Field binaryFormatterMinorVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryFormatterMinorVersion, put = __cordl_internal_set_binaryFormatterMinorVersion)) int32_t binaryFormatterMinorVersion;

  /// @brief Field binaryHeaderEnum, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryHeaderEnum,
                      put = __cordl_internal_set_binaryHeaderEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field headerId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_headerId, put = __cordl_internal_set_headerId)) int32_t headerId;

  /// @brief Field majorVersion, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_majorVersion, put = __cordl_internal_set_majorVersion)) int32_t majorVersion;

  /// @brief Field minorVersion, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_minorVersion, put = __cordl_internal_set_minorVersion)) int32_t minorVersion;

  /// @brief Field topId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_topId, put = __cordl_internal_set_topId)) int32_t topId;

  /// @brief Method Dump, addr 0x3d009f0, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  /// @brief Method GetInt32, addr 0x3d00830, size 0x74, virtual false, abstract: false, final false
  static inline int32_t GetInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum,
                                                                                                          int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion);

  /// @brief Method Read, addr 0x3d008a4, size 0x14c, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Write, addr 0x3d00780, size 0xb0, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_binaryFormatterMajorVersion() const;

  constexpr int32_t& __cordl_internal_get_binaryFormatterMajorVersion();

  constexpr int32_t const& __cordl_internal_get_binaryFormatterMinorVersion() const;

  constexpr int32_t& __cordl_internal_get_binaryFormatterMinorVersion();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __cordl_internal_get_binaryHeaderEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __cordl_internal_get_binaryHeaderEnum();

  constexpr int32_t const& __cordl_internal_get_headerId() const;

  constexpr int32_t& __cordl_internal_get_headerId();

  constexpr int32_t const& __cordl_internal_get_majorVersion() const;

  constexpr int32_t& __cordl_internal_get_majorVersion();

  constexpr int32_t const& __cordl_internal_get_minorVersion() const;

  constexpr int32_t& __cordl_internal_get_minorVersion();

  constexpr int32_t const& __cordl_internal_get_topId() const;

  constexpr int32_t& __cordl_internal_get_topId();

  constexpr void __cordl_internal_set_binaryFormatterMajorVersion(int32_t value);

  constexpr void __cordl_internal_set_binaryFormatterMinorVersion(int32_t value);

  constexpr void __cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr void __cordl_internal_set_headerId(int32_t value);

  constexpr void __cordl_internal_set_majorVersion(int32_t value);

  constexpr void __cordl_internal_set_minorVersion(int32_t value);

  constexpr void __cordl_internal_set_topId(int32_t value);

  /// @brief Method .ctor, addr 0x3d00718, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d00728, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationHeaderRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationHeaderRecord(SerializationHeaderRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationHeaderRecord(SerializationHeaderRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3258 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryFormatterMajorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryFormatterMinorVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___binaryHeaderEnum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___topId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___headerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___majorVersion) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, ___minorVersion) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
