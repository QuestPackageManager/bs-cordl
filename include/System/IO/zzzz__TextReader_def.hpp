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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::IO {
class __TextReader__SyncTextReader;
}
namespace System {
class IDisposable;
}
namespace System::IO {
class __TextReader____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3581))
// CS Name: ::TextReader::<>c*
class CORDL_TYPE __TextReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::IO::__TextReader____c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<::System::Object*, ::StringW>* __9__13_0;

  static inline void setStaticF___9(::System::IO::__TextReader____c* value);

  static inline ::System::IO::__TextReader____c* getStaticF___9();

  static inline void setStaticF___9__13_0(::System::Func_2<::System::Object*, ::StringW>* value);

  static inline ::System::Func_2<::System::Object*, ::StringW>* getStaticF___9__13_0();

  static inline ::System::IO::__TextReader____c* New_ctor();

  /// @brief Method .ctor addr 0x250728c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ReadLineAsync>b__13_0 addr 0x2507294 size 0xb0 virtual false final false
  inline ::StringW _ReadLineAsync_b__13_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextReader____c(__TextReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextReader____c(__TextReader____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextReader____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextReader____c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Type: System.IO::TextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3582))
// CS Name: ::System.IO::TextReader*
class CORDL_TYPE TextReader : public ::System::MarshalByRefObject {
public:
  // Declarations
  using __c = ::System::IO::__TextReader____c;

  using SyncTextReader = ::System::IO::__TextReader__SyncTextReader;

  using NullTextReader = ::System::IO::__TextReader__NullTextReader;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::TextReader* Null;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  static inline void setStaticF_Null(::System::IO::TextReader* value);

  static inline ::System::IO::TextReader* getStaticF_Null();

  static inline ::System::IO::TextReader* New_ctor();

  /// @brief Method .ctor addr 0x2500d5c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Close addr 0x250698c size 0x6c virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x25069f8 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2506a64 size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Peek addr 0x2506a68 size 0x8 virtual true final false
  inline int32_t Peek();

  /// @brief Method Read addr 0x2506a70 size 0x8 virtual true final false
  inline int32_t Read();

  /// @brief Method Read addr 0x2506a78 size 0x1bc virtual true final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadToEnd addr 0x2506c34 size 0xfc virtual true final false
  inline ::StringW ReadToEnd();

  /// @brief Method ReadLine addr 0x2506d30 size 0xf0 virtual true final false
  inline ::StringW ReadLine();

  /// @brief Method ReadLineAsync addr 0x25028d4 size 0x1cc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadLineAsync();

  /// @brief Method Synchronized addr 0x2506e20 size 0xc0 virtual false final false
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
NEED_NO_BOX(::System::IO::__TextReader____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextReader____c*, "System.IO", "TextReader/<>c");
