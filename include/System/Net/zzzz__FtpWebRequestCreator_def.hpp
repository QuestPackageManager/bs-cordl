#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequestCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FtpWebRequestCreator)
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class WebRequest;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FtpWebRequestCreator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpWebRequestCreator);
// Type: System.Net::FtpWebRequestCreator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::FtpWebRequestCreator*
class CORDL_TYPE FtpWebRequestCreator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  /// @brief Method Create, addr 0x2fd0d80, size 0x60, virtual true, abstract: false, final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  static inline ::System::Net::FtpWebRequestCreator* New_ctor();

  /// @brief Method .ctor, addr 0x2fd0d78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Net::IWebRequestCreate"
  constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebRequestCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequestCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpWebRequestCreator(FtpWebRequestCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequestCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpWebRequestCreator(FtpWebRequestCreator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebRequestCreator, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpWebRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequestCreator*, "System.Net", "FtpWebRequestCreator");
