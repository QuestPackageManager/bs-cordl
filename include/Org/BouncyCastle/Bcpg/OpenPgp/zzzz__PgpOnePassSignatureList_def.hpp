#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpOnePassSignatureList)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignatureList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignatureList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1628))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1655))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignatureList*
class CORDL_TYPE PgpOnePassSignatureList : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  /// @brief Field sigs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigs,
                      put = __cordl_internal_set_sigs))::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> sigs;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*>& __cordl_internal_get_sigs();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> const& __cordl_internal_get_sigs() const;

  constexpr void __cordl_internal_set_sigs(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> sigs);

  /// @brief Method .ctor, addr 0x10b1360, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> sigs);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* sig);

  /// @brief Method .ctor, addr 0x10b211c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* sig);

  /// @brief Method get_Item, addr 0x10b21c4, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* get_Item(int32_t index);

  /// @brief Method Get, addr 0x10b21f4, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Get(int32_t index);

  /// @brief Method get_Size, addr 0x10b21f8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Method get_Count, addr 0x10b2214, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x10b2230, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpOnePassSignatureList(PgpOnePassSignatureList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpOnePassSignatureList(PgpOnePassSignatureList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpOnePassSignatureList();

public:
  /// @brief Field sigs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> ___sigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList, ___sigs) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignatureList");
