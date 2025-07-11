#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/Accuracy.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Tsp.Accuracy
class CORDL_TYPE Accuracy : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Micros)) ::Org::BouncyCastle::Asn1::DerInteger* Micros;

  __declspec(property(get = get_Millis)) ::Org::BouncyCastle::Asn1::DerInteger* Millis;

  __declspec(property(get = get_Seconds)) ::Org::BouncyCastle::Asn1::DerInteger* Seconds;

  /// @brief Field micros, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_micros, put = __cordl_internal_set_micros)) ::Org::BouncyCastle::Asn1::DerInteger* micros;

  /// @brief Field millis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_millis, put = __cordl_internal_set_millis)) ::Org::BouncyCastle::Asn1::DerInteger* millis;

  /// @brief Field seconds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seconds, put = __cordl_internal_set_seconds)) ::Org::BouncyCastle::Asn1::DerInteger* seconds;

  /// @brief Method GetInstance, addr 0x24fa4d4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis,
                                                                   ::Org::BouncyCastle::Asn1::DerInteger* micros);

  static inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24fa590, size 0x134, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_micros() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_micros();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_millis() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_millis();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_seconds() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_seconds();

  constexpr void __cordl_internal_set_micros(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_millis(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_seconds(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x24fa0f4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* seconds, ::Org::BouncyCastle::Asn1::DerInteger* millis, ::Org::BouncyCastle::Asn1::DerInteger* micros);

  /// @brief Method .ctor, addr 0x24fa1d0, size 0x304, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Micros, addr 0x24fa588, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Micros();

  /// @brief Method get_Millis, addr 0x24fa580, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Millis();

  /// @brief Method get_Seconds, addr 0x24fa578, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Seconds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Accuracy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Accuracy(Accuracy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Accuracy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Accuracy(Accuracy const&) = delete;

  /// @brief Field MaxMicros offset 0xffffffff size 0x4
  static constexpr int32_t MaxMicros{ static_cast<int32_t>(0x3e7) };

  /// @brief Field MaxMillis offset 0xffffffff size 0x4
  static constexpr int32_t MaxMillis{ static_cast<int32_t>(0x3e7) };

  /// @brief Field MinMicros offset 0xffffffff size 0x4
  static constexpr int32_t MinMicros{ static_cast<int32_t>(0x1) };

  /// @brief Field MinMillis offset 0xffffffff size 0x4
  static constexpr int32_t MinMillis{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 314 };

  /// @brief Field seconds, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___seconds;

  /// @brief Field millis, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___millis;

  /// @brief Field micros, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___micros;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___seconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___millis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::Accuracy, ___micros) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::Accuracy, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::Accuracy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::Accuracy*, "Org.BouncyCastle.Asn1.Tsp", "Accuracy");
