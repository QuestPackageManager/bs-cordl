#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ExporterLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExporterLabel)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ExporterLabel;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ExporterLabel);
// Type: Org.BouncyCastle.Crypto.Tls::ExporterLabel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ExporterLabel*
class CORDL_TYPE ExporterLabel : public ::System::Object {
public:
  // Declarations
  /// @brief Field extended_master_secret, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_extended_master_secret, put = setStaticF_extended_master_secret)) ::StringW extended_master_secret;

  static inline ::Org::BouncyCastle::Crypto::Tls::ExporterLabel* New_ctor();

  /// @brief Method .ctor, addr 0x23e1534, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_extended_master_secret();

  static inline void setStaticF_extended_master_secret(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExporterLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExporterLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExporterLabel(ExporterLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExporterLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExporterLabel(ExporterLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1242 };

  /// @brief Field client_EAP_encryption offset 0xffffffff size 0x8
  static constexpr ::ConstString client_EAP_encryption{ u"client EAP encryption" };

  /// @brief Field client_finished offset 0xffffffff size 0x8
  static constexpr ::ConstString client_finished{ u"client finished" };

  /// @brief Field dtls_srtp offset 0xffffffff size 0x8
  static constexpr ::ConstString dtls_srtp{ u"EXTRACTOR-dtls_srtp" };

  /// @brief Field key_expansion offset 0xffffffff size 0x8
  static constexpr ::ConstString key_expansion{ u"key expansion" };

  /// @brief Field master_secret offset 0xffffffff size 0x8
  static constexpr ::ConstString master_secret{ u"master secret" };

  /// @brief Field server_finished offset 0xffffffff size 0x8
  static constexpr ::ConstString server_finished{ u"server finished" };

  /// @brief Field ttls_challenge offset 0xffffffff size 0x8
  static constexpr ::ConstString ttls_challenge{ u"ttls challenge" };

  /// @brief Field ttls_keying_material offset 0xffffffff size 0x8
  static constexpr ::ConstString ttls_keying_material{ u"ttls keying material" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ExporterLabel, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ExporterLabel);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ExporterLabel*, "Org.BouncyCastle.Crypto.Tls", "ExporterLabel");
