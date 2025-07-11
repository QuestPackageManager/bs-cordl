#pragma once
// IWYU pragma private; include "System/Threading/LazyInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyInitializer)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class LazyInitializer;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LazyInitializer);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.LazyInitializer
class CORDL_TYPE LazyInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitialized(::ByRef<T> target);

  /// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitialized(::ByRef<T> target, ::ByRef<bool> initialized, ::ByRef<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitialized(::ByRef<T> target, ::ByRef<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitialized(::ByRef<T> target, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureInitializedCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitializedCore(::ByRef<T> target);

  /// @brief Method EnsureInitializedCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitializedCore(::ByRef<T> target, ::ByRef<bool> initialized, ::ByRef<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureInitializedCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitializedCore(::ByRef<T> target, ::ByRef<::System::Object*> syncLock, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureInitializedCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T EnsureInitializedCore(::ByRef<T> target, ::System::Func_1<T>* valueFactory);

  /// @brief Method EnsureLockInitialized, addr 0x3e4ceec, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Object* EnsureLockInitialized(::ByRef<::System::Object*> syncLock);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyInitializer(LazyInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyInitializer(LazyInitializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LazyInitializer, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::LazyInitializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LazyInitializer*, "System.Threading", "LazyInitializer");
