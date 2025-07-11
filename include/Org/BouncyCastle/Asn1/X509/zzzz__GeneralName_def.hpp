#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/GeneralName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralName)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::GeneralName);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralName
class CORDL_TYPE GeneralName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Name;

  __declspec(property(get = get_TagNo)) int32_t TagNo;

  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Field tag, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_tag, put = __cordl_internal_set_tag)) int32_t tag;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2606ff4, size 0x404, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x2607470, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* directoryName);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* name, int32_t tag);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(int32_t tag, ::StringW name);

  /// @brief Method ToAsn1Object, addr 0x2607d70, size 0x7c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x2607498, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_obj() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr int32_t const& __cordl_internal_get_tag() const;

  constexpr int32_t& __cordl_internal_get_tag();

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_tag(int32_t value);

  /// @brief Method .ctor, addr 0x2606ab8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* directoryName);

  /// @brief Method .ctor, addr 0x2606ae8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* name, int32_t tag);

  /// @brief Method .ctor, addr 0x2606b18, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  /// @brief Method .ctor, addr 0x2606b48, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::StringW name);

  /// @brief Method copyInts, addr 0x2607aa8, size 0x8c, virtual false, abstract: false, final false
  inline void copyInts(::ArrayW<int32_t, ::Array<int32_t>*> parsedIp, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offSet);

  /// @brief Method get_Name, addr 0x2607490, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name();

  /// @brief Method get_TagNo, addr 0x2607488, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TagNo();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  /// @brief Method parseIPv4, addr 0x2607bec, size 0x100, virtual false, abstract: false, final false
  inline void parseIPv4(::StringW ip, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offset);

  /// @brief Method parseIPv4Mask, addr 0x2607cec, size 0x84, virtual false, abstract: false, final false
  inline void parseIPv4Mask(::StringW mask, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offset);

  /// @brief Method parseIPv6, addr 0x2607668, size 0x440, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> parseIPv6(::StringW ip);

  /// @brief Method parseMask, addr 0x2607b34, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> parseMask(::StringW mask);

  /// @brief Method toGeneralNameEncoding, addr 0x2606de0, size 0x214, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> toGeneralNameEncoding(::StringW ip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralName(GeneralName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralName(GeneralName const&) = delete;

  /// @brief Field DirectoryName offset 0xffffffff size 0x4
  static constexpr int32_t DirectoryName{ static_cast<int32_t>(0x4) };

  /// @brief Field DnsName offset 0xffffffff size 0x4
  static constexpr int32_t DnsName{ static_cast<int32_t>(0x2) };

  /// @brief Field EdiPartyName offset 0xffffffff size 0x4
  static constexpr int32_t EdiPartyName{ static_cast<int32_t>(0x5) };

  /// @brief Field IPAddress offset 0xffffffff size 0x4
  static constexpr int32_t IPAddress{ static_cast<int32_t>(0x7) };

  /// @brief Field OtherName offset 0xffffffff size 0x4
  static constexpr int32_t OtherName{ static_cast<int32_t>(0x0) };

  /// @brief Field RegisteredID offset 0xffffffff size 0x4
  static constexpr int32_t RegisteredID{ static_cast<int32_t>(0x8) };

  /// @brief Field Rfc822Name offset 0xffffffff size 0x4
  static constexpr int32_t Rfc822Name{ static_cast<int32_t>(0x1) };

  /// @brief Field UniformResourceIdentifier offset 0xffffffff size 0x4
  static constexpr int32_t UniformResourceIdentifier{ static_cast<int32_t>(0x6) };

  /// @brief Field X400Address offset 0xffffffff size 0x4
  static constexpr int32_t X400Address{ static_cast<int32_t>(0x3) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 361 };

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field tag, offset: 0x18, size: 0x4, def value: None
  int32_t ___tag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralName, ___obj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralName, ___tag) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralName, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralName*, "Org.BouncyCastle.Asn1.X509", "GeneralName");
