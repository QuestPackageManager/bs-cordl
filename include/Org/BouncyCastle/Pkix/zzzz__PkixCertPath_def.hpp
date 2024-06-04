#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixCertPath)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPath);
// Type: Org.BouncyCastle.Pkix::PkixCertPath
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPath*
class CORDL_TYPE PkixCertPath : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificates))::System::Collections::IList* Certificates;

  __declspec(property(get = get_Encodings))::System::Collections::IEnumerable* Encodings;

  /// @brief Field certPathEncodings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_certPathEncodings, put = setStaticF_certPathEncodings))::System::Collections::IList* certPathEncodings;

  /// @brief Field certificates, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificates, put = __cordl_internal_set_certificates))::System::Collections::IList* certificates;

  /// @brief Method Equals, addr 0x135b814, size 0x41c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEncoded, addr 0x135bc58, size 0x344, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0x135bf9c, size 0x88c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  /// @brief Method GetHashCode, addr 0x135bc30, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::Collections::ICollection* certificates);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream* inStream, ::StringW encoding);

  /// @brief Method SortCerts, addr 0x135a12c, size 0xd94, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* SortCerts(::System::Collections::IList* certs);

  /// @brief Method ToAsn1Object, addr 0x135c828, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method ToDerEncoded, addr 0x135c928, size 0x11c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToDerEncoded(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  constexpr ::System::Collections::IList*& __cordl_internal_get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_certificates() const;

  constexpr void __cordl_internal_set_certificates(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x1355410, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* certificates);

  /// @brief Method .ctor, addr 0x135aec0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor, addr 0x135af18, size 0x86c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, ::StringW encoding);

  static inline ::System::Collections::IList* getStaticF_certPathEncodings();

  /// @brief Method get_Certificates, addr 0x135ca44, size 0xc, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_Certificates();

  /// @brief Method get_Encodings, addr 0x135b784, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_Encodings();

  static inline void setStaticF_certPathEncodings(::System::Collections::IList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPath(PkixCertPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPath(PkixCertPath const&) = delete;

  /// @brief Field certificates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___certificates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPath, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPath, ___certificates) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPath);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPath*, "Org.BouncyCastle.Pkix", "PkixCertPath");
