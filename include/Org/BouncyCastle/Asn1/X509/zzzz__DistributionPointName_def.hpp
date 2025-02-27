#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DistributionPointName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistributionPointName)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
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
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.DistributionPointName
class CORDL_TYPE DistributionPointName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Name;

  __declspec(property(get = get_PointType)) int32_t PointType;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::Org::BouncyCastle::Asn1::Asn1Encodable* name;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) int32_t type;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x260905c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x26094f8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  /// @brief Method ToAsn1Object, addr 0x2609738, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x26097a4, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_name() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_type() const;

  constexpr int32_t& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_name(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_type(int32_t value);

  /// @brief Method .ctor, addr 0x26096fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name);

  /// @brief Method .ctor, addr 0x2609674, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method .ctor, addr 0x26096cc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  /// @brief Method appendObject, addr 0x260990c, size 0xf8, virtual false, abstract: false, final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  /// @brief Method get_Name, addr 0x2609730, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name();

  /// @brief Method get_PointType, addr 0x2609728, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PointType();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistributionPointName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DistributionPointName(DistributionPointName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DistributionPointName(DistributionPointName const&) = delete;

  /// @brief Field FullName offset 0xffffffff size 0x4
  static constexpr int32_t FullName{ static_cast<int32_t>(0x0) };

  /// @brief Field NameRelativeToCrlIssuer offset 0xffffffff size 0x4
  static constexpr int32_t NameRelativeToCrlIssuer{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 358 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___name;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  int32_t ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPointName, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPointName, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DistributionPointName, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPointName*, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");
