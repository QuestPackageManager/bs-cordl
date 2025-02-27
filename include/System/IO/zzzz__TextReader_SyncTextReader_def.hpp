#pragma once
// IWYU pragma private; include "System/IO/TextReader_SyncTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader_SyncTextReader)
namespace System::IO {
class TextReader;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TextReader_SyncTextReader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextReader_SyncTextReader);
// Dependencies System.IO.TextReader
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.IO.TextReader/SyncTextReader
class CORDL_TYPE TextReader_SyncTextReader : public ::System::IO::TextReader {
public:
  // Declarations
  /// @brief Field _in, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in)) ::System::IO::TextReader* _in;

  /// @brief Method Close, addr 0x3d51fd0, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x3d51ff0, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::TextReader_SyncTextReader* New_ctor(::System::IO::TextReader* t);

  /// @brief Method Peek, addr 0x3d520a4, size 0x20, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d520c4, size 0x20, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d520e4, size 0x20, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsync, addr 0x3d5214c, size 0x1c4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadLine, addr 0x3d52104, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x3d52128, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  constexpr ::System::IO::TextReader* const& __cordl_internal_get__in() const;

  constexpr ::System::IO::TextReader*& __cordl_internal_get__in();

  constexpr void __cordl_internal_set__in(::System::IO::TextReader* value);

  /// @brief Method .ctor, addr 0x3d51e90, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextReader_SyncTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextReader_SyncTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextReader_SyncTextReader(TextReader_SyncTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextReader_SyncTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextReader_SyncTextReader(TextReader_SyncTextReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3586 };

  /// @brief Field _in, offset: 0x18, size: 0x8, def value: None
  ::System::IO::TextReader* ____in;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextReader_SyncTextReader, ____in) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextReader_SyncTextReader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextReader_SyncTextReader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextReader_SyncTextReader*, "System.IO", "TextReader/SyncTextReader");
