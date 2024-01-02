#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BindStatement)
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class BindStatement;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindStatement);
// Type: Zenject::BindStatement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10947))
// CS Name: ::Zenject::BindStatement*
class CORDL_TYPE BindStatement : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __get__disposables, put = __set__disposables))::System::Collections::Generic::List_1<::System::IDisposable*>* _disposables;

  /// @brief Field _bindingFinalizer, offset 0x18, size 0x8
  __declspec(property(get = __get__bindingFinalizer, put = __set__bindingFinalizer))::Zenject::IBindingFinalizer* _bindingFinalizer;

  __declspec(property(get = get_BindingInheritanceMethod))::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  __declspec(property(get = get_HasFinalizer)) bool HasFinalizer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __get__disposables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::IDisposable*>*> const& __get__disposables() const;

  constexpr void __set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  constexpr ::Zenject::IBindingFinalizer*& __get__bindingFinalizer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IBindingFinalizer*> const& __get__bindingFinalizer() const;

  constexpr void __set__bindingFinalizer(::Zenject::IBindingFinalizer* value);

  static inline ::Zenject::BindStatement* New_ctor();

  /// @brief Method .ctor, addr 0x2edebbc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingInheritanceMethod, addr 0x2eded7c, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Method get_HasFinalizer, addr 0x2edee68, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasFinalizer();

  /// @brief Method SetFinalizer, addr 0x2edee78, size 0x8, virtual false, abstract: false, final false
  inline void SetFinalizer(::Zenject::IBindingFinalizer* bindingFinalizer);

  /// @brief Method AssertHasFinalizer, addr 0x2edee24, size 0x44, virtual false, abstract: false, final false
  inline void AssertHasFinalizer();

  /// @brief Method AddDisposable, addr 0x2edee80, size 0xa8, virtual false, abstract: false, final false
  inline void AddDisposable(::System::IDisposable* disposable);

  /// @brief Method SpawnBindInfo, addr 0x2edef28, size 0x6c, virtual false, abstract: false, final false
  inline ::Zenject::BindInfo* SpawnBindInfo();

  /// @brief Method FinalizeBinding, addr 0x2edef94, size 0xb4, virtual false, abstract: false, final false
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method Reset, addr 0x2edec40, size 0x13c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Dispose, addr 0x2edf048, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindStatement(BindStatement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindStatement(BindStatement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindStatement();

public:
  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ____disposables;

  /// @brief Field _bindingFinalizer, offset: 0x18, size: 0x8, def value: None
  ::Zenject::IBindingFinalizer* ____bindingFinalizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindStatement, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::BindStatement, ____disposables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::BindStatement, ____bindingFinalizer) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindStatement);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindStatement*, "Zenject", "BindStatement");
