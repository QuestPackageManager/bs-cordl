#pragma once
// IWYU pragma private; include "System/Xml/Linq/XDeclaration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDeclaration)
// Forward declare root types
namespace System::Xml::Linq {
class XDeclaration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XDeclaration);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XDeclaration
class CORDL_TYPE XDeclaration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Encoding, put = set_Encoding)) ::StringW Encoding;

  __declspec(property(get = get_Standalone, put = set_Standalone)) ::StringW Standalone;

  __declspec(property(get = get_Version)) ::StringW Version;

  /// @brief Field _encoding, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::StringW _encoding;

  /// @brief Field _standalone, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standalone, put = __cordl_internal_set__standalone)) ::StringW _standalone;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::StringW _version;

  static inline ::System::Xml::Linq::XDeclaration* New_ctor(::System::Xml::Linq::XDeclaration* other);

  static inline ::System::Xml::Linq::XDeclaration* New_ctor(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method ToString, addr 0x5ff32e0, size 0x180, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__encoding() const;

  constexpr ::StringW& __cordl_internal_get__encoding();

  constexpr ::StringW const& __cordl_internal_get__standalone() const;

  constexpr ::StringW& __cordl_internal_get__standalone();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__encoding(::StringW value);

  constexpr void __cordl_internal_set__standalone(::StringW value);

  constexpr void __cordl_internal_set__version(::StringW value);

  /// @brief Method .ctor, addr 0x5ff3254, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XDeclaration* other);

  /// @brief Method .ctor, addr 0x5ff3248, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method get_Encoding, addr 0x5ff32b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Encoding();

  /// @brief Method get_Standalone, addr 0x5ff32c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Standalone();

  /// @brief Method get_Version, addr 0x5ff32d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  /// @brief Method set_Encoding, addr 0x5ff32c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Encoding(::StringW value);

  /// @brief Method set_Standalone, addr 0x5ff32d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Standalone(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDeclaration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDeclaration(XDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDeclaration(XDeclaration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21782 };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _encoding, offset: 0x18, size: 0x8, def value: None
  ::StringW ____encoding;

  /// @brief Field _standalone, offset: 0x20, size: 0x8, def value: None
  ::StringW ____standalone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XDeclaration, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDeclaration, ____encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDeclaration, ____standalone) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XDeclaration, 0x28>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDeclaration*, "System.Xml.Linq", "XDeclaration");
