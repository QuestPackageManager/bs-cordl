#pragma once
// IWYU pragma private; include "Zenject/NullBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(NullBindingFinalizer)
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class NullBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NullBindingFinalizer);
// Dependencies System.Object, Zenject.IBindingFinalizer
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NullBindingFinalizer
class CORDL_TYPE NullBindingFinalizer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  /// @brief Convert operator to "::Zenject::IBindingFinalizer"
  constexpr operator ::Zenject::IBindingFinalizer*() noexcept;

  /// @brief Method FinalizeBinding, addr 0x4b19938, size 0x4, virtual true, abstract: false, final true
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  static inline ::Zenject::NullBindingFinalizer* New_ctor();

  /// @brief Method .ctor, addr 0x4b1993c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingInheritanceMethod, addr 0x4b19930, size 0x8, virtual true, abstract: false, final true
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Convert to "::Zenject::IBindingFinalizer"
  constexpr ::Zenject::IBindingFinalizer* i___Zenject__IBindingFinalizer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullBindingFinalizer(NullBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullBindingFinalizer(NullBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12296 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NullBindingFinalizer, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NullBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NullBindingFinalizer*, "Zenject", "NullBindingFinalizer");
