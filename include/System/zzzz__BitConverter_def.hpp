#pragma once
// IWYU pragma private; include "System/BitConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitConverter)
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
}
namespace System {
class BitConverter___c;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace System {
class BitConverter;
}
namespace System {
class BitConverter___c;
}
// Write type traits
MARK_REF_PTR_T(::System::BitConverter);
MARK_REF_PTR_T(::System::BitConverter___c);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.BitConverter/<>c
class CORDL_TYPE BitConverter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::BitConverter___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0,
                      put = setStaticF___9__38_0)) ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>>* __9__38_0;

  static inline ::System::BitConverter___c* New_ctor();

  /// @brief Method <ToString>b__38_0, addr 0x3d5771c, size 0x198, virtual false, abstract: false, final false
  inline void _ToString_b__38_0(::System::Span_1<char16_t> dst, ::System::ValueTuple_3<::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t> state);

  /// @brief Method .ctor, addr 0x3d57714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::BitConverter___c* getStaticF___9();

  static inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>>* getStaticF___9__38_0();

  static inline void setStaticF___9(::System::BitConverter___c* value);

  static inline void setStaticF___9__38_0(::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitConverter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitConverter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitConverter___c(BitConverter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitConverter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitConverter___c(BitConverter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BitConverter___c, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.BitConverter
class CORDL_TYPE BitConverter : public ::System::Object {
public:
  // Declarations
  using __c = ::System::BitConverter___c;

  /// @brief Field IsLittleEndian, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsLittleEndian, put = setStaticF_IsLittleEndian)) bool IsLittleEndian;

  /// @brief Method DoubleToInt64Bits, addr 0x3d5764c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method GetBytes, addr 0x3d56d00, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(bool value);

  /// @brief Method GetBytes, addr 0x3d56d68, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(char16_t value);

  /// @brief Method GetBytes, addr 0x3d57110, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(double_t value);

  /// @brief Method GetBytes, addr 0x3d570a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(float_t value);

  /// @brief Method GetBytes, addr 0x3d56dcc, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int16_t value);

  /// @brief Method GetBytes, addr 0x3d56e30, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int32_t value);

  /// @brief Method GetBytes, addr 0x3d56e94, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int64_t value);

  /// @brief Method GetBytes, addr 0x3d56ef8, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(uint16_t value);

  /// @brief Method GetBytes, addr 0x3d56f5c, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(uint32_t value);

  /// @brief Method GetBytes, addr 0x3d57040, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(uint64_t value);

  /// @brief Method Int32BitsToSingle, addr 0x3d57664, size 0x8, virtual false, abstract: false, final false
  static inline float_t Int32BitsToSingle(int32_t value);

  /// @brief Method Int64BitsToDouble, addr 0x3d57654, size 0x8, virtual false, abstract: false, final false
  static inline double_t Int64BitsToDouble(int64_t value);

  /// @brief Method SingleToInt32Bits, addr 0x3d5765c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SingleToInt32Bits(float_t value);

  /// @brief Method ToChar, addr 0x3d5717c, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToDouble, addr 0x3d5732c, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToInt16, addr 0x3d57180, size 0x84, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToInt32, addr 0x3d57204, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToInt64, addr 0x3d57288, size 0x84, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToSingle, addr 0x3d57318, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToString, addr 0x3d57624, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method ToString, addr 0x3d57340, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex, int32_t length);

  /// @brief Method ToUInt16, addr 0x3d5730c, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToUInt32, addr 0x3d57310, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToUInt64, addr 0x3d57314, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method TryWriteBytes, addr 0x3d56fc0, size 0x80, virtual false, abstract: false, final false
  static inline bool TryWriteBytes(::System::Span_1<uint8_t> destination, uint32_t value);

  static inline bool getStaticF_IsLittleEndian();

  static inline void setStaticF_IsLittleEndian(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitConverter(BitConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitConverter(BitConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BitConverter, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::BitConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter*, "System", "BitConverter");
NEED_NO_BOX(::System::BitConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter___c*, "System", "BitConverter/<>c");
