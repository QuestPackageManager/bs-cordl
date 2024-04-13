#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::IO {
class __TextReader__SyncTextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextReader__SyncTextReader);
// Type: ::SyncTextReader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::TextReader::SyncTextReader*
class CORDL_TYPE __TextReader__SyncTextReader : public ::System::IO::TextReader {
public:
  // Declarations
  /// @brief Field _in, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in))::System::IO::TextReader* _in;

  /// @brief Method Close, addr 0x27897a4, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x27897c4, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::IO::__TextReader__SyncTextReader* New_ctor(::System::IO::TextReader* t);

  /// @brief Method Peek, addr 0x2789878, size 0x20, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x2789898, size 0x20, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x27898b8, size 0x20, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsync, addr 0x2789920, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadLine, addr 0x27898d8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x27898fc, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  constexpr ::System::IO::TextReader*& __cordl_internal_get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get__in() const;

  constexpr void __cordl_internal_set__in(::System::IO::TextReader* value);

  /// @brief Method .ctor, addr 0x278965c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextReader__SyncTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextReader__SyncTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextReader__SyncTextReader(__TextReader__SyncTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader__SyncTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextReader__SyncTextReader(__TextReader__SyncTextReader const&) = delete;

  /// @brief Field _in, offset: 0x18, size: 0x8, def value: None
  ::System::IO::TextReader* ____in;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextReader__SyncTextReader, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::__TextReader__SyncTextReader, ____in) == 0x18, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__TextReader__SyncTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextReader__SyncTextReader*, "System.IO", "TextReader/SyncTextReader");
