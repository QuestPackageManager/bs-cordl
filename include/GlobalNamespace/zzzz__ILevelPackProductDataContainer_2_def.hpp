#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductDataContainer_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
CORDL_MODULE_EXPORT(ILevelPackProductDataContainer_2)
// Forward declare root types
namespace GlobalNamespace {
template <typename TLevelPackProductData, typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelPackProductData, ::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*> &&
           ::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
class ILevelPackProductDataContainer_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ILevelPackProductDataContainer_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ILevelPackProductDataContainer_2, "", "ILevelPackProductDataContainer`2");
// Dependencies ILevelPackProductData`1<TLevelProductData>, ILevelProductData
namespace GlobalNamespace {
// cpp template
template <typename TLevelPackProductData, typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelPackProductData, ::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*> &&
           ::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
// Is value type: false
// CS Name: ILevelPackProductDataContainer`2<TLevelPackProductData,TLevelProductData>
class CORDL_TYPE ILevelPackProductDataContainer_2 {
public:
  // Declarations
  __declspec(property(get = get_levelPackProductData)) TLevelPackProductData levelPackProductData;

  /// @brief Method SetLevelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLevelPackProductData(TLevelPackProductData newProductPack);

  /// @brief Method get_levelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TLevelPackProductData get_levelPackProductData();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductDataContainer_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelPackProductDataContainer_2(ILevelPackProductDataContainer_2const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15126 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
