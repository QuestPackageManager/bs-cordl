#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelPackProductData_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILevelPackProductData_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TLevelProductData> class ILevelPackProductData_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ILevelPackProductData_1);
// Type: ::ILevelPackProductData`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TLevelProductData>
// Is value type: false
// CS Name: ::ILevelPackProductData`1<TLevelProductData>*
class CORDL_TYPE ILevelPackProductData_1 {
public:
  // Declarations
  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_levelProductsData))::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* levelProductsData;

  /// @brief Method get_levelPackId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<TLevelProductData>* get_levelProductsData();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductData_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelPackProductData_1(ILevelPackProductData_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelPackProductData_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelPackProductData_1(ILevelPackProductData_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ILevelPackProductData_1, "", "ILevelPackProductData`1");
