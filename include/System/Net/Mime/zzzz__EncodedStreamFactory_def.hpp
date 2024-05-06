#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EncodedStreamFactory)
// Forward declare root types
namespace System::Net::Mime {
class EncodedStreamFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mime::EncodedStreamFactory);
// Type: System.Net.Mime::EncodedStreamFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Mime {
// Is value type: false
// CS Name: ::System.Net.Mime::EncodedStreamFactory*
class CORDL_TYPE EncodedStreamFactory : public ::System::Object {
public:
  // Declarations
  static inline ::System::Net::Mime::EncodedStreamFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2f2fad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodedStreamFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodedStreamFactory(EncodedStreamFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodedStreamFactory(EncodedStreamFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mime::EncodedStreamFactory, 0x10>, "Size mismatch!");

} // namespace System::Net::Mime
NEED_NO_BOX(::System::Net::Mime::EncodedStreamFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mime::EncodedStreamFactory*, "System.Net.Mime", "EncodedStreamFactory");
