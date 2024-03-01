#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(PlaceholderFactoryBindingFinalizer_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class PlaceholderFactoryBindingFinalizer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactoryBindingFinalizer_1);
// Type: Zenject::PlaceholderFactoryBindingFinalizer`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::Zenject::PlaceholderFactoryBindingFinalizer`1<TContract>*
class CORDL_TYPE PlaceholderFactoryBindingFinalizer_1 : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  /// @brief Field _factoryBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__factoryBindInfo, put = __cordl_internal_set__factoryBindInfo))::Zenject::FactoryBindInfo* _factoryBindInfo;

  static inline ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method OnFinalizeBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryBindInfo*& __cordl_internal_get__factoryBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& __cordl_internal_get__factoryBindInfo() const;

  constexpr void __cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaceholderFactoryBindingFinalizer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBindingFinalizer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaceholderFactoryBindingFinalizer_1(PlaceholderFactoryBindingFinalizer_1 const&) = delete;

  /// @brief Field _factoryBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____factoryBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBindingFinalizer_1, "Zenject", "PlaceholderFactoryBindingFinalizer`1");
