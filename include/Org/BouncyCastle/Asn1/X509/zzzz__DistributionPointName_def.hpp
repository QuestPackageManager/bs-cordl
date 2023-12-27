#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistributionPointName)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
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
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
// Type: Org.BouncyCastle.Asn1.X509::DistributionPointName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(358))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DistributionPointName*
class CORDL_TYPE DistributionPointName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::Org::BouncyCastle::Asn1::Asn1Encodable* name;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __get_type, put = __set_type)) int32_t type;

  __declspec(property(get = get_PointType)) int32_t PointType;

  __declspec(property(get = get_Name))::Org::BouncyCastle::Asn1::Asn1Encodable* Name;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_name() const;

  constexpr void __set_name(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr int32_t& __get_type();

  constexpr int32_t const& __get_type() const;

  constexpr void __set_type(int32_t value);

  /// @brief Method GetInstance addr 0x118bf9c size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x118c43c size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  /// @brief Method .ctor addr 0x118c61c size 0x30 virtual false final false
  inline void _ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* name);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name);

  /// @brief Method .ctor addr 0x118c64c size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* name);

  /// @brief Method get_PointType addr 0x118c678 size 0x8 virtual false final false
  inline int32_t get_PointType();

  /// @brief Method get_Name addr 0x118c680 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name();

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method .ctor addr 0x118c5c4 size 0x58 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method ToAsn1Object addr 0x118c688 size 0x74 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x118c6fc size 0x168 virtual true final false
  inline ::StringW ToString();

  /// @brief Method appendObject addr 0x118c864 size 0xf8 virtual false final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DistributionPointName(DistributionPointName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DistributionPointName(DistributionPointName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistributionPointName();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___name;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  int32_t ___type;

  /// @brief Field FullName offset 0xffffffff size 0x4
  static constexpr int32_t FullName{ static_cast<int32_t>(0x0) };

  /// @brief Field NameRelativeToCrlIssuer offset 0xffffffff size 0x4
  static constexpr int32_t NameRelativeToCrlIssuer{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DistributionPointName, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPointName*, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");
