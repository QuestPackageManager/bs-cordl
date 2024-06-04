#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ServerNameList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerNameList)
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerNameList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ServerNameList);
// Type: Org.BouncyCastle.Crypto.Tls::ServerNameList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ServerNameList*
class CORDL_TYPE ServerNameList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ServerNames))::System::Collections::IList* ServerNames;

  /// @brief Field mServerNameList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mServerNameList, put = __cordl_internal_set_mServerNameList))::System::Collections::IList* mServerNameList;

  /// @brief Method CheckNameType, addr 0x11fa7d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CheckNameType(::ArrayW<uint8_t, ::Array<uint8_t>*> nameTypesSeen, uint8_t nameType);

  /// @brief Method Encode, addr 0x11fa318, size 0x4bc, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* New_ctor(::System::Collections::IList* serverNameList);

  /// @brief Method Parse, addr 0x11fa870, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerNameList* Parse(::System::IO::Stream* input);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mServerNameList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mServerNameList() const;

  constexpr void __cordl_internal_set_mServerNameList(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x11fa298, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* serverNameList);

  /// @brief Method get_ServerNames, addr 0x11fa310, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_ServerNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerNameList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerNameList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerNameList(ServerNameList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerNameList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerNameList(ServerNameList const&) = delete;

  /// @brief Field mServerNameList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mServerNameList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerNameList, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ServerNameList, ___mServerNameList) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerNameList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerNameList*, "Org.BouncyCastle.Crypto.Tls", "ServerNameList");
