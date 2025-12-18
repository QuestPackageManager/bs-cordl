#pragma once
// IWYU pragma private; include "Zenject/IFactory_11.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory_11)
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TValue>
class IFactory_11;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactory_11);
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TValue>
// Is value type: false
// CS Name: Zenject.IFactory`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TValue>
class CORDL_TYPE IFactory_11 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8, TParam9 param9, TParam10 param10);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IFactory_11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory_11(IFactory_11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_11, "Zenject", "IFactory`11");
