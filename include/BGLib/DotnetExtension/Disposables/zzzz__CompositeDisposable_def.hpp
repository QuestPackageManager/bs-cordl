#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\Disposables\CompositeDisposable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeDisposable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Disposables {
class CompositeDisposable;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::Disposables::CompositeDisposable*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::Disposables::CompositeDisposable*, "BGLib.DotnetExtension.Disposables", "CompositeDisposable");
// Dependencies System.Object
namespace BGLib::DotnetExtension::Disposables {
// Is value type: false
// CS Name: BGLib.DotnetExtension.Disposables.CompositeDisposable
class CORDL_TYPE CompositeDisposable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables, put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>* _disposables;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x330faf0, size 0xe4, virtual false, abstract: false, final false
  inline void Add(::ArrayW<::System::IDisposable*> disposables);

  /// @brief Method Add, addr 0x330f9f0, size 0x100, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* item);

  /// @brief Method Dispose, addr 0x330fbd4, size 0x168, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable* New_ctor(int32_t capacity);

  static inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable* New_ctor(::ArrayW<::System::IDisposable*> disposables);

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__disposables() const;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__disposables();

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  /// @brief Method .ctor, addr 0x330f90c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x330f990, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::IDisposable*> disposables);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeDisposable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeDisposable(CompositeDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeDisposable(CompositeDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20513 };

  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ____disposables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::Disposables::CompositeDisposable, ____disposables) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BGLib::DotnetExtension::Disposables::CompositeDisposable) == 0x18, "Size mismatch!");

} // namespace BGLib::DotnetExtension::Disposables
