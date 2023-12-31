#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FastBitConverter)
namespace LiteNetLib::Utils {
struct __FastBitConverter__ConverterHelperDouble;
}
namespace LiteNetLib::Utils {
struct __FastBitConverter__ConverterHelperFloat;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class FastBitConverter;
}
namespace LiteNetLib::Utils {
struct __FastBitConverter__ConverterHelperDouble;
}
namespace LiteNetLib::Utils {
struct __FastBitConverter__ConverterHelperFloat;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::FastBitConverter);
MARK_VAL_T(::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble);
MARK_VAL_T(::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat);
// Type: ::ConverterHelperDouble
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14189))
// CS Name: ::FastBitConverter::ConverterHelperDouble
struct CORDL_TYPE __FastBitConverter__ConverterHelperDouble {
public:
  // Declarations
  /// @brief Field Along, offset 0x0, size 0x8
  __declspec(property(get = __get_Along, put = __set_Along)) uint64_t Along;

  /// @brief Field Adouble, offset 0x0, size 0x8
  __declspec(property(get = __get_Adouble, put = __set_Adouble)) double_t Adouble;

  constexpr uint64_t& __get_Along();

  constexpr uint64_t const& __get_Along() const;

  constexpr void __set_Along(uint64_t value);

  constexpr double_t& __get_Adouble();

  constexpr double_t const& __get_Adouble() const;

  constexpr void __set_Adouble(double_t value);

  // Ctor Parameters [CppParam { name: "Along", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Adouble", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __FastBitConverter__ConverterHelperDouble(uint64_t Along, double_t Adouble) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FastBitConverter__ConverterHelperDouble();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Along_padding[0x0];
      /// @brief Field Along, offset: 0x0, size: 0x8, def value: None
      uint64_t ___Along;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Along_padding_forAlignment[0x0];
      /// @brief Field Along, offset: 0x0, size: 0x8, def value: None
      uint64_t ___Along_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Adouble_padding[0x0];
      /// @brief Field Adouble, offset: 0x0, size: 0x8, def value: None
      double_t ___Adouble;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Adouble_padding_forAlignment[0x0];
      /// @brief Field Adouble, offset: 0x0, size: 0x8, def value: None
      double_t ___Adouble_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble, 0x8>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Type: ::ConverterHelperFloat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14190))
// CS Name: ::FastBitConverter::ConverterHelperFloat
struct CORDL_TYPE __FastBitConverter__ConverterHelperFloat {
public:
  // Declarations
  /// @brief Field Aint, offset 0x0, size 0x4
  __declspec(property(get = __get_Aint, put = __set_Aint)) int32_t Aint;

  /// @brief Field Afloat, offset 0x0, size 0x4
  __declspec(property(get = __get_Afloat, put = __set_Afloat)) float_t Afloat;

  constexpr int32_t& __get_Aint();

  constexpr int32_t const& __get_Aint() const;

  constexpr void __set_Aint(int32_t value);

  constexpr float_t& __get_Afloat();

  constexpr float_t const& __get_Afloat() const;

  constexpr void __set_Afloat(float_t value);

  // Ctor Parameters [CppParam { name: "Aint", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Afloat", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __FastBitConverter__ConverterHelperFloat(int32_t Aint, float_t Afloat) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FastBitConverter__ConverterHelperFloat();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Aint_padding[0x0];
      /// @brief Field Aint, offset: 0x0, size: 0x4, def value: None
      int32_t ___Aint;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Aint_padding_forAlignment[0x0];
      /// @brief Field Aint, offset: 0x0, size: 0x4, def value: None
      int32_t ___Aint_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Afloat_padding[0x0];
      /// @brief Field Afloat, offset: 0x0, size: 0x4, def value: None
      float_t ___Afloat;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Afloat_padding_forAlignment[0x0];
      /// @brief Field Afloat, offset: 0x0, size: 0x4, def value: None
      float_t ___Afloat_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat, 0x4>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Type: LiteNetLib.Utils::FastBitConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14191))
// CS Name: ::LiteNetLib.Utils::FastBitConverter*
class CORDL_TYPE FastBitConverter : public ::System::Object {
public:
  // Declarations
  using ConverterHelperFloat = ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat;

  using ConverterHelperDouble = ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble;

  /// @brief Method WriteLittleEndian, addr 0x220873c, size 0xf0, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, uint64_t data);

  /// @brief Method WriteLittleEndian, addr 0x220882c, size 0x80, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t data);

  /// @brief Method WriteLittleEndian, addr 0x22088ac, size 0x48, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int16_t data);

  /// @brief Method GetBytes, addr 0x22088f4, size 0x8, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, double_t value);

  /// @brief Method GetBytes, addr 0x22088fc, size 0x8, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, float_t value);

  /// @brief Method GetBytes, addr 0x2208904, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int16_t value);

  /// @brief Method GetBytes, addr 0x2202c00, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint16_t value);

  /// @brief Method GetBytes, addr 0x22031e4, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int32_t value);

  /// @brief Method GetBytes, addr 0x2208908, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint32_t value);

  /// @brief Method GetBytes, addr 0x21ff194, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int64_t value);

  /// @brief Method GetBytes, addr 0x220890c, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastBitConverter(FastBitConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastBitConverter(FastBitConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastBitConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::FastBitConverter, 0x10>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::FastBitConverter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::FastBitConverter*, "LiteNetLib.Utils", "FastBitConverter");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperDouble");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperFloat");
