#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/SingleDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SingleDisposable)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Disposables {
class SingleDisposable;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::Disposables::SingleDisposable);
// Dependencies System.Object
namespace BGLib::DotnetExtension::Disposables {
// Is value type: false
// CS Name: BGLib.DotnetExtension.Disposables.SingleDisposable
class CORDL_TYPE SingleDisposable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposable, put = __cordl_internal_set__disposable)) ::System::IDisposable* _disposable;

  __declspec(property(get = get_disposable, put = set_disposable)) ::System::IDisposable* disposable;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3219708, size 0xac, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::BGLib::DotnetExtension::Disposables::SingleDisposable* New_ctor();

  constexpr ::System::IDisposable* const& __cordl_internal_get__disposable() const;

  constexpr ::System::IDisposable*& __cordl_internal_get__disposable();

  constexpr void __cordl_internal_set__disposable(::System::IDisposable* value);

  /// @brief Method .ctor, addr 0x32197b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposable, addr 0x321964c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IDisposable* get_disposable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_disposable, addr 0x3219654, size 0xb4, virtual false, abstract: false, final false
  inline void set_disposable(::System::IDisposable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleDisposable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleDisposable(SingleDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleDisposable(SingleDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20544 };

  /// @brief Field _disposable, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ____disposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::Disposables::SingleDisposable, ____disposable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::Disposables::SingleDisposable, 0x18>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::Disposables
NEED_NO_BOX(::BGLib::DotnetExtension::Disposables::SingleDisposable);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::Disposables::SingleDisposable*, "BGLib.DotnetExtension.Disposables", "SingleDisposable");
