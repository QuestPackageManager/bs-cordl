#pragma once
// IWYU pragma private; include "System/Xml/IStreamProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStreamProvider)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Xml {
class IStreamProvider;
}
// Write type traits
MARK_REF_T(::System::Xml::IStreamProvider*);
DEFINE_IL2CPP_CLASS(::System::Xml::IStreamProvider*, "System.Xml", "IStreamProvider");
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IStreamProvider
class CORDL_TYPE IStreamProvider {
public:
  // Declarations
  /// @brief Method GetStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* GetStream();

  /// @brief Method ReleaseStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReleaseStream(::System::IO::Stream* stream);

  // Ctor Parameters [CppParam { name: "", ty: "IStreamProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStreamProvider(IStreamProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
