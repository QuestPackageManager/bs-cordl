#pragma once
// IWYU pragma private; include "Zenject/BindStatement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BindStatement)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IBindingFinalizer;
}
// Forward declare root types
namespace Zenject {
class BindStatement;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindStatement);
// Dependencies System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.BindStatement
class CORDL_TYPE BindStatement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  __declspec(property(get = get_HasFinalizer)) bool HasFinalizer;

  /// @brief Field _bindingFinalizer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bindingFinalizer, put = __cordl_internal_set__bindingFinalizer)) ::Zenject::IBindingFinalizer* _bindingFinalizer;

  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables, put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::System::IDisposable*>* _disposables;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddDisposable, addr 0x4b1651c, size 0xa4, virtual false, abstract: false, final false
  inline void AddDisposable(::System::IDisposable* disposable);

  /// @brief Method AssertHasFinalizer, addr 0x4b164c0, size 0x44, virtual false, abstract: false, final false
  inline void AssertHasFinalizer();

  /// @brief Method Dispose, addr 0x4b166e0, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FinalizeBinding, addr 0x4b1662c, size 0xb4, virtual false, abstract: false, final false
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  static inline ::Zenject::BindStatement* New_ctor();

  /// @brief Method Reset, addr 0x4b162dc, size 0x13c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetFinalizer, addr 0x4b16514, size 0x8, virtual false, abstract: false, final false
  inline void SetFinalizer(::Zenject::IBindingFinalizer* bindingFinalizer);

  /// @brief Method SpawnBindInfo, addr 0x4b165c0, size 0x6c, virtual false, abstract: false, final false
  inline ::Zenject::BindInfo* SpawnBindInfo();

  constexpr ::Zenject::IBindingFinalizer* const& __cordl_internal_get__bindingFinalizer() const;

  constexpr ::Zenject::IBindingFinalizer*& __cordl_internal_get__bindingFinalizer();

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& __cordl_internal_get__disposables() const;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get__disposables();

  constexpr void __cordl_internal_set__bindingFinalizer(::Zenject::IBindingFinalizer* value);

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  /// @brief Method .ctor, addr 0x4b16258, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingInheritanceMethod, addr 0x4b16418, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Method get_HasFinalizer, addr 0x4b16504, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasFinalizer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindStatement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindStatement(BindStatement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindStatement(BindStatement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12289 };

  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ____disposables;

  /// @brief Field _bindingFinalizer, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IBindingFinalizer* ____bindingFinalizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::BindStatement, ____disposables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindStatement, ____bindingFinalizer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::BindStatement, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindStatement);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindStatement*, "Zenject", "BindStatement");
