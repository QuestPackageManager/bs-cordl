#pragma once
// IWYU pragma private; include "System/IConvertible.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IConvertible)
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
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
class IConvertible;
}
// Write type traits
MARK_REF_PTR_T(::System::IConvertible);
// Type: System::IConvertible
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::IConvertible*
class CORDL_TYPE IConvertible {
public:
  // Declarations
  /// @brief Method GetTypeCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint8_t ToByte(::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline char16_t ToChar(::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Decimal ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int16_t ToInt16(::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int8_t ToSByte(::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ToSingle(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint16_t ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t ToUInt64(::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "", ty: "IConvertible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConvertible(IConvertible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConvertible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConvertible(IConvertible const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IConvertible);
DEFINE_IL2CPP_ARG_TYPE(::System::IConvertible*, "System", "IConvertible");
