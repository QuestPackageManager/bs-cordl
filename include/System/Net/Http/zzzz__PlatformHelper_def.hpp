#pragma once
// IWYU pragma private; include "System/Net/Http/PlatformHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformHelper)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class StreamContent;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net::Http {
class PlatformHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::PlatformHelper);
// Dependencies System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.PlatformHelper
class CORDL_TYPE PlatformHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateStreamContent, addr 0x4212fb8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Net::Http::StreamContent* CreateStreamContent(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetSingleHeaderString, addr 0x4212d64, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW GetSingleHeaderString(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method IsContentHeader, addr 0x4213024, size 0x60, virtual false, abstract: false, final false
  static inline bool IsContentHeader(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformHelper(PlatformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformHelper(PlatformHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::PlatformHelper, 0x10>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::PlatformHelper*, "System.Net.Http", "PlatformHelper");
