#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthEnvelopedGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsAuthEnvelopedGenerator)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedGenerator
class CORDL_TYPE CmsAuthEnvelopedGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field Aes128Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes128Ccm, put = setStaticF_Aes128Ccm)) ::StringW Aes128Ccm;

  /// @brief Field Aes128Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes128Gcm, put = setStaticF_Aes128Gcm)) ::StringW Aes128Gcm;

  /// @brief Field Aes192Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes192Ccm, put = setStaticF_Aes192Ccm)) ::StringW Aes192Ccm;

  /// @brief Field Aes192Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes192Gcm, put = setStaticF_Aes192Gcm)) ::StringW Aes192Gcm;

  /// @brief Field Aes256Ccm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes256Ccm, put = setStaticF_Aes256Ccm)) ::StringW Aes256Ccm;

  /// @brief Field Aes256Gcm, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Aes256Gcm, put = setStaticF_Aes256Gcm)) ::StringW Aes256Gcm;

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x26575b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_Aes128Ccm();

  static inline ::StringW getStaticF_Aes128Gcm();

  static inline ::StringW getStaticF_Aes192Ccm();

  static inline ::StringW getStaticF_Aes192Gcm();

  static inline ::StringW getStaticF_Aes256Ccm();

  static inline ::StringW getStaticF_Aes256Gcm();

  static inline void setStaticF_Aes128Ccm(::StringW value);

  static inline void setStaticF_Aes128Gcm(::StringW value);

  static inline void setStaticF_Aes192Ccm(::StringW value);

  static inline void setStaticF_Aes192Gcm(::StringW value);

  static inline void setStaticF_Aes256Ccm(::StringW value);

  static inline void setStaticF_Aes256Gcm(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthEnvelopedGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthEnvelopedGenerator(CmsAuthEnvelopedGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedGenerator");
