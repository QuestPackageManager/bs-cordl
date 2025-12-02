#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X500/DirectoryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::DirectoryString);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X500.DirectoryString
class CORDL_TYPE DirectoryString : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::Org::BouncyCastle::Asn1::DerStringBase* str;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1String"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1String*() noexcept;

  /// @brief Method GetInstance, addr 0x3431130, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x3430e94, size 0x294, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* GetInstance(::System::Object* obj);

  /// @brief Method GetString, addr 0x3431210, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW GetString();

  static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* New_ctor(::Org::BouncyCastle::Asn1::DerStringBase* str);

  static inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* New_ctor(::StringW str);

  /// @brief Method ToAsn1Object, addr 0x343122c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerStringBase* const& __cordl_internal_get_str() const;

  constexpr ::Org::BouncyCastle::Asn1::DerStringBase*& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_str(::Org::BouncyCastle::Asn1::DerStringBase* value);

  /// @brief Method .ctor, addr 0x3431128, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerStringBase* str);

  /// @brief Method .ctor, addr 0x34311a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1String"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1String* i___Org__BouncyCastle__Asn1__IAsn1String() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectoryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectoryString(DirectoryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectoryString(DirectoryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 325 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerStringBase* ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X500::DirectoryString, ___str) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::DirectoryString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::DirectoryString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::DirectoryString*, "Org.BouncyCastle.Asn1.X500", "DirectoryString");
