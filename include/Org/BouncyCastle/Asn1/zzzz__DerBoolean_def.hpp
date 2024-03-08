#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerBoolean)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerBoolean);
// Type: Org.BouncyCastle.Asn1::DerBoolean
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerBoolean*
class CORDL_TYPE DerBoolean : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field False, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_False, put = setStaticF_False))::Org::BouncyCastle::Asn1::DerBoolean* False;

  __declspec(property(get = get_IsTrue)) bool IsTrue;

  /// @brief Field True, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_True, put = setStaticF_True))::Org::BouncyCastle::Asn1::DerBoolean* True;

  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) uint8_t value;

  /// @brief Method Asn1Equals, addr 0x1256518, size 0xa4, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x12565bc, size 0x28, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x1256494, size 0x84, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromOctetString, addr 0x124c688, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBoolean* FromOctetString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetInstance, addr 0x1256260, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBoolean* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x1256108, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBoolean* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x12561f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerBoolean* GetInstance(bool value);

  static inline ::Org::BouncyCastle::Asn1::DerBoolean* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  static inline ::Org::BouncyCastle::Asn1::DerBoolean* New_ctor(bool value);

  /// @brief Method ToString, addr 0x12565e4, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr uint8_t const& __cordl_internal_get_value() const;

  constexpr uint8_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(uint8_t value);

  /// @brief Method .ctor, addr 0x12563b0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  /// @brief Method .ctor, addr 0x1256450, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  static inline ::Org::BouncyCastle::Asn1::DerBoolean* getStaticF_False();

  static inline ::Org::BouncyCastle::Asn1::DerBoolean* getStaticF_True();

  /// @brief Method get_IsTrue, addr 0x1256484, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsTrue();

  static inline void setStaticF_False(::Org::BouncyCastle::Asn1::DerBoolean* value);

  static inline void setStaticF_True(::Org::BouncyCastle::Asn1::DerBoolean* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerBoolean(DerBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerBoolean(DerBoolean const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  uint8_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerBoolean, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerBoolean, ___value) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerBoolean);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerBoolean*, "Org.BouncyCastle.Asn1", "DerBoolean");
