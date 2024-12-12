#pragma once
// IWYU pragma private; include "System/Xml/XmlCachedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
CORDL_MODULE_EXPORT(XmlCachedStream)
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlCachedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlCachedStream);
// Dependencies System.IO.MemoryStream
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCachedStream
class CORDL_TYPE XmlCachedStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Field uri, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::System::Uri* uri;

  static inline ::System::Xml::XmlCachedStream* New_ctor(::System::Uri* uri, ::System::IO::Stream* stream);

  constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x435ca98, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri, ::System::IO::Stream* stream);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCachedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCachedStream(XmlCachedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCachedStream(XmlCachedStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7346 };

  /// @brief Field uri, offset: 0x50, size: 0x8, def value: None
  ::System::Uri* ___uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCachedStream, ___uri) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCachedStream, 0x58>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlCachedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCachedStream*, "System.Xml", "XmlCachedStream");
