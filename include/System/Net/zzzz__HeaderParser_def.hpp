#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderParser)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HeaderParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HeaderParser);
// Type: System.Net::HeaderParser
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::HeaderParser*
class CORDL_TYPE HeaderParser : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2a91a68, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Invoke(::StringW value);

  static inline ::System::Net::HeaderParser* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a91994, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderParser(HeaderParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderParser(HeaderParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HeaderParser, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HeaderParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderParser*, "System.Net", "HeaderParser");
