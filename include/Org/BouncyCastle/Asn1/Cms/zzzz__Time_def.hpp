#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Time)
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
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Time;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Time);
// Type: Org.BouncyCastle.Asn1.Cms::Time
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(97))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::Time*
class CORDL_TYPE Time : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field time, offset 0x10, size 0x8
  __declspec(property(get = __get_time, put = __set_time))::Org::BouncyCastle::Asn1::Asn1Object* time;

  __declspec(property(get = get_TimeString))::StringW TimeString;

  __declspec(property(get = get_Date))::System::DateTime Date;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_time();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_time() const;

  constexpr void __set_time(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance, addr 0xe818dc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Time* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::Cms::Time* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* time);

  /// @brief Method .ctor, addr 0xe81ab8, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* time);

  static inline ::Org::BouncyCastle::Asn1::Cms::Time* New_ctor(::System::DateTime date);

  /// @brief Method .ctor, addr 0xe81bf8, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime date);

  /// @brief Method GetInstance, addr 0xe818f8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Time* GetInstance(::System::Object* obj);

  /// @brief Method get_TimeString, addr 0xe81d60, size 0xf0, virtual false, abstract: false, final false
  inline ::StringW get_TimeString();

  /// @brief Method get_Date, addr 0xe81e50, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::DateTime get_Date();

  /// @brief Method ToAsn1Object, addr 0xe82034, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Time, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::Time, ___time) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Time);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Time*, "Org.BouncyCastle.Asn1.Cms", "Time");
