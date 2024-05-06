#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader)
namespace System::IO {
class __TextReader__NullTextReader;
}
namespace System::IO {
class __TextReader__SyncTextReader;
}
namespace System::IO {
class __TextReader____c;
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
class IDisposable;
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
class __TextReader____c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextReader);
MARK_REF_PTR_T(::System::IO::__TextReader____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::TextReader::<>c*
class CORDL_TYPE __TextReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::IO::__TextReader____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Func_2<::System::Object*, int32_t>* __9__17_0;

  static inline ::System::IO::__TextReader____c* New_ctor();

  /// @brief Method <ReadAsyncInternal>b__17_0, addr 0x288927c, size 0xf0, virtual false, abstract: false, final false
  inline int32_t _ReadAsyncInternal_b__17_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x2889274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::__TextReader____c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, int32_t>* getStaticF___9__17_0();

  static inline void setStaticF___9(::System::IO::__TextReader____c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::System::Object*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextReader____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextReader____c(__TextReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextReader____c(__TextReader____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextReader____c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Type: System.IO::TextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::TextReader*
class CORDL_TYPE TextReader : public ::System::MarshalByRefObject {
public:
  // Declarations
  using NullTextReader = ::System::IO::__TextReader__NullTextReader;

  using SyncTextReader = ::System::IO::__TextReader__SyncTextReader;

  using __c = ::System::IO::__TextReader____c;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::TextReader* Null;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x288860c, size 0x6c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2888678, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x28886e4, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::IO::TextReader* New_ctor();

  /// @brief Method Peek, addr 0x28886e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x28886f0, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x28886f8, size 0x1bc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Read, addr 0x2880e0c, size 0x290, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<char16_t> buffer);

  /// @brief Method ReadAsync, addr 0x2881fa4, size 0x208, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadAsyncInternal, addr 0x2888aa0, size 0x21c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t> buffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadLine, addr 0x28889b0, size 0xf0, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x28888b4, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method Synchronized, addr 0x2888cbc, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::IO::TextReader* Synchronized(::System::IO::TextReader* reader);

  /// @brief Method .ctor, addr 0x287fefc, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader, 0x18>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::TextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader*, "System.IO", "TextReader");
NEED_NO_BOX(::System::IO::__TextReader____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextReader____c*, "System.IO", "TextReader/<>c");
