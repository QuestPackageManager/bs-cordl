#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader)
namespace System::IO {
class __TextReader__SyncTextReader;
}
namespace System::IO {
class __TextReader__NullTextReader;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
class TextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextReader);
// Type: System.IO::TextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3572))
// CS Name: ::System.IO::TextReader*
class CORDL_TYPE TextReader : public ::System::MarshalByRefObject {
public:
  // Declarations
  using SyncTextReader = ::System::IO::__TextReader__SyncTextReader;

  using NullTextReader = ::System::IO::__TextReader__NullTextReader;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::TextReader* Null;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  static inline void setStaticF_Null(::System::IO::TextReader* value);

  static inline ::System::IO::TextReader* getStaticF_Null();

  static inline ::System::IO::TextReader* New_ctor();

  /// @brief Method .ctor addr 0x23a7090 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Close addr 0x23aa954 size 0x6c virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x23aa9c0 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x23aaa2c size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Peek addr 0x23aaa30 size 0x8 virtual true final false
  inline int32_t Peek();

  /// @brief Method Read addr 0x23aaa38 size 0x8 virtual true final false
  inline int32_t Read();

  /// @brief Method Read addr 0x23aaa40 size 0x1bc virtual true final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadToEnd addr 0x23aabfc size 0xfc virtual true final false
  inline ::StringW ReadToEnd();

  /// @brief Method ReadLine addr 0x23aacf8 size 0xf0 virtual true final false
  inline ::StringW ReadLine();

  /// @brief Method Synchronized addr 0x23aade8 size 0xc0 virtual false final false
  static inline ::System::IO::TextReader* Synchronized(::System::IO::TextReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextReader(TextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextReader(TextReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader, 0x18>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::TextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader*, "System.IO", "TextReader");
