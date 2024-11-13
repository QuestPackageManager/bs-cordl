#pragma once
// IWYU pragma private; include "Zenject/SingleProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(SingleProviderBindingFinalizer)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
class SingleProviderBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SingleProviderBindingFinalizer);
// Type: Zenject::SingleProviderBindingFinalizer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SingleProviderBindingFinalizer*
class CORDL_TYPE SingleProviderBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  /// @brief Field _providerFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__providerFactory,
                      put = __cordl_internal_set__providerFactory)) ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* _providerFactory;

  static inline ::Zenject::SingleProviderBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4ab6c10, size 0xc4, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& __cordl_internal_get__providerFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*> const& __cordl_internal_get__providerFactory() const;

  constexpr void __cordl_internal_set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  /// @brief Method .ctor, addr 0x4ab6be4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleProviderBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleProviderBindingFinalizer(SingleProviderBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleProviderBindingFinalizer(SingleProviderBindingFinalizer const&) = delete;

  /// @brief Field _providerFactory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* ____providerFactory;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SingleProviderBindingFinalizer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::SingleProviderBindingFinalizer, ____providerFactory) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SingleProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SingleProviderBindingFinalizer*, "Zenject", "SingleProviderBindingFinalizer");
