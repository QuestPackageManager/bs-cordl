#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageAttrib)
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib);
// Type: ::Format
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: true
// CS Name: ::ImageAttrib::Format
struct CORDL_TYPE __ImageAttrib__Format {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____ImageAttrib__Format_Unwrapped
  enum struct ____ImageAttrib__Format_Unwrapped : uint8_t {
    __E_Jpeg = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ImageAttrib__Format_Unwrapped() const noexcept {
    return static_cast<____ImageAttrib__Format_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ImageAttrib__Format();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ImageAttrib__Format(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Jpeg value: static_cast<uint8_t>(0x1u)
  static ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format const Jpeg;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, 0x1>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Attr
// Type: Org.BouncyCastle.Bcpg.Attr::ImageAttrib
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Attr::ImageAttrib*
class CORDL_TYPE ImageAttrib : public ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket {
public:
  // Declarations
  using Format = ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format;

  __declspec(property(get = get_Encoding)) int32_t Encoding;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field Zeroes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zeroes, put = setStaticF_Zeroes))::ArrayW<uint8_t, ::Array<uint8_t>*> Zeroes;

  /// @brief Field _encoding, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) int32_t _encoding;

  /// @brief Field _version, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field hdrLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hdrLength, put = __cordl_internal_set_hdrLength)) int32_t hdrLength;

  /// @brief Field imageData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_imageData, put = __cordl_internal_set_imageData))::ArrayW<uint8_t, ::Array<uint8_t>*> imageData;

  /// @brief Method GetImageData, addr 0x142a998, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetImageData();

  static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(bool forceLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData);

  /// @brief Method ToByteArray, addr 0x142a83c, size 0x14c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData);

  constexpr int32_t const& __cordl_internal_get__encoding() const;

  constexpr int32_t& __cordl_internal_get__encoding();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr int32_t const& __cordl_internal_get_hdrLength() const;

  constexpr int32_t& __cordl_internal_get_hdrLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_imageData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_imageData();

  constexpr void __cordl_internal_set__encoding(int32_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

  constexpr void __cordl_internal_set_hdrLength(int32_t value);

  constexpr void __cordl_internal_set_imageData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x142a6dc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x142a6e8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(bool forceLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x142a7c4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zeroes();

  /// @brief Method get_Encoding, addr 0x142a990, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Encoding();

  /// @brief Method get_Version, addr 0x142a988, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Version();

  static inline void setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageAttrib();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageAttrib(ImageAttrib&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageAttrib(ImageAttrib const&) = delete;

  /// @brief Field hdrLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___hdrLength;

  /// @brief Field _version, offset: 0x24, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _encoding, offset: 0x28, size: 0x4, def value: None
  int32_t ____encoding;

  /// @brief Field imageData, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___imageData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, ___hdrLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, ____version) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, ____encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, ___imageData) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Attr
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib/Format");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib");
