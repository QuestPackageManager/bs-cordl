#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Accuracy)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::Accuracy);
// Type: Org.BouncyCastle.Asn1.Tsp::Accuracy
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(314))
// CS Name: ::Org.BouncyCastle.Asn1.Tsp::Accuracy*
class CORDL_TYPE Accuracy : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seconds, offset 0x10, size 0x8
  __declspec(property(get = __get_seconds, put = __set_seconds))::Org::BouncyCastle::Asn1::DerInteger* seconds;

  /// @brief Field millis, offset 0x18, size 0x8
  __declspec(property(get = __get_millis, put = __set_millis))::Org::BouncyCastle::Asn1::DerInteger* millis;

  /// @brief Field micros, offset 0x20, size 0x8
  __declspec(property(get = __get_micros, put = __set_micros))::Org::BouncyCastle::Asn1::DerInteger* micros;

  __declspec(property(get = get_Seconds))::Org::BouncyCastle::Asn1::DerInteger* Seconds;

  __declspec(property(get = get_Millis))::Org::BouncyCastle::Asn1::DerInteger* Millis;

  __declspec(property(get = get_Micros))::Org::BouncyCastle::Asn1::DerInteger* Micros;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_seconds();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_seconds() const;

  constexpr void __set_seconds(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_millis();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_millis() const;

  constexpr void __set_millis(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_micros();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_micros() const;

  constexpr void __set_micros(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis,
                                                                   ::Org::BouncyCastle::Asn1::DerInteger* micros);

  /// @brief Method .ctor, addr 0x1078904, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis, ::Org::BouncyCastle::Asn1::DerInteger* micros);

  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10789e8, size 0x310, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0x1078cf8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* GetInstance(::System::Object* obj);

  /// @brief Method get_Seconds, addr 0x1078d9c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Seconds();

  /// @brief Method get_Millis, addr 0x1078da4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Millis();

  /// @brief Method get_Micros, addr 0x1078dac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Micros();

  /// @brief Method ToAsn1Object, addr 0x1078db4, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Accuracy(Accuracy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Accuracy(Accuracy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Accuracy();

public:
  /// @brief Field seconds, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___seconds;

  /// @brief Field millis, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___millis;

  /// @brief Field micros, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___micros;

  /// @brief Field MinMillis offset 0xffffffff size 0x4
  static constexpr int32_t MinMillis{ static_cast<int32_t>(0x1) };

  /// @brief Field MaxMillis offset 0xffffffff size 0x4
  static constexpr int32_t MaxMillis{ static_cast<int32_t>(0x3e7) };

  /// @brief Field MinMicros offset 0xffffffff size 0x4
  static constexpr int32_t MinMicros{ static_cast<int32_t>(0x1) };

  /// @brief Field MaxMicros offset 0xffffffff size 0x4
  static constexpr int32_t MaxMicros{ static_cast<int32_t>(0x3e7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::Accuracy, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___seconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___millis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___micros) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::Accuracy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::Accuracy*, "Org.BouncyCastle.Asn1.Tsp", "Accuracy");
