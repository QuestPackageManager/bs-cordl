#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/RegTokenControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegTokenControl)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class RegTokenControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::RegTokenControl);
// Dependencies Org.BouncyCastle.Crmf.IControl, System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.RegTokenControl
class CORDL_TYPE RegTokenControl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field token, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_token, put = __cordl_internal_set_token)) ::Org::BouncyCastle::Asn1::DerUtf8String* token;

  /// @brief Field type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_type, put = setStaticF_type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  /// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
  constexpr operator ::Org::BouncyCastle::Crmf::IControl*() noexcept;

  static inline ::Org::BouncyCastle::Crmf::RegTokenControl* New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token);

  static inline ::Org::BouncyCastle::Crmf::RegTokenControl* New_ctor(::StringW token);

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String* const& __cordl_internal_get_token() const;

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __cordl_internal_get_token();

  constexpr void __cordl_internal_set_token(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  /// @brief Method .ctor, addr 0x268141c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token);

  /// @brief Method .ctor, addr 0x2686038, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW token);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_type();

  /// @brief Method get_Type, addr 0x26860ac, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value, addr 0x2686104, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Convert to "::Org::BouncyCastle::Crmf::IControl"
  constexpr ::Org::BouncyCastle::Crmf::IControl* i___Org__BouncyCastle__Crmf__IControl() noexcept;

  static inline void setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegTokenControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegTokenControl(RegTokenControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegTokenControl(RegTokenControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 713 };

  /// @brief Field token, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crmf::RegTokenControl, ___token) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::RegTokenControl, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::RegTokenControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::RegTokenControl*, "Org.BouncyCastle.Crmf", "RegTokenControl");
