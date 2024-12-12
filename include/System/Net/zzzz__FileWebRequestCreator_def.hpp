#pragma once
// IWYU pragma private; include "System/Net/FileWebRequestCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileWebRequestCreator)
namespace System::Net {
class WebRequest;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebRequestCreator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebRequestCreator);
// Dependencies System.Net.IWebRequestCreate, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FileWebRequestCreator
class CORDL_TYPE FileWebRequestCreator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  /// @brief Method Create, addr 0x44b62a4, size 0x58, virtual true, abstract: false, final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  static inline ::System::Net::FileWebRequestCreator* New_ctor();

  /// @brief Method .ctor, addr 0x44b629c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Net::IWebRequestCreate"
  constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileWebRequestCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileWebRequestCreator(FileWebRequestCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileWebRequestCreator(FileWebRequestCreator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebRequestCreator, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FileWebRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequestCreator*, "System.Net", "FileWebRequestCreator");
