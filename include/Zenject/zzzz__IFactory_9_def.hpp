#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory_9)
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TValue> class IFactory_9;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_9);
// Type: Zenject::IFactory`9
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TValue>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10133))
// CS Name: ::Zenject::IFactory`9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>*
class CORDL_TYPE IFactory_9 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8);

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactory_9(IFactory_9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_9(IFactory_9 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_9, "Zenject", "IFactory`9");
