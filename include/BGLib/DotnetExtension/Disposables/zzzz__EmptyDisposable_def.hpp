#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/EmptyDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyDisposable)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Disposables {
class EmptyDisposable;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::Disposables::EmptyDisposable);
// Dependencies System.Object
namespace BGLib::DotnetExtension::Disposables {
// Is value type: false
// CS Name: BGLib.DotnetExtension.Disposables.EmptyDisposable
class CORDL_TYPE EmptyDisposable : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_disposable, put = setStaticF_disposable)) ::BGLib::DotnetExtension::Disposables::EmptyDisposable* disposable;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x31e8c18, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::BGLib::DotnetExtension::Disposables::EmptyDisposable* New_ctor();

  /// @brief Method .ctor, addr 0x31e8c14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::DotnetExtension::Disposables::EmptyDisposable* getStaticF_disposable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_disposable(::BGLib::DotnetExtension::Disposables::EmptyDisposable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyDisposable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyDisposable(EmptyDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyDisposable(EmptyDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::Disposables::EmptyDisposable, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::Disposables
NEED_NO_BOX(::BGLib::DotnetExtension::Disposables::EmptyDisposable);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::Disposables::EmptyDisposable*, "BGLib.DotnetExtension.Disposables", "EmptyDisposable");
