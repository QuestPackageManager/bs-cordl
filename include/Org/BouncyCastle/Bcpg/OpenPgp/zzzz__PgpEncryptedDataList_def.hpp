#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpEncryptedDataList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpEncryptedDataList)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedData;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataList*
class CORDL_TYPE PgpEncryptedDataList : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::Org::BouncyCastle::Bcpg::InputStreamPacket* data;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::IList* list;

  /// @brief Method Get, addr 0x24f7ab0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* Get(int32_t index);

  /// @brief Method GetEncryptedDataObjects, addr 0x24f7cac, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetEncryptedDataObjects();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::InputStreamPacket*> const& __cordl_internal_get_data() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_data(::Org::BouncyCastle::Bcpg::InputStreamPacket* value);

  constexpr void __cordl_internal_set_list(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x24f7440, size 0x54c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method get_Count, addr 0x24f7b58, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x24f7bfc, size 0xb0, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x24f79bc, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x24f7ab4, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataList(PgpEncryptedDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataList(PgpEncryptedDataList const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::InputStreamPacket* ___data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList, ___data) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataList*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataList");
