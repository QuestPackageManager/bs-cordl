#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DisplayText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayText)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.DisplayText
class CORDL_TYPE DisplayText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field contentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) int32_t contentType;

  /// @brief Field contents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contents, put = __cordl_internal_set_contents)) ::Org::BouncyCastle::Asn1::IAsn1String* contents;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x260484c, size 0x174, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* GetInstance(::System::Object* obj);

  /// @brief Method GetString, addr 0x2604a38, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents);

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(::StringW text);

  static inline ::Org::BouncyCastle::Asn1::X509::DisplayText* New_ctor(int32_t type, ::StringW text);

  /// @brief Method ToAsn1Object, addr 0x26049c0, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr int32_t const& __cordl_internal_get_contentType() const;

  constexpr int32_t& __cordl_internal_get_contentType();

  constexpr ::Org::BouncyCastle::Asn1::IAsn1String* const& __cordl_internal_get_contents() const;

  constexpr ::Org::BouncyCastle::Asn1::IAsn1String*& __cordl_internal_get_contents();

  constexpr void __cordl_internal_set_contentType(int32_t value);

  constexpr void __cordl_internal_set_contents(::Org::BouncyCastle::Asn1::IAsn1String* value);

  /// @brief Method .ctor, addr 0x2604824, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IAsn1String* contents);

  /// @brief Method .ctor, addr 0x2604784, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method .ctor, addr 0x2604628, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::StringW text);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayText(DisplayText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayText(DisplayText const&) = delete;

  /// @brief Field ContentTypeBmpString offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeBmpString{ static_cast<int32_t>(0x1) };

  /// @brief Field ContentTypeIA5String offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeIA5String{ static_cast<int32_t>(0x0) };

  /// @brief Field ContentTypeUtf8String offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeUtf8String{ static_cast<int32_t>(0x2) };

  /// @brief Field ContentTypeVisibleString offset 0xffffffff size 0x4
  static constexpr int32_t ContentTypeVisibleString{ static_cast<int32_t>(0x3) };

  /// @brief Field DisplayTextMaximumSize offset 0xffffffff size 0x4
  static constexpr int32_t DisplayTextMaximumSize{ static_cast<int32_t>(0xc8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 356 };

  /// @brief Field contentType, offset: 0x10, size: 0x4, def value: None
  int32_t ___contentType;

  /// @brief Field contents, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IAsn1String* ___contents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DisplayText, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DisplayText, ___contents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DisplayText, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DisplayText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DisplayText*, "Org.BouncyCastle.Asn1.X509", "DisplayText");
