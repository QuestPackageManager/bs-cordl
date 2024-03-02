#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Dump)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerApplicationSpecific;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Utilities {
class Asn1Dump;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Utilities::Asn1Dump);
// Type: Org.BouncyCastle.Asn1.Utilities::Asn1Dump
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Utilities::Asn1Dump*
class CORDL_TYPE Asn1Dump : public ::System::Object {
public:
  // Declarations
  /// @brief Field NewLine, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NewLine, put = setStaticF_NewLine))::StringW NewLine;

  /// @brief Method AsString, addr 0x10ecf70, size 0x2664, virtual false, abstract: false, final false
  static inline void AsString(::StringW indent, bool verbose, ::Org::BouncyCastle::Asn1::Asn1Object* obj, ::System::Text::StringBuilder* buf);

  /// @brief Method DumpAsString, addr 0x10f0294, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW DumpAsString(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method DumpAsString, addr 0x10f02ec, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW DumpAsString(::Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose);

  /// @brief Method DumpAsString, addr 0x10f0110, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW DumpAsString(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump* New_ctor();

  /// @brief Method .ctor, addr 0x10ecf68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method calculateAscString, addr 0x10f03c4, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW calculateAscString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method dumpBinaryDataAsString, addr 0x10ef5d4, size 0x268, virtual false, abstract: false, final false
  static inline ::StringW dumpBinaryDataAsString(::StringW indent, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::StringW getStaticF_NewLine();

  /// @brief Method outputApplicationSpecific, addr 0x10ef83c, size 0x8d4, virtual false, abstract: false, final false
  static inline ::StringW outputApplicationSpecific(::StringW type, ::StringW indent, bool verbose, ::Org::BouncyCastle::Asn1::DerApplicationSpecific* app);

  static inline void setStaticF_NewLine(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Dump();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Dump", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Dump(Asn1Dump&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Dump", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Dump(Asn1Dump const&) = delete;

  /// @brief Field SampleSize offset 0xffffffff size 0x4
  static constexpr int32_t SampleSize{ static_cast<int32_t>(0x20) };

  /// @brief Field Tab offset 0xffffffff size 0x8
  static constexpr ::ConstString Tab{ u"    " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Utilities::Asn1Dump);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*, "Org.BouncyCastle.Asn1.Utilities", "Asn1Dump");
