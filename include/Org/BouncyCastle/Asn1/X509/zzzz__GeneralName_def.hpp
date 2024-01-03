#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeneralName)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
// Type: Org.BouncyCastle.Asn1.X509::GeneralName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(361))
// CS Name: ::Org.BouncyCastle.Asn1.X509::GeneralName*
class CORDL_TYPE GeneralName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Field tag, offset 0x18, size 0x4
  __declspec(property(get = __get_tag, put = __set_tag)) int32_t tag;

  __declspec(property(get = get_TagNo)) int32_t TagNo;

  __declspec(property(get = get_Name))::Org::BouncyCastle::Asn1::Asn1Encodable* Name;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_obj() const;

  constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr int32_t& __get_tag();

  constexpr int32_t const& __get_tag() const;

  constexpr void __set_tag(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* directoryName);

  /// @brief Method .ctor, addr 0x118ddb0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* directoryName);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* name, int32_t tag);

  /// @brief Method .ctor, addr 0x118dde0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* name, int32_t tag);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  /// @brief Method .ctor, addr 0x118de10, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* New_ctor(int32_t tag, ::StringW name);

  /// @brief Method .ctor, addr 0x118de40, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(int32_t tag, ::StringW name);

  /// @brief Method GetInstance, addr 0x118e308, size 0x428, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x118e7a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj, bool explicitly);

  /// @brief Method get_TagNo, addr 0x118e7c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TagNo();

  /// @brief Method get_Name, addr 0x118e7c8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name();

  /// @brief Method ToString, addr 0x118e7d0, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method toGeneralNameEncoding, addr 0x118e0f4, size 0x214, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> toGeneralNameEncoding(::StringW ip);

  /// @brief Method parseIPv4Mask, addr 0x118f018, size 0x84, virtual false, abstract: false, final false
  inline void parseIPv4Mask(::StringW mask, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offset);

  /// @brief Method parseIPv4, addr 0x118ef18, size 0x100, virtual false, abstract: false, final false
  inline void parseIPv4(::StringW ip, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offset);

  /// @brief Method parseMask, addr 0x118ee60, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> parseMask(::StringW mask);

  /// @brief Method copyInts, addr 0x118edd4, size 0x8c, virtual false, abstract: false, final false
  inline void copyInts(::ArrayW<int32_t, ::Array<int32_t>*> parsedIp, ::ArrayW<uint8_t, ::Array<uint8_t>*> addr, int32_t offSet);

  /// @brief Method parseIPv6, addr 0x118e9a0, size 0x434, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> parseIPv6(::StringW ip);

  /// @brief Method ToAsn1Object, addr 0x118f09c, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralName(GeneralName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralName(GeneralName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralName();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field tag, offset: 0x18, size: 0x4, def value: None
  int32_t ___tag;

  /// @brief Field OtherName offset 0xffffffff size 0x4
  static constexpr int32_t OtherName{ static_cast<int32_t>(0x0) };

  /// @brief Field Rfc822Name offset 0xffffffff size 0x4
  static constexpr int32_t Rfc822Name{ static_cast<int32_t>(0x1) };

  /// @brief Field DnsName offset 0xffffffff size 0x4
  static constexpr int32_t DnsName{ static_cast<int32_t>(0x2) };

  /// @brief Field X400Address offset 0xffffffff size 0x4
  static constexpr int32_t X400Address{ static_cast<int32_t>(0x3) };

  /// @brief Field DirectoryName offset 0xffffffff size 0x4
  static constexpr int32_t DirectoryName{ static_cast<int32_t>(0x4) };

  /// @brief Field EdiPartyName offset 0xffffffff size 0x4
  static constexpr int32_t EdiPartyName{ static_cast<int32_t>(0x5) };

  /// @brief Field UniformResourceIdentifier offset 0xffffffff size 0x4
  static constexpr int32_t UniformResourceIdentifier{ static_cast<int32_t>(0x6) };

  /// @brief Field IPAddress offset 0xffffffff size 0x4
  static constexpr int32_t IPAddress{ static_cast<int32_t>(0x7) };

  /// @brief Field RegisteredID offset 0xffffffff size 0x4
  static constexpr int32_t RegisteredID{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralName, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralName, ___obj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::GeneralName, ___tag) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralName*, "Org.BouncyCastle.Asn1.X509", "GeneralName");
