#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/AsyncUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUtils)
namespace Newtonsoft::Json::Utilities {
class __AsyncUtils____c;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __AsyncUtils____c__6_1;
}
namespace System::IO {
class TextReader;
}
namespace System::IO {
class TextWriter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class AsyncUtils;
}
namespace Newtonsoft::Json::Utilities {
class __AsyncUtils____c;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __AsyncUtils____c__6_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::AsyncUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__AsyncUtils____c);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::AsyncUtils::<>c*
class CORDL_TYPE __AsyncUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Utilities::__AsyncUtils____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Action* __9__5_0;

  static inline ::Newtonsoft::Json::Utilities::__AsyncUtils____c* New_ctor();

  /// @brief Method <FromCanceled>b__5_0, addr 0x3e5cb54, size 0x4, virtual false, abstract: false, final false
  inline void _FromCanceled_b__5_0();

  /// @brief Method .ctor, addr 0x3e5cb4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::__AsyncUtils____c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__5_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__AsyncUtils____c* value);

  static inline void setStaticF___9__5_0(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncUtils____c(__AsyncUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncUtils____c(__AsyncUtils____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__AsyncUtils____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__6`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::AsyncUtils::<>c__6`1<T>*
class CORDL_TYPE __AsyncUtils____c__6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1<T>* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_1<T>* __9__6_0;

  static inline ::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1<T>* New_ctor();

  /// @brief Method <FromCanceled>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _FromCanceled_b__6_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1<T>* getStaticF___9();

  static inline ::System::Func_1<T>* getStaticF___9__6_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1<T>* value);

  static inline void setStaticF___9__6_0(::System::Func_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncUtils____c__6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncUtils____c__6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncUtils____c__6_1(__AsyncUtils____c__6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncUtils____c__6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncUtils____c__6_1(__AsyncUtils____c__6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::AsyncUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::AsyncUtils*
class CORDL_TYPE AsyncUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Utilities::__AsyncUtils____c;

  template <typename T> using __c__6_1 = ::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1<T>;

  /// @brief Field CompletedTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CompletedTask, put = setStaticF_CompletedTask)) ::System::Threading::Tasks::Task* CompletedTask;

  /// @brief Field False, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_False, put = setStaticF_False)) ::System::Threading::Tasks::Task_1<bool>* False;

  /// @brief Field True, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_True, put = setStaticF_True)) ::System::Threading::Tasks::Task_1<bool>* True;

  /// @brief Method CancelIfRequestedAsync, addr 0x3e5c51c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CancelIfRequestedAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CancelIfRequestedAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* CancelIfRequestedAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCanceled, addr 0x3e5c5b4, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* FromCanceled(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* FromCanceled(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsCompletedSuccessfully, addr 0x3e5ca10, size 0x24, virtual false, abstract: false, final false
  static inline bool IsCompletedSuccessfully(::System::Threading::Tasks::Task* task);

  /// @brief Method ReadAsync, addr 0x3e5c91c, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::System::IO::TextReader* reader, ::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ToAsync, addr 0x3e5c4b4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* ToAsync(bool value);

  /// @brief Method WriteAsync, addr 0x3e5c840, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* writer, ::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t start, int32_t count,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x3e5c77c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* writer, ::StringW value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync, addr 0x3e5c6b8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteAsync(::System::IO::TextWriter* writer, char16_t value, ::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Threading::Tasks::Task* getStaticF_CompletedTask();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_False();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_True();

  static inline void setStaticF_CompletedTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_False(::System::Threading::Tasks::Task_1<bool>* value);

  static inline void setStaticF_True(::System::Threading::Tasks::Task_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncUtils(AsyncUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncUtils(AsyncUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::AsyncUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::AsyncUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::AsyncUtils*, "Newtonsoft.Json.Utilities", "AsyncUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__AsyncUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__AsyncUtils____c*, "Newtonsoft.Json.Utilities", "AsyncUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__AsyncUtils____c__6_1, "Newtonsoft.Json.Utilities", "AsyncUtils/<>c__6`1");
