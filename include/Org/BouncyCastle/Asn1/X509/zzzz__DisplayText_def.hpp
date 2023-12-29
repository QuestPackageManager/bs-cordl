#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayText)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DisplayText);
// Type: Org.BouncyCastle.Asn1.X509::DisplayText
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(356))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DisplayText*
class CORDL_TYPE DisplayText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field contentType, offset 0x10, size 0x4
  __declspec(property(get = __get_contentType, put = __set_contentType)) int32_t contentType;

  /// @brief Field contents, offset 0x18, size 0x8
  __declspec(property(get = __get_contents, put = __set_contents))::Org::BouncyCastle::Asn1::IAsn1String* contents;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr int32_t& __get_contentType();

  constexpr int32_t const& __get_contentType() const;

  constexpr void __set_contentType(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::IAsn1String*& __get_contents();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1String*> const& __get_contents() const;

  constexpr void __set_contents(::Org::BouncyCastle::Asn1::IAsn1String* value);

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(int32_t type, ::StringW text);

  /// @brief Method .ctor addr 0x111b6fc size 0x16c virtual false final false
  inline void _ctor(int32_t type, ::StringW text);

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::StringW text);

  /// @brief Method .ctor addr 0x111b868 size 0xa4 virtual false final false
  inline void _ctor(::StringW text);

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents);

  /// @brief Method .ctor addr 0x111b90c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents);

  /// @brief Method GetInstance addr 0x111b934 size 0x180 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* GetInstance(::System::Object* obj);

  /// @brief Method ToAsn1Object addr 0x111bab4 size 0x78 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method GetString addr 0x111bb2c size 0xa0 virtual false final false
  inline ::StringW GetString();

  // Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayText(DisplayText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayText(DisplayText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayText();

public:
  /// @brief Field contentType, offset: 0x10, size: 0x4, def value: None
  int32_t ___contentType;

  /// @brief Field contents, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IAsn1String* ___contents;

  /// @brief Field ContentTypeIA5String offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeIA5String{ static_cast<int32_t>(0x0) };

  /// @brief Field ContentTypeBmpString offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeBmpString{ static_cast<int32_t>(0x1) };

  /// @brief Field ContentTypeUtf8String offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeUtf8String{ static_cast<int32_t>(0x2) };

  /// @brief Field ContentTypeVisibleString offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeVisibleString{ static_cast<int32_t>(0x3) };

  /// @brief Field DisplayTextMaximumSize offset 0xffffffff size 0x4
  static constexpr int32_t DisplayTextMaximumSize{ static_cast<int32_t>(0xc8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DisplayText, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DisplayText, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DisplayText, ___contents) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DisplayText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DisplayText*, "Org.BouncyCastle.Asn1.X509", "DisplayText");
