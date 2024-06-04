#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignatureList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSignatureList)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureList*
class CORDL_TYPE PgpSignatureList : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field sigs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigs,
                      put = __cordl_internal_set_sigs))::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> sigs;

  /// @brief Method Get, addr 0x1335384, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Get(int32_t index);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* sig);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> sigs);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> const& __cordl_internal_get_sigs() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*>& __cordl_internal_get_sigs();

  constexpr void __cordl_internal_set_sigs(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> value);

  /// @brief Method .ctor, addr 0x13352ac, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* sig);

  /// @brief Method .ctor, addr 0x13351f4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> sigs);

  /// @brief Method get_Count, addr 0x13353a4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x13353c0, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x1335354, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x1335388, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignatureList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignatureList(PgpSignatureList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignatureList(PgpSignatureList const&) = delete;

  /// @brief Field sigs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>*> ___sigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList, ___sigs) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureList*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureList");
