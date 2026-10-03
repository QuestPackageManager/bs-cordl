#pragma once
// IWYU pragma private; include "System/IO/ReadLinesIterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Iterator_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReadLinesIterator)
namespace System::IO {
template <typename TSource> class Iterator_1;
}
namespace System::IO {
class StreamReader;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class ReadLinesIterator;
}
// Write type traits
MARK_REF_T(::System::IO::ReadLinesIterator*);
DEFINE_IL2CPP_CLASS(::System::IO::ReadLinesIterator*, "System.IO", "ReadLinesIterator");
// Dependencies System.IO.Iterator`1<TSource>
namespace System::IO {
// Is value type: false
// CS Name: System.IO.ReadLinesIterator
class CORDL_TYPE ReadLinesIterator : public ::System::IO::Iterator_1<::StringW> {
public:
  // Declarations
  /// @brief Field _encoding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Field _path, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__path, put = __cordl_internal_set__path)) ::StringW _path;

  /// @brief Field _reader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::System::IO::StreamReader* _reader;

  /// @brief Method Clone, addr 0x6023570, size 0x10, virtual true, abstract: false, final false
  inline ::System::IO::Iterator_1<::StringW>* Clone();

  /// @brief Method CreateIterator, addr 0x6023708, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IO::ReadLinesIterator* CreateIterator(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method CreateIterator, addr 0x6023580, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::IO::ReadLinesIterator* CreateIterator(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader);

  /// @brief Method Dispose, addr 0x6023630, size 0xd8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method MoveNext, addr 0x60234f4, size 0x7c, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::IO::ReadLinesIterator* New_ctor(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader);

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::StringW const& __cordl_internal_get__path() const;

  constexpr ::StringW& __cordl_internal_get__path();

  constexpr ::System::IO::StreamReader* const& __cordl_internal_get__reader() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get__reader();

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__path(::StringW value);

  constexpr void __cordl_internal_set__reader(::System::IO::StreamReader* value);

  /// @brief Method .ctor, addr 0x6023484, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadLinesIterator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadLinesIterator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadLinesIterator(ReadLinesIterator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadLinesIterator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadLinesIterator(ReadLinesIterator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3880 };

  /// @brief Field _path, offset: 0x20, size: 0x8, def value: None
  ::StringW ____path;

  /// @brief Field _encoding, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _reader, offset: 0x30, size: 0x8, def value: None
  ::System::IO::StreamReader* ____reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::ReadLinesIterator, ____path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::ReadLinesIterator, ____encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::ReadLinesIterator, ____reader) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::IO::ReadLinesIterator) == 0x38, "Size mismatch!");

} // namespace System::IO
