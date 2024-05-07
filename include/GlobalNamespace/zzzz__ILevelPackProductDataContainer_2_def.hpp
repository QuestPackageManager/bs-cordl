#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductDataContainer_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelPackProductDataContainer_2)
// Forward declare root types
namespace GlobalNamespace {
template <typename TLevelPackProductData, typename TLevelProductData> class ILevelPackProductDataContainer_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ILevelPackProductDataContainer_2);
// Type: ::ILevelPackProductDataContainer`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TLevelPackProductData, typename TLevelProductData>
// Is value type: false
// CS Name: ::ILevelPackProductDataContainer`2<TLevelPackProductData,TLevelProductData>*
class CORDL_TYPE ILevelPackProductDataContainer_2 {
public:
  // Declarations
  __declspec(property(get = get_levelPackProductData)) TLevelPackProductData levelPackProductData;

  /// @brief Method SetLevelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLevelPackProductData(TLevelPackProductData newProductPack);

  /// @brief Method get_levelPackProductData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TLevelPackProductData get_levelPackProductData();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductDataContainer_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelPackProductDataContainer_2(ILevelPackProductDataContainer_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductDataContainer_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelPackProductDataContainer_2(ILevelPackProductDataContainer_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ILevelPackProductDataContainer_2, "", "ILevelPackProductDataContainer`2");
