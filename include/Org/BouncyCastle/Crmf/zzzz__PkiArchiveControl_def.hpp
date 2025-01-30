#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/PkiArchiveControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiArchiveControl)
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PkiArchiveControl);
// Dependencies Org.BouncyCastle.Crmf.IControl, System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.PkiArchiveControl
class CORDL_TYPE PkiArchiveControl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArchiveType)) int32_t ArchiveType;

  __declspec(property(get = get_EnvelopedData)) bool EnvelopedData;

  __declspec(property(get = get_Type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field archiveRemGenPrivKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_archiveRemGenPrivKey, put = setStaticF_archiveRemGenPrivKey)) int32_t archiveRemGenPrivKey;

  /// @brief Field encryptedPrivKey, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_encryptedPrivKey, put = setStaticF_encryptedPrivKey)) int32_t encryptedPrivKey;

  /// @brief Field keyGenParameters, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_keyGenParameters, put = setStaticF_keyGenParameters)) int32_t keyGenParameters;

  /// @brief Field pkiArchiveOptions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiArchiveOptions, put = __cordl_internal_set_pkiArchiveOptions)) ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions;

  /// @brief Field type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_type, put = setStaticF_type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  /// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
  constexpr operator ::Org::BouncyCastle::Crmf::IControl*() noexcept;

  /// @brief Method GetEnvelopedData, addr 0x2684988, size 0x244, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* GetEnvelopedData();

  static inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* const& __cordl_internal_get_pkiArchiveOptions() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*& __cordl_internal_get_pkiArchiveOptions();

  constexpr void __cordl_internal_set_pkiArchiveOptions(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* value);

  /// @brief Method .ctor, addr 0x26813f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions);

  static inline int32_t getStaticF_archiveRemGenPrivKey();

  static inline int32_t getStaticF_encryptedPrivKey();

  static inline int32_t getStaticF_keyGenParameters();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_type();

  /// @brief Method get_ArchiveType, addr 0x2684924, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_ArchiveType();

  /// @brief Method get_EnvelopedData, addr 0x2684944, size 0x44, virtual false, abstract: false, final false
  inline bool get_EnvelopedData();

  /// @brief Method get_Type, addr 0x26848c4, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value, addr 0x268491c, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Convert to "::Org::BouncyCastle::Crmf::IControl"
  constexpr ::Org::BouncyCastle::Crmf::IControl* i___Org__BouncyCastle__Crmf__IControl() noexcept;

  static inline void setStaticF_archiveRemGenPrivKey(int32_t value);

  static inline void setStaticF_encryptedPrivKey(int32_t value);

  static inline void setStaticF_keyGenParameters(int32_t value);

  static inline void setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiArchiveControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiArchiveControl(PkiArchiveControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiArchiveControl(PkiArchiveControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 703 };

  /// @brief Field pkiArchiveOptions, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* ___pkiArchiveOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crmf::PkiArchiveControl, ___pkiArchiveOptions) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PkiArchiveControl, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PkiArchiveControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PkiArchiveControl*, "Org.BouncyCastle.Crmf", "PkiArchiveControl");
