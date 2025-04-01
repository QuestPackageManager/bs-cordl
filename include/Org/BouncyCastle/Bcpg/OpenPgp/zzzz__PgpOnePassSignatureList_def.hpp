#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpOnePassSignatureList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
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
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpObject
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpOnePassSignatureList
class CORDL_TYPE PgpOnePassSignatureList : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field sigs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigs,
                      put = __cordl_internal_set_sigs)) ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*>
      sigs;

  /// @brief Method Get, addr 0x252e268, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Get(int32_t index);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* sig);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> sigs);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> const& __cordl_internal_get_sigs() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*>& __cordl_internal_get_sigs();

  constexpr void __cordl_internal_set_sigs(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> value);

  /// @brief Method .ctor, addr 0x252e190, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* sig);

  /// @brief Method .ctor, addr 0x252d3e4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> sigs);

  /// @brief Method get_Count, addr 0x252e288, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x252e2a4, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x252e238, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x252e26c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpOnePassSignatureList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpOnePassSignatureList(PgpOnePassSignatureList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignatureList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpOnePassSignatureList(PgpOnePassSignatureList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1655 };

  /// @brief Field sigs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, ::Array<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>*> ___sigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList, ___sigs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignatureList*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignatureList");
