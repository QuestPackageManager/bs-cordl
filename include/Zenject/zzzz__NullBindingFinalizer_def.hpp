#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullBindingFinalizer)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
// Forward declare root types
namespace Zenject {
class NullBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NullBindingFinalizer);
// Type: Zenject::NullBindingFinalizer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10954))
// CS Name: ::Zenject::NullBindingFinalizer*
class CORDL_TYPE NullBindingFinalizer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BindingInheritanceMethod))::Zenject::BindingInheritanceMethods BindingInheritanceMethod;

  /// @brief Convert operator to "::Zenject::IBindingFinalizer"
  constexpr operator ::Zenject::IBindingFinalizer*() noexcept;

  /// @brief Method get_BindingInheritanceMethod, addr 0x2ee1f08, size 0x8, virtual true, abstract: false, final true
  inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();

  /// @brief Method FinalizeBinding, addr 0x2ee1f10, size 0x4, virtual true, abstract: false, final true
  inline void FinalizeBinding(::Zenject::DiContainer* container);

  static inline ::Zenject::NullBindingFinalizer* New_ctor();

  /// @brief Method .ctor, addr 0x2ee1f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullBindingFinalizer(NullBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullBindingFinalizer(NullBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullBindingFinalizer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NullBindingFinalizer, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NullBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NullBindingFinalizer*, "Zenject", "NullBindingFinalizer");
