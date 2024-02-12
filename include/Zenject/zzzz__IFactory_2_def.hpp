#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory_2)
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_2);
// Type: Zenject::IFactory`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TValue>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10126))
// CS Name: ::Zenject::IFactory`2<TParam1,TValue>*
class CORDL_TYPE IFactory_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue Create(TParam1 param);

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactory_2(IFactory_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_2(IFactory_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_2, "Zenject", "IFactory`2");
