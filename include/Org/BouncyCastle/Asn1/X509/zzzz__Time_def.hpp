#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Time)
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Time);
// Type: Org.BouncyCastle.Asn1.X509::Time
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(394))
// CS Name: ::Org.BouncyCastle.Asn1.X509::Time*
class CORDL_TYPE Time : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field time, offset 0x10, size 0x8
  __declspec(property(get = __get_time, put = __set_time))::Org::BouncyCastle::Asn1::Asn1Object* time;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_time();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_time() const;

  constexpr void __set_time(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance addr 0x1199ec8 size 0x1c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::Time* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::X509::Time* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* time);

  /// @brief Method .ctor addr 0x1199ee4 size 0x140 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* time);

  static inline ::Org::BouncyCastle::Asn1::X509::Time* New_ctor(::System::DateTime date);

  /// @brief Method .ctor addr 0x119a024 size 0x168 virtual false final false
  inline void _ctor(::System::DateTime date);

  /// @brief Method GetInstance addr 0x1198c68 size 0x1c0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::Time* GetInstance(::System::Object* obj);

  /// @brief Method GetTime addr 0x119a18c size 0xf0 virtual false final false
  inline ::StringW GetTime();

  /// @brief Method ToDateTime addr 0x119a27c size 0x1e4 virtual false final false
  inline ::System::DateTime ToDateTime();

  /// @brief Method ToAsn1Object addr 0x119a460 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x119a468 size 0x4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Time(Time&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Time(Time const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Time();

public:
  /// @brief Field time, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Time, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Time);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Time*, "Org.BouncyCastle.Asn1.X509", "Time");
