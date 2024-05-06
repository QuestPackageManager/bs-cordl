#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1TaggedObject)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1TaggedObject);
// Type: Org.BouncyCastle.Asn1::Asn1TaggedObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1TaggedObject*
class CORDL_TYPE Asn1TaggedObject : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_TagNo)) int32_t TagNo;

  /// @brief Field explicitly, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_explicitly, put = __cordl_internal_set_explicitly)) bool explicitly;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tagNo, put = __cordl_internal_set_tagNo)) int32_t tagNo;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method Asn1Equals, addr 0x141d7e0, size 0xf8, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x141d8d8, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method GetInstance, addr 0x141d598, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x141d610, size 0x100, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(::System::Object* obj);

  /// @brief Method GetObject, addr 0x140d3bc, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObject();

  /// @brief Method GetObjectParser, addr 0x141d92c, size 0x130, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(int32_t tag, bool isExplicit);

  /// @brief Method IsConstructed, addr 0x141d468, size 0x130, virtual false, abstract: false, final false
  static inline bool IsConstructed(bool isExplicit, ::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method IsEmpty, addr 0x141d924, size 0x8, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsExplicit, addr 0x141d91c, size 0x8, virtual false, abstract: false, final false
  inline bool IsExplicit();

  static inline ::Org::BouncyCastle::Asn1::Asn1TaggedObject* New_ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::Asn1TaggedObject* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method ToString, addr 0x141da5c, size 0x178, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_explicitly() const;

  constexpr bool& __cordl_internal_get_explicitly();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_obj() const;

  constexpr int32_t const& __cordl_internal_get_tagNo() const;

  constexpr int32_t& __cordl_internal_get_tagNo();

  constexpr void __cordl_internal_set_explicitly(bool value);

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_tagNo(int32_t value);

  /// @brief Method .ctor, addr 0x141d754, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x141d710, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method get_TagNo, addr 0x141d914, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_TagNo();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* i___Org__BouncyCastle__Asn1__Asn1TaggedObjectParser() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1TaggedObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1TaggedObject(Asn1TaggedObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1TaggedObject(Asn1TaggedObject const&) = delete;

  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field explicitly, offset: 0x14, size: 0x1, def value: None
  bool ___explicitly;

  /// @brief Field obj, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1TaggedObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1TaggedObject, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1TaggedObject, ___explicitly) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1TaggedObject, ___obj) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1TaggedObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, "Org.BouncyCastle.Asn1", "Asn1TaggedObject");
