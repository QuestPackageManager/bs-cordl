#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DBNull)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
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
namespace System {
class DBNull;
}
// Write type traits
MARK_REF_PTR_T(::System::DBNull);
// Type: System::DBNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2367))
// CS Name: ::System::DBNull*
class CORDL_TYPE DBNull : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value, put = setStaticF_Value))::System::DBNull* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*() noexcept;

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

  static inline void setStaticF_Value(::System::DBNull* value);

  static inline ::System::DBNull* getStaticF_Value();

  static inline ::System::DBNull* New_ctor();

  /// @brief Method .ctor, addr 0x25afe7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DBNull* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25afe84, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x25afedc, size 0x10, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x25afeec, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25aff34, size 0x48, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method GetTypeCode, addr 0x25aff7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x25aff84, size 0x50, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x25affd4, size 0x50, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x25b0024, size 0x50, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x25b0074, size 0x50, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x25b00c4, size 0x50, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x25b0114, size 0x50, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x25b0164, size 0x50, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x25b01b4, size 0x50, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x25b0204, size 0x50, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x25b0254, size 0x50, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x25b02a4, size 0x50, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x25b02f4, size 0x50, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x25b0344, size 0x50, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x25b0394, size 0x50, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x25b03e4, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "", ty: "DBNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBNull(DBNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBNull(DBNull const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBNull();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DBNull, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DBNull);
DEFINE_IL2CPP_ARG_TYPE(::System::DBNull*, "System", "DBNull");
