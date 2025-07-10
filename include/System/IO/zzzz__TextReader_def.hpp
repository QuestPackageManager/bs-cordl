#pragma once
// IWYU pragma private; include "System/IO/TextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader)
namespace GlobalNamespace {
class TextReader_NullTextReader;
}
namespace GlobalNamespace {
class TextReader_SyncTextReader;
}
namespace System::IO {
class TextReader___c;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class TextReader;
}
namespace System::IO {
class TextReader___c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextReader);
MARK_REF_PTR_T(::System::IO::TextReader___c);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextReader/<>c
class CORDL_TYPE TextReader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::IO::TextReader___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Func_2<::System::Object*, int32_t>* __9__17_0;

  static inline ::System::IO::TextReader___c* New_ctor();

  /// @brief Method <ReadAsyncInternal>b__17_0, addr 0x3d44a04, size 0xf0, virtual false, abstract: false, final false
  inline int32_t _ReadAsyncInternal_b__17_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x3d449fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::TextReader___c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, int32_t>* getStaticF___9__17_0();

  static inline void setStaticF___9(::System::IO::TextReader___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::System::Object*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextReader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextReader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextReader___c(TextReader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextReader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextReader___c(TextReader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader___c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.IDisposable, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextReader
class CORDL_TYPE TextReader : public ::System::MarshalByRefObject {
public:
  // Declarations
  using NullTextReader = ::GlobalNamespace::TextReader_NullTextReader;

  using SyncTextReader = ::GlobalNamespace::TextReader_SyncTextReader;

  using __c = ::System::IO::TextReader___c;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::IO::TextReader* Null;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x3d43dc0, size 0x6c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x3d43e2c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3d43e98, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::IO::TextReader* New_ctor();

  /// @brief Method Peek, addr 0x3d43e9c, size 0x8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d43ea4, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d43eac, size 0x1b0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Read, addr 0x3d3caf4, size 0x264, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadAsync, addr 0x3d3dc0c, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsyncInternal, addr 0x3d44250, size 0x21c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadLine, addr 0x3d44158, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x3d4405c, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method Synchronized, addr 0x3d4446c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IO::TextReader* Synchronized(::System::IO::TextReader* reader);

  /// @brief Method .ctor, addr 0x3d3bca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::TextReader* getStaticF_Null();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_Null(::System::IO::TextReader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextReader(TextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextReader(TextReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader, 0x18>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::TextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader*, "System.IO", "TextReader");
NEED_NO_BOX(::System::IO::TextReader___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader___c*, "System.IO", "TextReader/<>c");
