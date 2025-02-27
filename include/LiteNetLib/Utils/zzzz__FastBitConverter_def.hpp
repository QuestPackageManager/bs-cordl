#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/FastBitConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FastBitConverter)
namespace LiteNetLib::Utils {
struct FastBitConverter_ConverterHelperDouble;
}
namespace LiteNetLib::Utils {
struct FastBitConverter_ConverterHelperFloat;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class FastBitConverter;
}
namespace LiteNetLib::Utils {
struct FastBitConverter_ConverterHelperDouble;
}
namespace LiteNetLib::Utils {
struct FastBitConverter_ConverterHelperFloat;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::FastBitConverter);
MARK_VAL_T(::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble);
MARK_VAL_T(::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat);
// Dependencies
namespace LiteNetLib::Utils {
// Is value type: true
// CS Name: LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
struct CORDL_TYPE FastBitConverter_ConverterHelperDouble {
public:
  // Declarations
  /// @brief Field Adouble, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Adouble, put = __cordl_internal_set_Adouble)) double_t Adouble;

  /// @brief Field Along, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Along, put = __cordl_internal_set_Along)) uint64_t Along;

  constexpr double_t const& __cordl_internal_get_Adouble() const;

  constexpr double_t& __cordl_internal_get_Adouble();

  constexpr uint64_t const& __cordl_internal_get_Along() const;

  constexpr uint64_t& __cordl_internal_get_Along();

  constexpr void __cordl_internal_set_Adouble(double_t value);

  constexpr void __cordl_internal_set_Along(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FastBitConverter_ConverterHelperDouble();

  // Ctor Parameters [CppParam { name: "Along", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Adouble", ty: "double_t", modifiers: "", def_value: None }]
  constexpr FastBitConverter_ConverterHelperDouble(uint64_t Along, double_t Adouble) noexcept;

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
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble, 0x8>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Dependencies
namespace LiteNetLib::Utils {
// Is value type: true
// CS Name: LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat
struct CORDL_TYPE FastBitConverter_ConverterHelperFloat {
public:
  // Declarations
  /// @brief Field Afloat, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Afloat, put = __cordl_internal_set_Afloat)) float_t Afloat;

  /// @brief Field Aint, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Aint, put = __cordl_internal_set_Aint)) int32_t Aint;

  constexpr float_t const& __cordl_internal_get_Afloat() const;

  constexpr float_t& __cordl_internal_get_Afloat();

  constexpr int32_t const& __cordl_internal_get_Aint() const;

  constexpr int32_t& __cordl_internal_get_Aint();

  constexpr void __cordl_internal_set_Afloat(float_t value);

  constexpr void __cordl_internal_set_Aint(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FastBitConverter_ConverterHelperFloat();

  // Ctor Parameters [CppParam { name: "Aint", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Afloat", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FastBitConverter_ConverterHelperFloat(int32_t Aint, float_t Afloat) noexcept;

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
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat, 0x4>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.FastBitConverter
class CORDL_TYPE FastBitConverter : public ::System::Object {
public:
  // Declarations
  using ConverterHelperDouble = ::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble;

  using ConverterHelperFloat = ::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat;

  /// @brief Method GetBytes, addr 0x3ac9b8c, size 0x8, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, double_t value);

  /// @brief Method GetBytes, addr 0x3ac9b94, size 0x8, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, float_t value);

  /// @brief Method GetBytes, addr 0x3ac9b9c, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int16_t value);

  /// @brief Method GetBytes, addr 0x3ac44dc, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int32_t value);

  /// @brief Method GetBytes, addr 0x3ac0774, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int64_t value);

  /// @brief Method GetBytes, addr 0x3ac3fec, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint16_t value);

  /// @brief Method GetBytes, addr 0x3ac9ba0, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint32_t value);

  /// @brief Method GetBytes, addr 0x3ac9ba4, size 0x4, virtual false, abstract: false, final false
  static inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint64_t value);

  /// @brief Method WriteLittleEndian, addr 0x3ac9b44, size 0x48, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int16_t data);

  /// @brief Method WriteLittleEndian, addr 0x3ac9ac4, size 0x80, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t data);

  /// @brief Method WriteLittleEndian, addr 0x3ac99d4, size 0xf0, virtual false, abstract: false, final false
  static inline void WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, uint64_t data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastBitConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastBitConverter(FastBitConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastBitConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastBitConverter(FastBitConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::FastBitConverter, 0x10>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::FastBitConverter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::FastBitConverter*, "LiteNetLib.Utils", "FastBitConverter");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperDouble");
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperFloat");
