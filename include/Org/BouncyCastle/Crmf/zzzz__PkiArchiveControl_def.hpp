#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiArchiveControl)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PkiArchiveControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PkiArchiveControl);
// Type: Org.BouncyCastle.Crmf::PkiArchiveControl
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(703))
// CS Name: ::Org.BouncyCastle.Crmf::PkiArchiveControl*
class CORDL_TYPE PkiArchiveControl : public ::System::Object {
public:
  // Declarations
  /// @brief Field pkiArchiveOptions, offset 0x10, size 0x8
  __declspec(property(get = __get_pkiArchiveOptions, put = __set_pkiArchiveOptions))::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions;

  /// @brief Field encryptedPrivKey, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_encryptedPrivKey, put = setStaticF_encryptedPrivKey)) int32_t encryptedPrivKey;

  /// @brief Field keyGenParameters, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_keyGenParameters, put = setStaticF_keyGenParameters)) int32_t keyGenParameters;

  /// @brief Field archiveRemGenPrivKey, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_archiveRemGenPrivKey, put = setStaticF_archiveRemGenPrivKey)) int32_t archiveRemGenPrivKey;

  /// @brief Field type, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_type, put = setStaticF_type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  __declspec(property(get = get_ArchiveType)) int32_t ArchiveType;

  __declspec(property(get = get_EnvelopedData)) bool EnvelopedData;

  /// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
  constexpr operator ::Org::BouncyCastle::Crmf::IControl*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*& __get_pkiArchiveOptions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*> const& __get_pkiArchiveOptions() const;

  constexpr void __set_pkiArchiveOptions(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* value);

  static inline void setStaticF_encryptedPrivKey(int32_t value);

  static inline int32_t getStaticF_encryptedPrivKey();

  static inline void setStaticF_keyGenParameters(int32_t value);

  static inline int32_t getStaticF_keyGenParameters();

  static inline void setStaticF_archiveRemGenPrivKey(int32_t value);

  static inline int32_t getStaticF_archiveRemGenPrivKey();

  static inline void setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_type();

  static inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions);

  /// @brief Method .ctor, addr 0x120e268, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions);

  /// @brief Method get_Type, addr 0x12117d0, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value, addr 0x1211828, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Method get_ArchiveType, addr 0x1211830, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_ArchiveType();

  /// @brief Method get_EnvelopedData, addr 0x1211850, size 0x44, virtual false, abstract: false, final false
  inline bool get_EnvelopedData();

  /// @brief Method GetEnvelopedData, addr 0x1211894, size 0x264, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* GetEnvelopedData();

  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiArchiveControl(PkiArchiveControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiArchiveControl(PkiArchiveControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiArchiveControl();

public:
  /// @brief Field pkiArchiveOptions, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* ___pkiArchiveOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PkiArchiveControl, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PkiArchiveControl, ___pkiArchiveOptions) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PkiArchiveControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PkiArchiveControl*, "Org.BouncyCastle.Crmf", "PkiArchiveControl");
