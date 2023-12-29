#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory_1)
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class IFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_1);
// Type: Zenject::IFactory`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10911))
// CS Name: ::Zenject::IFactory`1<TValue>*
class CORDL_TYPE IFactory_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValue Create();

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactory_1(IFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_1(IFactory_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_1, "Zenject", "IFactory`1");
