#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiFreeText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiFreeText)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiFreeText
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiFreeText*
class CORDL_TYPE PkiFreeText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::DerUtf8String* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field strings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_strings, put = __cordl_internal_set_strings)) ::Org::BouncyCastle::Asn1::Asn1Sequence* strings;

  /// @brief Method GetInstance, addr 0x22c5164, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x22c0f34, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* GetInstance(::System::Object* obj);

  /// @brief Method GetStringAt, addr 0x22c55f4, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* GetStringAt(int32_t index);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* p);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22c55f8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_strings();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_strings() const;

  constexpr void __cordl_internal_set_strings(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x22c54a4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String* p);

  /// @brief Method .ctor, addr 0x22c517c, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Count, addr 0x22c553c, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x22c5560, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x22c5518, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiFreeText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiFreeText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiFreeText(PkiFreeText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiFreeText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiFreeText(PkiFreeText const&) = delete;

  /// @brief Field strings, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___strings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 36 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText, ___strings) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*, "Org.BouncyCastle.Asn1.Cmp", "PkiFreeText");
